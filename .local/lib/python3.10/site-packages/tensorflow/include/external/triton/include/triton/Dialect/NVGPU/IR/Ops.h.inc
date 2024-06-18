/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: NVGPUOps.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace triton {
namespace nvgpu {
class CGABarrierArriveOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class CGABarrierSyncOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class CGABarrierWaitOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class CanonicalWarpIdOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class ClusterArriveOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class ClusterCTAIdOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class ClusterWaitOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class FenceAsyncSharedOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class FenceMBarrierInitOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class LoadDSmemOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class MBarrierArriveOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class MBarrierInitOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class MBarrierWaitOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class NamedBarrierArriveOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class NamedBarrierWaitOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class OffsetOfStmatrixV4Op;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class OffsetOfSts64Op;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class RegAllocOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class RegDeallocOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class StoreDSmemOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class StoreMatrixOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class Sts64Op;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class TMALoadIm2colOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class TMALoadTiledOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class TMAStoreTiledOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class WGMMACommitGroupOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class WGMMAFenceOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class WGMMAOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvgpu {
class WGMMAWaitGroupOp;
} // namespace nvgpu
} // namespace triton
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::CGABarrierArriveOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CGABarrierArriveOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CGABarrierArriveOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CGABarrierArriveOpGenericAdaptorBase(CGABarrierArriveOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CGABarrierArriveOpGenericAdaptor : public detail::CGABarrierArriveOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CGABarrierArriveOpGenericAdaptorBase;
public:
  CGABarrierArriveOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CGABarrierArriveOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CGABarrierArriveOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CGABarrierArriveOp, typename = std::enable_if_t<std::is_same_v<LateInst, CGABarrierArriveOp>>>
  CGABarrierArriveOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class CGABarrierArriveOpAdaptor : public CGABarrierArriveOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CGABarrierArriveOpGenericAdaptor::CGABarrierArriveOpGenericAdaptor;
  CGABarrierArriveOpAdaptor(CGABarrierArriveOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CGABarrierArriveOp : public ::mlir::Op<CGABarrierArriveOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CGABarrierArriveOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CGABarrierArriveOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.cga_barrier_arrive");
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
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::CGABarrierArriveOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::CGABarrierSyncOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CGABarrierSyncOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CGABarrierSyncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CGABarrierSyncOpGenericAdaptorBase(CGABarrierSyncOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CGABarrierSyncOpGenericAdaptor : public detail::CGABarrierSyncOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CGABarrierSyncOpGenericAdaptorBase;
public:
  CGABarrierSyncOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CGABarrierSyncOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CGABarrierSyncOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CGABarrierSyncOp, typename = std::enable_if_t<std::is_same_v<LateInst, CGABarrierSyncOp>>>
  CGABarrierSyncOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class CGABarrierSyncOpAdaptor : public CGABarrierSyncOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CGABarrierSyncOpGenericAdaptor::CGABarrierSyncOpGenericAdaptor;
  CGABarrierSyncOpAdaptor(CGABarrierSyncOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CGABarrierSyncOp : public ::mlir::Op<CGABarrierSyncOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CGABarrierSyncOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CGABarrierSyncOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.cga_barrier_sync");
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
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::CGABarrierSyncOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::CGABarrierWaitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CGABarrierWaitOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CGABarrierWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CGABarrierWaitOpGenericAdaptorBase(CGABarrierWaitOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CGABarrierWaitOpGenericAdaptor : public detail::CGABarrierWaitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CGABarrierWaitOpGenericAdaptorBase;
public:
  CGABarrierWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CGABarrierWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CGABarrierWaitOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CGABarrierWaitOp, typename = std::enable_if_t<std::is_same_v<LateInst, CGABarrierWaitOp>>>
  CGABarrierWaitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class CGABarrierWaitOpAdaptor : public CGABarrierWaitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CGABarrierWaitOpGenericAdaptor::CGABarrierWaitOpGenericAdaptor;
  CGABarrierWaitOpAdaptor(CGABarrierWaitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CGABarrierWaitOp : public ::mlir::Op<CGABarrierWaitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CGABarrierWaitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CGABarrierWaitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.cga_barrier_wait");
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
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::CGABarrierWaitOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::CanonicalWarpIdOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CanonicalWarpIdOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CanonicalWarpIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CanonicalWarpIdOpGenericAdaptorBase(CanonicalWarpIdOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CanonicalWarpIdOpGenericAdaptor : public detail::CanonicalWarpIdOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CanonicalWarpIdOpGenericAdaptorBase;
public:
  CanonicalWarpIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CanonicalWarpIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CanonicalWarpIdOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CanonicalWarpIdOp, typename = std::enable_if_t<std::is_same_v<LateInst, CanonicalWarpIdOp>>>
  CanonicalWarpIdOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class CanonicalWarpIdOpAdaptor : public CanonicalWarpIdOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CanonicalWarpIdOpGenericAdaptor::CanonicalWarpIdOpGenericAdaptor;
  CanonicalWarpIdOpAdaptor(CanonicalWarpIdOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CanonicalWarpIdOp : public ::mlir::Op<CanonicalWarpIdOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CanonicalWarpIdOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CanonicalWarpIdOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.canonical_warp_id");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::CanonicalWarpIdOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::ClusterArriveOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ClusterArriveOpGenericAdaptorBase {
public:
  struct Properties {
    using relaxedTy = ::mlir::IntegerAttr;
    relaxedTy relaxed;

    auto getRelaxed() {
      auto &propStorage = this->relaxed;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setRelaxed(const ::mlir::IntegerAttr &propValue) {
      this->relaxed = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.relaxed == this->relaxed &&
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
  ClusterArriveOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ClusterArriveOpGenericAdaptorBase(ClusterArriveOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getRelaxedAttr();
  bool getRelaxed();
};
} // namespace detail
template <typename RangeT>
class ClusterArriveOpGenericAdaptor : public detail::ClusterArriveOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ClusterArriveOpGenericAdaptorBase;
public:
  ClusterArriveOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ClusterArriveOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ClusterArriveOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ClusterArriveOp, typename = std::enable_if_t<std::is_same_v<LateInst, ClusterArriveOp>>>
  ClusterArriveOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ClusterArriveOpAdaptor : public ClusterArriveOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ClusterArriveOpGenericAdaptor::ClusterArriveOpGenericAdaptor;
  ClusterArriveOpAdaptor(ClusterArriveOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ClusterArriveOp : public ::mlir::Op<ClusterArriveOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ClusterArriveOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ClusterArriveOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("relaxed")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getRelaxedAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getRelaxedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.cluster_arrive");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
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
  ::mlir::IntegerAttr getRelaxedAttr();
  bool getRelaxed();
  void setRelaxedAttr(::mlir::IntegerAttr attr);
  void setRelaxed(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr relaxed);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr relaxed);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, bool relaxed);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, bool relaxed);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::ClusterArriveOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::ClusterCTAIdOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ClusterCTAIdOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ClusterCTAIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ClusterCTAIdOpGenericAdaptorBase(ClusterCTAIdOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ClusterCTAIdOpGenericAdaptor : public detail::ClusterCTAIdOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ClusterCTAIdOpGenericAdaptorBase;
public:
  ClusterCTAIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ClusterCTAIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ClusterCTAIdOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ClusterCTAIdOp, typename = std::enable_if_t<std::is_same_v<LateInst, ClusterCTAIdOp>>>
  ClusterCTAIdOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ClusterCTAIdOpAdaptor : public ClusterCTAIdOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ClusterCTAIdOpGenericAdaptor::ClusterCTAIdOpGenericAdaptor;
  ClusterCTAIdOpAdaptor(ClusterCTAIdOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ClusterCTAIdOp : public ::mlir::Op<ClusterCTAIdOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ClusterCTAIdOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ClusterCTAIdOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.cluster_id");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::ClusterCTAIdOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::ClusterWaitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ClusterWaitOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ClusterWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ClusterWaitOpGenericAdaptorBase(ClusterWaitOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ClusterWaitOpGenericAdaptor : public detail::ClusterWaitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ClusterWaitOpGenericAdaptorBase;
public:
  ClusterWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ClusterWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ClusterWaitOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ClusterWaitOp, typename = std::enable_if_t<std::is_same_v<LateInst, ClusterWaitOp>>>
  ClusterWaitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ClusterWaitOpAdaptor : public ClusterWaitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ClusterWaitOpGenericAdaptor::ClusterWaitOpGenericAdaptor;
  ClusterWaitOpAdaptor(ClusterWaitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ClusterWaitOp : public ::mlir::Op<ClusterWaitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ClusterWaitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ClusterWaitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.cluster_wait");
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
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::ClusterWaitOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::FenceAsyncSharedOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class FenceAsyncSharedOpGenericAdaptorBase {
public:
  struct Properties {
    using bClusterTy = ::mlir::BoolAttr;
    bClusterTy bCluster;

    auto getBCluster() {
      auto &propStorage = this->bCluster;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setBCluster(const ::mlir::BoolAttr &propValue) {
      this->bCluster = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.bCluster == this->bCluster &&
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
  FenceAsyncSharedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  FenceAsyncSharedOpGenericAdaptorBase(FenceAsyncSharedOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::BoolAttr getBClusterAttr();
  bool getBCluster();
};
} // namespace detail
template <typename RangeT>
class FenceAsyncSharedOpGenericAdaptor : public detail::FenceAsyncSharedOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::FenceAsyncSharedOpGenericAdaptorBase;
public:
  FenceAsyncSharedOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  FenceAsyncSharedOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : FenceAsyncSharedOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = FenceAsyncSharedOp, typename = std::enable_if_t<std::is_same_v<LateInst, FenceAsyncSharedOp>>>
  FenceAsyncSharedOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class FenceAsyncSharedOpAdaptor : public FenceAsyncSharedOpGenericAdaptor<::mlir::ValueRange> {
public:
  using FenceAsyncSharedOpGenericAdaptor::FenceAsyncSharedOpGenericAdaptor;
  FenceAsyncSharedOpAdaptor(FenceAsyncSharedOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class FenceAsyncSharedOp : public ::mlir::Op<FenceAsyncSharedOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = FenceAsyncSharedOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = FenceAsyncSharedOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("bCluster")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBClusterAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBClusterAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.fence_async_shared");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
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
  ::mlir::BoolAttr getBClusterAttr();
  bool getBCluster();
  void setBClusterAttr(::mlir::BoolAttr attr);
  void setBCluster(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::BoolAttr bCluster);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::BoolAttr bCluster);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, bool bCluster);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, bool bCluster);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::FenceAsyncSharedOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::FenceMBarrierInitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class FenceMBarrierInitOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  FenceMBarrierInitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  FenceMBarrierInitOpGenericAdaptorBase(FenceMBarrierInitOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class FenceMBarrierInitOpGenericAdaptor : public detail::FenceMBarrierInitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::FenceMBarrierInitOpGenericAdaptorBase;
public:
  FenceMBarrierInitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  FenceMBarrierInitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : FenceMBarrierInitOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = FenceMBarrierInitOp, typename = std::enable_if_t<std::is_same_v<LateInst, FenceMBarrierInitOp>>>
  FenceMBarrierInitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class FenceMBarrierInitOpAdaptor : public FenceMBarrierInitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using FenceMBarrierInitOpGenericAdaptor::FenceMBarrierInitOpGenericAdaptor;
  FenceMBarrierInitOpAdaptor(FenceMBarrierInitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class FenceMBarrierInitOp : public ::mlir::Op<FenceMBarrierInitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = FenceMBarrierInitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = FenceMBarrierInitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.fence_mbarrier_init");
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
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::FenceMBarrierInitOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::LoadDSmemOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LoadDSmemOpGenericAdaptorBase {
public:
  struct Properties {
    using bitwidthTy = ::mlir::IntegerAttr;
    bitwidthTy bitwidth;

    auto getBitwidth() {
      auto &propStorage = this->bitwidth;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setBitwidth(const ::mlir::IntegerAttr &propValue) {
      this->bitwidth = propValue;
    }
    using vecTy = ::mlir::IntegerAttr;
    vecTy vec;

    auto getVec() {
      auto &propStorage = this->vec;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setVec(const ::mlir::IntegerAttr &propValue) {
      this->vec = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.bitwidth == this->bitwidth &&
        rhs.vec == this->vec &&
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
  LoadDSmemOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  LoadDSmemOpGenericAdaptorBase(LoadDSmemOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getBitwidthAttr();
  uint32_t getBitwidth();
  ::mlir::IntegerAttr getVecAttr();
  uint32_t getVec();
};
} // namespace detail
template <typename RangeT>
class LoadDSmemOpGenericAdaptor : public detail::LoadDSmemOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LoadDSmemOpGenericAdaptorBase;
public:
  LoadDSmemOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LoadDSmemOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LoadDSmemOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = LoadDSmemOp, typename = std::enable_if_t<std::is_same_v<LateInst, LoadDSmemOp>>>
  LoadDSmemOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getAddr() {
    return (*getODSOperands(0).begin());
  }

  ValueT getCtaId() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class LoadDSmemOpAdaptor : public LoadDSmemOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LoadDSmemOpGenericAdaptor::LoadDSmemOpGenericAdaptor;
  LoadDSmemOpAdaptor(LoadDSmemOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LoadDSmemOp : public ::mlir::Op<LoadDSmemOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LoadDSmemOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LoadDSmemOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("bitwidth"), ::llvm::StringRef("vec")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBitwidthAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBitwidthAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getVecAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getVecAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.load_dsmem");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getAddr();
  ::mlir::TypedValue<::mlir::IntegerType> getCtaId();
  ::mlir::OpOperand &getAddrMutable();
  ::mlir::OpOperand &getCtaIdMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getBitwidthAttr();
  uint32_t getBitwidth();
  ::mlir::IntegerAttr getVecAttr();
  uint32_t getVec();
  void setBitwidthAttr(::mlir::IntegerAttr attr);
  void setBitwidth(uint32_t attrValue);
  void setVecAttr(::mlir::IntegerAttr attr);
  void setVec(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type resultTy, Value addr, Value ctaId);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value addr, Value ctaId, unsigned bitwidth, unsigned vec);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value addr, Value ctaId, unsigned bitwidth);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value addr, ::mlir::Value ctaId, ::mlir::IntegerAttr bitwidth, ::mlir::IntegerAttr vec);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value ctaId, ::mlir::IntegerAttr bitwidth, ::mlir::IntegerAttr vec);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value addr, ::mlir::Value ctaId, uint32_t bitwidth, uint32_t vec);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value ctaId, uint32_t bitwidth, uint32_t vec);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::LoadDSmemOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::MBarrierArriveOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MBarrierArriveOpGenericAdaptorBase {
public:
  struct Properties {
    using arriveTypeTy = ::mlir::triton::nvgpu::MBarriveTypeAttr;
    arriveTypeTy arriveType;

    auto getArriveType() {
      auto &propStorage = this->arriveType;
      return ::llvm::cast<::mlir::triton::nvgpu::MBarriveTypeAttr>(propStorage);
    }
    void setArriveType(const ::mlir::triton::nvgpu::MBarriveTypeAttr &propValue) {
      this->arriveType = propValue;
    }
    using txCountTy = ::mlir::IntegerAttr;
    txCountTy txCount;

    auto getTxCount() {
      auto &propStorage = this->txCount;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setTxCount(const ::mlir::IntegerAttr &propValue) {
      this->txCount = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.arriveType == this->arriveType &&
        rhs.txCount == this->txCount &&
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
  MBarrierArriveOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  MBarrierArriveOpGenericAdaptorBase(MBarrierArriveOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::triton::nvgpu::MBarriveTypeAttr getArriveTypeAttr();
  ::mlir::triton::nvgpu::MBarriveType getArriveType();
  ::mlir::IntegerAttr getTxCountAttr();
  uint32_t getTxCount();
};
} // namespace detail
template <typename RangeT>
class MBarrierArriveOpGenericAdaptor : public detail::MBarrierArriveOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MBarrierArriveOpGenericAdaptorBase;
public:
  MBarrierArriveOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MBarrierArriveOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MBarrierArriveOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = MBarrierArriveOp, typename = std::enable_if_t<std::is_same_v<LateInst, MBarrierArriveOp>>>
  MBarrierArriveOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMbarrier() {
    return (*getODSOperands(0).begin());
  }

  ValueT getPred() {
    return (*getODSOperands(1).begin());
  }

  ValueT getCtaId() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MBarrierArriveOpAdaptor : public MBarrierArriveOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MBarrierArriveOpGenericAdaptor::MBarrierArriveOpGenericAdaptor;
  MBarrierArriveOpAdaptor(MBarrierArriveOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MBarrierArriveOp : public ::mlir::Op<MBarrierArriveOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MBarrierArriveOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MBarrierArriveOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("arriveType"), ::llvm::StringRef("txCount")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getArriveTypeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getArriveTypeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getTxCountAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getTxCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.mbarrier_arrive");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getMbarrier();
  ::mlir::TypedValue<::mlir::IntegerType> getPred();
  ::mlir::TypedValue<::mlir::IntegerType> getCtaId();
  ::mlir::OpOperand &getMbarrierMutable();
  ::mlir::OpOperand &getPredMutable();
  ::mlir::MutableOperandRange getCtaIdMutable();
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
  ::mlir::triton::nvgpu::MBarriveTypeAttr getArriveTypeAttr();
  ::mlir::triton::nvgpu::MBarriveType getArriveType();
  ::mlir::IntegerAttr getTxCountAttr();
  uint32_t getTxCount();
  void setArriveTypeAttr(::mlir::triton::nvgpu::MBarriveTypeAttr attr);
  void setArriveType(::mlir::triton::nvgpu::MBarriveType attrValue);
  void setTxCountAttr(::mlir::IntegerAttr attr);
  void setTxCount(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value mbarrier, ::mlir::Value pred, /*optional*/::mlir::Value ctaId, ::mlir::triton::nvgpu::MBarriveTypeAttr arriveType, ::mlir::IntegerAttr txCount);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mbarrier, ::mlir::Value pred, /*optional*/::mlir::Value ctaId, ::mlir::triton::nvgpu::MBarriveTypeAttr arriveType, ::mlir::IntegerAttr txCount);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value mbarrier, ::mlir::Value pred, /*optional*/::mlir::Value ctaId, ::mlir::triton::nvgpu::MBarriveType arriveType, uint32_t txCount = 0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mbarrier, ::mlir::Value pred, /*optional*/::mlir::Value ctaId, ::mlir::triton::nvgpu::MBarriveType arriveType, uint32_t txCount = 0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::MBarrierArriveOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::MBarrierInitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MBarrierInitOpGenericAdaptorBase {
public:
  struct Properties {
    using countTy = ::mlir::IntegerAttr;
    countTy count;

    auto getCount() {
      auto &propStorage = this->count;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setCount(const ::mlir::IntegerAttr &propValue) {
      this->count = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.count == this->count &&
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
  MBarrierInitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  MBarrierInitOpGenericAdaptorBase(MBarrierInitOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getCountAttr();
  uint32_t getCount();
};
} // namespace detail
template <typename RangeT>
class MBarrierInitOpGenericAdaptor : public detail::MBarrierInitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MBarrierInitOpGenericAdaptorBase;
public:
  MBarrierInitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MBarrierInitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MBarrierInitOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = MBarrierInitOp, typename = std::enable_if_t<std::is_same_v<LateInst, MBarrierInitOp>>>
  MBarrierInitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMbarrier() {
    return (*getODSOperands(0).begin());
  }

  ValueT getPred() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MBarrierInitOpAdaptor : public MBarrierInitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MBarrierInitOpGenericAdaptor::MBarrierInitOpGenericAdaptor;
  MBarrierInitOpAdaptor(MBarrierInitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MBarrierInitOp : public ::mlir::Op<MBarrierInitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MBarrierInitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MBarrierInitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("count")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getCountAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.mbarrier_init");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getMbarrier();
  ::mlir::TypedValue<::mlir::IntegerType> getPred();
  ::mlir::OpOperand &getMbarrierMutable();
  ::mlir::OpOperand &getPredMutable();
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
  ::mlir::IntegerAttr getCountAttr();
  uint32_t getCount();
  void setCountAttr(::mlir::IntegerAttr attr);
  void setCount(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value mbarrier, ::mlir::Value pred, ::mlir::IntegerAttr count);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mbarrier, ::mlir::Value pred, ::mlir::IntegerAttr count);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value mbarrier, ::mlir::Value pred, uint32_t count);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mbarrier, ::mlir::Value pred, uint32_t count);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::MBarrierInitOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::MBarrierWaitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MBarrierWaitOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MBarrierWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  MBarrierWaitOpGenericAdaptorBase(MBarrierWaitOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class MBarrierWaitOpGenericAdaptor : public detail::MBarrierWaitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MBarrierWaitOpGenericAdaptorBase;
public:
  MBarrierWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MBarrierWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MBarrierWaitOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MBarrierWaitOp, typename = std::enable_if_t<std::is_same_v<LateInst, MBarrierWaitOp>>>
  MBarrierWaitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMbarrier() {
    return (*getODSOperands(0).begin());
  }

  ValueT getPhase() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MBarrierWaitOpAdaptor : public MBarrierWaitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MBarrierWaitOpGenericAdaptor::MBarrierWaitOpGenericAdaptor;
  MBarrierWaitOpAdaptor(MBarrierWaitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MBarrierWaitOp : public ::mlir::Op<MBarrierWaitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MBarrierWaitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MBarrierWaitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.mbarrier_wait");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getMbarrier();
  ::mlir::TypedValue<::mlir::IntegerType> getPhase();
  ::mlir::OpOperand &getMbarrierMutable();
  ::mlir::OpOperand &getPhaseMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value mbarrier, ::mlir::Value phase);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mbarrier, ::mlir::Value phase);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::MBarrierWaitOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::NamedBarrierArriveOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class NamedBarrierArriveOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  NamedBarrierArriveOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  NamedBarrierArriveOpGenericAdaptorBase(NamedBarrierArriveOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class NamedBarrierArriveOpGenericAdaptor : public detail::NamedBarrierArriveOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::NamedBarrierArriveOpGenericAdaptorBase;
public:
  NamedBarrierArriveOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  NamedBarrierArriveOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : NamedBarrierArriveOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = NamedBarrierArriveOp, typename = std::enable_if_t<std::is_same_v<LateInst, NamedBarrierArriveOp>>>
  NamedBarrierArriveOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getBar() {
    return (*getODSOperands(0).begin());
  }

  ValueT getNumThreads() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class NamedBarrierArriveOpAdaptor : public NamedBarrierArriveOpGenericAdaptor<::mlir::ValueRange> {
public:
  using NamedBarrierArriveOpGenericAdaptor::NamedBarrierArriveOpGenericAdaptor;
  NamedBarrierArriveOpAdaptor(NamedBarrierArriveOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class NamedBarrierArriveOp : public ::mlir::Op<NamedBarrierArriveOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = NamedBarrierArriveOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = NamedBarrierArriveOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.bar_arrive");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getBar();
  ::mlir::TypedValue<::mlir::IntegerType> getNumThreads();
  ::mlir::OpOperand &getBarMutable();
  ::mlir::OpOperand &getNumThreadsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value bar, ::mlir::Value numThreads);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value bar, ::mlir::Value numThreads);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::NamedBarrierArriveOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::NamedBarrierWaitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class NamedBarrierWaitOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  NamedBarrierWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  NamedBarrierWaitOpGenericAdaptorBase(NamedBarrierWaitOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class NamedBarrierWaitOpGenericAdaptor : public detail::NamedBarrierWaitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::NamedBarrierWaitOpGenericAdaptorBase;
public:
  NamedBarrierWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  NamedBarrierWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : NamedBarrierWaitOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = NamedBarrierWaitOp, typename = std::enable_if_t<std::is_same_v<LateInst, NamedBarrierWaitOp>>>
  NamedBarrierWaitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getBar() {
    return (*getODSOperands(0).begin());
  }

  ValueT getNumThreads() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class NamedBarrierWaitOpAdaptor : public NamedBarrierWaitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using NamedBarrierWaitOpGenericAdaptor::NamedBarrierWaitOpGenericAdaptor;
  NamedBarrierWaitOpAdaptor(NamedBarrierWaitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class NamedBarrierWaitOp : public ::mlir::Op<NamedBarrierWaitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = NamedBarrierWaitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = NamedBarrierWaitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.bar_wait");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getBar();
  ::mlir::TypedValue<::mlir::IntegerType> getNumThreads();
  ::mlir::OpOperand &getBarMutable();
  ::mlir::OpOperand &getNumThreadsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value bar, ::mlir::Value numThreads);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value bar, ::mlir::Value numThreads);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::NamedBarrierWaitOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::OffsetOfStmatrixV4Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class OffsetOfStmatrixV4OpGenericAdaptorBase {
public:
  struct Properties {
    using leadingDimOffsetTy = ::mlir::IntegerAttr;
    leadingDimOffsetTy leadingDimOffset;

    auto getLeadingDimOffset() {
      auto &propStorage = this->leadingDimOffset;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setLeadingDimOffset(const ::mlir::IntegerAttr &propValue) {
      this->leadingDimOffset = propValue;
    }
    using rowStrideTy = ::mlir::IntegerAttr;
    rowStrideTy rowStride;

    auto getRowStride() {
      auto &propStorage = this->rowStride;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setRowStride(const ::mlir::IntegerAttr &propValue) {
      this->rowStride = propValue;
    }
    using swizzleEnabledTy = ::mlir::IntegerAttr;
    swizzleEnabledTy swizzleEnabled;

    auto getSwizzleEnabled() {
      auto &propStorage = this->swizzleEnabled;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setSwizzleEnabled(const ::mlir::IntegerAttr &propValue) {
      this->swizzleEnabled = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.leadingDimOffset == this->leadingDimOffset &&
        rhs.rowStride == this->rowStride &&
        rhs.swizzleEnabled == this->swizzleEnabled &&
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
  OffsetOfStmatrixV4OpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  OffsetOfStmatrixV4OpGenericAdaptorBase(OffsetOfStmatrixV4Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getLeadingDimOffsetAttr();
  uint32_t getLeadingDimOffset();
  ::mlir::IntegerAttr getRowStrideAttr();
  uint32_t getRowStride();
  ::mlir::IntegerAttr getSwizzleEnabledAttr();
  bool getSwizzleEnabled();
};
} // namespace detail
template <typename RangeT>
class OffsetOfStmatrixV4OpGenericAdaptor : public detail::OffsetOfStmatrixV4OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::OffsetOfStmatrixV4OpGenericAdaptorBase;
public:
  OffsetOfStmatrixV4OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  OffsetOfStmatrixV4OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : OffsetOfStmatrixV4OpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = OffsetOfStmatrixV4Op, typename = std::enable_if_t<std::is_same_v<LateInst, OffsetOfStmatrixV4Op>>>
  OffsetOfStmatrixV4OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getThreadId() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRowOfWarp() {
    return (*getODSOperands(1).begin());
  }

  ValueT getElemIdx() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class OffsetOfStmatrixV4OpAdaptor : public OffsetOfStmatrixV4OpGenericAdaptor<::mlir::ValueRange> {
public:
  using OffsetOfStmatrixV4OpGenericAdaptor::OffsetOfStmatrixV4OpGenericAdaptor;
  OffsetOfStmatrixV4OpAdaptor(OffsetOfStmatrixV4Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class OffsetOfStmatrixV4Op : public ::mlir::Op<OffsetOfStmatrixV4Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = OffsetOfStmatrixV4OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = OffsetOfStmatrixV4OpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("leadingDimOffset"), ::llvm::StringRef("rowStride"), ::llvm::StringRef("swizzleEnabled")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLeadingDimOffsetAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLeadingDimOffsetAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getRowStrideAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getRowStrideAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getSwizzleEnabledAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getSwizzleEnabledAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.offset_of_stmatrix_v4");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getThreadId();
  ::mlir::TypedValue<::mlir::IntegerType> getRowOfWarp();
  ::mlir::TypedValue<::mlir::IntegerType> getElemIdx();
  ::mlir::OpOperand &getThreadIdMutable();
  ::mlir::OpOperand &getRowOfWarpMutable();
  ::mlir::OpOperand &getElemIdxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getOffset();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getLeadingDimOffsetAttr();
  uint32_t getLeadingDimOffset();
  ::mlir::IntegerAttr getRowStrideAttr();
  uint32_t getRowStride();
  ::mlir::IntegerAttr getSwizzleEnabledAttr();
  bool getSwizzleEnabled();
  void setLeadingDimOffsetAttr(::mlir::IntegerAttr attr);
  void setLeadingDimOffset(uint32_t attrValue);
  void setRowStrideAttr(::mlir::IntegerAttr attr);
  void setRowStride(uint32_t attrValue);
  void setSwizzleEnabledAttr(::mlir::IntegerAttr attr);
  void setSwizzleEnabled(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type offset, ::mlir::Value threadId, ::mlir::Value rowOfWarp, ::mlir::Value elemIdx, ::mlir::IntegerAttr leadingDimOffset, ::mlir::IntegerAttr rowStride, ::mlir::IntegerAttr swizzleEnabled);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value threadId, ::mlir::Value rowOfWarp, ::mlir::Value elemIdx, ::mlir::IntegerAttr leadingDimOffset, ::mlir::IntegerAttr rowStride, ::mlir::IntegerAttr swizzleEnabled);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value threadId, ::mlir::Value rowOfWarp, ::mlir::Value elemIdx, ::mlir::IntegerAttr leadingDimOffset, ::mlir::IntegerAttr rowStride, ::mlir::IntegerAttr swizzleEnabled);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type offset, ::mlir::Value threadId, ::mlir::Value rowOfWarp, ::mlir::Value elemIdx, uint32_t leadingDimOffset, uint32_t rowStride, bool swizzleEnabled);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value threadId, ::mlir::Value rowOfWarp, ::mlir::Value elemIdx, uint32_t leadingDimOffset, uint32_t rowStride, bool swizzleEnabled);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value threadId, ::mlir::Value rowOfWarp, ::mlir::Value elemIdx, uint32_t leadingDimOffset, uint32_t rowStride, bool swizzleEnabled);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
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
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::OffsetOfStmatrixV4Op)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::OffsetOfSts64Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class OffsetOfSts64OpGenericAdaptorBase {
public:
  struct Properties {
    using leadingDimOffsetTy = ::mlir::IntegerAttr;
    leadingDimOffsetTy leadingDimOffset;

    auto getLeadingDimOffset() {
      auto &propStorage = this->leadingDimOffset;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setLeadingDimOffset(const ::mlir::IntegerAttr &propValue) {
      this->leadingDimOffset = propValue;
    }
    using rowStrideTy = ::mlir::IntegerAttr;
    rowStrideTy rowStride;

    auto getRowStride() {
      auto &propStorage = this->rowStride;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setRowStride(const ::mlir::IntegerAttr &propValue) {
      this->rowStride = propValue;
    }
    using swizzleEnabledTy = ::mlir::IntegerAttr;
    swizzleEnabledTy swizzleEnabled;

    auto getSwizzleEnabled() {
      auto &propStorage = this->swizzleEnabled;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setSwizzleEnabled(const ::mlir::IntegerAttr &propValue) {
      this->swizzleEnabled = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.leadingDimOffset == this->leadingDimOffset &&
        rhs.rowStride == this->rowStride &&
        rhs.swizzleEnabled == this->swizzleEnabled &&
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
  OffsetOfSts64OpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  OffsetOfSts64OpGenericAdaptorBase(OffsetOfSts64Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getLeadingDimOffsetAttr();
  uint32_t getLeadingDimOffset();
  ::mlir::IntegerAttr getRowStrideAttr();
  uint32_t getRowStride();
  ::mlir::IntegerAttr getSwizzleEnabledAttr();
  bool getSwizzleEnabled();
};
} // namespace detail
template <typename RangeT>
class OffsetOfSts64OpGenericAdaptor : public detail::OffsetOfSts64OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::OffsetOfSts64OpGenericAdaptorBase;
public:
  OffsetOfSts64OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  OffsetOfSts64OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : OffsetOfSts64OpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = OffsetOfSts64Op, typename = std::enable_if_t<std::is_same_v<LateInst, OffsetOfSts64Op>>>
  OffsetOfSts64OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getThreadId() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRowOfWarp() {
    return (*getODSOperands(1).begin());
  }

  ValueT getElemIdx() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class OffsetOfSts64OpAdaptor : public OffsetOfSts64OpGenericAdaptor<::mlir::ValueRange> {
public:
  using OffsetOfSts64OpGenericAdaptor::OffsetOfSts64OpGenericAdaptor;
  OffsetOfSts64OpAdaptor(OffsetOfSts64Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class OffsetOfSts64Op : public ::mlir::Op<OffsetOfSts64Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = OffsetOfSts64OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = OffsetOfSts64OpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("leadingDimOffset"), ::llvm::StringRef("rowStride"), ::llvm::StringRef("swizzleEnabled")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLeadingDimOffsetAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLeadingDimOffsetAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getRowStrideAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getRowStrideAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getSwizzleEnabledAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getSwizzleEnabledAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.offset_of_sts64");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getThreadId();
  ::mlir::TypedValue<::mlir::IntegerType> getRowOfWarp();
  ::mlir::TypedValue<::mlir::IntegerType> getElemIdx();
  ::mlir::OpOperand &getThreadIdMutable();
  ::mlir::OpOperand &getRowOfWarpMutable();
  ::mlir::OpOperand &getElemIdxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getOffset();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getLeadingDimOffsetAttr();
  uint32_t getLeadingDimOffset();
  ::mlir::IntegerAttr getRowStrideAttr();
  uint32_t getRowStride();
  ::mlir::IntegerAttr getSwizzleEnabledAttr();
  bool getSwizzleEnabled();
  void setLeadingDimOffsetAttr(::mlir::IntegerAttr attr);
  void setLeadingDimOffset(uint32_t attrValue);
  void setRowStrideAttr(::mlir::IntegerAttr attr);
  void setRowStride(uint32_t attrValue);
  void setSwizzleEnabledAttr(::mlir::IntegerAttr attr);
  void setSwizzleEnabled(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type offset, ::mlir::Value threadId, ::mlir::Value rowOfWarp, ::mlir::Value elemIdx, ::mlir::IntegerAttr leadingDimOffset, ::mlir::IntegerAttr rowStride, ::mlir::IntegerAttr swizzleEnabled);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value threadId, ::mlir::Value rowOfWarp, ::mlir::Value elemIdx, ::mlir::IntegerAttr leadingDimOffset, ::mlir::IntegerAttr rowStride, ::mlir::IntegerAttr swizzleEnabled);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value threadId, ::mlir::Value rowOfWarp, ::mlir::Value elemIdx, ::mlir::IntegerAttr leadingDimOffset, ::mlir::IntegerAttr rowStride, ::mlir::IntegerAttr swizzleEnabled);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type offset, ::mlir::Value threadId, ::mlir::Value rowOfWarp, ::mlir::Value elemIdx, uint32_t leadingDimOffset, uint32_t rowStride, bool swizzleEnabled);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value threadId, ::mlir::Value rowOfWarp, ::mlir::Value elemIdx, uint32_t leadingDimOffset, uint32_t rowStride, bool swizzleEnabled);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value threadId, ::mlir::Value rowOfWarp, ::mlir::Value elemIdx, uint32_t leadingDimOffset, uint32_t rowStride, bool swizzleEnabled);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
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
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::OffsetOfSts64Op)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::RegAllocOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RegAllocOpGenericAdaptorBase {
public:
  struct Properties {
    using regCountTy = ::mlir::IntegerAttr;
    regCountTy regCount;

    auto getRegCount() {
      auto &propStorage = this->regCount;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setRegCount(const ::mlir::IntegerAttr &propValue) {
      this->regCount = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.regCount == this->regCount &&
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
  RegAllocOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RegAllocOpGenericAdaptorBase(RegAllocOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getRegCountAttr();
  uint32_t getRegCount();
};
} // namespace detail
template <typename RangeT>
class RegAllocOpGenericAdaptor : public detail::RegAllocOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RegAllocOpGenericAdaptorBase;
public:
  RegAllocOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RegAllocOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RegAllocOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RegAllocOp, typename = std::enable_if_t<std::is_same_v<LateInst, RegAllocOp>>>
  RegAllocOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class RegAllocOpAdaptor : public RegAllocOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RegAllocOpGenericAdaptor::RegAllocOpGenericAdaptor;
  RegAllocOpAdaptor(RegAllocOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RegAllocOp : public ::mlir::Op<RegAllocOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RegAllocOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RegAllocOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("regCount")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getRegCountAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getRegCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.reg_alloc");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
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
  ::mlir::IntegerAttr getRegCountAttr();
  uint32_t getRegCount();
  void setRegCountAttr(::mlir::IntegerAttr attr);
  void setRegCount(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr regCount);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr regCount);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t regCount);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t regCount);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::RegAllocOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::RegDeallocOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RegDeallocOpGenericAdaptorBase {
public:
  struct Properties {
    using regCountTy = ::mlir::IntegerAttr;
    regCountTy regCount;

    auto getRegCount() {
      auto &propStorage = this->regCount;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setRegCount(const ::mlir::IntegerAttr &propValue) {
      this->regCount = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.regCount == this->regCount &&
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
  RegDeallocOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RegDeallocOpGenericAdaptorBase(RegDeallocOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getRegCountAttr();
  uint32_t getRegCount();
};
} // namespace detail
template <typename RangeT>
class RegDeallocOpGenericAdaptor : public detail::RegDeallocOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RegDeallocOpGenericAdaptorBase;
public:
  RegDeallocOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RegDeallocOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RegDeallocOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RegDeallocOp, typename = std::enable_if_t<std::is_same_v<LateInst, RegDeallocOp>>>
  RegDeallocOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class RegDeallocOpAdaptor : public RegDeallocOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RegDeallocOpGenericAdaptor::RegDeallocOpGenericAdaptor;
  RegDeallocOpAdaptor(RegDeallocOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RegDeallocOp : public ::mlir::Op<RegDeallocOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RegDeallocOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RegDeallocOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("regCount")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getRegCountAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getRegCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.reg_dealloc");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
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
  ::mlir::IntegerAttr getRegCountAttr();
  uint32_t getRegCount();
  void setRegCountAttr(::mlir::IntegerAttr attr);
  void setRegCount(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr regCount);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr regCount);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t regCount);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t regCount);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::RegDeallocOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::StoreDSmemOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class StoreDSmemOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  StoreDSmemOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  StoreDSmemOpGenericAdaptorBase(StoreDSmemOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class StoreDSmemOpGenericAdaptor : public detail::StoreDSmemOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::StoreDSmemOpGenericAdaptorBase;
public:
  StoreDSmemOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  StoreDSmemOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : StoreDSmemOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = StoreDSmemOp, typename = std::enable_if_t<std::is_same_v<LateInst, StoreDSmemOp>>>
  StoreDSmemOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getAddr() {
    return (*getODSOperands(0).begin());
  }

  ValueT getCtaId() {
    return (*getODSOperands(1).begin());
  }

  RangeT getValues() {
    return getODSOperands(2);
  }

  ValueT getPred() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class StoreDSmemOpAdaptor : public StoreDSmemOpGenericAdaptor<::mlir::ValueRange> {
public:
  using StoreDSmemOpGenericAdaptor::StoreDSmemOpGenericAdaptor;
  StoreDSmemOpAdaptor(StoreDSmemOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class StoreDSmemOp : public ::mlir::Op<StoreDSmemOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = StoreDSmemOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = StoreDSmemOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.store_dsmem");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getAddr();
  ::mlir::TypedValue<::mlir::IntegerType> getCtaId();
  ::mlir::Operation::operand_range getValues();
  ::mlir::TypedValue<::mlir::IntegerType> getPred();
  ::mlir::OpOperand &getAddrMutable();
  ::mlir::OpOperand &getCtaIdMutable();
  ::mlir::MutableOperandRange getValuesMutable();
  ::mlir::OpOperand &getPredMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value addr, Value ctaId, Value value, Value pred);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr, ::mlir::Value ctaId, ::mlir::ValueRange values, ::mlir::Value pred);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::Value ctaId, ::mlir::ValueRange values, ::mlir::Value pred);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  unsigned getBitwidth();
  unsigned getVec();
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::StoreDSmemOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::StoreMatrixOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class StoreMatrixOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  StoreMatrixOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  StoreMatrixOpGenericAdaptorBase(StoreMatrixOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class StoreMatrixOpGenericAdaptor : public detail::StoreMatrixOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::StoreMatrixOpGenericAdaptorBase;
public:
  StoreMatrixOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  StoreMatrixOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : StoreMatrixOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = StoreMatrixOp, typename = std::enable_if_t<std::is_same_v<LateInst, StoreMatrixOp>>>
  StoreMatrixOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getAddr() {
    return (*getODSOperands(0).begin());
  }

  RangeT getDatas() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class StoreMatrixOpAdaptor : public StoreMatrixOpGenericAdaptor<::mlir::ValueRange> {
public:
  using StoreMatrixOpGenericAdaptor::StoreMatrixOpGenericAdaptor;
  StoreMatrixOpAdaptor(StoreMatrixOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class StoreMatrixOp : public ::mlir::Op<StoreMatrixOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = StoreMatrixOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = StoreMatrixOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.stmatrix");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getAddr();
  ::mlir::Operation::operand_range getDatas();
  ::mlir::OpOperand &getAddrMutable();
  ::mlir::MutableOperandRange getDatasMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value addr, ::mlir::ValueRange datas);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value addr, ::mlir::ValueRange datas);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::StoreMatrixOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::Sts64Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class Sts64OpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  Sts64OpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  Sts64OpGenericAdaptorBase(Sts64Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class Sts64OpGenericAdaptor : public detail::Sts64OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::Sts64OpGenericAdaptorBase;
public:
  Sts64OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  Sts64OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : Sts64OpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = Sts64Op, typename = std::enable_if_t<std::is_same_v<LateInst, Sts64Op>>>
  Sts64OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOffset() {
    return (*getODSOperands(0).begin());
  }

  ValueT getD0() {
    return (*getODSOperands(1).begin());
  }

  ValueT getD1() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class Sts64OpAdaptor : public Sts64OpGenericAdaptor<::mlir::ValueRange> {
public:
  using Sts64OpGenericAdaptor::Sts64OpGenericAdaptor;
  Sts64OpAdaptor(Sts64Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class Sts64Op : public ::mlir::Op<Sts64Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = Sts64OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = Sts64OpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.sts64");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getOffset();
  ::mlir::Value getD0();
  ::mlir::Value getD1();
  ::mlir::OpOperand &getOffsetMutable();
  ::mlir::OpOperand &getD0Mutable();
  ::mlir::OpOperand &getD1Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value offset, ::mlir::Value d0, ::mlir::Value d1);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value offset, ::mlir::Value d0, ::mlir::Value d1);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::Sts64Op)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::TMALoadIm2colOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TMALoadIm2colOpGenericAdaptorBase {
public:
  struct Properties {
    using mcastMaskTy = ::mlir::IntegerAttr;
    mcastMaskTy mcastMask;

    auto getMcastMask() {
      auto &propStorage = this->mcastMask;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setMcastMask(const ::mlir::IntegerAttr &propValue) {
      this->mcastMask = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.mcastMask == this->mcastMask &&
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
  TMALoadIm2colOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  TMALoadIm2colOpGenericAdaptorBase(TMALoadIm2colOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getMcastMaskAttr();
  uint16_t getMcastMask();
};
} // namespace detail
template <typename RangeT>
class TMALoadIm2colOpGenericAdaptor : public detail::TMALoadIm2colOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TMALoadIm2colOpGenericAdaptorBase;
public:
  TMALoadIm2colOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TMALoadIm2colOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TMALoadIm2colOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = TMALoadIm2colOp, typename = std::enable_if_t<std::is_same_v<LateInst, TMALoadIm2colOp>>>
  TMALoadIm2colOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getDst() {
    return (*getODSOperands(0).begin());
  }

  ValueT getMbarrier() {
    return (*getODSOperands(1).begin());
  }

  ValueT getTmaDesc() {
    return (*getODSOperands(2).begin());
  }

  ValueT getL2Desc() {
    return (*getODSOperands(3).begin());
  }

  ValueT getIm2colOffsets() {
    return (*getODSOperands(4).begin());
  }

  ValueT getPred() {
    return (*getODSOperands(5).begin());
  }

  RangeT getCoords() {
    return getODSOperands(6);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TMALoadIm2colOpAdaptor : public TMALoadIm2colOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TMALoadIm2colOpGenericAdaptor::TMALoadIm2colOpGenericAdaptor;
  TMALoadIm2colOpAdaptor(TMALoadIm2colOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TMALoadIm2colOp : public ::mlir::Op<TMALoadIm2colOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<6>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TMALoadIm2colOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TMALoadIm2colOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mcastMask")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMcastMaskAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMcastMaskAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.tma_load_im2col");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getDst();
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getMbarrier();
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getTmaDesc();
  ::mlir::TypedValue<::mlir::IntegerType> getL2Desc();
  ::mlir::Value getIm2colOffsets();
  ::mlir::TypedValue<::mlir::IntegerType> getPred();
  ::mlir::Operation::operand_range getCoords();
  ::mlir::OpOperand &getDstMutable();
  ::mlir::OpOperand &getMbarrierMutable();
  ::mlir::OpOperand &getTmaDescMutable();
  ::mlir::OpOperand &getL2DescMutable();
  ::mlir::OpOperand &getIm2colOffsetsMutable();
  ::mlir::OpOperand &getPredMutable();
  ::mlir::MutableOperandRange getCoordsMutable();
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
  ::mlir::IntegerAttr getMcastMaskAttr();
  uint16_t getMcastMask();
  void setMcastMaskAttr(::mlir::IntegerAttr attr);
  void setMcastMask(uint16_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value dst, ::mlir::Value mbarrier, ::mlir::Value tmaDesc, ::mlir::Value l2Desc, ::mlir::Value im2colOffsets, ::mlir::Value pred, ::mlir::ValueRange coords, ::mlir::IntegerAttr mcastMask);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value dst, ::mlir::Value mbarrier, ::mlir::Value tmaDesc, ::mlir::Value l2Desc, ::mlir::Value im2colOffsets, ::mlir::Value pred, ::mlir::ValueRange coords, ::mlir::IntegerAttr mcastMask);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value dst, ::mlir::Value mbarrier, ::mlir::Value tmaDesc, ::mlir::Value l2Desc, ::mlir::Value im2colOffsets, ::mlir::Value pred, ::mlir::ValueRange coords, uint16_t mcastMask);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value dst, ::mlir::Value mbarrier, ::mlir::Value tmaDesc, ::mlir::Value l2Desc, ::mlir::Value im2colOffsets, ::mlir::Value pred, ::mlir::ValueRange coords, uint16_t mcastMask);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::TMALoadIm2colOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::TMALoadTiledOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TMALoadTiledOpGenericAdaptorBase {
public:
  struct Properties {
    using operandSegmentSizesTy = std::array<int32_t, 7>;
    operandSegmentSizesTy operandSegmentSizes;
    ::llvm::ArrayRef<int32_t> getOperandSegmentSizes() {
      auto &propStorage = this->operandSegmentSizes;
      return propStorage;
    }
    void setOperandSegmentSizes(const ::llvm::ArrayRef<int32_t> &propValue) {
      auto &propStorage = this->operandSegmentSizes;
      ::llvm::copy(propValue, propStorage.begin());
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.operandSegmentSizes == this->operandSegmentSizes &&
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
  TMALoadTiledOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  TMALoadTiledOpGenericAdaptorBase(TMALoadTiledOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class TMALoadTiledOpGenericAdaptor : public detail::TMALoadTiledOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TMALoadTiledOpGenericAdaptorBase;
public:
  TMALoadTiledOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TMALoadTiledOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TMALoadTiledOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = TMALoadTiledOp, typename = std::enable_if_t<std::is_same_v<LateInst, TMALoadTiledOp>>>
  TMALoadTiledOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getDst() {
    return (*getODSOperands(0).begin());
  }

  ValueT getMbarrier() {
    return (*getODSOperands(1).begin());
  }

  ValueT getTmaDesc() {
    return (*getODSOperands(2).begin());
  }

  ValueT getL2Desc() {
    return (*getODSOperands(3).begin());
  }

  ValueT getPred() {
    return (*getODSOperands(4).begin());
  }

  RangeT getCoords() {
    return getODSOperands(5);
  }

  ValueT getMcastMask() {
    auto operands = getODSOperands(6);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TMALoadTiledOpAdaptor : public TMALoadTiledOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TMALoadTiledOpGenericAdaptor::TMALoadTiledOpGenericAdaptor;
  TMALoadTiledOpAdaptor(TMALoadTiledOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TMALoadTiledOp : public ::mlir::Op<TMALoadTiledOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<5>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TMALoadTiledOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TMALoadTiledOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.tma_load_tiled");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getDst();
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getMbarrier();
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getTmaDesc();
  ::mlir::TypedValue<::mlir::IntegerType> getL2Desc();
  ::mlir::TypedValue<::mlir::IntegerType> getPred();
  ::mlir::Operation::operand_range getCoords();
  ::mlir::TypedValue<::mlir::IntegerType> getMcastMask();
  ::mlir::OpOperand &getDstMutable();
  ::mlir::OpOperand &getMbarrierMutable();
  ::mlir::OpOperand &getTmaDescMutable();
  ::mlir::OpOperand &getL2DescMutable();
  ::mlir::OpOperand &getPredMutable();
  ::mlir::MutableOperandRange getCoordsMutable();
  ::mlir::MutableOperandRange getMcastMaskMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value dst, ::mlir::Value mbarrier, ::mlir::Value tmaDesc, ::mlir::Value l2Desc, ::mlir::Value pred, ::mlir::ValueRange coords, /*optional*/::mlir::Value mcastMask);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value dst, ::mlir::Value mbarrier, ::mlir::Value tmaDesc, ::mlir::Value l2Desc, ::mlir::Value pred, ::mlir::ValueRange coords, /*optional*/::mlir::Value mcastMask);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    return {};
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::TMALoadTiledOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::TMAStoreTiledOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TMAStoreTiledOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  TMAStoreTiledOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  TMAStoreTiledOpGenericAdaptorBase(TMAStoreTiledOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class TMAStoreTiledOpGenericAdaptor : public detail::TMAStoreTiledOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TMAStoreTiledOpGenericAdaptorBase;
public:
  TMAStoreTiledOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TMAStoreTiledOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TMAStoreTiledOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = TMAStoreTiledOp, typename = std::enable_if_t<std::is_same_v<LateInst, TMAStoreTiledOp>>>
  TMAStoreTiledOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTmaDesc() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc() {
    return (*getODSOperands(1).begin());
  }

  ValueT getPred() {
    return (*getODSOperands(2).begin());
  }

  RangeT getCoords() {
    return getODSOperands(3);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TMAStoreTiledOpAdaptor : public TMAStoreTiledOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TMAStoreTiledOpGenericAdaptor::TMAStoreTiledOpGenericAdaptor;
  TMAStoreTiledOpAdaptor(TMAStoreTiledOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TMAStoreTiledOp : public ::mlir::Op<TMAStoreTiledOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TMAStoreTiledOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TMAStoreTiledOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.tma_store_tiled");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getTmaDesc();
  ::mlir::TypedValue<::mlir::LLVM::LLVMPointerType> getSrc();
  ::mlir::TypedValue<::mlir::IntegerType> getPred();
  ::mlir::Operation::operand_range getCoords();
  ::mlir::OpOperand &getTmaDescMutable();
  ::mlir::OpOperand &getSrcMutable();
  ::mlir::OpOperand &getPredMutable();
  ::mlir::MutableOperandRange getCoordsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tmaDesc, ::mlir::Value src, ::mlir::Value pred, ::mlir::ValueRange coords);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tmaDesc, ::mlir::Value src, ::mlir::Value pred, ::mlir::ValueRange coords);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::TMAStoreTiledOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::WGMMACommitGroupOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class WGMMACommitGroupOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  WGMMACommitGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  WGMMACommitGroupOpGenericAdaptorBase(WGMMACommitGroupOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class WGMMACommitGroupOpGenericAdaptor : public detail::WGMMACommitGroupOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::WGMMACommitGroupOpGenericAdaptorBase;
public:
  WGMMACommitGroupOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  WGMMACommitGroupOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : WGMMACommitGroupOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = WGMMACommitGroupOp, typename = std::enable_if_t<std::is_same_v<LateInst, WGMMACommitGroupOp>>>
  WGMMACommitGroupOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class WGMMACommitGroupOpAdaptor : public WGMMACommitGroupOpGenericAdaptor<::mlir::ValueRange> {
public:
  using WGMMACommitGroupOpGenericAdaptor::WGMMACommitGroupOpGenericAdaptor;
  WGMMACommitGroupOpAdaptor(WGMMACommitGroupOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class WGMMACommitGroupOp : public ::mlir::Op<WGMMACommitGroupOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = WGMMACommitGroupOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = WGMMACommitGroupOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.wgmma_commit_group");
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
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::WGMMACommitGroupOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::WGMMAFenceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class WGMMAFenceOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  WGMMAFenceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  WGMMAFenceOpGenericAdaptorBase(WGMMAFenceOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class WGMMAFenceOpGenericAdaptor : public detail::WGMMAFenceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::WGMMAFenceOpGenericAdaptorBase;
public:
  WGMMAFenceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  WGMMAFenceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : WGMMAFenceOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = WGMMAFenceOp, typename = std::enable_if_t<std::is_same_v<LateInst, WGMMAFenceOp>>>
  WGMMAFenceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class WGMMAFenceOpAdaptor : public WGMMAFenceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using WGMMAFenceOpGenericAdaptor::WGMMAFenceOpGenericAdaptor;
  WGMMAFenceOpAdaptor(WGMMAFenceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class WGMMAFenceOp : public ::mlir::Op<WGMMAFenceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = WGMMAFenceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = WGMMAFenceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.wgmma_fence");
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
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::WGMMAFenceOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::WGMMAOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class WGMMAOpGenericAdaptorBase {
public:
  struct Properties {
    using eltTypeATy = ::mlir::triton::nvgpu::WGMMAEltTypeAttr;
    eltTypeATy eltTypeA;

    auto getEltTypeA() {
      auto &propStorage = this->eltTypeA;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(propStorage);
    }
    void setEltTypeA(const ::mlir::triton::nvgpu::WGMMAEltTypeAttr &propValue) {
      this->eltTypeA = propValue;
    }
    using eltTypeBTy = ::mlir::triton::nvgpu::WGMMAEltTypeAttr;
    eltTypeBTy eltTypeB;

    auto getEltTypeB() {
      auto &propStorage = this->eltTypeB;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(propStorage);
    }
    void setEltTypeB(const ::mlir::triton::nvgpu::WGMMAEltTypeAttr &propValue) {
      this->eltTypeB = propValue;
    }
    using eltTypeCTy = ::mlir::triton::nvgpu::WGMMAEltTypeAttr;
    eltTypeCTy eltTypeC;

    auto getEltTypeC() {
      auto &propStorage = this->eltTypeC;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMAEltTypeAttr>(propStorage);
    }
    void setEltTypeC(const ::mlir::triton::nvgpu::WGMMAEltTypeAttr &propValue) {
      this->eltTypeC = propValue;
    }
    using kTy = ::mlir::IntegerAttr;
    kTy k;

    auto getK() {
      auto &propStorage = this->k;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setK(const ::mlir::IntegerAttr &propValue) {
      this->k = propValue;
    }
    using layoutATy = ::mlir::triton::nvgpu::WGMMALayoutAttr;
    layoutATy layoutA;

    auto getLayoutA() {
      auto &propStorage = this->layoutA;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(propStorage);
    }
    void setLayoutA(const ::mlir::triton::nvgpu::WGMMALayoutAttr &propValue) {
      this->layoutA = propValue;
    }
    using layoutBTy = ::mlir::triton::nvgpu::WGMMALayoutAttr;
    layoutBTy layoutB;

    auto getLayoutB() {
      auto &propStorage = this->layoutB;
      return ::llvm::cast<::mlir::triton::nvgpu::WGMMALayoutAttr>(propStorage);
    }
    void setLayoutB(const ::mlir::triton::nvgpu::WGMMALayoutAttr &propValue) {
      this->layoutB = propValue;
    }
    using mTy = ::mlir::IntegerAttr;
    mTy m;

    auto getM() {
      auto &propStorage = this->m;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setM(const ::mlir::IntegerAttr &propValue) {
      this->m = propValue;
    }
    using nTy = ::mlir::IntegerAttr;
    nTy n;

    auto getN() {
      auto &propStorage = this->n;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setN(const ::mlir::IntegerAttr &propValue) {
      this->n = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.eltTypeA == this->eltTypeA &&
        rhs.eltTypeB == this->eltTypeB &&
        rhs.eltTypeC == this->eltTypeC &&
        rhs.k == this->k &&
        rhs.layoutA == this->layoutA &&
        rhs.layoutB == this->layoutB &&
        rhs.m == this->m &&
        rhs.n == this->n &&
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
  WGMMAOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  WGMMAOpGenericAdaptorBase(WGMMAOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getMAttr();
  uint32_t getM();
  ::mlir::IntegerAttr getNAttr();
  uint32_t getN();
  ::mlir::IntegerAttr getKAttr();
  uint32_t getK();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeCAttr();
  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeC();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeAAttr();
  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeA();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeBAttr();
  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeB();
  ::mlir::triton::nvgpu::WGMMALayoutAttr getLayoutAAttr();
  ::mlir::triton::nvgpu::WGMMALayout getLayoutA();
  ::mlir::triton::nvgpu::WGMMALayoutAttr getLayoutBAttr();
  ::mlir::triton::nvgpu::WGMMALayout getLayoutB();
};
} // namespace detail
template <typename RangeT>
class WGMMAOpGenericAdaptor : public detail::WGMMAOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::WGMMAOpGenericAdaptorBase;
public:
  WGMMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  WGMMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : WGMMAOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = WGMMAOp, typename = std::enable_if_t<std::is_same_v<LateInst, WGMMAOp>>>
  WGMMAOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOpA() {
    return (*getODSOperands(0).begin());
  }

  ValueT getOpB() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOpC() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class WGMMAOpAdaptor : public WGMMAOpGenericAdaptor<::mlir::ValueRange> {
public:
  using WGMMAOpGenericAdaptor::WGMMAOpGenericAdaptor;
  WGMMAOpAdaptor(WGMMAOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class WGMMAOp : public ::mlir::Op<WGMMAOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = WGMMAOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = WGMMAOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("eltTypeA"), ::llvm::StringRef("eltTypeB"), ::llvm::StringRef("eltTypeC"), ::llvm::StringRef("k"), ::llvm::StringRef("layoutA"), ::llvm::StringRef("layoutB"), ::llvm::StringRef("m"), ::llvm::StringRef("n")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getEltTypeAAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getEltTypeAAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getEltTypeBAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getEltTypeBAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getEltTypeCAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getEltTypeCAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getKAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getKAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getLayoutAAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getLayoutAAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getLayoutBAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getLayoutBAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getMAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getMAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getNAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getNAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.wgmma");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getOpA();
  ::mlir::Value getOpB();
  ::mlir::Value getOpC();
  ::mlir::OpOperand &getOpAMutable();
  ::mlir::OpOperand &getOpBMutable();
  ::mlir::MutableOperandRange getOpCMutable();
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
  ::mlir::IntegerAttr getMAttr();
  uint32_t getM();
  ::mlir::IntegerAttr getNAttr();
  uint32_t getN();
  ::mlir::IntegerAttr getKAttr();
  uint32_t getK();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeCAttr();
  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeC();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeAAttr();
  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeA();
  ::mlir::triton::nvgpu::WGMMAEltTypeAttr getEltTypeBAttr();
  ::mlir::triton::nvgpu::WGMMAEltType getEltTypeB();
  ::mlir::triton::nvgpu::WGMMALayoutAttr getLayoutAAttr();
  ::mlir::triton::nvgpu::WGMMALayout getLayoutA();
  ::mlir::triton::nvgpu::WGMMALayoutAttr getLayoutBAttr();
  ::mlir::triton::nvgpu::WGMMALayout getLayoutB();
  void setMAttr(::mlir::IntegerAttr attr);
  void setM(uint32_t attrValue);
  void setNAttr(::mlir::IntegerAttr attr);
  void setN(uint32_t attrValue);
  void setKAttr(::mlir::IntegerAttr attr);
  void setK(uint32_t attrValue);
  void setEltTypeCAttr(::mlir::triton::nvgpu::WGMMAEltTypeAttr attr);
  void setEltTypeC(::mlir::triton::nvgpu::WGMMAEltType attrValue);
  void setEltTypeAAttr(::mlir::triton::nvgpu::WGMMAEltTypeAttr attr);
  void setEltTypeA(::mlir::triton::nvgpu::WGMMAEltType attrValue);
  void setEltTypeBAttr(::mlir::triton::nvgpu::WGMMAEltTypeAttr attr);
  void setEltTypeB(::mlir::triton::nvgpu::WGMMAEltType attrValue);
  void setLayoutAAttr(::mlir::triton::nvgpu::WGMMALayoutAttr attr);
  void setLayoutA(::mlir::triton::nvgpu::WGMMALayout attrValue);
  void setLayoutBAttr(::mlir::triton::nvgpu::WGMMALayoutAttr attr);
  void setLayoutB(::mlir::triton::nvgpu::WGMMALayout attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value opA, ::mlir::Value opB, /*optional*/::mlir::Value opC, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeC, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeA, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeB, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutA, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutB);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value opA, ::mlir::Value opB, /*optional*/::mlir::Value opC, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeC, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeA, ::mlir::triton::nvgpu::WGMMAEltTypeAttr eltTypeB, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutA, ::mlir::triton::nvgpu::WGMMALayoutAttr layoutB);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value opA, ::mlir::Value opB, /*optional*/::mlir::Value opC, uint32_t m, uint32_t n, uint32_t k, ::mlir::triton::nvgpu::WGMMAEltType eltTypeC, ::mlir::triton::nvgpu::WGMMAEltType eltTypeA, ::mlir::triton::nvgpu::WGMMAEltType eltTypeB, ::mlir::triton::nvgpu::WGMMALayout layoutA, ::mlir::triton::nvgpu::WGMMALayout layoutB);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value opA, ::mlir::Value opB, /*optional*/::mlir::Value opC, uint32_t m, uint32_t n, uint32_t k, ::mlir::triton::nvgpu::WGMMAEltType eltTypeC, ::mlir::triton::nvgpu::WGMMAEltType eltTypeA, ::mlir::triton::nvgpu::WGMMAEltType eltTypeB, ::mlir::triton::nvgpu::WGMMALayout layoutA, ::mlir::triton::nvgpu::WGMMALayout layoutB);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 8 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::WGMMAOp)

namespace mlir {
namespace triton {
namespace nvgpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvgpu::WGMMAWaitGroupOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class WGMMAWaitGroupOpGenericAdaptorBase {
public:
  struct Properties {
    using pendingsTy = ::mlir::IntegerAttr;
    pendingsTy pendings;

    auto getPendings() {
      auto &propStorage = this->pendings;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setPendings(const ::mlir::IntegerAttr &propValue) {
      this->pendings = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.pendings == this->pendings &&
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
  WGMMAWaitGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  WGMMAWaitGroupOpGenericAdaptorBase(WGMMAWaitGroupOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getPendingsAttr();
  uint32_t getPendings();
};
} // namespace detail
template <typename RangeT>
class WGMMAWaitGroupOpGenericAdaptor : public detail::WGMMAWaitGroupOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::WGMMAWaitGroupOpGenericAdaptorBase;
public:
  WGMMAWaitGroupOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  WGMMAWaitGroupOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : WGMMAWaitGroupOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = WGMMAWaitGroupOp, typename = std::enable_if_t<std::is_same_v<LateInst, WGMMAWaitGroupOp>>>
  WGMMAWaitGroupOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class WGMMAWaitGroupOpAdaptor : public WGMMAWaitGroupOpGenericAdaptor<::mlir::ValueRange> {
public:
  using WGMMAWaitGroupOpGenericAdaptor::WGMMAWaitGroupOpGenericAdaptor;
  WGMMAWaitGroupOpAdaptor(WGMMAWaitGroupOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class WGMMAWaitGroupOp : public ::mlir::Op<WGMMAWaitGroupOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = WGMMAWaitGroupOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = WGMMAWaitGroupOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("pendings")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getPendingsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getPendingsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("nvgpu.wgmma_wait_group");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getInput();
  ::mlir::OpOperand &getInputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getOutput();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getPendingsAttr();
  uint32_t getPendings();
  void setPendingsAttr(::mlir::IntegerAttr attr);
  void setPendings(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, ::mlir::IntegerAttr pendings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::IntegerAttr pendings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::IntegerAttr pendings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input, uint32_t pendings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, uint32_t pendings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, uint32_t pendings);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvgpu::WGMMAWaitGroupOp)


#endif  // GET_OP_CLASSES

