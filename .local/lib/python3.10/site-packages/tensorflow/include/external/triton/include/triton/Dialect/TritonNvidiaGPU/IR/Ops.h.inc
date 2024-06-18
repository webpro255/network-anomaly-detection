/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: TritonNvidiaGPUOps.td                                                *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class AllocMBarrierOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class ClusterArriveOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class ClusterWaitOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class ConsumerReleaseOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class ConsumerWaitOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class CreateMutexOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class CreateTokenOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class DotAsyncOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class DotWaitOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class ExtractMBarrierOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class FenceAsyncSharedOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class GetAgentIdOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class GetCanonicalWarpId;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class GetClusterCTAIdOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class GetMutexRoleIdOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class GetThreadIdOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class InsertSliceTMAOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class LockOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class MBarrierArriveOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class MBarrierWaitOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class NamedBarrierArriveOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class NamedBarrierWaitOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class ProducerAcquireOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class ProducerCommitOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class RegAllocOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class RegDeallocOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class StoreAsyncTMAOp;
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class UnlockOp;
} // namespace nvidia_gpu
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
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::AllocMBarrierOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllocMBarrierOpGenericAdaptorBase {
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
  AllocMBarrierOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  AllocMBarrierOpGenericAdaptorBase(AllocMBarrierOp op);

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
class AllocMBarrierOpGenericAdaptor : public detail::AllocMBarrierOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllocMBarrierOpGenericAdaptorBase;
public:
  AllocMBarrierOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllocMBarrierOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllocMBarrierOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = AllocMBarrierOp, typename = std::enable_if_t<std::is_same_v<LateInst, AllocMBarrierOp>>>
  AllocMBarrierOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class AllocMBarrierOpAdaptor : public AllocMBarrierOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllocMBarrierOpGenericAdaptor::AllocMBarrierOpGenericAdaptor;
  AllocMBarrierOpAdaptor(AllocMBarrierOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllocMBarrierOp : public ::mlir::Op<AllocMBarrierOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllocMBarrierOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllocMBarrierOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("triton_nvidia_gpu.alloc_mbarrier");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
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
  ::mlir::IntegerAttr getCountAttr();
  uint32_t getCount();
  void setCountAttr(::mlir::IntegerAttr attr);
  void setCount(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr count);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr count);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, uint32_t count);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t count);
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::AllocMBarrierOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::ClusterArriveOp declarations
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
class ClusterArriveOp : public ::mlir::Op<ClusterArriveOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
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
    return ::llvm::StringLiteral("triton_nvidia_gpu.cluster_arrive");
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::ClusterArriveOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::ClusterWaitOp declarations
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
class ClusterWaitOp : public ::mlir::Op<ClusterWaitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
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
    return ::llvm::StringLiteral("triton_nvidia_gpu.cluster_wait");
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::ClusterWaitOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::ConsumerReleaseOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConsumerReleaseOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConsumerReleaseOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConsumerReleaseOpGenericAdaptorBase(ConsumerReleaseOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ConsumerReleaseOpGenericAdaptor : public detail::ConsumerReleaseOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConsumerReleaseOpGenericAdaptorBase;
public:
  ConsumerReleaseOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConsumerReleaseOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConsumerReleaseOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConsumerReleaseOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConsumerReleaseOp>>>
  ConsumerReleaseOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getToken() {
    return (*getODSOperands(0).begin());
  }

  ValueT getIdx() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConsumerReleaseOpAdaptor : public ConsumerReleaseOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConsumerReleaseOpGenericAdaptor::ConsumerReleaseOpGenericAdaptor;
  ConsumerReleaseOpAdaptor(ConsumerReleaseOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConsumerReleaseOp : public ::mlir::Op<ConsumerReleaseOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConsumerReleaseOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConsumerReleaseOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.consumer_release");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getToken();
  ::mlir::TypedValue<::mlir::IntegerType> getIdx();
  ::mlir::OpOperand &getTokenMutable();
  ::mlir::OpOperand &getIdxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value token, ::mlir::Value idx);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value token, ::mlir::Value idx);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::ConsumerReleaseOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::ConsumerWaitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConsumerWaitOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConsumerWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConsumerWaitOpGenericAdaptorBase(ConsumerWaitOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ConsumerWaitOpGenericAdaptor : public detail::ConsumerWaitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConsumerWaitOpGenericAdaptorBase;
public:
  ConsumerWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConsumerWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConsumerWaitOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConsumerWaitOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConsumerWaitOp>>>
  ConsumerWaitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getToken() {
    return (*getODSOperands(0).begin());
  }

  ValueT getIdx() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConsumerWaitOpAdaptor : public ConsumerWaitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConsumerWaitOpGenericAdaptor::ConsumerWaitOpGenericAdaptor;
  ConsumerWaitOpAdaptor(ConsumerWaitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConsumerWaitOp : public ::mlir::Op<ConsumerWaitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConsumerWaitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConsumerWaitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.consumer_wait");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getToken();
  ::mlir::TypedValue<::mlir::IntegerType> getIdx();
  ::mlir::OpOperand &getTokenMutable();
  ::mlir::OpOperand &getIdxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value token, ::mlir::Value idx);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value token, ::mlir::Value idx);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::ConsumerWaitOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::CreateMutexOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CreateMutexOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CreateMutexOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CreateMutexOpGenericAdaptorBase(CreateMutexOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CreateMutexOpGenericAdaptor : public detail::CreateMutexOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CreateMutexOpGenericAdaptorBase;
public:
  CreateMutexOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CreateMutexOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CreateMutexOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CreateMutexOp, typename = std::enable_if_t<std::is_same_v<LateInst, CreateMutexOp>>>
  CreateMutexOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class CreateMutexOpAdaptor : public CreateMutexOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CreateMutexOpGenericAdaptor::CreateMutexOpGenericAdaptor;
  CreateMutexOpAdaptor(CreateMutexOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CreateMutexOp : public ::mlir::Op<CreateMutexOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::triton::nvidia_gpu::MutexType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::VerifyTensorLayoutsTrait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CreateMutexOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CreateMutexOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.create_mutex");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::triton::nvidia_gpu::MutexType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::CreateMutexOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::CreateTokenOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CreateTokenOpGenericAdaptorBase {
public:
  struct Properties {
    using numTy = ::mlir::IntegerAttr;
    numTy num;

    auto getNum() {
      auto &propStorage = this->num;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setNum(const ::mlir::IntegerAttr &propValue) {
      this->num = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.num == this->num &&
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
  CreateTokenOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  CreateTokenOpGenericAdaptorBase(CreateTokenOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getNumAttr();
  uint32_t getNum();
};
} // namespace detail
template <typename RangeT>
class CreateTokenOpGenericAdaptor : public detail::CreateTokenOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CreateTokenOpGenericAdaptorBase;
public:
  CreateTokenOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CreateTokenOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CreateTokenOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = CreateTokenOp, typename = std::enable_if_t<std::is_same_v<LateInst, CreateTokenOp>>>
  CreateTokenOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class CreateTokenOpAdaptor : public CreateTokenOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CreateTokenOpGenericAdaptor::CreateTokenOpGenericAdaptor;
  CreateTokenOpAdaptor(CreateTokenOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CreateTokenOp : public ::mlir::Op<CreateTokenOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CreateTokenOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CreateTokenOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("num")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getNumAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getNumAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.create_token");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getNumAttr();
  uint32_t getNum();
  void setNumAttr(::mlir::IntegerAttr attr);
  void setNum(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, uint32_t num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t num);
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::CreateTokenOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::DotAsyncOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DotAsyncOpGenericAdaptorBase {
public:
  struct Properties {
    using allowTF32Ty = ::mlir::BoolAttr;
    allowTF32Ty allowTF32;

    auto getAllowTF32() {
      auto &propStorage = this->allowTF32;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setAllowTF32(const ::mlir::BoolAttr &propValue) {
      this->allowTF32 = propValue;
    }
    using maxNumImpreciseAccTy = ::mlir::IntegerAttr;
    maxNumImpreciseAccTy maxNumImpreciseAcc;

    auto getMaxNumImpreciseAcc() {
      auto &propStorage = this->maxNumImpreciseAcc;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setMaxNumImpreciseAcc(const ::mlir::IntegerAttr &propValue) {
      this->maxNumImpreciseAcc = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.allowTF32 == this->allowTF32 &&
        rhs.maxNumImpreciseAcc == this->maxNumImpreciseAcc &&
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
  DotAsyncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  DotAsyncOpGenericAdaptorBase(DotAsyncOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::BoolAttr getAllowTF32Attr();
  bool getAllowTF32();
  ::mlir::IntegerAttr getMaxNumImpreciseAccAttr();
  uint32_t getMaxNumImpreciseAcc();
};
} // namespace detail
template <typename RangeT>
class DotAsyncOpGenericAdaptor : public detail::DotAsyncOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DotAsyncOpGenericAdaptorBase;
public:
  DotAsyncOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DotAsyncOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DotAsyncOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = DotAsyncOp, typename = std::enable_if_t<std::is_same_v<LateInst, DotAsyncOp>>>
  DotAsyncOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getA() {
    return (*getODSOperands(0).begin());
  }

  ValueT getB() {
    return (*getODSOperands(1).begin());
  }

  ValueT getC() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DotAsyncOpAdaptor : public DotAsyncOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DotAsyncOpGenericAdaptor::DotAsyncOpGenericAdaptor;
  DotAsyncOpAdaptor(DotAsyncOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DotAsyncOp : public ::mlir::Op<DotAsyncOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DotAsyncOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DotAsyncOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("allowTF32"), ::llvm::StringRef("maxNumImpreciseAcc")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAllowTF32AttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAllowTF32AttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMaxNumImpreciseAccAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMaxNumImpreciseAccAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.dot_async");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getA();
  ::mlir::Value getB();
  ::mlir::Value getC();
  ::mlir::OpOperand &getAMutable();
  ::mlir::OpOperand &getBMutable();
  ::mlir::OpOperand &getCMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getD();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::BoolAttr getAllowTF32Attr();
  bool getAllowTF32();
  ::mlir::IntegerAttr getMaxNumImpreciseAccAttr();
  uint32_t getMaxNumImpreciseAcc();
  void setAllowTF32Attr(::mlir::BoolAttr attr);
  void setAllowTF32(bool attrValue);
  void setMaxNumImpreciseAccAttr(::mlir::IntegerAttr attr);
  void setMaxNumImpreciseAcc(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type d, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::BoolAttr allowTF32, ::mlir::IntegerAttr maxNumImpreciseAcc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::BoolAttr allowTF32, ::mlir::IntegerAttr maxNumImpreciseAcc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::BoolAttr allowTF32, ::mlir::IntegerAttr maxNumImpreciseAcc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type d, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, bool allowTF32, uint32_t maxNumImpreciseAcc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, bool allowTF32, uint32_t maxNumImpreciseAcc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, bool allowTF32, uint32_t maxNumImpreciseAcc);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::DotAsyncOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::DotWaitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DotWaitOpGenericAdaptorBase {
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
  DotWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  DotWaitOpGenericAdaptorBase(DotWaitOp op);

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
class DotWaitOpGenericAdaptor : public detail::DotWaitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DotWaitOpGenericAdaptorBase;
public:
  DotWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DotWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DotWaitOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = DotWaitOp, typename = std::enable_if_t<std::is_same_v<LateInst, DotWaitOp>>>
  DotWaitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getInputs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DotWaitOpAdaptor : public DotWaitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DotWaitOpGenericAdaptor::DotWaitOpGenericAdaptor;
  DotWaitOpAdaptor(DotWaitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DotWaitOp : public ::mlir::Op<DotWaitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DotWaitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DotWaitOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("triton_nvidia_gpu.dot_wait");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getInputs();
  ::mlir::MutableOperandRange getInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getOutputs();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::ValueRange inputs, ::mlir::IntegerAttr pendings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange inputs, ::mlir::IntegerAttr pendings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::ValueRange inputs, uint32_t pendings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange inputs, uint32_t pendings);
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::DotWaitOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::ExtractMBarrierOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ExtractMBarrierOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ExtractMBarrierOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ExtractMBarrierOpGenericAdaptorBase(ExtractMBarrierOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ExtractMBarrierOpGenericAdaptor : public detail::ExtractMBarrierOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ExtractMBarrierOpGenericAdaptorBase;
public:
  ExtractMBarrierOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ExtractMBarrierOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ExtractMBarrierOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ExtractMBarrierOp, typename = std::enable_if_t<std::is_same_v<LateInst, ExtractMBarrierOp>>>
  ExtractMBarrierOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTensor() {
    return (*getODSOperands(0).begin());
  }

  ValueT getIndex() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ExtractMBarrierOpAdaptor : public ExtractMBarrierOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ExtractMBarrierOpGenericAdaptor::ExtractMBarrierOpGenericAdaptor;
  ExtractMBarrierOpAdaptor(ExtractMBarrierOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ExtractMBarrierOp : public ::mlir::Op<ExtractMBarrierOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::triton::PointerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ExtractMBarrierOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ExtractMBarrierOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.extract_mbarrier");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getTensor();
  ::mlir::TypedValue<::mlir::IntegerType> getIndex();
  ::mlir::OpOperand &getTensorMutable();
  ::mlir::OpOperand &getIndexMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::triton::PointerType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor, ::mlir::Value index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::Value index);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::ExtractMBarrierOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::FenceAsyncSharedOp declarations
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
class FenceAsyncSharedOp : public ::mlir::Op<FenceAsyncSharedOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
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
    return ::llvm::StringLiteral("triton_nvidia_gpu.fence_async_shared");
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
  static bool isSupported(int computeCapability) {
    return computeCapability >= 90;
  }
};
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::FenceAsyncSharedOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::GetAgentIdOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetAgentIdOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GetAgentIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  GetAgentIdOpGenericAdaptorBase(GetAgentIdOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class GetAgentIdOpGenericAdaptor : public detail::GetAgentIdOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetAgentIdOpGenericAdaptorBase;
public:
  GetAgentIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetAgentIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetAgentIdOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = GetAgentIdOp, typename = std::enable_if_t<std::is_same_v<LateInst, GetAgentIdOp>>>
  GetAgentIdOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class GetAgentIdOpAdaptor : public GetAgentIdOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetAgentIdOpGenericAdaptor::GetAgentIdOpGenericAdaptor;
  GetAgentIdOpAdaptor(GetAgentIdOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetAgentIdOp : public ::mlir::Op<GetAgentIdOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetAgentIdOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetAgentIdOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.get_agent_id");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result);
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::GetAgentIdOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::GetCanonicalWarpId declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetCanonicalWarpIdGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GetCanonicalWarpIdGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  GetCanonicalWarpIdGenericAdaptorBase(GetCanonicalWarpId op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class GetCanonicalWarpIdGenericAdaptor : public detail::GetCanonicalWarpIdGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetCanonicalWarpIdGenericAdaptorBase;
public:
  GetCanonicalWarpIdGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetCanonicalWarpIdGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetCanonicalWarpIdGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = GetCanonicalWarpId, typename = std::enable_if_t<std::is_same_v<LateInst, GetCanonicalWarpId>>>
  GetCanonicalWarpIdGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class GetCanonicalWarpIdAdaptor : public GetCanonicalWarpIdGenericAdaptor<::mlir::ValueRange> {
public:
  using GetCanonicalWarpIdGenericAdaptor::GetCanonicalWarpIdGenericAdaptor;
  GetCanonicalWarpIdAdaptor(GetCanonicalWarpId op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetCanonicalWarpId : public ::mlir::Op<GetCanonicalWarpId, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetCanonicalWarpIdAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetCanonicalWarpIdGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.get_canonical_warp_id");
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::GetCanonicalWarpId)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::GetClusterCTAIdOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetClusterCTAIdOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GetClusterCTAIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  GetClusterCTAIdOpGenericAdaptorBase(GetClusterCTAIdOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class GetClusterCTAIdOpGenericAdaptor : public detail::GetClusterCTAIdOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetClusterCTAIdOpGenericAdaptorBase;
public:
  GetClusterCTAIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetClusterCTAIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetClusterCTAIdOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = GetClusterCTAIdOp, typename = std::enable_if_t<std::is_same_v<LateInst, GetClusterCTAIdOp>>>
  GetClusterCTAIdOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class GetClusterCTAIdOpAdaptor : public GetClusterCTAIdOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetClusterCTAIdOpGenericAdaptor::GetClusterCTAIdOpGenericAdaptor;
  GetClusterCTAIdOpAdaptor(GetClusterCTAIdOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetClusterCTAIdOp : public ::mlir::Op<GetClusterCTAIdOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetClusterCTAIdOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetClusterCTAIdOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.get_cluster_cta_id");
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::GetClusterCTAIdOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::GetMutexRoleIdOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetMutexRoleIdOpGenericAdaptorBase {
public:
  struct Properties {
    using numTy = ::mlir::IntegerAttr;
    numTy num;

    auto getNum() {
      auto &propStorage = this->num;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setNum(const ::mlir::IntegerAttr &propValue) {
      this->num = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.num == this->num &&
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
  GetMutexRoleIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  GetMutexRoleIdOpGenericAdaptorBase(GetMutexRoleIdOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getNumAttr();
  uint32_t getNum();
};
} // namespace detail
template <typename RangeT>
class GetMutexRoleIdOpGenericAdaptor : public detail::GetMutexRoleIdOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetMutexRoleIdOpGenericAdaptorBase;
public:
  GetMutexRoleIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetMutexRoleIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetMutexRoleIdOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = GetMutexRoleIdOp, typename = std::enable_if_t<std::is_same_v<LateInst, GetMutexRoleIdOp>>>
  GetMutexRoleIdOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class GetMutexRoleIdOpAdaptor : public GetMutexRoleIdOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetMutexRoleIdOpGenericAdaptor::GetMutexRoleIdOpGenericAdaptor;
  GetMutexRoleIdOpAdaptor(GetMutexRoleIdOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetMutexRoleIdOp : public ::mlir::Op<GetMutexRoleIdOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetMutexRoleIdOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetMutexRoleIdOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("num")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getNumAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getNumAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.get_mutex_role_id");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getNumAttr();
  uint32_t getNum();
  void setNumAttr(::mlir::IntegerAttr attr);
  void setNum(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::IntegerAttr num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, uint32_t num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t num);
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::GetMutexRoleIdOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::GetThreadIdOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetThreadIdOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GetThreadIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  GetThreadIdOpGenericAdaptorBase(GetThreadIdOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class GetThreadIdOpGenericAdaptor : public detail::GetThreadIdOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetThreadIdOpGenericAdaptorBase;
public:
  GetThreadIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetThreadIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetThreadIdOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = GetThreadIdOp, typename = std::enable_if_t<std::is_same_v<LateInst, GetThreadIdOp>>>
  GetThreadIdOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class GetThreadIdOpAdaptor : public GetThreadIdOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetThreadIdOpGenericAdaptor::GetThreadIdOpGenericAdaptor;
  GetThreadIdOpAdaptor(GetThreadIdOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetThreadIdOp : public ::mlir::Op<GetThreadIdOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetThreadIdOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetThreadIdOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.get_thread_id");
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::GetThreadIdOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::InsertSliceTMAOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class InsertSliceTMAOpGenericAdaptorBase {
public:
  struct Properties {
    using axisTy = ::mlir::IntegerAttr;
    axisTy axis;

    auto getAxis() {
      auto &propStorage = this->axis;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setAxis(const ::mlir::IntegerAttr &propValue) {
      this->axis = propValue;
    }
    using cacheTy = ::mlir::triton::CacheModifierAttr;
    cacheTy cache;

    auto getCache() {
      auto &propStorage = this->cache;
      return ::llvm::cast<::mlir::triton::CacheModifierAttr>(propStorage);
    }
    void setCache(const ::mlir::triton::CacheModifierAttr &propValue) {
      this->cache = propValue;
    }
    using evictTy = ::mlir::triton::EvictionPolicyAttr;
    evictTy evict;

    auto getEvict() {
      auto &propStorage = this->evict;
      return ::llvm::cast<::mlir::triton::EvictionPolicyAttr>(propStorage);
    }
    void setEvict(const ::mlir::triton::EvictionPolicyAttr &propValue) {
      this->evict = propValue;
    }
    using isVolatileTy = ::mlir::BoolAttr;
    isVolatileTy isVolatile;

    auto getIsVolatile() {
      auto &propStorage = this->isVolatile;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setIsVolatile(const ::mlir::BoolAttr &propValue) {
      this->isVolatile = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 6>;
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
        rhs.axis == this->axis &&
        rhs.cache == this->cache &&
        rhs.evict == this->evict &&
        rhs.isVolatile == this->isVolatile &&
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
  InsertSliceTMAOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  InsertSliceTMAOpGenericAdaptorBase(InsertSliceTMAOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::triton::CacheModifierAttr getCacheAttr();
  ::mlir::triton::CacheModifier getCache();
  ::mlir::triton::EvictionPolicyAttr getEvictAttr();
  ::mlir::triton::EvictionPolicy getEvict();
  ::mlir::BoolAttr getIsVolatileAttr();
  bool getIsVolatile();
  ::mlir::IntegerAttr getAxisAttr();
  uint32_t getAxis();
};
} // namespace detail
template <typename RangeT>
class InsertSliceTMAOpGenericAdaptor : public detail::InsertSliceTMAOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::InsertSliceTMAOpGenericAdaptorBase;
public:
  InsertSliceTMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  InsertSliceTMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : InsertSliceTMAOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = InsertSliceTMAOp, typename = std::enable_if_t<std::is_same_v<LateInst, InsertSliceTMAOp>>>
  InsertSliceTMAOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getDst() {
    return (*getODSOperands(1).begin());
  }

  ValueT getIndex() {
    return (*getODSOperands(2).begin());
  }

  ValueT getMbar() {
    return (*getODSOperands(3).begin());
  }

  ValueT getMask() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getOther() {
    auto operands = getODSOperands(5);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class InsertSliceTMAOpAdaptor : public InsertSliceTMAOpGenericAdaptor<::mlir::ValueRange> {
public:
  using InsertSliceTMAOpGenericAdaptor::InsertSliceTMAOpGenericAdaptor;
  InsertSliceTMAOpAdaptor(InsertSliceTMAOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class InsertSliceTMAOp : public ::mlir::Op<InsertSliceTMAOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<4>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpTrait::ResultsAreSharedEncoding, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = InsertSliceTMAOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = InsertSliceTMAOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("axis"), ::llvm::StringRef("cache"), ::llvm::StringRef("evict"), ::llvm::StringRef("isVolatile"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAxisAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAxisAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getCacheAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getCacheAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getEvictAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getEvictAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getIsVolatileAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getIsVolatileAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.insert_slice_tma");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getSrc();
  ::mlir::Value getDst();
  ::mlir::TypedValue<::mlir::IntegerType> getIndex();
  ::mlir::TypedValue<::mlir::triton::PointerType> getMbar();
  ::mlir::Value getMask();
  ::mlir::Value getOther();
  ::mlir::OpOperand &getSrcMutable();
  ::mlir::OpOperand &getDstMutable();
  ::mlir::OpOperand &getIndexMutable();
  ::mlir::OpOperand &getMbarMutable();
  ::mlir::MutableOperandRange getMaskMutable();
  ::mlir::MutableOperandRange getOtherMutable();
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
  ::mlir::triton::CacheModifierAttr getCacheAttr();
  ::mlir::triton::CacheModifier getCache();
  ::mlir::triton::EvictionPolicyAttr getEvictAttr();
  ::mlir::triton::EvictionPolicy getEvict();
  ::mlir::BoolAttr getIsVolatileAttr();
  bool getIsVolatile();
  ::mlir::IntegerAttr getAxisAttr();
  uint32_t getAxis();
  void setCacheAttr(::mlir::triton::CacheModifierAttr attr);
  void setCache(::mlir::triton::CacheModifier attrValue);
  void setEvictAttr(::mlir::triton::EvictionPolicyAttr attr);
  void setEvict(::mlir::triton::EvictionPolicy attrValue);
  void setIsVolatileAttr(::mlir::BoolAttr attr);
  void setIsVolatile(bool attrValue);
  void setAxisAttr(::mlir::IntegerAttr attr);
  void setAxis(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src, ::mlir::Value dst, ::mlir::Value index, ::mlir::Value mbar, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value other, ::mlir::triton::CacheModifierAttr cache, ::mlir::triton::EvictionPolicyAttr evict, ::mlir::BoolAttr isVolatile, ::mlir::IntegerAttr axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value dst, ::mlir::Value index, ::mlir::Value mbar, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value other, ::mlir::triton::CacheModifierAttr cache, ::mlir::triton::EvictionPolicyAttr evict, ::mlir::BoolAttr isVolatile, ::mlir::IntegerAttr axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src, ::mlir::Value dst, ::mlir::Value index, ::mlir::Value mbar, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value other, ::mlir::triton::CacheModifier cache, ::mlir::triton::EvictionPolicy evict, bool isVolatile, uint32_t axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value dst, ::mlir::Value index, ::mlir::Value mbar, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value other, ::mlir::triton::CacheModifier cache, ::mlir::triton::EvictionPolicy evict, bool isVolatile, uint32_t axis);
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
    assert(index < 4 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::InsertSliceTMAOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::LockOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LockOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  LockOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  LockOpGenericAdaptorBase(LockOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class LockOpGenericAdaptor : public detail::LockOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LockOpGenericAdaptorBase;
public:
  LockOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LockOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LockOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = LockOp, typename = std::enable_if_t<std::is_same_v<LateInst, LockOp>>>
  LockOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMutex() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class LockOpAdaptor : public LockOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LockOpGenericAdaptor::LockOpGenericAdaptor;
  LockOpAdaptor(LockOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LockOp : public ::mlir::Op<LockOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LockOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LockOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.lock");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::triton::nvidia_gpu::MutexType> getMutex();
  ::mlir::OpOperand &getMutexMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value mutex);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mutex);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::LockOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::MBarrierArriveOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MBarrierArriveOpGenericAdaptorBase {
public:
  struct Properties {
    using trackAsyncOpTy = ::mlir::IntegerAttr;
    trackAsyncOpTy trackAsyncOp;

    auto getTrackAsyncOp() {
      auto &propStorage = this->trackAsyncOp;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setTrackAsyncOp(const ::mlir::IntegerAttr &propValue) {
      this->trackAsyncOp = propValue;
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
    using operandSegmentSizesTy = std::array<int32_t, 3>;
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
        rhs.trackAsyncOp == this->trackAsyncOp &&
        rhs.txCount == this->txCount &&
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
  MBarrierArriveOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  MBarrierArriveOpGenericAdaptorBase(MBarrierArriveOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getTrackAsyncOpAttr();
  bool getTrackAsyncOp();
  ::mlir::IntegerAttr getTxCountAttr();
  uint32_t getTxCount();
};
} // namespace detail
template <typename RangeT>
class MBarrierArriveOpGenericAdaptor : public detail::MBarrierArriveOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MBarrierArriveOpGenericAdaptorBase;
public:
  MBarrierArriveOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

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
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRemoteCtaId() {
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
class MBarrierArriveOp : public ::mlir::Op<MBarrierArriveOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MBarrierArriveOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MBarrierArriveOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("trackAsyncOp"), ::llvm::StringRef("txCount"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTrackAsyncOpAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTrackAsyncOpAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getTxCountAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getTxCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.mbarrier_arrive");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::triton::PointerType> getMbarrier();
  ::mlir::TypedValue<::mlir::IntegerType> getPred();
  ::mlir::TypedValue<::mlir::IntegerType> getRemoteCtaId();
  ::mlir::OpOperand &getMbarrierMutable();
  ::mlir::MutableOperandRange getPredMutable();
  ::mlir::MutableOperandRange getRemoteCtaIdMutable();
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
  ::mlir::IntegerAttr getTrackAsyncOpAttr();
  bool getTrackAsyncOp();
  ::mlir::IntegerAttr getTxCountAttr();
  uint32_t getTxCount();
  void setTrackAsyncOpAttr(::mlir::IntegerAttr attr);
  void setTrackAsyncOp(bool attrValue);
  void setTxCountAttr(::mlir::IntegerAttr attr);
  void setTxCount(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value mbarrier, /*optional*/::mlir::Value pred, /*optional*/::mlir::Value remoteCtaId, ::mlir::IntegerAttr trackAsyncOp, ::mlir::IntegerAttr txCount);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mbarrier, /*optional*/::mlir::Value pred, /*optional*/::mlir::Value remoteCtaId, ::mlir::IntegerAttr trackAsyncOp, ::mlir::IntegerAttr txCount);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value mbarrier, /*optional*/::mlir::Value pred, /*optional*/::mlir::Value remoteCtaId, bool trackAsyncOp, uint32_t txCount = 0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mbarrier, /*optional*/::mlir::Value pred, /*optional*/::mlir::Value remoteCtaId, bool trackAsyncOp, uint32_t txCount = 0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::MBarrierArriveOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::MBarrierWaitOp declarations
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
class MBarrierWaitOp : public ::mlir::Op<MBarrierWaitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
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
    return ::llvm::StringLiteral("triton_nvidia_gpu.mbarrier_wait");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::triton::PointerType> getMbarrier();
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
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::MBarrierWaitOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::NamedBarrierArriveOp declarations
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
class NamedBarrierArriveOp : public ::mlir::Op<NamedBarrierArriveOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
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
    return ::llvm::StringLiteral("triton_nvidia_gpu.bar_arrive");
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::NamedBarrierArriveOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::NamedBarrierWaitOp declarations
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
class NamedBarrierWaitOp : public ::mlir::Op<NamedBarrierWaitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
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
    return ::llvm::StringLiteral("triton_nvidia_gpu.bar_wait");
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::NamedBarrierWaitOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::ProducerAcquireOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ProducerAcquireOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ProducerAcquireOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ProducerAcquireOpGenericAdaptorBase(ProducerAcquireOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ProducerAcquireOpGenericAdaptor : public detail::ProducerAcquireOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ProducerAcquireOpGenericAdaptorBase;
public:
  ProducerAcquireOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ProducerAcquireOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ProducerAcquireOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ProducerAcquireOp, typename = std::enable_if_t<std::is_same_v<LateInst, ProducerAcquireOp>>>
  ProducerAcquireOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getToken() {
    return (*getODSOperands(0).begin());
  }

  ValueT getIdx() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ProducerAcquireOpAdaptor : public ProducerAcquireOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ProducerAcquireOpGenericAdaptor::ProducerAcquireOpGenericAdaptor;
  ProducerAcquireOpAdaptor(ProducerAcquireOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ProducerAcquireOp : public ::mlir::Op<ProducerAcquireOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ProducerAcquireOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ProducerAcquireOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.producer_acquire");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getToken();
  ::mlir::TypedValue<::mlir::IntegerType> getIdx();
  ::mlir::OpOperand &getTokenMutable();
  ::mlir::OpOperand &getIdxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value token, ::mlir::Value idx);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value token, ::mlir::Value idx);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::ProducerAcquireOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::ProducerCommitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ProducerCommitOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ProducerCommitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ProducerCommitOpGenericAdaptorBase(ProducerCommitOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ProducerCommitOpGenericAdaptor : public detail::ProducerCommitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ProducerCommitOpGenericAdaptorBase;
public:
  ProducerCommitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ProducerCommitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ProducerCommitOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ProducerCommitOp, typename = std::enable_if_t<std::is_same_v<LateInst, ProducerCommitOp>>>
  ProducerCommitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getToken() {
    return (*getODSOperands(0).begin());
  }

  ValueT getIdx() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ProducerCommitOpAdaptor : public ProducerCommitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ProducerCommitOpGenericAdaptor::ProducerCommitOpGenericAdaptor;
  ProducerCommitOpAdaptor(ProducerCommitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ProducerCommitOp : public ::mlir::Op<ProducerCommitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ProducerCommitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ProducerCommitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.producer_commit");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getToken();
  ::mlir::TypedValue<::mlir::IntegerType> getIdx();
  ::mlir::OpOperand &getTokenMutable();
  ::mlir::OpOperand &getIdxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value token, ::mlir::Value idx);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value token, ::mlir::Value idx);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::ProducerCommitOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::RegAllocOp declarations
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
class RegAllocOp : public ::mlir::Op<RegAllocOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
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
    return ::llvm::StringLiteral("triton_nvidia_gpu.reg_alloc");
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::RegAllocOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::RegDeallocOp declarations
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
class RegDeallocOp : public ::mlir::Op<RegDeallocOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
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
    return ::llvm::StringLiteral("triton_nvidia_gpu.reg_dealloc");
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::RegDeallocOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::StoreAsyncTMAOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class StoreAsyncTMAOpGenericAdaptorBase {
public:
  struct Properties {
    using cacheTy = ::mlir::triton::CacheModifierAttr;
    cacheTy cache;

    auto getCache() {
      auto &propStorage = this->cache;
      return ::llvm::dyn_cast_or_null<::mlir::triton::CacheModifierAttr>(propStorage);
    }
    void setCache(const ::mlir::triton::CacheModifierAttr &propValue) {
      this->cache = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.cache == this->cache &&
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
  StoreAsyncTMAOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  StoreAsyncTMAOpGenericAdaptorBase(StoreAsyncTMAOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::triton::CacheModifierAttr getCacheAttr();
  ::mlir::triton::CacheModifier getCache();
};
} // namespace detail
template <typename RangeT>
class StoreAsyncTMAOpGenericAdaptor : public detail::StoreAsyncTMAOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::StoreAsyncTMAOpGenericAdaptorBase;
public:
  StoreAsyncTMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  StoreAsyncTMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : StoreAsyncTMAOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = StoreAsyncTMAOp, typename = std::enable_if_t<std::is_same_v<LateInst, StoreAsyncTMAOp>>>
  StoreAsyncTMAOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getSrc() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class StoreAsyncTMAOpAdaptor : public StoreAsyncTMAOpGenericAdaptor<::mlir::ValueRange> {
public:
  using StoreAsyncTMAOpGenericAdaptor::StoreAsyncTMAOpGenericAdaptor;
  StoreAsyncTMAOpAdaptor(StoreAsyncTMAOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class StoreAsyncTMAOp : public ::mlir::Op<StoreAsyncTMAOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = StoreAsyncTMAOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = StoreAsyncTMAOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("cache")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getCacheAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getCacheAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.store_async_tma");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::triton::PointerType> getDst();
  ::mlir::Value getSrc();
  ::mlir::OpOperand &getDstMutable();
  ::mlir::OpOperand &getSrcMutable();
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
  ::mlir::triton::CacheModifierAttr getCacheAttr();
  ::mlir::triton::CacheModifier getCache();
  void setCacheAttr(::mlir::triton::CacheModifierAttr attr);
  void setCache(::mlir::triton::CacheModifier attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value dst, ::mlir::Value src, ::mlir::triton::CacheModifierAttr cache);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value dst, ::mlir::Value src, ::mlir::triton::CacheModifierAttr cache);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value dst, ::mlir::Value src, ::mlir::triton::CacheModifier cache = triton::CacheModifier::NONE);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value dst, ::mlir::Value src, ::mlir::triton::CacheModifier cache = triton::CacheModifier::NONE);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
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
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::StoreAsyncTMAOp)

namespace mlir {
namespace triton {
namespace nvidia_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::nvidia_gpu::UnlockOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UnlockOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  UnlockOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  UnlockOpGenericAdaptorBase(UnlockOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class UnlockOpGenericAdaptor : public detail::UnlockOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UnlockOpGenericAdaptorBase;
public:
  UnlockOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  UnlockOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : UnlockOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = UnlockOp, typename = std::enable_if_t<std::is_same_v<LateInst, UnlockOp>>>
  UnlockOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMutex() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class UnlockOpAdaptor : public UnlockOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UnlockOpGenericAdaptor::UnlockOpGenericAdaptor;
  UnlockOpAdaptor(UnlockOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UnlockOp : public ::mlir::Op<UnlockOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UnlockOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UnlockOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_nvidia_gpu.unlock");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::triton::nvidia_gpu::MutexType> getMutex();
  ::mlir::OpOperand &getMutexMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value mutex);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mutex);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::UnlockOp)


#endif  // GET_OP_CLASSES

