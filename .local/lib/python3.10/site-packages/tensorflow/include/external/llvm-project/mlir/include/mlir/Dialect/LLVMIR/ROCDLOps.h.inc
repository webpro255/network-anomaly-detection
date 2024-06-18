/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ROCDLOps.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace ROCDL {
class BarrierOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class BlockDimXOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class BlockDimYOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class BlockDimZOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class BlockIdXOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class BlockIdYOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class BlockIdZOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class CvtF32Bf8Op;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class CvtF32Fp8Op;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class CvtPkBf8F32Op;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class CvtPkFp8F32Op;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class CvtSrBf8F32Op;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class CvtSrFp8F32Op;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class DsBpermuteOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class DsSwizzleOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class GridDimXOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class GridDimYOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class GridDimZOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class MakeBufferRsrcOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class MbcntHiOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class MbcntLoOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class MubufLoadOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class MubufStoreOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawBufferAtomicCmpSwap;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawBufferAtomicFAddOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawBufferAtomicFMaxOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawBufferAtomicSMaxOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawBufferAtomicUMinOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawBufferLoadOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawBufferStoreOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawPtrBufferAtomicCmpSwap;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawPtrBufferAtomicFaddOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawPtrBufferAtomicFmaxOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawPtrBufferAtomicSmaxOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawPtrBufferAtomicUminOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawPtrBufferLoadOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class RawPtrBufferStoreOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class ThreadIdXOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class ThreadIdYOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class ThreadIdZOp;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_16x16x16bf16_1k;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_16x16x16f16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_16x16x1f32;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_16x16x2bf16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_16x16x32_bf8_bf8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_16x16x32_bf8_fp8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_16x16x32_fp8_bf8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_16x16x32_fp8_fp8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_16x16x4bf16_1k;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_16x16x4f16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_16x16x4f32;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_16x16x8_xf32;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_16x16x8bf16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_32x32x16_bf8_bf8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_32x32x16_bf8_fp8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_32x32x16_fp8_bf8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_32x32x16_fp8_fp8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_32x32x1f32;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_32x32x2bf16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_32x32x2f32;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_32x32x4_xf32;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_32x32x4bf16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_32x32x4bf16_1k;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_32x32x4f16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_32x32x8bf16_1k;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_32x32x8f16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_4x4x1f32;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_4x4x2bf16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_4x4x4bf16_1k;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f32_4x4x4f16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f64_16x16x4f64;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_f64_4x4x4f64;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_i32_16x16x16i8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_i32_16x16x32_i8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_i32_16x16x4i8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_i32_32x32x16_i8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_i32_32x32x4i8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_i32_32x32x8i8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class mfma_i32_4x4x4i8;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class wmma_bf16_16x16x16_bf16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class wmma_f16_16x16x16_f16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class wmma_f32_16x16x16_bf16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class wmma_f32_16x16x16_f16;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class wmma_i32_16x16x16_iu4;
} // namespace ROCDL
} // namespace mlir
namespace mlir {
namespace ROCDL {
class wmma_i32_16x16x16_iu8;
} // namespace ROCDL
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BarrierOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BarrierOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BarrierOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BarrierOpGenericAdaptorBase(BarrierOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class BarrierOpGenericAdaptor : public detail::BarrierOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BarrierOpGenericAdaptorBase;
public:
  BarrierOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BarrierOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BarrierOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BarrierOp, typename = std::enable_if_t<std::is_same_v<LateInst, BarrierOp>>>
  BarrierOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BarrierOpAdaptor : public BarrierOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BarrierOpGenericAdaptor::BarrierOpGenericAdaptor;
  BarrierOpAdaptor(BarrierOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BarrierOp : public ::mlir::Op<BarrierOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BarrierOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BarrierOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.barrier");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BarrierOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BlockDimXOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BlockDimXOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BlockDimXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BlockDimXOpGenericAdaptorBase(BlockDimXOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class BlockDimXOpGenericAdaptor : public detail::BlockDimXOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BlockDimXOpGenericAdaptorBase;
public:
  BlockDimXOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BlockDimXOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BlockDimXOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BlockDimXOp, typename = std::enable_if_t<std::is_same_v<LateInst, BlockDimXOp>>>
  BlockDimXOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BlockDimXOpAdaptor : public BlockDimXOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BlockDimXOpGenericAdaptor::BlockDimXOpGenericAdaptor;
  BlockDimXOpAdaptor(BlockDimXOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BlockDimXOp : public ::mlir::Op<BlockDimXOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BlockDimXOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BlockDimXOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.workgroup.dim.x");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BlockDimXOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BlockDimYOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BlockDimYOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BlockDimYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BlockDimYOpGenericAdaptorBase(BlockDimYOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class BlockDimYOpGenericAdaptor : public detail::BlockDimYOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BlockDimYOpGenericAdaptorBase;
public:
  BlockDimYOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BlockDimYOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BlockDimYOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BlockDimYOp, typename = std::enable_if_t<std::is_same_v<LateInst, BlockDimYOp>>>
  BlockDimYOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BlockDimYOpAdaptor : public BlockDimYOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BlockDimYOpGenericAdaptor::BlockDimYOpGenericAdaptor;
  BlockDimYOpAdaptor(BlockDimYOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BlockDimYOp : public ::mlir::Op<BlockDimYOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BlockDimYOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BlockDimYOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.workgroup.dim.y");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BlockDimYOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BlockDimZOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BlockDimZOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BlockDimZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BlockDimZOpGenericAdaptorBase(BlockDimZOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class BlockDimZOpGenericAdaptor : public detail::BlockDimZOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BlockDimZOpGenericAdaptorBase;
public:
  BlockDimZOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BlockDimZOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BlockDimZOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BlockDimZOp, typename = std::enable_if_t<std::is_same_v<LateInst, BlockDimZOp>>>
  BlockDimZOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BlockDimZOpAdaptor : public BlockDimZOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BlockDimZOpGenericAdaptor::BlockDimZOpGenericAdaptor;
  BlockDimZOpAdaptor(BlockDimZOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BlockDimZOp : public ::mlir::Op<BlockDimZOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BlockDimZOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BlockDimZOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.workgroup.dim.z");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BlockDimZOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BlockIdXOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BlockIdXOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BlockIdXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BlockIdXOpGenericAdaptorBase(BlockIdXOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class BlockIdXOpGenericAdaptor : public detail::BlockIdXOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BlockIdXOpGenericAdaptorBase;
public:
  BlockIdXOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BlockIdXOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BlockIdXOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BlockIdXOp, typename = std::enable_if_t<std::is_same_v<LateInst, BlockIdXOp>>>
  BlockIdXOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BlockIdXOpAdaptor : public BlockIdXOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BlockIdXOpGenericAdaptor::BlockIdXOpGenericAdaptor;
  BlockIdXOpAdaptor(BlockIdXOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BlockIdXOp : public ::mlir::Op<BlockIdXOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BlockIdXOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BlockIdXOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.workgroup.id.x");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BlockIdXOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BlockIdYOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BlockIdYOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BlockIdYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BlockIdYOpGenericAdaptorBase(BlockIdYOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class BlockIdYOpGenericAdaptor : public detail::BlockIdYOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BlockIdYOpGenericAdaptorBase;
public:
  BlockIdYOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BlockIdYOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BlockIdYOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BlockIdYOp, typename = std::enable_if_t<std::is_same_v<LateInst, BlockIdYOp>>>
  BlockIdYOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BlockIdYOpAdaptor : public BlockIdYOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BlockIdYOpGenericAdaptor::BlockIdYOpGenericAdaptor;
  BlockIdYOpAdaptor(BlockIdYOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BlockIdYOp : public ::mlir::Op<BlockIdYOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BlockIdYOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BlockIdYOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.workgroup.id.y");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BlockIdYOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::BlockIdZOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BlockIdZOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BlockIdZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BlockIdZOpGenericAdaptorBase(BlockIdZOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class BlockIdZOpGenericAdaptor : public detail::BlockIdZOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BlockIdZOpGenericAdaptorBase;
public:
  BlockIdZOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BlockIdZOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BlockIdZOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BlockIdZOp, typename = std::enable_if_t<std::is_same_v<LateInst, BlockIdZOp>>>
  BlockIdZOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BlockIdZOpAdaptor : public BlockIdZOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BlockIdZOpGenericAdaptor::BlockIdZOpGenericAdaptor;
  BlockIdZOpAdaptor(BlockIdZOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BlockIdZOp : public ::mlir::Op<BlockIdZOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BlockIdZOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BlockIdZOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.workgroup.id.z");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::BlockIdZOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::CvtF32Bf8Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CvtF32Bf8OpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CvtF32Bf8OpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CvtF32Bf8OpGenericAdaptorBase(CvtF32Bf8Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CvtF32Bf8OpGenericAdaptor : public detail::CvtF32Bf8OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CvtF32Bf8OpGenericAdaptorBase;
public:
  CvtF32Bf8OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CvtF32Bf8OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CvtF32Bf8OpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CvtF32Bf8Op, typename = std::enable_if_t<std::is_same_v<LateInst, CvtF32Bf8Op>>>
  CvtF32Bf8OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSrcA() {
    return (*getODSOperands(0).begin());
  }

  ValueT getByteSel() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CvtF32Bf8OpAdaptor : public CvtF32Bf8OpGenericAdaptor<::mlir::ValueRange> {
public:
  using CvtF32Bf8OpGenericAdaptor::CvtF32Bf8OpGenericAdaptor;
  CvtF32Bf8OpAdaptor(CvtF32Bf8Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CvtF32Bf8Op : public ::mlir::Op<CvtF32Bf8Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CvtF32Bf8OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CvtF32Bf8OpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.cvt.f32.bf8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getSrcA();
  ::mlir::TypedValue<::mlir::IntegerType> getByteSel();
  ::mlir::OpOperand &getSrcAMutable();
  ::mlir::OpOperand &getByteSelMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcA, ::mlir::Value byteSel);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcA, ::mlir::Value byteSel);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::CvtF32Bf8Op)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::CvtF32Fp8Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CvtF32Fp8OpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CvtF32Fp8OpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CvtF32Fp8OpGenericAdaptorBase(CvtF32Fp8Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CvtF32Fp8OpGenericAdaptor : public detail::CvtF32Fp8OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CvtF32Fp8OpGenericAdaptorBase;
public:
  CvtF32Fp8OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CvtF32Fp8OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CvtF32Fp8OpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CvtF32Fp8Op, typename = std::enable_if_t<std::is_same_v<LateInst, CvtF32Fp8Op>>>
  CvtF32Fp8OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSrcA() {
    return (*getODSOperands(0).begin());
  }

  ValueT getByteSel() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CvtF32Fp8OpAdaptor : public CvtF32Fp8OpGenericAdaptor<::mlir::ValueRange> {
public:
  using CvtF32Fp8OpGenericAdaptor::CvtF32Fp8OpGenericAdaptor;
  CvtF32Fp8OpAdaptor(CvtF32Fp8Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CvtF32Fp8Op : public ::mlir::Op<CvtF32Fp8Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CvtF32Fp8OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CvtF32Fp8OpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.cvt.f32.fp8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getSrcA();
  ::mlir::TypedValue<::mlir::IntegerType> getByteSel();
  ::mlir::OpOperand &getSrcAMutable();
  ::mlir::OpOperand &getByteSelMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcA, ::mlir::Value byteSel);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcA, ::mlir::Value byteSel);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::CvtF32Fp8Op)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::CvtPkBf8F32Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CvtPkBf8F32OpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CvtPkBf8F32OpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CvtPkBf8F32OpGenericAdaptorBase(CvtPkBf8F32Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CvtPkBf8F32OpGenericAdaptor : public detail::CvtPkBf8F32OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CvtPkBf8F32OpGenericAdaptorBase;
public:
  CvtPkBf8F32OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CvtPkBf8F32OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CvtPkBf8F32OpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CvtPkBf8F32Op, typename = std::enable_if_t<std::is_same_v<LateInst, CvtPkBf8F32Op>>>
  CvtPkBf8F32OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSrcA() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrcB() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOld() {
    return (*getODSOperands(2).begin());
  }

  ValueT getWordSel() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CvtPkBf8F32OpAdaptor : public CvtPkBf8F32OpGenericAdaptor<::mlir::ValueRange> {
public:
  using CvtPkBf8F32OpGenericAdaptor::CvtPkBf8F32OpGenericAdaptor;
  CvtPkBf8F32OpAdaptor(CvtPkBf8F32Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CvtPkBf8F32Op : public ::mlir::Op<CvtPkBf8F32Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CvtPkBf8F32OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CvtPkBf8F32OpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.cvt.pk.bf8.f32");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::FloatType> getSrcA();
  ::mlir::TypedValue<::mlir::FloatType> getSrcB();
  ::mlir::TypedValue<::mlir::IntegerType> getOld();
  ::mlir::TypedValue<::mlir::IntegerType> getWordSel();
  ::mlir::OpOperand &getSrcAMutable();
  ::mlir::OpOperand &getSrcBMutable();
  ::mlir::OpOperand &getOldMutable();
  ::mlir::OpOperand &getWordSelMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value wordSel);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value wordSel);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::CvtPkBf8F32Op)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::CvtPkFp8F32Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CvtPkFp8F32OpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CvtPkFp8F32OpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CvtPkFp8F32OpGenericAdaptorBase(CvtPkFp8F32Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CvtPkFp8F32OpGenericAdaptor : public detail::CvtPkFp8F32OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CvtPkFp8F32OpGenericAdaptorBase;
public:
  CvtPkFp8F32OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CvtPkFp8F32OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CvtPkFp8F32OpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CvtPkFp8F32Op, typename = std::enable_if_t<std::is_same_v<LateInst, CvtPkFp8F32Op>>>
  CvtPkFp8F32OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSrcA() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrcB() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOld() {
    return (*getODSOperands(2).begin());
  }

  ValueT getWordSel() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CvtPkFp8F32OpAdaptor : public CvtPkFp8F32OpGenericAdaptor<::mlir::ValueRange> {
public:
  using CvtPkFp8F32OpGenericAdaptor::CvtPkFp8F32OpGenericAdaptor;
  CvtPkFp8F32OpAdaptor(CvtPkFp8F32Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CvtPkFp8F32Op : public ::mlir::Op<CvtPkFp8F32Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CvtPkFp8F32OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CvtPkFp8F32OpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.cvt.pk.fp8.f32");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::FloatType> getSrcA();
  ::mlir::TypedValue<::mlir::FloatType> getSrcB();
  ::mlir::TypedValue<::mlir::IntegerType> getOld();
  ::mlir::TypedValue<::mlir::IntegerType> getWordSel();
  ::mlir::OpOperand &getSrcAMutable();
  ::mlir::OpOperand &getSrcBMutable();
  ::mlir::OpOperand &getOldMutable();
  ::mlir::OpOperand &getWordSelMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value wordSel);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value wordSel);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::CvtPkFp8F32Op)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::CvtSrBf8F32Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CvtSrBf8F32OpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CvtSrBf8F32OpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CvtSrBf8F32OpGenericAdaptorBase(CvtSrBf8F32Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CvtSrBf8F32OpGenericAdaptor : public detail::CvtSrBf8F32OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CvtSrBf8F32OpGenericAdaptorBase;
public:
  CvtSrBf8F32OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CvtSrBf8F32OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CvtSrBf8F32OpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CvtSrBf8F32Op, typename = std::enable_if_t<std::is_same_v<LateInst, CvtSrBf8F32Op>>>
  CvtSrBf8F32OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSrcA() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrcB() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOld() {
    return (*getODSOperands(2).begin());
  }

  ValueT getByteSel() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CvtSrBf8F32OpAdaptor : public CvtSrBf8F32OpGenericAdaptor<::mlir::ValueRange> {
public:
  using CvtSrBf8F32OpGenericAdaptor::CvtSrBf8F32OpGenericAdaptor;
  CvtSrBf8F32OpAdaptor(CvtSrBf8F32Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CvtSrBf8F32Op : public ::mlir::Op<CvtSrBf8F32Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CvtSrBf8F32OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CvtSrBf8F32OpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.cvt.sr.bf8.f32");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::FloatType> getSrcA();
  ::mlir::TypedValue<::mlir::IntegerType> getSrcB();
  ::mlir::TypedValue<::mlir::IntegerType> getOld();
  ::mlir::TypedValue<::mlir::IntegerType> getByteSel();
  ::mlir::OpOperand &getSrcAMutable();
  ::mlir::OpOperand &getSrcBMutable();
  ::mlir::OpOperand &getOldMutable();
  ::mlir::OpOperand &getByteSelMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value byteSel);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value byteSel);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::CvtSrBf8F32Op)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::CvtSrFp8F32Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CvtSrFp8F32OpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CvtSrFp8F32OpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CvtSrFp8F32OpGenericAdaptorBase(CvtSrFp8F32Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CvtSrFp8F32OpGenericAdaptor : public detail::CvtSrFp8F32OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CvtSrFp8F32OpGenericAdaptorBase;
public:
  CvtSrFp8F32OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CvtSrFp8F32OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CvtSrFp8F32OpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CvtSrFp8F32Op, typename = std::enable_if_t<std::is_same_v<LateInst, CvtSrFp8F32Op>>>
  CvtSrFp8F32OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSrcA() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrcB() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOld() {
    return (*getODSOperands(2).begin());
  }

  ValueT getByteSel() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CvtSrFp8F32OpAdaptor : public CvtSrFp8F32OpGenericAdaptor<::mlir::ValueRange> {
public:
  using CvtSrFp8F32OpGenericAdaptor::CvtSrFp8F32OpGenericAdaptor;
  CvtSrFp8F32OpAdaptor(CvtSrFp8F32Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CvtSrFp8F32Op : public ::mlir::Op<CvtSrFp8F32Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CvtSrFp8F32OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CvtSrFp8F32OpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.cvt.sr.fp8.f32");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::FloatType> getSrcA();
  ::mlir::TypedValue<::mlir::IntegerType> getSrcB();
  ::mlir::TypedValue<::mlir::IntegerType> getOld();
  ::mlir::TypedValue<::mlir::IntegerType> getByteSel();
  ::mlir::OpOperand &getSrcAMutable();
  ::mlir::OpOperand &getSrcBMutable();
  ::mlir::OpOperand &getOldMutable();
  ::mlir::OpOperand &getByteSelMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value byteSel);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value srcA, ::mlir::Value srcB, ::mlir::Value old, ::mlir::Value byteSel);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::CvtSrFp8F32Op)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::DsBpermuteOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DsBpermuteOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DsBpermuteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  DsBpermuteOpGenericAdaptorBase(DsBpermuteOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class DsBpermuteOpGenericAdaptor : public detail::DsBpermuteOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DsBpermuteOpGenericAdaptorBase;
public:
  DsBpermuteOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DsBpermuteOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DsBpermuteOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = DsBpermuteOp, typename = std::enable_if_t<std::is_same_v<LateInst, DsBpermuteOp>>>
  DsBpermuteOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getIndex() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DsBpermuteOpAdaptor : public DsBpermuteOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DsBpermuteOpGenericAdaptor::DsBpermuteOpGenericAdaptor;
  DsBpermuteOpAdaptor(DsBpermuteOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DsBpermuteOp : public ::mlir::Op<DsBpermuteOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DsBpermuteOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DsBpermuteOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.ds_bpermute");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getIndex();
  ::mlir::TypedValue<::mlir::IntegerType> getSrc();
  ::mlir::OpOperand &getIndexMutable();
  ::mlir::OpOperand &getSrcMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value index, ::mlir::Value src);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value index, ::mlir::Value src);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::DsBpermuteOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::DsSwizzleOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DsSwizzleOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DsSwizzleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  DsSwizzleOpGenericAdaptorBase(DsSwizzleOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class DsSwizzleOpGenericAdaptor : public detail::DsSwizzleOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DsSwizzleOpGenericAdaptorBase;
public:
  DsSwizzleOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DsSwizzleOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DsSwizzleOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = DsSwizzleOp, typename = std::enable_if_t<std::is_same_v<LateInst, DsSwizzleOp>>>
  DsSwizzleOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSrc() {
    return (*getODSOperands(0).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DsSwizzleOpAdaptor : public DsSwizzleOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DsSwizzleOpGenericAdaptor::DsSwizzleOpGenericAdaptor;
  DsSwizzleOpAdaptor(DsSwizzleOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DsSwizzleOp : public ::mlir::Op<DsSwizzleOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DsSwizzleOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DsSwizzleOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.ds_swizzle");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getSrc();
  ::mlir::TypedValue<::mlir::IntegerType> getOffset();
  ::mlir::OpOperand &getSrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value src, ::mlir::Value offset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value offset);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::DsSwizzleOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::GridDimXOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GridDimXOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GridDimXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  GridDimXOpGenericAdaptorBase(GridDimXOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class GridDimXOpGenericAdaptor : public detail::GridDimXOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GridDimXOpGenericAdaptorBase;
public:
  GridDimXOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GridDimXOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GridDimXOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = GridDimXOp, typename = std::enable_if_t<std::is_same_v<LateInst, GridDimXOp>>>
  GridDimXOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GridDimXOpAdaptor : public GridDimXOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GridDimXOpGenericAdaptor::GridDimXOpGenericAdaptor;
  GridDimXOpAdaptor(GridDimXOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GridDimXOp : public ::mlir::Op<GridDimXOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GridDimXOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GridDimXOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.grid.dim.x");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::GridDimXOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::GridDimYOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GridDimYOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GridDimYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  GridDimYOpGenericAdaptorBase(GridDimYOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class GridDimYOpGenericAdaptor : public detail::GridDimYOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GridDimYOpGenericAdaptorBase;
public:
  GridDimYOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GridDimYOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GridDimYOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = GridDimYOp, typename = std::enable_if_t<std::is_same_v<LateInst, GridDimYOp>>>
  GridDimYOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GridDimYOpAdaptor : public GridDimYOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GridDimYOpGenericAdaptor::GridDimYOpGenericAdaptor;
  GridDimYOpAdaptor(GridDimYOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GridDimYOp : public ::mlir::Op<GridDimYOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GridDimYOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GridDimYOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.grid.dim.y");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::GridDimYOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::GridDimZOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GridDimZOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GridDimZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  GridDimZOpGenericAdaptorBase(GridDimZOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class GridDimZOpGenericAdaptor : public detail::GridDimZOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GridDimZOpGenericAdaptorBase;
public:
  GridDimZOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GridDimZOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GridDimZOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = GridDimZOp, typename = std::enable_if_t<std::is_same_v<LateInst, GridDimZOp>>>
  GridDimZOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GridDimZOpAdaptor : public GridDimZOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GridDimZOpGenericAdaptor::GridDimZOpGenericAdaptor;
  GridDimZOpAdaptor(GridDimZOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GridDimZOp : public ::mlir::Op<GridDimZOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GridDimZOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GridDimZOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.grid.dim.z");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::GridDimZOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::MakeBufferRsrcOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MakeBufferRsrcOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MakeBufferRsrcOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  MakeBufferRsrcOpGenericAdaptorBase(MakeBufferRsrcOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class MakeBufferRsrcOpGenericAdaptor : public detail::MakeBufferRsrcOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MakeBufferRsrcOpGenericAdaptorBase;
public:
  MakeBufferRsrcOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MakeBufferRsrcOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MakeBufferRsrcOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MakeBufferRsrcOp, typename = std::enable_if_t<std::is_same_v<LateInst, MakeBufferRsrcOp>>>
  MakeBufferRsrcOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getBase() {
    return (*getODSOperands(0).begin());
  }

  ValueT getStride() {
    return (*getODSOperands(1).begin());
  }

  ValueT getNumRecords() {
    return (*getODSOperands(2).begin());
  }

  ValueT getFlags() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MakeBufferRsrcOpAdaptor : public MakeBufferRsrcOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MakeBufferRsrcOpGenericAdaptor::MakeBufferRsrcOpGenericAdaptor;
  MakeBufferRsrcOpAdaptor(MakeBufferRsrcOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MakeBufferRsrcOp : public ::mlir::Op<MakeBufferRsrcOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::LLVM::LLVMPointerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MakeBufferRsrcOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MakeBufferRsrcOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.make.buffer.rsrc");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getBase();
  ::mlir::TypedValue<::mlir::IntegerType> getStride();
  ::mlir::TypedValue<::mlir::IntegerType> getNumRecords();
  ::mlir::TypedValue<::mlir::IntegerType> getFlags();
  ::mlir::OpOperand &getBaseMutable();
  ::mlir::OpOperand &getStrideMutable();
  ::mlir::OpOperand &getNumRecordsMutable();
  ::mlir::OpOperand &getFlagsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value base, ::mlir::Value stride, ::mlir::Value numRecords, ::mlir::Value flags);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::Value stride, ::mlir::Value numRecords, ::mlir::Value flags);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::MakeBufferRsrcOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::MbcntHiOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MbcntHiOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MbcntHiOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  MbcntHiOpGenericAdaptorBase(MbcntHiOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class MbcntHiOpGenericAdaptor : public detail::MbcntHiOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MbcntHiOpGenericAdaptorBase;
public:
  MbcntHiOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MbcntHiOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MbcntHiOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MbcntHiOp, typename = std::enable_if_t<std::is_same_v<LateInst, MbcntHiOp>>>
  MbcntHiOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getIn0() {
    return (*getODSOperands(0).begin());
  }

  ValueT getIn1() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MbcntHiOpAdaptor : public MbcntHiOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MbcntHiOpGenericAdaptor::MbcntHiOpGenericAdaptor;
  MbcntHiOpAdaptor(MbcntHiOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MbcntHiOp : public ::mlir::Op<MbcntHiOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MbcntHiOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MbcntHiOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mbcnt.hi");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getIn0();
  ::mlir::TypedValue<::mlir::IntegerType> getIn1();
  ::mlir::OpOperand &getIn0Mutable();
  ::mlir::OpOperand &getIn1Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in0, ::mlir::Value in1);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in0, ::mlir::Value in1);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::MbcntHiOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::MbcntLoOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MbcntLoOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MbcntLoOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  MbcntLoOpGenericAdaptorBase(MbcntLoOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class MbcntLoOpGenericAdaptor : public detail::MbcntLoOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MbcntLoOpGenericAdaptorBase;
public:
  MbcntLoOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MbcntLoOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MbcntLoOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MbcntLoOp, typename = std::enable_if_t<std::is_same_v<LateInst, MbcntLoOp>>>
  MbcntLoOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getIn0() {
    return (*getODSOperands(0).begin());
  }

  ValueT getIn1() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MbcntLoOpAdaptor : public MbcntLoOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MbcntLoOpGenericAdaptor::MbcntLoOpGenericAdaptor;
  MbcntLoOpAdaptor(MbcntLoOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MbcntLoOp : public ::mlir::Op<MbcntLoOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MbcntLoOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MbcntLoOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mbcnt.lo");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getIn0();
  ::mlir::TypedValue<::mlir::IntegerType> getIn1();
  ::mlir::OpOperand &getIn0Mutable();
  ::mlir::OpOperand &getIn1Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value in0, ::mlir::Value in1);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value in0, ::mlir::Value in1);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::MbcntLoOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::MubufLoadOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MubufLoadOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MubufLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  MubufLoadOpGenericAdaptorBase(MubufLoadOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class MubufLoadOpGenericAdaptor : public detail::MubufLoadOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MubufLoadOpGenericAdaptorBase;
public:
  MubufLoadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MubufLoadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MubufLoadOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MubufLoadOp, typename = std::enable_if_t<std::is_same_v<LateInst, MubufLoadOp>>>
  MubufLoadOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getRsrc() {
    return (*getODSOperands(0).begin());
  }

  ValueT getVindex() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(2).begin());
  }

  ValueT getGlc() {
    return (*getODSOperands(3).begin());
  }

  ValueT getSlc() {
    return (*getODSOperands(4).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MubufLoadOpAdaptor : public MubufLoadOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MubufLoadOpGenericAdaptor::MubufLoadOpGenericAdaptor;
  MubufLoadOpAdaptor(MubufLoadOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MubufLoadOp : public ::mlir::Op<MubufLoadOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<5>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MubufLoadOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MubufLoadOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.buffer.load");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getRsrc();
  ::mlir::Value getVindex();
  ::mlir::Value getOffset();
  ::mlir::Value getGlc();
  ::mlir::Value getSlc();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getVindexMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getGlcMutable();
  ::mlir::OpOperand &getSlcMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value rsrc, ::mlir::Value vindex, ::mlir::Value offset, ::mlir::Value glc, ::mlir::Value slc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value rsrc, ::mlir::Value vindex, ::mlir::Value offset, ::mlir::Value glc, ::mlir::Value slc);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::MubufLoadOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::MubufStoreOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MubufStoreOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MubufStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  MubufStoreOpGenericAdaptorBase(MubufStoreOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class MubufStoreOpGenericAdaptor : public detail::MubufStoreOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MubufStoreOpGenericAdaptorBase;
public:
  MubufStoreOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MubufStoreOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MubufStoreOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MubufStoreOp, typename = std::enable_if_t<std::is_same_v<LateInst, MubufStoreOp>>>
  MubufStoreOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVdata() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRsrc() {
    return (*getODSOperands(1).begin());
  }

  ValueT getVindex() {
    return (*getODSOperands(2).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(3).begin());
  }

  ValueT getGlc() {
    return (*getODSOperands(4).begin());
  }

  ValueT getSlc() {
    return (*getODSOperands(5).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MubufStoreOpAdaptor : public MubufStoreOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MubufStoreOpGenericAdaptor::MubufStoreOpGenericAdaptor;
  MubufStoreOpAdaptor(MubufStoreOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MubufStoreOp : public ::mlir::Op<MubufStoreOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<6>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MubufStoreOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MubufStoreOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.buffer.store");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVdata();
  ::mlir::Value getRsrc();
  ::mlir::Value getVindex();
  ::mlir::Value getOffset();
  ::mlir::Value getGlc();
  ::mlir::Value getSlc();
  ::mlir::OpOperand &getVdataMutable();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getVindexMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getGlcMutable();
  ::mlir::OpOperand &getSlcMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value vindex, ::mlir::Value offset, ::mlir::Value glc, ::mlir::Value slc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value vindex, ::mlir::Value offset, ::mlir::Value glc, ::mlir::Value slc);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::MubufStoreOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferAtomicCmpSwap declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferAtomicCmpSwapGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RawBufferAtomicCmpSwapGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferAtomicCmpSwapGenericAdaptorBase(RawBufferAtomicCmpSwap op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class RawBufferAtomicCmpSwapGenericAdaptor : public detail::RawBufferAtomicCmpSwapGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferAtomicCmpSwapGenericAdaptorBase;
public:
  RawBufferAtomicCmpSwapGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferAtomicCmpSwapGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferAtomicCmpSwapGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = RawBufferAtomicCmpSwap, typename = std::enable_if_t<std::is_same_v<LateInst, RawBufferAtomicCmpSwap>>>
  RawBufferAtomicCmpSwapGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSrc() {
    return (*getODSOperands(0).begin());
  }

  ValueT getCmp() {
    return (*getODSOperands(1).begin());
  }

  ValueT getRsrc() {
    return (*getODSOperands(2).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(3).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(4).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(5).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawBufferAtomicCmpSwapAdaptor : public RawBufferAtomicCmpSwapGenericAdaptor<::mlir::ValueRange> {
public:
  using RawBufferAtomicCmpSwapGenericAdaptor::RawBufferAtomicCmpSwapGenericAdaptor;
  RawBufferAtomicCmpSwapAdaptor(RawBufferAtomicCmpSwap op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawBufferAtomicCmpSwap : public ::mlir::Op<RawBufferAtomicCmpSwap, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<6>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferAtomicCmpSwapAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferAtomicCmpSwapGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.buffer.atomic.cmpswap");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getSrc();
  ::mlir::Value getCmp();
  ::mlir::Value getRsrc();
  ::mlir::TypedValue<::mlir::IntegerType> getOffset();
  ::mlir::TypedValue<::mlir::IntegerType> getSoffset();
  ::mlir::TypedValue<::mlir::IntegerType> getAux();
  ::mlir::OpOperand &getSrcMutable();
  ::mlir::OpOperand &getCmpMutable();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferAtomicCmpSwap)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferAtomicFAddOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferAtomicFAddOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RawBufferAtomicFAddOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferAtomicFAddOpGenericAdaptorBase(RawBufferAtomicFAddOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class RawBufferAtomicFAddOpGenericAdaptor : public detail::RawBufferAtomicFAddOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferAtomicFAddOpGenericAdaptorBase;
public:
  RawBufferAtomicFAddOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferAtomicFAddOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferAtomicFAddOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = RawBufferAtomicFAddOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawBufferAtomicFAddOp>>>
  RawBufferAtomicFAddOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVdata() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRsrc() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(2).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(3).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(4).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawBufferAtomicFAddOpAdaptor : public RawBufferAtomicFAddOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawBufferAtomicFAddOpGenericAdaptor::RawBufferAtomicFAddOpGenericAdaptor;
  RawBufferAtomicFAddOpAdaptor(RawBufferAtomicFAddOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawBufferAtomicFAddOp : public ::mlir::Op<RawBufferAtomicFAddOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<5>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferAtomicFAddOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferAtomicFAddOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.buffer.atomic.fadd");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVdata();
  ::mlir::Value getRsrc();
  ::mlir::Value getOffset();
  ::mlir::Value getSoffset();
  ::mlir::Value getAux();
  ::mlir::OpOperand &getVdataMutable();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferAtomicFAddOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferAtomicFMaxOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferAtomicFMaxOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RawBufferAtomicFMaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferAtomicFMaxOpGenericAdaptorBase(RawBufferAtomicFMaxOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class RawBufferAtomicFMaxOpGenericAdaptor : public detail::RawBufferAtomicFMaxOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferAtomicFMaxOpGenericAdaptorBase;
public:
  RawBufferAtomicFMaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferAtomicFMaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferAtomicFMaxOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = RawBufferAtomicFMaxOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawBufferAtomicFMaxOp>>>
  RawBufferAtomicFMaxOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVdata() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRsrc() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(2).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(3).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(4).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawBufferAtomicFMaxOpAdaptor : public RawBufferAtomicFMaxOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawBufferAtomicFMaxOpGenericAdaptor::RawBufferAtomicFMaxOpGenericAdaptor;
  RawBufferAtomicFMaxOpAdaptor(RawBufferAtomicFMaxOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawBufferAtomicFMaxOp : public ::mlir::Op<RawBufferAtomicFMaxOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<5>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferAtomicFMaxOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferAtomicFMaxOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.buffer.atomic.fmax");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVdata();
  ::mlir::Value getRsrc();
  ::mlir::Value getOffset();
  ::mlir::Value getSoffset();
  ::mlir::Value getAux();
  ::mlir::OpOperand &getVdataMutable();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferAtomicFMaxOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferAtomicSMaxOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferAtomicSMaxOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RawBufferAtomicSMaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferAtomicSMaxOpGenericAdaptorBase(RawBufferAtomicSMaxOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class RawBufferAtomicSMaxOpGenericAdaptor : public detail::RawBufferAtomicSMaxOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferAtomicSMaxOpGenericAdaptorBase;
public:
  RawBufferAtomicSMaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferAtomicSMaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferAtomicSMaxOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = RawBufferAtomicSMaxOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawBufferAtomicSMaxOp>>>
  RawBufferAtomicSMaxOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVdata() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRsrc() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(2).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(3).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(4).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawBufferAtomicSMaxOpAdaptor : public RawBufferAtomicSMaxOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawBufferAtomicSMaxOpGenericAdaptor::RawBufferAtomicSMaxOpGenericAdaptor;
  RawBufferAtomicSMaxOpAdaptor(RawBufferAtomicSMaxOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawBufferAtomicSMaxOp : public ::mlir::Op<RawBufferAtomicSMaxOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<5>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferAtomicSMaxOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferAtomicSMaxOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.buffer.atomic.smax");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVdata();
  ::mlir::Value getRsrc();
  ::mlir::Value getOffset();
  ::mlir::Value getSoffset();
  ::mlir::Value getAux();
  ::mlir::OpOperand &getVdataMutable();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferAtomicSMaxOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferAtomicUMinOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferAtomicUMinOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RawBufferAtomicUMinOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferAtomicUMinOpGenericAdaptorBase(RawBufferAtomicUMinOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class RawBufferAtomicUMinOpGenericAdaptor : public detail::RawBufferAtomicUMinOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferAtomicUMinOpGenericAdaptorBase;
public:
  RawBufferAtomicUMinOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferAtomicUMinOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferAtomicUMinOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = RawBufferAtomicUMinOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawBufferAtomicUMinOp>>>
  RawBufferAtomicUMinOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVdata() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRsrc() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(2).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(3).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(4).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawBufferAtomicUMinOpAdaptor : public RawBufferAtomicUMinOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawBufferAtomicUMinOpGenericAdaptor::RawBufferAtomicUMinOpGenericAdaptor;
  RawBufferAtomicUMinOpAdaptor(RawBufferAtomicUMinOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawBufferAtomicUMinOp : public ::mlir::Op<RawBufferAtomicUMinOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<5>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferAtomicUMinOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferAtomicUMinOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.buffer.atomic.umin");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVdata();
  ::mlir::Value getRsrc();
  ::mlir::Value getOffset();
  ::mlir::Value getSoffset();
  ::mlir::Value getAux();
  ::mlir::OpOperand &getVdataMutable();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferAtomicUMinOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferLoadOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferLoadOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RawBufferLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferLoadOpGenericAdaptorBase(RawBufferLoadOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class RawBufferLoadOpGenericAdaptor : public detail::RawBufferLoadOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferLoadOpGenericAdaptorBase;
public:
  RawBufferLoadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferLoadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferLoadOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = RawBufferLoadOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawBufferLoadOp>>>
  RawBufferLoadOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getRsrc() {
    return (*getODSOperands(0).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(2).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawBufferLoadOpAdaptor : public RawBufferLoadOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawBufferLoadOpGenericAdaptor::RawBufferLoadOpGenericAdaptor;
  RawBufferLoadOpAdaptor(RawBufferLoadOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawBufferLoadOp : public ::mlir::Op<RawBufferLoadOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<4>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferLoadOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferLoadOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.buffer.load");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getRsrc();
  ::mlir::Value getOffset();
  ::mlir::Value getSoffset();
  ::mlir::Value getAux();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferLoadOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawBufferStoreOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferStoreOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RawBufferStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferStoreOpGenericAdaptorBase(RawBufferStoreOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class RawBufferStoreOpGenericAdaptor : public detail::RawBufferStoreOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferStoreOpGenericAdaptorBase;
public:
  RawBufferStoreOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferStoreOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferStoreOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = RawBufferStoreOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawBufferStoreOp>>>
  RawBufferStoreOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVdata() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRsrc() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(2).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(3).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(4).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawBufferStoreOpAdaptor : public RawBufferStoreOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawBufferStoreOpGenericAdaptor::RawBufferStoreOpGenericAdaptor;
  RawBufferStoreOpAdaptor(RawBufferStoreOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawBufferStoreOp : public ::mlir::Op<RawBufferStoreOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<5>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferStoreOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferStoreOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.buffer.store");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVdata();
  ::mlir::Value getRsrc();
  ::mlir::Value getOffset();
  ::mlir::Value getSoffset();
  ::mlir::Value getAux();
  ::mlir::OpOperand &getVdataMutable();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawBufferStoreOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferAtomicCmpSwap declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawPtrBufferAtomicCmpSwapGenericAdaptorBase {
public:
  struct Properties {
    using alias_scopesTy = ::mlir::ArrayAttr;
    alias_scopesTy alias_scopes;

    auto getAliasScopes() {
      auto &propStorage = this->alias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setAliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->alias_scopes = propValue;
    }
    using noalias_scopesTy = ::mlir::ArrayAttr;
    noalias_scopesTy noalias_scopes;

    auto getNoaliasScopes() {
      auto &propStorage = this->noalias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setNoaliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->noalias_scopes = propValue;
    }
    using tbaaTy = ::mlir::ArrayAttr;
    tbaaTy tbaa;

    auto getTbaa() {
      auto &propStorage = this->tbaa;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setTbaa(const ::mlir::ArrayAttr &propValue) {
      this->tbaa = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.alias_scopes == this->alias_scopes &&
        rhs.noalias_scopes == this->noalias_scopes &&
        rhs.tbaa == this->tbaa &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  RawPtrBufferAtomicCmpSwapGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawPtrBufferAtomicCmpSwapGenericAdaptorBase(RawPtrBufferAtomicCmpSwap op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
};
} // namespace detail
template <typename RangeT>
class RawPtrBufferAtomicCmpSwapGenericAdaptor : public detail::RawPtrBufferAtomicCmpSwapGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawPtrBufferAtomicCmpSwapGenericAdaptorBase;
public:
  RawPtrBufferAtomicCmpSwapGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawPtrBufferAtomicCmpSwapGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawPtrBufferAtomicCmpSwapGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RawPtrBufferAtomicCmpSwap, typename = std::enable_if_t<std::is_same_v<LateInst, RawPtrBufferAtomicCmpSwap>>>
  RawPtrBufferAtomicCmpSwapGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSrc() {
    return (*getODSOperands(0).begin());
  }

  ValueT getCmp() {
    return (*getODSOperands(1).begin());
  }

  ValueT getRsrc() {
    return (*getODSOperands(2).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(3).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(4).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(5).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawPtrBufferAtomicCmpSwapAdaptor : public RawPtrBufferAtomicCmpSwapGenericAdaptor<::mlir::ValueRange> {
public:
  using RawPtrBufferAtomicCmpSwapGenericAdaptor::RawPtrBufferAtomicCmpSwapGenericAdaptor;
  RawPtrBufferAtomicCmpSwapAdaptor(RawPtrBufferAtomicCmpSwap op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawPtrBufferAtomicCmpSwap : public ::mlir::Op<RawPtrBufferAtomicCmpSwap, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<6>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::LLVM::AliasAnalysisOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawPtrBufferAtomicCmpSwapAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawPtrBufferAtomicCmpSwapGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("alias_scopes"), ::llvm::StringRef("noalias_scopes"), ::llvm::StringRef("tbaa")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAliasScopesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getNoaliasScopesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getNoaliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTbaaAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTbaaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.ptr.buffer.atomic.cmpswap");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getSrc();
  ::mlir::Value getCmp();
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getRsrc();
  ::mlir::TypedValue<::mlir::IntegerType> getOffset();
  ::mlir::TypedValue<::mlir::IntegerType> getSoffset();
  ::mlir::TypedValue<::mlir::IntegerType> getAux();
  ::mlir::OpOperand &getSrcMutable();
  ::mlir::OpOperand &getCmpMutable();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
  void setAliasScopesAttr(::mlir::ArrayAttr attr);
  void setNoaliasScopesAttr(::mlir::ArrayAttr attr);
  void setTbaaAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeAliasScopesAttr();
  ::mlir::Attribute removeNoaliasScopesAttr();
  ::mlir::Attribute removeTbaaAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::llvm::SmallVector<::mlir::Value> getAccessedOperands();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferAtomicCmpSwap)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferAtomicFaddOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawPtrBufferAtomicFaddOpGenericAdaptorBase {
public:
  struct Properties {
    using alias_scopesTy = ::mlir::ArrayAttr;
    alias_scopesTy alias_scopes;

    auto getAliasScopes() {
      auto &propStorage = this->alias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setAliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->alias_scopes = propValue;
    }
    using noalias_scopesTy = ::mlir::ArrayAttr;
    noalias_scopesTy noalias_scopes;

    auto getNoaliasScopes() {
      auto &propStorage = this->noalias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setNoaliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->noalias_scopes = propValue;
    }
    using tbaaTy = ::mlir::ArrayAttr;
    tbaaTy tbaa;

    auto getTbaa() {
      auto &propStorage = this->tbaa;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setTbaa(const ::mlir::ArrayAttr &propValue) {
      this->tbaa = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.alias_scopes == this->alias_scopes &&
        rhs.noalias_scopes == this->noalias_scopes &&
        rhs.tbaa == this->tbaa &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  RawPtrBufferAtomicFaddOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawPtrBufferAtomicFaddOpGenericAdaptorBase(RawPtrBufferAtomicFaddOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
};
} // namespace detail
template <typename RangeT>
class RawPtrBufferAtomicFaddOpGenericAdaptor : public detail::RawPtrBufferAtomicFaddOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawPtrBufferAtomicFaddOpGenericAdaptorBase;
public:
  RawPtrBufferAtomicFaddOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawPtrBufferAtomicFaddOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawPtrBufferAtomicFaddOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RawPtrBufferAtomicFaddOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawPtrBufferAtomicFaddOp>>>
  RawPtrBufferAtomicFaddOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVdata() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRsrc() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(2).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(3).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(4).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawPtrBufferAtomicFaddOpAdaptor : public RawPtrBufferAtomicFaddOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawPtrBufferAtomicFaddOpGenericAdaptor::RawPtrBufferAtomicFaddOpGenericAdaptor;
  RawPtrBufferAtomicFaddOpAdaptor(RawPtrBufferAtomicFaddOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawPtrBufferAtomicFaddOp : public ::mlir::Op<RawPtrBufferAtomicFaddOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<5>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::LLVM::AliasAnalysisOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawPtrBufferAtomicFaddOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawPtrBufferAtomicFaddOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("alias_scopes"), ::llvm::StringRef("noalias_scopes"), ::llvm::StringRef("tbaa")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAliasScopesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getNoaliasScopesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getNoaliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTbaaAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTbaaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.ptr.buffer.atomic.fadd");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVdata();
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getRsrc();
  ::mlir::TypedValue<::mlir::IntegerType> getOffset();
  ::mlir::TypedValue<::mlir::IntegerType> getSoffset();
  ::mlir::TypedValue<::mlir::IntegerType> getAux();
  ::mlir::OpOperand &getVdataMutable();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
  void setAliasScopesAttr(::mlir::ArrayAttr attr);
  void setNoaliasScopesAttr(::mlir::ArrayAttr attr);
  void setTbaaAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeAliasScopesAttr();
  ::mlir::Attribute removeNoaliasScopesAttr();
  ::mlir::Attribute removeTbaaAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::llvm::SmallVector<::mlir::Value> getAccessedOperands();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferAtomicFaddOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferAtomicFmaxOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawPtrBufferAtomicFmaxOpGenericAdaptorBase {
public:
  struct Properties {
    using alias_scopesTy = ::mlir::ArrayAttr;
    alias_scopesTy alias_scopes;

    auto getAliasScopes() {
      auto &propStorage = this->alias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setAliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->alias_scopes = propValue;
    }
    using noalias_scopesTy = ::mlir::ArrayAttr;
    noalias_scopesTy noalias_scopes;

    auto getNoaliasScopes() {
      auto &propStorage = this->noalias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setNoaliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->noalias_scopes = propValue;
    }
    using tbaaTy = ::mlir::ArrayAttr;
    tbaaTy tbaa;

    auto getTbaa() {
      auto &propStorage = this->tbaa;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setTbaa(const ::mlir::ArrayAttr &propValue) {
      this->tbaa = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.alias_scopes == this->alias_scopes &&
        rhs.noalias_scopes == this->noalias_scopes &&
        rhs.tbaa == this->tbaa &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  RawPtrBufferAtomicFmaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawPtrBufferAtomicFmaxOpGenericAdaptorBase(RawPtrBufferAtomicFmaxOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
};
} // namespace detail
template <typename RangeT>
class RawPtrBufferAtomicFmaxOpGenericAdaptor : public detail::RawPtrBufferAtomicFmaxOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawPtrBufferAtomicFmaxOpGenericAdaptorBase;
public:
  RawPtrBufferAtomicFmaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawPtrBufferAtomicFmaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawPtrBufferAtomicFmaxOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RawPtrBufferAtomicFmaxOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawPtrBufferAtomicFmaxOp>>>
  RawPtrBufferAtomicFmaxOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVdata() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRsrc() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(2).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(3).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(4).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawPtrBufferAtomicFmaxOpAdaptor : public RawPtrBufferAtomicFmaxOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawPtrBufferAtomicFmaxOpGenericAdaptor::RawPtrBufferAtomicFmaxOpGenericAdaptor;
  RawPtrBufferAtomicFmaxOpAdaptor(RawPtrBufferAtomicFmaxOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawPtrBufferAtomicFmaxOp : public ::mlir::Op<RawPtrBufferAtomicFmaxOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<5>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::LLVM::AliasAnalysisOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawPtrBufferAtomicFmaxOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawPtrBufferAtomicFmaxOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("alias_scopes"), ::llvm::StringRef("noalias_scopes"), ::llvm::StringRef("tbaa")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAliasScopesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getNoaliasScopesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getNoaliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTbaaAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTbaaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.ptr.buffer.atomic.fmax");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVdata();
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getRsrc();
  ::mlir::TypedValue<::mlir::IntegerType> getOffset();
  ::mlir::TypedValue<::mlir::IntegerType> getSoffset();
  ::mlir::TypedValue<::mlir::IntegerType> getAux();
  ::mlir::OpOperand &getVdataMutable();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
  void setAliasScopesAttr(::mlir::ArrayAttr attr);
  void setNoaliasScopesAttr(::mlir::ArrayAttr attr);
  void setTbaaAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeAliasScopesAttr();
  ::mlir::Attribute removeNoaliasScopesAttr();
  ::mlir::Attribute removeTbaaAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::llvm::SmallVector<::mlir::Value> getAccessedOperands();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferAtomicFmaxOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferAtomicSmaxOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawPtrBufferAtomicSmaxOpGenericAdaptorBase {
public:
  struct Properties {
    using alias_scopesTy = ::mlir::ArrayAttr;
    alias_scopesTy alias_scopes;

    auto getAliasScopes() {
      auto &propStorage = this->alias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setAliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->alias_scopes = propValue;
    }
    using noalias_scopesTy = ::mlir::ArrayAttr;
    noalias_scopesTy noalias_scopes;

    auto getNoaliasScopes() {
      auto &propStorage = this->noalias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setNoaliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->noalias_scopes = propValue;
    }
    using tbaaTy = ::mlir::ArrayAttr;
    tbaaTy tbaa;

    auto getTbaa() {
      auto &propStorage = this->tbaa;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setTbaa(const ::mlir::ArrayAttr &propValue) {
      this->tbaa = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.alias_scopes == this->alias_scopes &&
        rhs.noalias_scopes == this->noalias_scopes &&
        rhs.tbaa == this->tbaa &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  RawPtrBufferAtomicSmaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawPtrBufferAtomicSmaxOpGenericAdaptorBase(RawPtrBufferAtomicSmaxOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
};
} // namespace detail
template <typename RangeT>
class RawPtrBufferAtomicSmaxOpGenericAdaptor : public detail::RawPtrBufferAtomicSmaxOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawPtrBufferAtomicSmaxOpGenericAdaptorBase;
public:
  RawPtrBufferAtomicSmaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawPtrBufferAtomicSmaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawPtrBufferAtomicSmaxOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RawPtrBufferAtomicSmaxOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawPtrBufferAtomicSmaxOp>>>
  RawPtrBufferAtomicSmaxOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVdata() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRsrc() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(2).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(3).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(4).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawPtrBufferAtomicSmaxOpAdaptor : public RawPtrBufferAtomicSmaxOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawPtrBufferAtomicSmaxOpGenericAdaptor::RawPtrBufferAtomicSmaxOpGenericAdaptor;
  RawPtrBufferAtomicSmaxOpAdaptor(RawPtrBufferAtomicSmaxOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawPtrBufferAtomicSmaxOp : public ::mlir::Op<RawPtrBufferAtomicSmaxOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<5>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::LLVM::AliasAnalysisOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawPtrBufferAtomicSmaxOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawPtrBufferAtomicSmaxOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("alias_scopes"), ::llvm::StringRef("noalias_scopes"), ::llvm::StringRef("tbaa")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAliasScopesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getNoaliasScopesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getNoaliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTbaaAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTbaaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.ptr.buffer.atomic.smax");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVdata();
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getRsrc();
  ::mlir::TypedValue<::mlir::IntegerType> getOffset();
  ::mlir::TypedValue<::mlir::IntegerType> getSoffset();
  ::mlir::TypedValue<::mlir::IntegerType> getAux();
  ::mlir::OpOperand &getVdataMutable();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
  void setAliasScopesAttr(::mlir::ArrayAttr attr);
  void setNoaliasScopesAttr(::mlir::ArrayAttr attr);
  void setTbaaAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeAliasScopesAttr();
  ::mlir::Attribute removeNoaliasScopesAttr();
  ::mlir::Attribute removeTbaaAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::llvm::SmallVector<::mlir::Value> getAccessedOperands();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferAtomicSmaxOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferAtomicUminOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawPtrBufferAtomicUminOpGenericAdaptorBase {
public:
  struct Properties {
    using alias_scopesTy = ::mlir::ArrayAttr;
    alias_scopesTy alias_scopes;

    auto getAliasScopes() {
      auto &propStorage = this->alias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setAliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->alias_scopes = propValue;
    }
    using noalias_scopesTy = ::mlir::ArrayAttr;
    noalias_scopesTy noalias_scopes;

    auto getNoaliasScopes() {
      auto &propStorage = this->noalias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setNoaliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->noalias_scopes = propValue;
    }
    using tbaaTy = ::mlir::ArrayAttr;
    tbaaTy tbaa;

    auto getTbaa() {
      auto &propStorage = this->tbaa;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setTbaa(const ::mlir::ArrayAttr &propValue) {
      this->tbaa = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.alias_scopes == this->alias_scopes &&
        rhs.noalias_scopes == this->noalias_scopes &&
        rhs.tbaa == this->tbaa &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  RawPtrBufferAtomicUminOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawPtrBufferAtomicUminOpGenericAdaptorBase(RawPtrBufferAtomicUminOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
};
} // namespace detail
template <typename RangeT>
class RawPtrBufferAtomicUminOpGenericAdaptor : public detail::RawPtrBufferAtomicUminOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawPtrBufferAtomicUminOpGenericAdaptorBase;
public:
  RawPtrBufferAtomicUminOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawPtrBufferAtomicUminOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawPtrBufferAtomicUminOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RawPtrBufferAtomicUminOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawPtrBufferAtomicUminOp>>>
  RawPtrBufferAtomicUminOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVdata() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRsrc() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(2).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(3).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(4).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawPtrBufferAtomicUminOpAdaptor : public RawPtrBufferAtomicUminOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawPtrBufferAtomicUminOpGenericAdaptor::RawPtrBufferAtomicUminOpGenericAdaptor;
  RawPtrBufferAtomicUminOpAdaptor(RawPtrBufferAtomicUminOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawPtrBufferAtomicUminOp : public ::mlir::Op<RawPtrBufferAtomicUminOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<5>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::LLVM::AliasAnalysisOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawPtrBufferAtomicUminOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawPtrBufferAtomicUminOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("alias_scopes"), ::llvm::StringRef("noalias_scopes"), ::llvm::StringRef("tbaa")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAliasScopesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getNoaliasScopesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getNoaliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTbaaAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTbaaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.ptr.buffer.atomic.umin");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVdata();
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getRsrc();
  ::mlir::TypedValue<::mlir::IntegerType> getOffset();
  ::mlir::TypedValue<::mlir::IntegerType> getSoffset();
  ::mlir::TypedValue<::mlir::IntegerType> getAux();
  ::mlir::OpOperand &getVdataMutable();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
  void setAliasScopesAttr(::mlir::ArrayAttr attr);
  void setNoaliasScopesAttr(::mlir::ArrayAttr attr);
  void setTbaaAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeAliasScopesAttr();
  ::mlir::Attribute removeNoaliasScopesAttr();
  ::mlir::Attribute removeTbaaAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::llvm::SmallVector<::mlir::Value> getAccessedOperands();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferAtomicUminOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferLoadOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawPtrBufferLoadOpGenericAdaptorBase {
public:
  struct Properties {
    using alias_scopesTy = ::mlir::ArrayAttr;
    alias_scopesTy alias_scopes;

    auto getAliasScopes() {
      auto &propStorage = this->alias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setAliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->alias_scopes = propValue;
    }
    using noalias_scopesTy = ::mlir::ArrayAttr;
    noalias_scopesTy noalias_scopes;

    auto getNoaliasScopes() {
      auto &propStorage = this->noalias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setNoaliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->noalias_scopes = propValue;
    }
    using tbaaTy = ::mlir::ArrayAttr;
    tbaaTy tbaa;

    auto getTbaa() {
      auto &propStorage = this->tbaa;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setTbaa(const ::mlir::ArrayAttr &propValue) {
      this->tbaa = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.alias_scopes == this->alias_scopes &&
        rhs.noalias_scopes == this->noalias_scopes &&
        rhs.tbaa == this->tbaa &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  RawPtrBufferLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawPtrBufferLoadOpGenericAdaptorBase(RawPtrBufferLoadOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
};
} // namespace detail
template <typename RangeT>
class RawPtrBufferLoadOpGenericAdaptor : public detail::RawPtrBufferLoadOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawPtrBufferLoadOpGenericAdaptorBase;
public:
  RawPtrBufferLoadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawPtrBufferLoadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawPtrBufferLoadOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RawPtrBufferLoadOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawPtrBufferLoadOp>>>
  RawPtrBufferLoadOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getRsrc() {
    return (*getODSOperands(0).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(2).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawPtrBufferLoadOpAdaptor : public RawPtrBufferLoadOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawPtrBufferLoadOpGenericAdaptor::RawPtrBufferLoadOpGenericAdaptor;
  RawPtrBufferLoadOpAdaptor(RawPtrBufferLoadOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawPtrBufferLoadOp : public ::mlir::Op<RawPtrBufferLoadOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::LLVM::AliasAnalysisOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawPtrBufferLoadOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawPtrBufferLoadOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("alias_scopes"), ::llvm::StringRef("noalias_scopes"), ::llvm::StringRef("tbaa")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAliasScopesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getNoaliasScopesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getNoaliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTbaaAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTbaaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.ptr.buffer.load");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getRsrc();
  ::mlir::TypedValue<::mlir::IntegerType> getOffset();
  ::mlir::TypedValue<::mlir::IntegerType> getSoffset();
  ::mlir::TypedValue<::mlir::IntegerType> getAux();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
  void setAliasScopesAttr(::mlir::ArrayAttr attr);
  void setNoaliasScopesAttr(::mlir::ArrayAttr attr);
  void setTbaaAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeAliasScopesAttr();
  ::mlir::Attribute removeNoaliasScopesAttr();
  ::mlir::Attribute removeTbaaAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::llvm::SmallVector<::mlir::Value> getAccessedOperands();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferLoadOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::RawPtrBufferStoreOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawPtrBufferStoreOpGenericAdaptorBase {
public:
  struct Properties {
    using alias_scopesTy = ::mlir::ArrayAttr;
    alias_scopesTy alias_scopes;

    auto getAliasScopes() {
      auto &propStorage = this->alias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setAliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->alias_scopes = propValue;
    }
    using noalias_scopesTy = ::mlir::ArrayAttr;
    noalias_scopesTy noalias_scopes;

    auto getNoaliasScopes() {
      auto &propStorage = this->noalias_scopes;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setNoaliasScopes(const ::mlir::ArrayAttr &propValue) {
      this->noalias_scopes = propValue;
    }
    using tbaaTy = ::mlir::ArrayAttr;
    tbaaTy tbaa;

    auto getTbaa() {
      auto &propStorage = this->tbaa;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setTbaa(const ::mlir::ArrayAttr &propValue) {
      this->tbaa = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.alias_scopes == this->alias_scopes &&
        rhs.noalias_scopes == this->noalias_scopes &&
        rhs.tbaa == this->tbaa &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  RawPtrBufferStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawPtrBufferStoreOpGenericAdaptorBase(RawPtrBufferStoreOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
};
} // namespace detail
template <typename RangeT>
class RawPtrBufferStoreOpGenericAdaptor : public detail::RawPtrBufferStoreOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawPtrBufferStoreOpGenericAdaptorBase;
public:
  RawPtrBufferStoreOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawPtrBufferStoreOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawPtrBufferStoreOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RawPtrBufferStoreOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawPtrBufferStoreOp>>>
  RawPtrBufferStoreOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVdata() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRsrc() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOffset() {
    return (*getODSOperands(2).begin());
  }

  ValueT getSoffset() {
    return (*getODSOperands(3).begin());
  }

  ValueT getAux() {
    return (*getODSOperands(4).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawPtrBufferStoreOpAdaptor : public RawPtrBufferStoreOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawPtrBufferStoreOpGenericAdaptor::RawPtrBufferStoreOpGenericAdaptor;
  RawPtrBufferStoreOpAdaptor(RawPtrBufferStoreOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawPtrBufferStoreOp : public ::mlir::Op<RawPtrBufferStoreOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<5>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::LLVM::AliasAnalysisOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawPtrBufferStoreOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawPtrBufferStoreOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("alias_scopes"), ::llvm::StringRef("noalias_scopes"), ::llvm::StringRef("tbaa")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAliasScopesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getNoaliasScopesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getNoaliasScopesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getTbaaAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getTbaaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.raw.ptr.buffer.store");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVdata();
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getRsrc();
  ::mlir::TypedValue<::mlir::IntegerType> getOffset();
  ::mlir::TypedValue<::mlir::IntegerType> getSoffset();
  ::mlir::TypedValue<::mlir::IntegerType> getAux();
  ::mlir::OpOperand &getVdataMutable();
  ::mlir::OpOperand &getRsrcMutable();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getSoffsetMutable();
  ::mlir::OpOperand &getAuxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::ArrayAttr getAliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getAliasScopes();
  ::mlir::ArrayAttr getNoaliasScopesAttr();
  ::std::optional< ::mlir::ArrayAttr > getNoaliasScopes();
  ::mlir::ArrayAttr getTbaaAttr();
  ::std::optional< ::mlir::ArrayAttr > getTbaa();
  void setAliasScopesAttr(::mlir::ArrayAttr attr);
  void setNoaliasScopesAttr(::mlir::ArrayAttr attr);
  void setTbaaAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeAliasScopesAttr();
  ::mlir::Attribute removeNoaliasScopesAttr();
  ::mlir::Attribute removeTbaaAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vdata, ::mlir::Value rsrc, ::mlir::Value offset, ::mlir::Value soffset, ::mlir::Value aux, /*optional*/::mlir::ArrayAttr alias_scopes, /*optional*/::mlir::ArrayAttr noalias_scopes, /*optional*/::mlir::ArrayAttr tbaa);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::llvm::SmallVector<::mlir::Value> getAccessedOperands();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::RawPtrBufferStoreOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::ThreadIdXOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ThreadIdXOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ThreadIdXOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ThreadIdXOpGenericAdaptorBase(ThreadIdXOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ThreadIdXOpGenericAdaptor : public detail::ThreadIdXOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ThreadIdXOpGenericAdaptorBase;
public:
  ThreadIdXOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ThreadIdXOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ThreadIdXOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ThreadIdXOp, typename = std::enable_if_t<std::is_same_v<LateInst, ThreadIdXOp>>>
  ThreadIdXOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ThreadIdXOpAdaptor : public ThreadIdXOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ThreadIdXOpGenericAdaptor::ThreadIdXOpGenericAdaptor;
  ThreadIdXOpAdaptor(ThreadIdXOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ThreadIdXOp : public ::mlir::Op<ThreadIdXOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ThreadIdXOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ThreadIdXOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.workitem.id.x");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::ThreadIdXOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::ThreadIdYOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ThreadIdYOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ThreadIdYOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ThreadIdYOpGenericAdaptorBase(ThreadIdYOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ThreadIdYOpGenericAdaptor : public detail::ThreadIdYOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ThreadIdYOpGenericAdaptorBase;
public:
  ThreadIdYOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ThreadIdYOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ThreadIdYOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ThreadIdYOp, typename = std::enable_if_t<std::is_same_v<LateInst, ThreadIdYOp>>>
  ThreadIdYOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ThreadIdYOpAdaptor : public ThreadIdYOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ThreadIdYOpGenericAdaptor::ThreadIdYOpGenericAdaptor;
  ThreadIdYOpAdaptor(ThreadIdYOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ThreadIdYOp : public ::mlir::Op<ThreadIdYOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ThreadIdYOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ThreadIdYOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.workitem.id.y");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::ThreadIdYOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::ThreadIdZOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ThreadIdZOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ThreadIdZOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ThreadIdZOpGenericAdaptorBase(ThreadIdZOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ThreadIdZOpGenericAdaptor : public detail::ThreadIdZOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ThreadIdZOpGenericAdaptorBase;
public:
  ThreadIdZOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ThreadIdZOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ThreadIdZOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ThreadIdZOp, typename = std::enable_if_t<std::is_same_v<LateInst, ThreadIdZOp>>>
  ThreadIdZOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ThreadIdZOpAdaptor : public ThreadIdZOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ThreadIdZOpGenericAdaptor::ThreadIdZOpGenericAdaptor;
  ThreadIdZOpAdaptor(ThreadIdZOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ThreadIdZOp : public ::mlir::Op<ThreadIdZOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ThreadIdZOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ThreadIdZOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.workitem.id.z");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::ThreadIdZOp)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x16bf16_1k declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_16x16x16bf16_1kGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_16x16x16bf16_1kGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_16x16x16bf16_1kGenericAdaptorBase(mfma_f32_16x16x16bf16_1k op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_16x16x16bf16_1kGenericAdaptor : public detail::mfma_f32_16x16x16bf16_1kGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_16x16x16bf16_1kGenericAdaptorBase;
public:
  mfma_f32_16x16x16bf16_1kGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_16x16x16bf16_1kGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_16x16x16bf16_1kGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_16x16x16bf16_1k, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_16x16x16bf16_1k>>>
  mfma_f32_16x16x16bf16_1kGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_16x16x16bf16_1kAdaptor : public mfma_f32_16x16x16bf16_1kGenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_16x16x16bf16_1kGenericAdaptor::mfma_f32_16x16x16bf16_1kGenericAdaptor;
  mfma_f32_16x16x16bf16_1kAdaptor(mfma_f32_16x16x16bf16_1k op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_16x16x16bf16_1k : public ::mlir::Op<mfma_f32_16x16x16bf16_1k, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_16x16x16bf16_1kAdaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_16x16x16bf16_1kGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.16x16x16bf16.1k");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x16bf16_1k)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x16f16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_16x16x16f16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_16x16x16f16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_16x16x16f16GenericAdaptorBase(mfma_f32_16x16x16f16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_16x16x16f16GenericAdaptor : public detail::mfma_f32_16x16x16f16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_16x16x16f16GenericAdaptorBase;
public:
  mfma_f32_16x16x16f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_16x16x16f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_16x16x16f16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_16x16x16f16, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_16x16x16f16>>>
  mfma_f32_16x16x16f16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_16x16x16f16Adaptor : public mfma_f32_16x16x16f16GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_16x16x16f16GenericAdaptor::mfma_f32_16x16x16f16GenericAdaptor;
  mfma_f32_16x16x16f16Adaptor(mfma_f32_16x16x16f16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_16x16x16f16 : public ::mlir::Op<mfma_f32_16x16x16f16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_16x16x16f16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_16x16x16f16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.16x16x16f16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x16f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x1f32 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_16x16x1f32GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_16x16x1f32GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_16x16x1f32GenericAdaptorBase(mfma_f32_16x16x1f32 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_16x16x1f32GenericAdaptor : public detail::mfma_f32_16x16x1f32GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_16x16x1f32GenericAdaptorBase;
public:
  mfma_f32_16x16x1f32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_16x16x1f32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_16x16x1f32GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_16x16x1f32, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_16x16x1f32>>>
  mfma_f32_16x16x1f32GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_16x16x1f32Adaptor : public mfma_f32_16x16x1f32GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_16x16x1f32GenericAdaptor::mfma_f32_16x16x1f32GenericAdaptor;
  mfma_f32_16x16x1f32Adaptor(mfma_f32_16x16x1f32 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_16x16x1f32 : public ::mlir::Op<mfma_f32_16x16x1f32, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_16x16x1f32Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_16x16x1f32GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.16x16x1f32");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x1f32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x2bf16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_16x16x2bf16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_16x16x2bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_16x16x2bf16GenericAdaptorBase(mfma_f32_16x16x2bf16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_16x16x2bf16GenericAdaptor : public detail::mfma_f32_16x16x2bf16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_16x16x2bf16GenericAdaptorBase;
public:
  mfma_f32_16x16x2bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_16x16x2bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_16x16x2bf16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_16x16x2bf16, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_16x16x2bf16>>>
  mfma_f32_16x16x2bf16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_16x16x2bf16Adaptor : public mfma_f32_16x16x2bf16GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_16x16x2bf16GenericAdaptor::mfma_f32_16x16x2bf16GenericAdaptor;
  mfma_f32_16x16x2bf16Adaptor(mfma_f32_16x16x2bf16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_16x16x2bf16 : public ::mlir::Op<mfma_f32_16x16x2bf16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_16x16x2bf16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_16x16x2bf16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.16x16x2bf16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x2bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x32_bf8_bf8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_16x16x32_bf8_bf8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_16x16x32_bf8_bf8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_16x16x32_bf8_bf8GenericAdaptorBase(mfma_f32_16x16x32_bf8_bf8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_16x16x32_bf8_bf8GenericAdaptor : public detail::mfma_f32_16x16x32_bf8_bf8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_16x16x32_bf8_bf8GenericAdaptorBase;
public:
  mfma_f32_16x16x32_bf8_bf8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_16x16x32_bf8_bf8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_16x16x32_bf8_bf8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_16x16x32_bf8_bf8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_16x16x32_bf8_bf8>>>
  mfma_f32_16x16x32_bf8_bf8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_16x16x32_bf8_bf8Adaptor : public mfma_f32_16x16x32_bf8_bf8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_16x16x32_bf8_bf8GenericAdaptor::mfma_f32_16x16x32_bf8_bf8GenericAdaptor;
  mfma_f32_16x16x32_bf8_bf8Adaptor(mfma_f32_16x16x32_bf8_bf8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_16x16x32_bf8_bf8 : public ::mlir::Op<mfma_f32_16x16x32_bf8_bf8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_16x16x32_bf8_bf8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_16x16x32_bf8_bf8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.16x16x32.bf8.bf8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x32_bf8_bf8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x32_bf8_fp8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_16x16x32_bf8_fp8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_16x16x32_bf8_fp8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_16x16x32_bf8_fp8GenericAdaptorBase(mfma_f32_16x16x32_bf8_fp8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_16x16x32_bf8_fp8GenericAdaptor : public detail::mfma_f32_16x16x32_bf8_fp8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_16x16x32_bf8_fp8GenericAdaptorBase;
public:
  mfma_f32_16x16x32_bf8_fp8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_16x16x32_bf8_fp8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_16x16x32_bf8_fp8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_16x16x32_bf8_fp8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_16x16x32_bf8_fp8>>>
  mfma_f32_16x16x32_bf8_fp8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_16x16x32_bf8_fp8Adaptor : public mfma_f32_16x16x32_bf8_fp8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_16x16x32_bf8_fp8GenericAdaptor::mfma_f32_16x16x32_bf8_fp8GenericAdaptor;
  mfma_f32_16x16x32_bf8_fp8Adaptor(mfma_f32_16x16x32_bf8_fp8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_16x16x32_bf8_fp8 : public ::mlir::Op<mfma_f32_16x16x32_bf8_fp8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_16x16x32_bf8_fp8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_16x16x32_bf8_fp8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.16x16x32.bf8.fp8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x32_bf8_fp8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x32_fp8_bf8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_16x16x32_fp8_bf8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_16x16x32_fp8_bf8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_16x16x32_fp8_bf8GenericAdaptorBase(mfma_f32_16x16x32_fp8_bf8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_16x16x32_fp8_bf8GenericAdaptor : public detail::mfma_f32_16x16x32_fp8_bf8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_16x16x32_fp8_bf8GenericAdaptorBase;
public:
  mfma_f32_16x16x32_fp8_bf8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_16x16x32_fp8_bf8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_16x16x32_fp8_bf8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_16x16x32_fp8_bf8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_16x16x32_fp8_bf8>>>
  mfma_f32_16x16x32_fp8_bf8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_16x16x32_fp8_bf8Adaptor : public mfma_f32_16x16x32_fp8_bf8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_16x16x32_fp8_bf8GenericAdaptor::mfma_f32_16x16x32_fp8_bf8GenericAdaptor;
  mfma_f32_16x16x32_fp8_bf8Adaptor(mfma_f32_16x16x32_fp8_bf8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_16x16x32_fp8_bf8 : public ::mlir::Op<mfma_f32_16x16x32_fp8_bf8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_16x16x32_fp8_bf8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_16x16x32_fp8_bf8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.16x16x32.fp8.bf8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x32_fp8_bf8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x32_fp8_fp8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_16x16x32_fp8_fp8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_16x16x32_fp8_fp8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_16x16x32_fp8_fp8GenericAdaptorBase(mfma_f32_16x16x32_fp8_fp8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_16x16x32_fp8_fp8GenericAdaptor : public detail::mfma_f32_16x16x32_fp8_fp8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_16x16x32_fp8_fp8GenericAdaptorBase;
public:
  mfma_f32_16x16x32_fp8_fp8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_16x16x32_fp8_fp8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_16x16x32_fp8_fp8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_16x16x32_fp8_fp8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_16x16x32_fp8_fp8>>>
  mfma_f32_16x16x32_fp8_fp8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_16x16x32_fp8_fp8Adaptor : public mfma_f32_16x16x32_fp8_fp8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_16x16x32_fp8_fp8GenericAdaptor::mfma_f32_16x16x32_fp8_fp8GenericAdaptor;
  mfma_f32_16x16x32_fp8_fp8Adaptor(mfma_f32_16x16x32_fp8_fp8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_16x16x32_fp8_fp8 : public ::mlir::Op<mfma_f32_16x16x32_fp8_fp8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_16x16x32_fp8_fp8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_16x16x32_fp8_fp8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.16x16x32.fp8.fp8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x32_fp8_fp8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x4bf16_1k declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_16x16x4bf16_1kGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_16x16x4bf16_1kGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_16x16x4bf16_1kGenericAdaptorBase(mfma_f32_16x16x4bf16_1k op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_16x16x4bf16_1kGenericAdaptor : public detail::mfma_f32_16x16x4bf16_1kGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_16x16x4bf16_1kGenericAdaptorBase;
public:
  mfma_f32_16x16x4bf16_1kGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_16x16x4bf16_1kGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_16x16x4bf16_1kGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_16x16x4bf16_1k, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_16x16x4bf16_1k>>>
  mfma_f32_16x16x4bf16_1kGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_16x16x4bf16_1kAdaptor : public mfma_f32_16x16x4bf16_1kGenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_16x16x4bf16_1kGenericAdaptor::mfma_f32_16x16x4bf16_1kGenericAdaptor;
  mfma_f32_16x16x4bf16_1kAdaptor(mfma_f32_16x16x4bf16_1k op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_16x16x4bf16_1k : public ::mlir::Op<mfma_f32_16x16x4bf16_1k, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_16x16x4bf16_1kAdaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_16x16x4bf16_1kGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.16x16x4bf16.1k");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x4bf16_1k)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x4f16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_16x16x4f16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_16x16x4f16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_16x16x4f16GenericAdaptorBase(mfma_f32_16x16x4f16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_16x16x4f16GenericAdaptor : public detail::mfma_f32_16x16x4f16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_16x16x4f16GenericAdaptorBase;
public:
  mfma_f32_16x16x4f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_16x16x4f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_16x16x4f16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_16x16x4f16, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_16x16x4f16>>>
  mfma_f32_16x16x4f16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_16x16x4f16Adaptor : public mfma_f32_16x16x4f16GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_16x16x4f16GenericAdaptor::mfma_f32_16x16x4f16GenericAdaptor;
  mfma_f32_16x16x4f16Adaptor(mfma_f32_16x16x4f16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_16x16x4f16 : public ::mlir::Op<mfma_f32_16x16x4f16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_16x16x4f16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_16x16x4f16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.16x16x4f16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x4f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x4f32 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_16x16x4f32GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_16x16x4f32GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_16x16x4f32GenericAdaptorBase(mfma_f32_16x16x4f32 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_16x16x4f32GenericAdaptor : public detail::mfma_f32_16x16x4f32GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_16x16x4f32GenericAdaptorBase;
public:
  mfma_f32_16x16x4f32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_16x16x4f32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_16x16x4f32GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_16x16x4f32, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_16x16x4f32>>>
  mfma_f32_16x16x4f32GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_16x16x4f32Adaptor : public mfma_f32_16x16x4f32GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_16x16x4f32GenericAdaptor::mfma_f32_16x16x4f32GenericAdaptor;
  mfma_f32_16x16x4f32Adaptor(mfma_f32_16x16x4f32 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_16x16x4f32 : public ::mlir::Op<mfma_f32_16x16x4f32, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_16x16x4f32Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_16x16x4f32GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.16x16x4f32");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x4f32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x8_xf32 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_16x16x8_xf32GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_16x16x8_xf32GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_16x16x8_xf32GenericAdaptorBase(mfma_f32_16x16x8_xf32 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_16x16x8_xf32GenericAdaptor : public detail::mfma_f32_16x16x8_xf32GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_16x16x8_xf32GenericAdaptorBase;
public:
  mfma_f32_16x16x8_xf32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_16x16x8_xf32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_16x16x8_xf32GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_16x16x8_xf32, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_16x16x8_xf32>>>
  mfma_f32_16x16x8_xf32GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_16x16x8_xf32Adaptor : public mfma_f32_16x16x8_xf32GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_16x16x8_xf32GenericAdaptor::mfma_f32_16x16x8_xf32GenericAdaptor;
  mfma_f32_16x16x8_xf32Adaptor(mfma_f32_16x16x8_xf32 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_16x16x8_xf32 : public ::mlir::Op<mfma_f32_16x16x8_xf32, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_16x16x8_xf32Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_16x16x8_xf32GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.16x16x8.xf32");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x8_xf32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_16x16x8bf16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_16x16x8bf16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_16x16x8bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_16x16x8bf16GenericAdaptorBase(mfma_f32_16x16x8bf16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_16x16x8bf16GenericAdaptor : public detail::mfma_f32_16x16x8bf16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_16x16x8bf16GenericAdaptorBase;
public:
  mfma_f32_16x16x8bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_16x16x8bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_16x16x8bf16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_16x16x8bf16, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_16x16x8bf16>>>
  mfma_f32_16x16x8bf16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_16x16x8bf16Adaptor : public mfma_f32_16x16x8bf16GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_16x16x8bf16GenericAdaptor::mfma_f32_16x16x8bf16GenericAdaptor;
  mfma_f32_16x16x8bf16Adaptor(mfma_f32_16x16x8bf16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_16x16x8bf16 : public ::mlir::Op<mfma_f32_16x16x8bf16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_16x16x8bf16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_16x16x8bf16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.16x16x8bf16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_16x16x8bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x16_bf8_bf8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_32x32x16_bf8_bf8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_32x32x16_bf8_bf8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_32x32x16_bf8_bf8GenericAdaptorBase(mfma_f32_32x32x16_bf8_bf8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_32x32x16_bf8_bf8GenericAdaptor : public detail::mfma_f32_32x32x16_bf8_bf8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_32x32x16_bf8_bf8GenericAdaptorBase;
public:
  mfma_f32_32x32x16_bf8_bf8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_32x32x16_bf8_bf8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_32x32x16_bf8_bf8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_32x32x16_bf8_bf8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_32x32x16_bf8_bf8>>>
  mfma_f32_32x32x16_bf8_bf8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_32x32x16_bf8_bf8Adaptor : public mfma_f32_32x32x16_bf8_bf8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_32x32x16_bf8_bf8GenericAdaptor::mfma_f32_32x32x16_bf8_bf8GenericAdaptor;
  mfma_f32_32x32x16_bf8_bf8Adaptor(mfma_f32_32x32x16_bf8_bf8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_32x32x16_bf8_bf8 : public ::mlir::Op<mfma_f32_32x32x16_bf8_bf8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_32x32x16_bf8_bf8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_32x32x16_bf8_bf8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.32x32x16.bf8.bf8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x16_bf8_bf8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x16_bf8_fp8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_32x32x16_bf8_fp8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_32x32x16_bf8_fp8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_32x32x16_bf8_fp8GenericAdaptorBase(mfma_f32_32x32x16_bf8_fp8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_32x32x16_bf8_fp8GenericAdaptor : public detail::mfma_f32_32x32x16_bf8_fp8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_32x32x16_bf8_fp8GenericAdaptorBase;
public:
  mfma_f32_32x32x16_bf8_fp8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_32x32x16_bf8_fp8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_32x32x16_bf8_fp8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_32x32x16_bf8_fp8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_32x32x16_bf8_fp8>>>
  mfma_f32_32x32x16_bf8_fp8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_32x32x16_bf8_fp8Adaptor : public mfma_f32_32x32x16_bf8_fp8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_32x32x16_bf8_fp8GenericAdaptor::mfma_f32_32x32x16_bf8_fp8GenericAdaptor;
  mfma_f32_32x32x16_bf8_fp8Adaptor(mfma_f32_32x32x16_bf8_fp8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_32x32x16_bf8_fp8 : public ::mlir::Op<mfma_f32_32x32x16_bf8_fp8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_32x32x16_bf8_fp8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_32x32x16_bf8_fp8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.32x32x16.bf8.fp8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x16_bf8_fp8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x16_fp8_bf8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_32x32x16_fp8_bf8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_32x32x16_fp8_bf8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_32x32x16_fp8_bf8GenericAdaptorBase(mfma_f32_32x32x16_fp8_bf8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_32x32x16_fp8_bf8GenericAdaptor : public detail::mfma_f32_32x32x16_fp8_bf8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_32x32x16_fp8_bf8GenericAdaptorBase;
public:
  mfma_f32_32x32x16_fp8_bf8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_32x32x16_fp8_bf8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_32x32x16_fp8_bf8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_32x32x16_fp8_bf8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_32x32x16_fp8_bf8>>>
  mfma_f32_32x32x16_fp8_bf8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_32x32x16_fp8_bf8Adaptor : public mfma_f32_32x32x16_fp8_bf8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_32x32x16_fp8_bf8GenericAdaptor::mfma_f32_32x32x16_fp8_bf8GenericAdaptor;
  mfma_f32_32x32x16_fp8_bf8Adaptor(mfma_f32_32x32x16_fp8_bf8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_32x32x16_fp8_bf8 : public ::mlir::Op<mfma_f32_32x32x16_fp8_bf8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_32x32x16_fp8_bf8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_32x32x16_fp8_bf8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.32x32x16.fp8.bf8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x16_fp8_bf8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x16_fp8_fp8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_32x32x16_fp8_fp8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_32x32x16_fp8_fp8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_32x32x16_fp8_fp8GenericAdaptorBase(mfma_f32_32x32x16_fp8_fp8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_32x32x16_fp8_fp8GenericAdaptor : public detail::mfma_f32_32x32x16_fp8_fp8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_32x32x16_fp8_fp8GenericAdaptorBase;
public:
  mfma_f32_32x32x16_fp8_fp8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_32x32x16_fp8_fp8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_32x32x16_fp8_fp8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_32x32x16_fp8_fp8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_32x32x16_fp8_fp8>>>
  mfma_f32_32x32x16_fp8_fp8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_32x32x16_fp8_fp8Adaptor : public mfma_f32_32x32x16_fp8_fp8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_32x32x16_fp8_fp8GenericAdaptor::mfma_f32_32x32x16_fp8_fp8GenericAdaptor;
  mfma_f32_32x32x16_fp8_fp8Adaptor(mfma_f32_32x32x16_fp8_fp8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_32x32x16_fp8_fp8 : public ::mlir::Op<mfma_f32_32x32x16_fp8_fp8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_32x32x16_fp8_fp8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_32x32x16_fp8_fp8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.32x32x16.fp8.fp8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x16_fp8_fp8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x1f32 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_32x32x1f32GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_32x32x1f32GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_32x32x1f32GenericAdaptorBase(mfma_f32_32x32x1f32 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_32x32x1f32GenericAdaptor : public detail::mfma_f32_32x32x1f32GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_32x32x1f32GenericAdaptorBase;
public:
  mfma_f32_32x32x1f32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_32x32x1f32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_32x32x1f32GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_32x32x1f32, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_32x32x1f32>>>
  mfma_f32_32x32x1f32GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_32x32x1f32Adaptor : public mfma_f32_32x32x1f32GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_32x32x1f32GenericAdaptor::mfma_f32_32x32x1f32GenericAdaptor;
  mfma_f32_32x32x1f32Adaptor(mfma_f32_32x32x1f32 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_32x32x1f32 : public ::mlir::Op<mfma_f32_32x32x1f32, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_32x32x1f32Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_32x32x1f32GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.32x32x1f32");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x1f32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x2bf16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_32x32x2bf16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_32x32x2bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_32x32x2bf16GenericAdaptorBase(mfma_f32_32x32x2bf16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_32x32x2bf16GenericAdaptor : public detail::mfma_f32_32x32x2bf16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_32x32x2bf16GenericAdaptorBase;
public:
  mfma_f32_32x32x2bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_32x32x2bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_32x32x2bf16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_32x32x2bf16, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_32x32x2bf16>>>
  mfma_f32_32x32x2bf16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_32x32x2bf16Adaptor : public mfma_f32_32x32x2bf16GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_32x32x2bf16GenericAdaptor::mfma_f32_32x32x2bf16GenericAdaptor;
  mfma_f32_32x32x2bf16Adaptor(mfma_f32_32x32x2bf16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_32x32x2bf16 : public ::mlir::Op<mfma_f32_32x32x2bf16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_32x32x2bf16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_32x32x2bf16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.32x32x2bf16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x2bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x2f32 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_32x32x2f32GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_32x32x2f32GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_32x32x2f32GenericAdaptorBase(mfma_f32_32x32x2f32 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_32x32x2f32GenericAdaptor : public detail::mfma_f32_32x32x2f32GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_32x32x2f32GenericAdaptorBase;
public:
  mfma_f32_32x32x2f32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_32x32x2f32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_32x32x2f32GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_32x32x2f32, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_32x32x2f32>>>
  mfma_f32_32x32x2f32GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_32x32x2f32Adaptor : public mfma_f32_32x32x2f32GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_32x32x2f32GenericAdaptor::mfma_f32_32x32x2f32GenericAdaptor;
  mfma_f32_32x32x2f32Adaptor(mfma_f32_32x32x2f32 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_32x32x2f32 : public ::mlir::Op<mfma_f32_32x32x2f32, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_32x32x2f32Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_32x32x2f32GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.32x32x2f32");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x2f32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x4_xf32 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_32x32x4_xf32GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_32x32x4_xf32GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_32x32x4_xf32GenericAdaptorBase(mfma_f32_32x32x4_xf32 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_32x32x4_xf32GenericAdaptor : public detail::mfma_f32_32x32x4_xf32GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_32x32x4_xf32GenericAdaptorBase;
public:
  mfma_f32_32x32x4_xf32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_32x32x4_xf32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_32x32x4_xf32GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_32x32x4_xf32, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_32x32x4_xf32>>>
  mfma_f32_32x32x4_xf32GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_32x32x4_xf32Adaptor : public mfma_f32_32x32x4_xf32GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_32x32x4_xf32GenericAdaptor::mfma_f32_32x32x4_xf32GenericAdaptor;
  mfma_f32_32x32x4_xf32Adaptor(mfma_f32_32x32x4_xf32 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_32x32x4_xf32 : public ::mlir::Op<mfma_f32_32x32x4_xf32, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_32x32x4_xf32Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_32x32x4_xf32GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.32x32x4.xf32");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x4_xf32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x4bf16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_32x32x4bf16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_32x32x4bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_32x32x4bf16GenericAdaptorBase(mfma_f32_32x32x4bf16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_32x32x4bf16GenericAdaptor : public detail::mfma_f32_32x32x4bf16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_32x32x4bf16GenericAdaptorBase;
public:
  mfma_f32_32x32x4bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_32x32x4bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_32x32x4bf16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_32x32x4bf16, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_32x32x4bf16>>>
  mfma_f32_32x32x4bf16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_32x32x4bf16Adaptor : public mfma_f32_32x32x4bf16GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_32x32x4bf16GenericAdaptor::mfma_f32_32x32x4bf16GenericAdaptor;
  mfma_f32_32x32x4bf16Adaptor(mfma_f32_32x32x4bf16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_32x32x4bf16 : public ::mlir::Op<mfma_f32_32x32x4bf16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_32x32x4bf16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_32x32x4bf16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.32x32x4bf16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x4bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x4bf16_1k declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_32x32x4bf16_1kGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_32x32x4bf16_1kGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_32x32x4bf16_1kGenericAdaptorBase(mfma_f32_32x32x4bf16_1k op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_32x32x4bf16_1kGenericAdaptor : public detail::mfma_f32_32x32x4bf16_1kGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_32x32x4bf16_1kGenericAdaptorBase;
public:
  mfma_f32_32x32x4bf16_1kGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_32x32x4bf16_1kGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_32x32x4bf16_1kGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_32x32x4bf16_1k, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_32x32x4bf16_1k>>>
  mfma_f32_32x32x4bf16_1kGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_32x32x4bf16_1kAdaptor : public mfma_f32_32x32x4bf16_1kGenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_32x32x4bf16_1kGenericAdaptor::mfma_f32_32x32x4bf16_1kGenericAdaptor;
  mfma_f32_32x32x4bf16_1kAdaptor(mfma_f32_32x32x4bf16_1k op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_32x32x4bf16_1k : public ::mlir::Op<mfma_f32_32x32x4bf16_1k, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_32x32x4bf16_1kAdaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_32x32x4bf16_1kGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.32x32x4bf16.1k");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x4bf16_1k)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x4f16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_32x32x4f16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_32x32x4f16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_32x32x4f16GenericAdaptorBase(mfma_f32_32x32x4f16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_32x32x4f16GenericAdaptor : public detail::mfma_f32_32x32x4f16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_32x32x4f16GenericAdaptorBase;
public:
  mfma_f32_32x32x4f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_32x32x4f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_32x32x4f16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_32x32x4f16, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_32x32x4f16>>>
  mfma_f32_32x32x4f16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_32x32x4f16Adaptor : public mfma_f32_32x32x4f16GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_32x32x4f16GenericAdaptor::mfma_f32_32x32x4f16GenericAdaptor;
  mfma_f32_32x32x4f16Adaptor(mfma_f32_32x32x4f16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_32x32x4f16 : public ::mlir::Op<mfma_f32_32x32x4f16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_32x32x4f16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_32x32x4f16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.32x32x4f16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x4f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x8bf16_1k declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_32x32x8bf16_1kGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_32x32x8bf16_1kGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_32x32x8bf16_1kGenericAdaptorBase(mfma_f32_32x32x8bf16_1k op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_32x32x8bf16_1kGenericAdaptor : public detail::mfma_f32_32x32x8bf16_1kGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_32x32x8bf16_1kGenericAdaptorBase;
public:
  mfma_f32_32x32x8bf16_1kGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_32x32x8bf16_1kGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_32x32x8bf16_1kGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_32x32x8bf16_1k, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_32x32x8bf16_1k>>>
  mfma_f32_32x32x8bf16_1kGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_32x32x8bf16_1kAdaptor : public mfma_f32_32x32x8bf16_1kGenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_32x32x8bf16_1kGenericAdaptor::mfma_f32_32x32x8bf16_1kGenericAdaptor;
  mfma_f32_32x32x8bf16_1kAdaptor(mfma_f32_32x32x8bf16_1k op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_32x32x8bf16_1k : public ::mlir::Op<mfma_f32_32x32x8bf16_1k, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_32x32x8bf16_1kAdaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_32x32x8bf16_1kGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.32x32x8bf16.1k");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x8bf16_1k)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_32x32x8f16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_32x32x8f16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_32x32x8f16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_32x32x8f16GenericAdaptorBase(mfma_f32_32x32x8f16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_32x32x8f16GenericAdaptor : public detail::mfma_f32_32x32x8f16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_32x32x8f16GenericAdaptorBase;
public:
  mfma_f32_32x32x8f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_32x32x8f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_32x32x8f16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_32x32x8f16, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_32x32x8f16>>>
  mfma_f32_32x32x8f16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_32x32x8f16Adaptor : public mfma_f32_32x32x8f16GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_32x32x8f16GenericAdaptor::mfma_f32_32x32x8f16GenericAdaptor;
  mfma_f32_32x32x8f16Adaptor(mfma_f32_32x32x8f16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_32x32x8f16 : public ::mlir::Op<mfma_f32_32x32x8f16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_32x32x8f16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_32x32x8f16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.32x32x8f16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_32x32x8f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_4x4x1f32 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_4x4x1f32GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_4x4x1f32GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_4x4x1f32GenericAdaptorBase(mfma_f32_4x4x1f32 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_4x4x1f32GenericAdaptor : public detail::mfma_f32_4x4x1f32GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_4x4x1f32GenericAdaptorBase;
public:
  mfma_f32_4x4x1f32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_4x4x1f32GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_4x4x1f32GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_4x4x1f32, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_4x4x1f32>>>
  mfma_f32_4x4x1f32GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_4x4x1f32Adaptor : public mfma_f32_4x4x1f32GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_4x4x1f32GenericAdaptor::mfma_f32_4x4x1f32GenericAdaptor;
  mfma_f32_4x4x1f32Adaptor(mfma_f32_4x4x1f32 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_4x4x1f32 : public ::mlir::Op<mfma_f32_4x4x1f32, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_4x4x1f32Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_4x4x1f32GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.4x4x1f32");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_4x4x1f32)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_4x4x2bf16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_4x4x2bf16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_4x4x2bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_4x4x2bf16GenericAdaptorBase(mfma_f32_4x4x2bf16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_4x4x2bf16GenericAdaptor : public detail::mfma_f32_4x4x2bf16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_4x4x2bf16GenericAdaptorBase;
public:
  mfma_f32_4x4x2bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_4x4x2bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_4x4x2bf16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_4x4x2bf16, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_4x4x2bf16>>>
  mfma_f32_4x4x2bf16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_4x4x2bf16Adaptor : public mfma_f32_4x4x2bf16GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_4x4x2bf16GenericAdaptor::mfma_f32_4x4x2bf16GenericAdaptor;
  mfma_f32_4x4x2bf16Adaptor(mfma_f32_4x4x2bf16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_4x4x2bf16 : public ::mlir::Op<mfma_f32_4x4x2bf16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_4x4x2bf16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_4x4x2bf16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.4x4x2bf16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_4x4x2bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_4x4x4bf16_1k declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_4x4x4bf16_1kGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_4x4x4bf16_1kGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_4x4x4bf16_1kGenericAdaptorBase(mfma_f32_4x4x4bf16_1k op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_4x4x4bf16_1kGenericAdaptor : public detail::mfma_f32_4x4x4bf16_1kGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_4x4x4bf16_1kGenericAdaptorBase;
public:
  mfma_f32_4x4x4bf16_1kGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_4x4x4bf16_1kGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_4x4x4bf16_1kGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_4x4x4bf16_1k, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_4x4x4bf16_1k>>>
  mfma_f32_4x4x4bf16_1kGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_4x4x4bf16_1kAdaptor : public mfma_f32_4x4x4bf16_1kGenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_4x4x4bf16_1kGenericAdaptor::mfma_f32_4x4x4bf16_1kGenericAdaptor;
  mfma_f32_4x4x4bf16_1kAdaptor(mfma_f32_4x4x4bf16_1k op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_4x4x4bf16_1k : public ::mlir::Op<mfma_f32_4x4x4bf16_1k, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_4x4x4bf16_1kAdaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_4x4x4bf16_1kGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.4x4x4bf16.1k");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_4x4x4bf16_1k)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f32_4x4x4f16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f32_4x4x4f16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f32_4x4x4f16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f32_4x4x4f16GenericAdaptorBase(mfma_f32_4x4x4f16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f32_4x4x4f16GenericAdaptor : public detail::mfma_f32_4x4x4f16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f32_4x4x4f16GenericAdaptorBase;
public:
  mfma_f32_4x4x4f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f32_4x4x4f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f32_4x4x4f16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f32_4x4x4f16, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f32_4x4x4f16>>>
  mfma_f32_4x4x4f16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f32_4x4x4f16Adaptor : public mfma_f32_4x4x4f16GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f32_4x4x4f16GenericAdaptor::mfma_f32_4x4x4f16GenericAdaptor;
  mfma_f32_4x4x4f16Adaptor(mfma_f32_4x4x4f16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f32_4x4x4f16 : public ::mlir::Op<mfma_f32_4x4x4f16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f32_4x4x4f16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f32_4x4x4f16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f32.4x4x4f16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f32_4x4x4f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f64_16x16x4f64 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f64_16x16x4f64GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f64_16x16x4f64GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f64_16x16x4f64GenericAdaptorBase(mfma_f64_16x16x4f64 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f64_16x16x4f64GenericAdaptor : public detail::mfma_f64_16x16x4f64GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f64_16x16x4f64GenericAdaptorBase;
public:
  mfma_f64_16x16x4f64GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f64_16x16x4f64GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f64_16x16x4f64GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f64_16x16x4f64, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f64_16x16x4f64>>>
  mfma_f64_16x16x4f64GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f64_16x16x4f64Adaptor : public mfma_f64_16x16x4f64GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f64_16x16x4f64GenericAdaptor::mfma_f64_16x16x4f64GenericAdaptor;
  mfma_f64_16x16x4f64Adaptor(mfma_f64_16x16x4f64 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f64_16x16x4f64 : public ::mlir::Op<mfma_f64_16x16x4f64, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f64_16x16x4f64Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f64_16x16x4f64GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f64.16x16x4f64");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f64_16x16x4f64)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_f64_4x4x4f64 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_f64_4x4x4f64GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_f64_4x4x4f64GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_f64_4x4x4f64GenericAdaptorBase(mfma_f64_4x4x4f64 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_f64_4x4x4f64GenericAdaptor : public detail::mfma_f64_4x4x4f64GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_f64_4x4x4f64GenericAdaptorBase;
public:
  mfma_f64_4x4x4f64GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_f64_4x4x4f64GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_f64_4x4x4f64GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_f64_4x4x4f64, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_f64_4x4x4f64>>>
  mfma_f64_4x4x4f64GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_f64_4x4x4f64Adaptor : public mfma_f64_4x4x4f64GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_f64_4x4x4f64GenericAdaptor::mfma_f64_4x4x4f64GenericAdaptor;
  mfma_f64_4x4x4f64Adaptor(mfma_f64_4x4x4f64 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_f64_4x4x4f64 : public ::mlir::Op<mfma_f64_4x4x4f64, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_f64_4x4x4f64Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_f64_4x4x4f64GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.f64.4x4x4f64");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_f64_4x4x4f64)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_16x16x16i8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_i32_16x16x16i8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_i32_16x16x16i8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_i32_16x16x16i8GenericAdaptorBase(mfma_i32_16x16x16i8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_i32_16x16x16i8GenericAdaptor : public detail::mfma_i32_16x16x16i8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_i32_16x16x16i8GenericAdaptorBase;
public:
  mfma_i32_16x16x16i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_i32_16x16x16i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_i32_16x16x16i8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_i32_16x16x16i8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_i32_16x16x16i8>>>
  mfma_i32_16x16x16i8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_i32_16x16x16i8Adaptor : public mfma_i32_16x16x16i8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_i32_16x16x16i8GenericAdaptor::mfma_i32_16x16x16i8GenericAdaptor;
  mfma_i32_16x16x16i8Adaptor(mfma_i32_16x16x16i8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_i32_16x16x16i8 : public ::mlir::Op<mfma_i32_16x16x16i8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_i32_16x16x16i8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_i32_16x16x16i8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.i32.16x16x16i8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_16x16x16i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_16x16x32_i8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_i32_16x16x32_i8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_i32_16x16x32_i8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_i32_16x16x32_i8GenericAdaptorBase(mfma_i32_16x16x32_i8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_i32_16x16x32_i8GenericAdaptor : public detail::mfma_i32_16x16x32_i8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_i32_16x16x32_i8GenericAdaptorBase;
public:
  mfma_i32_16x16x32_i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_i32_16x16x32_i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_i32_16x16x32_i8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_i32_16x16x32_i8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_i32_16x16x32_i8>>>
  mfma_i32_16x16x32_i8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_i32_16x16x32_i8Adaptor : public mfma_i32_16x16x32_i8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_i32_16x16x32_i8GenericAdaptor::mfma_i32_16x16x32_i8GenericAdaptor;
  mfma_i32_16x16x32_i8Adaptor(mfma_i32_16x16x32_i8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_i32_16x16x32_i8 : public ::mlir::Op<mfma_i32_16x16x32_i8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_i32_16x16x32_i8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_i32_16x16x32_i8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.i32.16x16x32.i8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_16x16x32_i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_16x16x4i8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_i32_16x16x4i8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_i32_16x16x4i8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_i32_16x16x4i8GenericAdaptorBase(mfma_i32_16x16x4i8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_i32_16x16x4i8GenericAdaptor : public detail::mfma_i32_16x16x4i8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_i32_16x16x4i8GenericAdaptorBase;
public:
  mfma_i32_16x16x4i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_i32_16x16x4i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_i32_16x16x4i8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_i32_16x16x4i8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_i32_16x16x4i8>>>
  mfma_i32_16x16x4i8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_i32_16x16x4i8Adaptor : public mfma_i32_16x16x4i8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_i32_16x16x4i8GenericAdaptor::mfma_i32_16x16x4i8GenericAdaptor;
  mfma_i32_16x16x4i8Adaptor(mfma_i32_16x16x4i8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_i32_16x16x4i8 : public ::mlir::Op<mfma_i32_16x16x4i8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_i32_16x16x4i8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_i32_16x16x4i8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.i32.16x16x4i8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_16x16x4i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_32x32x16_i8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_i32_32x32x16_i8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_i32_32x32x16_i8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_i32_32x32x16_i8GenericAdaptorBase(mfma_i32_32x32x16_i8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_i32_32x32x16_i8GenericAdaptor : public detail::mfma_i32_32x32x16_i8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_i32_32x32x16_i8GenericAdaptorBase;
public:
  mfma_i32_32x32x16_i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_i32_32x32x16_i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_i32_32x32x16_i8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_i32_32x32x16_i8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_i32_32x32x16_i8>>>
  mfma_i32_32x32x16_i8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_i32_32x32x16_i8Adaptor : public mfma_i32_32x32x16_i8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_i32_32x32x16_i8GenericAdaptor::mfma_i32_32x32x16_i8GenericAdaptor;
  mfma_i32_32x32x16_i8Adaptor(mfma_i32_32x32x16_i8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_i32_32x32x16_i8 : public ::mlir::Op<mfma_i32_32x32x16_i8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_i32_32x32x16_i8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_i32_32x32x16_i8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.i32.32x32x16.i8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_32x32x16_i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_32x32x4i8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_i32_32x32x4i8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_i32_32x32x4i8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_i32_32x32x4i8GenericAdaptorBase(mfma_i32_32x32x4i8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_i32_32x32x4i8GenericAdaptor : public detail::mfma_i32_32x32x4i8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_i32_32x32x4i8GenericAdaptorBase;
public:
  mfma_i32_32x32x4i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_i32_32x32x4i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_i32_32x32x4i8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_i32_32x32x4i8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_i32_32x32x4i8>>>
  mfma_i32_32x32x4i8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_i32_32x32x4i8Adaptor : public mfma_i32_32x32x4i8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_i32_32x32x4i8GenericAdaptor::mfma_i32_32x32x4i8GenericAdaptor;
  mfma_i32_32x32x4i8Adaptor(mfma_i32_32x32x4i8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_i32_32x32x4i8 : public ::mlir::Op<mfma_i32_32x32x4i8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_i32_32x32x4i8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_i32_32x32x4i8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.i32.32x32x4i8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_32x32x4i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_32x32x8i8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_i32_32x32x8i8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_i32_32x32x8i8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_i32_32x32x8i8GenericAdaptorBase(mfma_i32_32x32x8i8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_i32_32x32x8i8GenericAdaptor : public detail::mfma_i32_32x32x8i8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_i32_32x32x8i8GenericAdaptorBase;
public:
  mfma_i32_32x32x8i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_i32_32x32x8i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_i32_32x32x8i8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_i32_32x32x8i8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_i32_32x32x8i8>>>
  mfma_i32_32x32x8i8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_i32_32x32x8i8Adaptor : public mfma_i32_32x32x8i8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_i32_32x32x8i8GenericAdaptor::mfma_i32_32x32x8i8GenericAdaptor;
  mfma_i32_32x32x8i8Adaptor(mfma_i32_32x32x8i8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_i32_32x32x8i8 : public ::mlir::Op<mfma_i32_32x32x8i8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_i32_32x32x8i8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_i32_32x32x8i8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.i32.32x32x8i8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_32x32x8i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::mfma_i32_4x4x4i8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class mfma_i32_4x4x4i8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  mfma_i32_4x4x4i8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  mfma_i32_4x4x4i8GenericAdaptorBase(mfma_i32_4x4x4i8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class mfma_i32_4x4x4i8GenericAdaptor : public detail::mfma_i32_4x4x4i8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::mfma_i32_4x4x4i8GenericAdaptorBase;
public:
  mfma_i32_4x4x4i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  mfma_i32_4x4x4i8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : mfma_i32_4x4x4i8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = mfma_i32_4x4x4i8, typename = std::enable_if_t<std::is_same_v<LateInst, mfma_i32_4x4x4i8>>>
  mfma_i32_4x4x4i8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class mfma_i32_4x4x4i8Adaptor : public mfma_i32_4x4x4i8GenericAdaptor<::mlir::ValueRange> {
public:
  using mfma_i32_4x4x4i8GenericAdaptor::mfma_i32_4x4x4i8GenericAdaptor;
  mfma_i32_4x4x4i8Adaptor(mfma_i32_4x4x4i8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class mfma_i32_4x4x4i8 : public ::mlir::Op<mfma_i32_4x4x4i8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = mfma_i32_4x4x4i8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = mfma_i32_4x4x4i8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.mfma.i32.4x4x4i8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::mfma_i32_4x4x4i8)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::wmma_bf16_16x16x16_bf16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class wmma_bf16_16x16x16_bf16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  wmma_bf16_16x16x16_bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  wmma_bf16_16x16x16_bf16GenericAdaptorBase(wmma_bf16_16x16x16_bf16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class wmma_bf16_16x16x16_bf16GenericAdaptor : public detail::wmma_bf16_16x16x16_bf16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::wmma_bf16_16x16x16_bf16GenericAdaptorBase;
public:
  wmma_bf16_16x16x16_bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  wmma_bf16_16x16x16_bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : wmma_bf16_16x16x16_bf16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = wmma_bf16_16x16x16_bf16, typename = std::enable_if_t<std::is_same_v<LateInst, wmma_bf16_16x16x16_bf16>>>
  wmma_bf16_16x16x16_bf16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class wmma_bf16_16x16x16_bf16Adaptor : public wmma_bf16_16x16x16_bf16GenericAdaptor<::mlir::ValueRange> {
public:
  using wmma_bf16_16x16x16_bf16GenericAdaptor::wmma_bf16_16x16x16_bf16GenericAdaptor;
  wmma_bf16_16x16x16_bf16Adaptor(wmma_bf16_16x16x16_bf16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class wmma_bf16_16x16x16_bf16 : public ::mlir::Op<wmma_bf16_16x16x16_bf16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = wmma_bf16_16x16x16_bf16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = wmma_bf16_16x16x16_bf16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.wmma.bf16.16x16x16.bf16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::wmma_bf16_16x16x16_bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::wmma_f16_16x16x16_f16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class wmma_f16_16x16x16_f16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  wmma_f16_16x16x16_f16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  wmma_f16_16x16x16_f16GenericAdaptorBase(wmma_f16_16x16x16_f16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class wmma_f16_16x16x16_f16GenericAdaptor : public detail::wmma_f16_16x16x16_f16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::wmma_f16_16x16x16_f16GenericAdaptorBase;
public:
  wmma_f16_16x16x16_f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  wmma_f16_16x16x16_f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : wmma_f16_16x16x16_f16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = wmma_f16_16x16x16_f16, typename = std::enable_if_t<std::is_same_v<LateInst, wmma_f16_16x16x16_f16>>>
  wmma_f16_16x16x16_f16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class wmma_f16_16x16x16_f16Adaptor : public wmma_f16_16x16x16_f16GenericAdaptor<::mlir::ValueRange> {
public:
  using wmma_f16_16x16x16_f16GenericAdaptor::wmma_f16_16x16x16_f16GenericAdaptor;
  wmma_f16_16x16x16_f16Adaptor(wmma_f16_16x16x16_f16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class wmma_f16_16x16x16_f16 : public ::mlir::Op<wmma_f16_16x16x16_f16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = wmma_f16_16x16x16_f16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = wmma_f16_16x16x16_f16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.wmma.f16.16x16x16.f16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::wmma_f16_16x16x16_f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::wmma_f32_16x16x16_bf16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class wmma_f32_16x16x16_bf16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  wmma_f32_16x16x16_bf16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  wmma_f32_16x16x16_bf16GenericAdaptorBase(wmma_f32_16x16x16_bf16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class wmma_f32_16x16x16_bf16GenericAdaptor : public detail::wmma_f32_16x16x16_bf16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::wmma_f32_16x16x16_bf16GenericAdaptorBase;
public:
  wmma_f32_16x16x16_bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  wmma_f32_16x16x16_bf16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : wmma_f32_16x16x16_bf16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = wmma_f32_16x16x16_bf16, typename = std::enable_if_t<std::is_same_v<LateInst, wmma_f32_16x16x16_bf16>>>
  wmma_f32_16x16x16_bf16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class wmma_f32_16x16x16_bf16Adaptor : public wmma_f32_16x16x16_bf16GenericAdaptor<::mlir::ValueRange> {
public:
  using wmma_f32_16x16x16_bf16GenericAdaptor::wmma_f32_16x16x16_bf16GenericAdaptor;
  wmma_f32_16x16x16_bf16Adaptor(wmma_f32_16x16x16_bf16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class wmma_f32_16x16x16_bf16 : public ::mlir::Op<wmma_f32_16x16x16_bf16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = wmma_f32_16x16x16_bf16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = wmma_f32_16x16x16_bf16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.wmma.f32.16x16x16.bf16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::wmma_f32_16x16x16_bf16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::wmma_f32_16x16x16_f16 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class wmma_f32_16x16x16_f16GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  wmma_f32_16x16x16_f16GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  wmma_f32_16x16x16_f16GenericAdaptorBase(wmma_f32_16x16x16_f16 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class wmma_f32_16x16x16_f16GenericAdaptor : public detail::wmma_f32_16x16x16_f16GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::wmma_f32_16x16x16_f16GenericAdaptorBase;
public:
  wmma_f32_16x16x16_f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  wmma_f32_16x16x16_f16GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : wmma_f32_16x16x16_f16GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = wmma_f32_16x16x16_f16, typename = std::enable_if_t<std::is_same_v<LateInst, wmma_f32_16x16x16_f16>>>
  wmma_f32_16x16x16_f16GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class wmma_f32_16x16x16_f16Adaptor : public wmma_f32_16x16x16_f16GenericAdaptor<::mlir::ValueRange> {
public:
  using wmma_f32_16x16x16_f16GenericAdaptor::wmma_f32_16x16x16_f16GenericAdaptor;
  wmma_f32_16x16x16_f16Adaptor(wmma_f32_16x16x16_f16 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class wmma_f32_16x16x16_f16 : public ::mlir::Op<wmma_f32_16x16x16_f16, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = wmma_f32_16x16x16_f16Adaptor;
  template <typename RangeT>
  using GenericAdaptor = wmma_f32_16x16x16_f16GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.wmma.f32.16x16x16.f16");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::wmma_f32_16x16x16_f16)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::wmma_i32_16x16x16_iu4 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class wmma_i32_16x16x16_iu4GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  wmma_i32_16x16x16_iu4GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  wmma_i32_16x16x16_iu4GenericAdaptorBase(wmma_i32_16x16x16_iu4 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class wmma_i32_16x16x16_iu4GenericAdaptor : public detail::wmma_i32_16x16x16_iu4GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::wmma_i32_16x16x16_iu4GenericAdaptorBase;
public:
  wmma_i32_16x16x16_iu4GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  wmma_i32_16x16x16_iu4GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : wmma_i32_16x16x16_iu4GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = wmma_i32_16x16x16_iu4, typename = std::enable_if_t<std::is_same_v<LateInst, wmma_i32_16x16x16_iu4>>>
  wmma_i32_16x16x16_iu4GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class wmma_i32_16x16x16_iu4Adaptor : public wmma_i32_16x16x16_iu4GenericAdaptor<::mlir::ValueRange> {
public:
  using wmma_i32_16x16x16_iu4GenericAdaptor::wmma_i32_16x16x16_iu4GenericAdaptor;
  wmma_i32_16x16x16_iu4Adaptor(wmma_i32_16x16x16_iu4 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class wmma_i32_16x16x16_iu4 : public ::mlir::Op<wmma_i32_16x16x16_iu4, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = wmma_i32_16x16x16_iu4Adaptor;
  template <typename RangeT>
  using GenericAdaptor = wmma_i32_16x16x16_iu4GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.wmma.i32.16x16x16.iu4");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::wmma_i32_16x16x16_iu4)

namespace mlir {
namespace ROCDL {

//===----------------------------------------------------------------------===//
// ::mlir::ROCDL::wmma_i32_16x16x16_iu8 declarations
//===----------------------------------------------------------------------===//

namespace detail {
class wmma_i32_16x16x16_iu8GenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  wmma_i32_16x16x16_iu8GenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  wmma_i32_16x16x16_iu8GenericAdaptorBase(wmma_i32_16x16x16_iu8 op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class wmma_i32_16x16x16_iu8GenericAdaptor : public detail::wmma_i32_16x16x16_iu8GenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::wmma_i32_16x16x16_iu8GenericAdaptorBase;
public:
  wmma_i32_16x16x16_iu8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  wmma_i32_16x16x16_iu8GenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : wmma_i32_16x16x16_iu8GenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = wmma_i32_16x16x16_iu8, typename = std::enable_if_t<std::is_same_v<LateInst, wmma_i32_16x16x16_iu8>>>
  wmma_i32_16x16x16_iu8GenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class wmma_i32_16x16x16_iu8Adaptor : public wmma_i32_16x16x16_iu8GenericAdaptor<::mlir::ValueRange> {
public:
  using wmma_i32_16x16x16_iu8GenericAdaptor::wmma_i32_16x16x16_iu8GenericAdaptor;
  wmma_i32_16x16x16_iu8Adaptor(wmma_i32_16x16x16_iu8 op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class wmma_i32_16x16x16_iu8 : public ::mlir::Op<wmma_i32_16x16x16_iu8, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = wmma_i32_16x16x16_iu8Adaptor;
  template <typename RangeT>
  using GenericAdaptor = wmma_i32_16x16x16_iu8GenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rocdl.wmma.i32.16x16x16.iu8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::ValueRange args);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::wmma_i32_16x16x16_iu8)


#endif  // GET_OP_CLASSES

