/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: lhlo_gpu_ops.td                                                      *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace lmhlo_gpu {
class AllGatherDoneOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class AllGatherStartOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class AllReduceDoneOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class AllReduceStartOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class AllToAllDoneOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class AllToAllStartOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class CholeskyOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class CollectivePermuteDoneOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class CollectivePermuteStartOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class ConvBackwardFilterOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class ConvBackwardInputOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class ConvForwardFusedOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class ConvForwardFusedSideInputOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class ConvForwardGraphOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class ConvForwardOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class CublasLtMatmulF8Op;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class CublasLtMatmulOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class CudnnConvReorderFilterAndBiasOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class CudnnConvReorderFilterOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class CudnnNormOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class GEMMOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class RadixSortOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class ReduceScatterDoneOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class ReduceScatterStartOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class fusedMHABackwardOp;
} // namespace lmhlo_gpu
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class fusedMHAOp;
} // namespace lmhlo_gpu
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::AllGatherDoneOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllGatherDoneOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AllGatherDoneOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AllGatherDoneOpGenericAdaptorBase(AllGatherDoneOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AllGatherDoneOpGenericAdaptor : public detail::AllGatherDoneOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllGatherDoneOpGenericAdaptorBase;
public:
  AllGatherDoneOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllGatherDoneOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllGatherDoneOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AllGatherDoneOp, typename = std::enable_if_t<std::is_same_v<LateInst, AllGatherDoneOp>>>
  AllGatherDoneOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AllGatherDoneOpAdaptor : public AllGatherDoneOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllGatherDoneOpGenericAdaptor::AllGatherDoneOpGenericAdaptor;
  AllGatherDoneOpAdaptor(AllGatherDoneOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllGatherDoneOp : public ::mlir::Op<AllGatherDoneOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllGatherDoneOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllGatherDoneOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.all_gather_done");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getToken();
  ::mlir::OpOperand &getTokenMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value token);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value token);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::AllGatherDoneOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::AllGatherStartOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllGatherStartOpGenericAdaptorBase {
public:
  struct Properties {
    using all_gather_dimensionTy = ::mlir::IntegerAttr;
    all_gather_dimensionTy all_gather_dimension;

    auto getAllGatherDimension() {
      auto &propStorage = this->all_gather_dimension;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setAllGatherDimension(const ::mlir::IntegerAttr &propValue) {
      this->all_gather_dimension = propValue;
    }
    using channel_idTy = ::mlir::mhlo::ChannelHandleAttr;
    channel_idTy channel_id;

    auto getChannelId() {
      auto &propStorage = this->channel_id;
      return ::llvm::dyn_cast_or_null<::mlir::mhlo::ChannelHandleAttr>(propStorage);
    }
    void setChannelId(const ::mlir::mhlo::ChannelHandleAttr &propValue) {
      this->channel_id = propValue;
    }
    using constrain_layoutTy = ::mlir::BoolAttr;
    constrain_layoutTy constrain_layout;

    auto getConstrainLayout() {
      auto &propStorage = this->constrain_layout;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setConstrainLayout(const ::mlir::BoolAttr &propValue) {
      this->constrain_layout = propValue;
    }
    using is_syncTy = ::mlir::BoolAttr;
    is_syncTy is_sync;

    auto getIsSync() {
      auto &propStorage = this->is_sync;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setIsSync(const ::mlir::BoolAttr &propValue) {
      this->is_sync = propValue;
    }
    using no_parallel_custom_callTy = ::mlir::BoolAttr;
    no_parallel_custom_callTy no_parallel_custom_call;

    auto getNoParallelCustomCall() {
      auto &propStorage = this->no_parallel_custom_call;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setNoParallelCustomCall(const ::mlir::BoolAttr &propValue) {
      this->no_parallel_custom_call = propValue;
    }
    using replica_groupsTy = ::mlir::DenseIntElementsAttr;
    replica_groupsTy replica_groups;

    auto getReplicaGroups() {
      auto &propStorage = this->replica_groups;
      return ::llvm::cast<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setReplicaGroups(const ::mlir::DenseIntElementsAttr &propValue) {
      this->replica_groups = propValue;
    }
    using use_global_device_idsTy = ::mlir::BoolAttr;
    use_global_device_idsTy use_global_device_ids;

    auto getUseGlobalDeviceIds() {
      auto &propStorage = this->use_global_device_ids;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setUseGlobalDeviceIds(const ::mlir::BoolAttr &propValue) {
      this->use_global_device_ids = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.all_gather_dimension == this->all_gather_dimension &&
        rhs.channel_id == this->channel_id &&
        rhs.constrain_layout == this->constrain_layout &&
        rhs.is_sync == this->is_sync &&
        rhs.no_parallel_custom_call == this->no_parallel_custom_call &&
        rhs.replica_groups == this->replica_groups &&
        rhs.use_global_device_ids == this->use_global_device_ids &&
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
  AllGatherStartOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  AllGatherStartOpGenericAdaptorBase(AllGatherStartOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getReplicaGroupsAttr();
  ::mlir::DenseIntElementsAttr getReplicaGroups();
  ::mlir::BoolAttr getConstrainLayoutAttr();
  bool getConstrainLayout();
  ::mlir::mhlo::ChannelHandleAttr getChannelIdAttr();
  ::std::optional<::mlir::mhlo::ChannelHandleAttr> getChannelId();
  ::mlir::BoolAttr getUseGlobalDeviceIdsAttr();
  bool getUseGlobalDeviceIds();
  ::mlir::BoolAttr getIsSyncAttr();
  bool getIsSync();
  ::mlir::BoolAttr getNoParallelCustomCallAttr();
  bool getNoParallelCustomCall();
  ::mlir::IntegerAttr getAllGatherDimensionAttr();
  uint64_t getAllGatherDimension();
};
} // namespace detail
template <typename RangeT>
class AllGatherStartOpGenericAdaptor : public detail::AllGatherStartOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllGatherStartOpGenericAdaptorBase;
public:
  AllGatherStartOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllGatherStartOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllGatherStartOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = AllGatherStartOp, typename = std::enable_if_t<std::is_same_v<LateInst, AllGatherStartOp>>>
  AllGatherStartOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOutputs() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AllGatherStartOpAdaptor : public AllGatherStartOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllGatherStartOpGenericAdaptor::AllGatherStartOpGenericAdaptor;
  AllGatherStartOpAdaptor(AllGatherStartOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllGatherStartOp : public ::mlir::Op<AllGatherStartOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllGatherStartOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllGatherStartOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("all_gather_dimension"), ::llvm::StringRef("channel_id"), ::llvm::StringRef("constrain_layout"), ::llvm::StringRef("is_sync"), ::llvm::StringRef("no_parallel_custom_call"), ::llvm::StringRef("replica_groups"), ::llvm::StringRef("use_global_device_ids")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAllGatherDimensionAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAllGatherDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getChannelIdAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getChannelIdAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getConstrainLayoutAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getConstrainLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getIsSyncAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getIsSyncAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getNoParallelCustomCallAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getNoParallelCustomCallAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getReplicaGroupsAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getReplicaGroupsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getUseGlobalDeviceIdsAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getUseGlobalDeviceIdsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.all_gather_start");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getInputs();
  ::mlir::Operation::operand_range getOutputs();
  ::mlir::MutableOperandRange getInputsMutable();
  ::mlir::MutableOperandRange getOutputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getToken();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseIntElementsAttr getReplicaGroupsAttr();
  ::mlir::DenseIntElementsAttr getReplicaGroups();
  ::mlir::BoolAttr getConstrainLayoutAttr();
  bool getConstrainLayout();
  ::mlir::mhlo::ChannelHandleAttr getChannelIdAttr();
  ::std::optional<::mlir::mhlo::ChannelHandleAttr> getChannelId();
  ::mlir::BoolAttr getUseGlobalDeviceIdsAttr();
  bool getUseGlobalDeviceIds();
  ::mlir::BoolAttr getIsSyncAttr();
  bool getIsSync();
  ::mlir::BoolAttr getNoParallelCustomCallAttr();
  bool getNoParallelCustomCall();
  ::mlir::IntegerAttr getAllGatherDimensionAttr();
  uint64_t getAllGatherDimension();
  void setReplicaGroupsAttr(::mlir::DenseIntElementsAttr attr);
  void setConstrainLayoutAttr(::mlir::BoolAttr attr);
  void setConstrainLayout(::std::optional<bool> attrValue);
  void setChannelIdAttr(::mlir::mhlo::ChannelHandleAttr attr);
  void setUseGlobalDeviceIdsAttr(::mlir::BoolAttr attr);
  void setUseGlobalDeviceIds(::std::optional<bool> attrValue);
  void setIsSyncAttr(::mlir::BoolAttr attr);
  void setIsSync(bool attrValue);
  void setNoParallelCustomCallAttr(::mlir::BoolAttr attr);
  void setNoParallelCustomCall(bool attrValue);
  void setAllGatherDimensionAttr(::mlir::IntegerAttr attr);
  void setAllGatherDimension(uint64_t attrValue);
  ::mlir::Attribute removeConstrainLayoutAttr();
  ::mlir::Attribute removeChannelIdAttr();
  ::mlir::Attribute removeUseGlobalDeviceIdsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type token, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/::mlir::BoolAttr use_global_device_ids, ::mlir::BoolAttr is_sync, ::mlir::BoolAttr no_parallel_custom_call, ::mlir::IntegerAttr all_gather_dimension);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/::mlir::BoolAttr use_global_device_ids, ::mlir::BoolAttr is_sync, ::mlir::BoolAttr no_parallel_custom_call, ::mlir::IntegerAttr all_gather_dimension);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type token, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/bool use_global_device_ids, bool is_sync, bool no_parallel_custom_call, uint64_t all_gather_dimension);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/bool use_global_device_ids, bool is_sync, bool no_parallel_custom_call, uint64_t all_gather_dimension);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 7 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::AllGatherStartOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::AllReduceDoneOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllReduceDoneOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AllReduceDoneOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AllReduceDoneOpGenericAdaptorBase(AllReduceDoneOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AllReduceDoneOpGenericAdaptor : public detail::AllReduceDoneOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllReduceDoneOpGenericAdaptorBase;
public:
  AllReduceDoneOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllReduceDoneOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllReduceDoneOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AllReduceDoneOp, typename = std::enable_if_t<std::is_same_v<LateInst, AllReduceDoneOp>>>
  AllReduceDoneOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AllReduceDoneOpAdaptor : public AllReduceDoneOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllReduceDoneOpGenericAdaptor::AllReduceDoneOpGenericAdaptor;
  AllReduceDoneOpAdaptor(AllReduceDoneOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllReduceDoneOp : public ::mlir::Op<AllReduceDoneOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllReduceDoneOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllReduceDoneOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.all_reduce_done");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getToken();
  ::mlir::OpOperand &getTokenMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value token);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value token);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::AllReduceDoneOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::AllReduceStartOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllReduceStartOpGenericAdaptorBase {
public:
  struct Properties {
    using channel_idTy = ::mlir::mhlo::ChannelHandleAttr;
    channel_idTy channel_id;

    auto getChannelId() {
      auto &propStorage = this->channel_id;
      return ::llvm::dyn_cast_or_null<::mlir::mhlo::ChannelHandleAttr>(propStorage);
    }
    void setChannelId(const ::mlir::mhlo::ChannelHandleAttr &propValue) {
      this->channel_id = propValue;
    }
    using constrain_layoutTy = ::mlir::BoolAttr;
    constrain_layoutTy constrain_layout;

    auto getConstrainLayout() {
      auto &propStorage = this->constrain_layout;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setConstrainLayout(const ::mlir::BoolAttr &propValue) {
      this->constrain_layout = propValue;
    }
    using is_syncTy = ::mlir::BoolAttr;
    is_syncTy is_sync;

    auto getIsSync() {
      auto &propStorage = this->is_sync;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setIsSync(const ::mlir::BoolAttr &propValue) {
      this->is_sync = propValue;
    }
    using no_parallel_custom_callTy = ::mlir::BoolAttr;
    no_parallel_custom_callTy no_parallel_custom_call;

    auto getNoParallelCustomCall() {
      auto &propStorage = this->no_parallel_custom_call;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setNoParallelCustomCall(const ::mlir::BoolAttr &propValue) {
      this->no_parallel_custom_call = propValue;
    }
    using replica_groupsTy = ::mlir::DenseIntElementsAttr;
    replica_groupsTy replica_groups;

    auto getReplicaGroups() {
      auto &propStorage = this->replica_groups;
      return ::llvm::cast<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setReplicaGroups(const ::mlir::DenseIntElementsAttr &propValue) {
      this->replica_groups = propValue;
    }
    using use_global_device_idsTy = ::mlir::BoolAttr;
    use_global_device_idsTy use_global_device_ids;

    auto getUseGlobalDeviceIds() {
      auto &propStorage = this->use_global_device_ids;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setUseGlobalDeviceIds(const ::mlir::BoolAttr &propValue) {
      this->use_global_device_ids = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.channel_id == this->channel_id &&
        rhs.constrain_layout == this->constrain_layout &&
        rhs.is_sync == this->is_sync &&
        rhs.no_parallel_custom_call == this->no_parallel_custom_call &&
        rhs.replica_groups == this->replica_groups &&
        rhs.use_global_device_ids == this->use_global_device_ids &&
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
  AllReduceStartOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  AllReduceStartOpGenericAdaptorBase(AllReduceStartOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getReplicaGroupsAttr();
  ::mlir::DenseIntElementsAttr getReplicaGroups();
  ::mlir::BoolAttr getConstrainLayoutAttr();
  bool getConstrainLayout();
  ::mlir::mhlo::ChannelHandleAttr getChannelIdAttr();
  ::std::optional<::mlir::mhlo::ChannelHandleAttr> getChannelId();
  ::mlir::BoolAttr getUseGlobalDeviceIdsAttr();
  bool getUseGlobalDeviceIds();
  ::mlir::BoolAttr getIsSyncAttr();
  bool getIsSync();
  ::mlir::BoolAttr getNoParallelCustomCallAttr();
  bool getNoParallelCustomCall();
  ::mlir::Region &getComputation();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class AllReduceStartOpGenericAdaptor : public detail::AllReduceStartOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllReduceStartOpGenericAdaptorBase;
public:
  AllReduceStartOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllReduceStartOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllReduceStartOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = AllReduceStartOp, typename = std::enable_if_t<std::is_same_v<LateInst, AllReduceStartOp>>>
  AllReduceStartOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOutputs() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AllReduceStartOpAdaptor : public AllReduceStartOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllReduceStartOpGenericAdaptor::AllReduceStartOpGenericAdaptor;
  AllReduceStartOpAdaptor(AllReduceStartOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllReduceStartOp : public ::mlir::Op<AllReduceStartOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsElementType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllReduceStartOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllReduceStartOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("channel_id"), ::llvm::StringRef("constrain_layout"), ::llvm::StringRef("is_sync"), ::llvm::StringRef("no_parallel_custom_call"), ::llvm::StringRef("replica_groups"), ::llvm::StringRef("use_global_device_ids")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getChannelIdAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getChannelIdAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getConstrainLayoutAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getConstrainLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getIsSyncAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getIsSyncAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getNoParallelCustomCallAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getNoParallelCustomCallAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getReplicaGroupsAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getReplicaGroupsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getUseGlobalDeviceIdsAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getUseGlobalDeviceIdsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.all_reduce_start");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getInputs();
  ::mlir::Operation::operand_range getOutputs();
  ::mlir::MutableOperandRange getInputsMutable();
  ::mlir::MutableOperandRange getOutputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getToken();
  ::mlir::Region &getComputation();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseIntElementsAttr getReplicaGroupsAttr();
  ::mlir::DenseIntElementsAttr getReplicaGroups();
  ::mlir::BoolAttr getConstrainLayoutAttr();
  bool getConstrainLayout();
  ::mlir::mhlo::ChannelHandleAttr getChannelIdAttr();
  ::std::optional<::mlir::mhlo::ChannelHandleAttr> getChannelId();
  ::mlir::BoolAttr getUseGlobalDeviceIdsAttr();
  bool getUseGlobalDeviceIds();
  ::mlir::BoolAttr getIsSyncAttr();
  bool getIsSync();
  ::mlir::BoolAttr getNoParallelCustomCallAttr();
  bool getNoParallelCustomCall();
  void setReplicaGroupsAttr(::mlir::DenseIntElementsAttr attr);
  void setConstrainLayoutAttr(::mlir::BoolAttr attr);
  void setConstrainLayout(::std::optional<bool> attrValue);
  void setChannelIdAttr(::mlir::mhlo::ChannelHandleAttr attr);
  void setUseGlobalDeviceIdsAttr(::mlir::BoolAttr attr);
  void setUseGlobalDeviceIds(::std::optional<bool> attrValue);
  void setIsSyncAttr(::mlir::BoolAttr attr);
  void setIsSync(bool attrValue);
  void setNoParallelCustomCallAttr(::mlir::BoolAttr attr);
  void setNoParallelCustomCall(bool attrValue);
  ::mlir::Attribute removeConstrainLayoutAttr();
  ::mlir::Attribute removeChannelIdAttr();
  ::mlir::Attribute removeUseGlobalDeviceIdsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type token, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/::mlir::BoolAttr use_global_device_ids, ::mlir::BoolAttr is_sync, ::mlir::BoolAttr no_parallel_custom_call);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/::mlir::BoolAttr use_global_device_ids, ::mlir::BoolAttr is_sync, ::mlir::BoolAttr no_parallel_custom_call);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type token, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/bool use_global_device_ids, bool is_sync, bool no_parallel_custom_call);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/bool use_global_device_ids, bool is_sync, bool no_parallel_custom_call);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 6 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::AllReduceStartOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::AllToAllDoneOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllToAllDoneOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AllToAllDoneOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AllToAllDoneOpGenericAdaptorBase(AllToAllDoneOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AllToAllDoneOpGenericAdaptor : public detail::AllToAllDoneOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllToAllDoneOpGenericAdaptorBase;
public:
  AllToAllDoneOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllToAllDoneOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllToAllDoneOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AllToAllDoneOp, typename = std::enable_if_t<std::is_same_v<LateInst, AllToAllDoneOp>>>
  AllToAllDoneOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AllToAllDoneOpAdaptor : public AllToAllDoneOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllToAllDoneOpGenericAdaptor::AllToAllDoneOpGenericAdaptor;
  AllToAllDoneOpAdaptor(AllToAllDoneOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllToAllDoneOp : public ::mlir::Op<AllToAllDoneOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllToAllDoneOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllToAllDoneOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.all_to_all_done");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getToken();
  ::mlir::OpOperand &getTokenMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value token);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value token);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::AllToAllDoneOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::AllToAllStartOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllToAllStartOpGenericAdaptorBase {
public:
  struct Properties {
    using channel_idTy = ::mlir::mhlo::ChannelHandleAttr;
    channel_idTy channel_id;

    auto getChannelId() {
      auto &propStorage = this->channel_id;
      return ::llvm::dyn_cast_or_null<::mlir::mhlo::ChannelHandleAttr>(propStorage);
    }
    void setChannelId(const ::mlir::mhlo::ChannelHandleAttr &propValue) {
      this->channel_id = propValue;
    }
    using constrain_layoutTy = ::mlir::BoolAttr;
    constrain_layoutTy constrain_layout;

    auto getConstrainLayout() {
      auto &propStorage = this->constrain_layout;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setConstrainLayout(const ::mlir::BoolAttr &propValue) {
      this->constrain_layout = propValue;
    }
    using is_syncTy = ::mlir::BoolAttr;
    is_syncTy is_sync;

    auto getIsSync() {
      auto &propStorage = this->is_sync;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setIsSync(const ::mlir::BoolAttr &propValue) {
      this->is_sync = propValue;
    }
    using no_parallel_custom_callTy = ::mlir::BoolAttr;
    no_parallel_custom_callTy no_parallel_custom_call;

    auto getNoParallelCustomCall() {
      auto &propStorage = this->no_parallel_custom_call;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setNoParallelCustomCall(const ::mlir::BoolAttr &propValue) {
      this->no_parallel_custom_call = propValue;
    }
    using replica_groupsTy = ::mlir::DenseIntElementsAttr;
    replica_groupsTy replica_groups;

    auto getReplicaGroups() {
      auto &propStorage = this->replica_groups;
      return ::llvm::cast<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setReplicaGroups(const ::mlir::DenseIntElementsAttr &propValue) {
      this->replica_groups = propValue;
    }
    using split_dimensionTy = ::mlir::IntegerAttr;
    split_dimensionTy split_dimension;

    auto getSplitDimension() {
      auto &propStorage = this->split_dimension;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setSplitDimension(const ::mlir::IntegerAttr &propValue) {
      this->split_dimension = propValue;
    }
    using use_global_device_idsTy = ::mlir::BoolAttr;
    use_global_device_idsTy use_global_device_ids;

    auto getUseGlobalDeviceIds() {
      auto &propStorage = this->use_global_device_ids;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setUseGlobalDeviceIds(const ::mlir::BoolAttr &propValue) {
      this->use_global_device_ids = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.channel_id == this->channel_id &&
        rhs.constrain_layout == this->constrain_layout &&
        rhs.is_sync == this->is_sync &&
        rhs.no_parallel_custom_call == this->no_parallel_custom_call &&
        rhs.replica_groups == this->replica_groups &&
        rhs.split_dimension == this->split_dimension &&
        rhs.use_global_device_ids == this->use_global_device_ids &&
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
  AllToAllStartOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  AllToAllStartOpGenericAdaptorBase(AllToAllStartOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getReplicaGroupsAttr();
  ::mlir::DenseIntElementsAttr getReplicaGroups();
  ::mlir::BoolAttr getConstrainLayoutAttr();
  bool getConstrainLayout();
  ::mlir::mhlo::ChannelHandleAttr getChannelIdAttr();
  ::std::optional<::mlir::mhlo::ChannelHandleAttr> getChannelId();
  ::mlir::BoolAttr getUseGlobalDeviceIdsAttr();
  bool getUseGlobalDeviceIds();
  ::mlir::BoolAttr getIsSyncAttr();
  bool getIsSync();
  ::mlir::BoolAttr getNoParallelCustomCallAttr();
  bool getNoParallelCustomCall();
  ::mlir::IntegerAttr getSplitDimensionAttr();
  ::std::optional<uint64_t> getSplitDimension();
};
} // namespace detail
template <typename RangeT>
class AllToAllStartOpGenericAdaptor : public detail::AllToAllStartOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllToAllStartOpGenericAdaptorBase;
public:
  AllToAllStartOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllToAllStartOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllToAllStartOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = AllToAllStartOp, typename = std::enable_if_t<std::is_same_v<LateInst, AllToAllStartOp>>>
  AllToAllStartOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOutputs() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AllToAllStartOpAdaptor : public AllToAllStartOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllToAllStartOpGenericAdaptor::AllToAllStartOpGenericAdaptor;
  AllToAllStartOpAdaptor(AllToAllStartOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllToAllStartOp : public ::mlir::Op<AllToAllStartOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsElementType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllToAllStartOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllToAllStartOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("channel_id"), ::llvm::StringRef("constrain_layout"), ::llvm::StringRef("is_sync"), ::llvm::StringRef("no_parallel_custom_call"), ::llvm::StringRef("replica_groups"), ::llvm::StringRef("split_dimension"), ::llvm::StringRef("use_global_device_ids")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getChannelIdAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getChannelIdAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getConstrainLayoutAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getConstrainLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getIsSyncAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getIsSyncAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getNoParallelCustomCallAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getNoParallelCustomCallAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getReplicaGroupsAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getReplicaGroupsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getSplitDimensionAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getSplitDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getUseGlobalDeviceIdsAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getUseGlobalDeviceIdsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.all_to_all_start");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getInputs();
  ::mlir::Operation::operand_range getOutputs();
  ::mlir::MutableOperandRange getInputsMutable();
  ::mlir::MutableOperandRange getOutputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getToken();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseIntElementsAttr getReplicaGroupsAttr();
  ::mlir::DenseIntElementsAttr getReplicaGroups();
  ::mlir::BoolAttr getConstrainLayoutAttr();
  bool getConstrainLayout();
  ::mlir::mhlo::ChannelHandleAttr getChannelIdAttr();
  ::std::optional<::mlir::mhlo::ChannelHandleAttr> getChannelId();
  ::mlir::BoolAttr getUseGlobalDeviceIdsAttr();
  bool getUseGlobalDeviceIds();
  ::mlir::BoolAttr getIsSyncAttr();
  bool getIsSync();
  ::mlir::BoolAttr getNoParallelCustomCallAttr();
  bool getNoParallelCustomCall();
  ::mlir::IntegerAttr getSplitDimensionAttr();
  ::std::optional<uint64_t> getSplitDimension();
  void setReplicaGroupsAttr(::mlir::DenseIntElementsAttr attr);
  void setConstrainLayoutAttr(::mlir::BoolAttr attr);
  void setConstrainLayout(::std::optional<bool> attrValue);
  void setChannelIdAttr(::mlir::mhlo::ChannelHandleAttr attr);
  void setUseGlobalDeviceIdsAttr(::mlir::BoolAttr attr);
  void setUseGlobalDeviceIds(::std::optional<bool> attrValue);
  void setIsSyncAttr(::mlir::BoolAttr attr);
  void setIsSync(bool attrValue);
  void setNoParallelCustomCallAttr(::mlir::BoolAttr attr);
  void setNoParallelCustomCall(bool attrValue);
  void setSplitDimensionAttr(::mlir::IntegerAttr attr);
  void setSplitDimension(::std::optional<uint64_t> attrValue);
  ::mlir::Attribute removeConstrainLayoutAttr();
  ::mlir::Attribute removeChannelIdAttr();
  ::mlir::Attribute removeUseGlobalDeviceIdsAttr();
  ::mlir::Attribute removeSplitDimensionAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type token, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/::mlir::BoolAttr use_global_device_ids, ::mlir::BoolAttr is_sync, ::mlir::BoolAttr no_parallel_custom_call, /*optional*/::mlir::IntegerAttr split_dimension);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/::mlir::BoolAttr use_global_device_ids, ::mlir::BoolAttr is_sync, ::mlir::BoolAttr no_parallel_custom_call, /*optional*/::mlir::IntegerAttr split_dimension);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type token, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/bool use_global_device_ids, bool is_sync, bool no_parallel_custom_call, /*optional*/::mlir::IntegerAttr split_dimension);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/bool use_global_device_ids, bool is_sync, bool no_parallel_custom_call, /*optional*/::mlir::IntegerAttr split_dimension);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 7 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::AllToAllStartOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::CholeskyOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CholeskyOpGenericAdaptorBase {
public:
  struct Properties {
    using is_lowerTy = ::mlir::BoolAttr;
    is_lowerTy is_lower;

    auto getIsLower() {
      auto &propStorage = this->is_lower;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setIsLower(const ::mlir::BoolAttr &propValue) {
      this->is_lower = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.is_lower == this->is_lower &&
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
  CholeskyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  CholeskyOpGenericAdaptorBase(CholeskyOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::BoolAttr getIsLowerAttr();
  bool getIsLower();
};
} // namespace detail
template <typename RangeT>
class CholeskyOpGenericAdaptor : public detail::CholeskyOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CholeskyOpGenericAdaptorBase;
public:
  CholeskyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CholeskyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CholeskyOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = CholeskyOp, typename = std::enable_if_t<std::is_same_v<LateInst, CholeskyOp>>>
  CholeskyOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getOutput() {
    return (*getODSOperands(1).begin());
  }

  ValueT getScratch() {
    return (*getODSOperands(2).begin());
  }

  ValueT getInfo() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CholeskyOpAdaptor : public CholeskyOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CholeskyOpGenericAdaptor::CholeskyOpGenericAdaptor;
  CholeskyOpAdaptor(CholeskyOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CholeskyOp : public ::mlir::Op<CholeskyOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CholeskyOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CholeskyOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("is_lower")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIsLowerAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIsLowerAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.cholesky");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getInput();
  ::mlir::TypedValue<::mlir::MemRefType> getOutput();
  ::mlir::TypedValue<::mlir::MemRefType> getScratch();
  ::mlir::TypedValue<::mlir::MemRefType> getInfo();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::OpOperand &getOutputMutable();
  ::mlir::OpOperand &getScratchMutable();
  ::mlir::OpOperand &getInfoMutable();
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
  ::mlir::BoolAttr getIsLowerAttr();
  bool getIsLower();
  void setIsLowerAttr(::mlir::BoolAttr attr);
  void setIsLower(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output, ::mlir::Value scratch, ::mlir::Value info, ::mlir::BoolAttr is_lower);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output, ::mlir::Value scratch, ::mlir::Value info, ::mlir::BoolAttr is_lower);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value output, ::mlir::Value scratch, ::mlir::Value info, bool is_lower);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value output, ::mlir::Value scratch, ::mlir::Value info, bool is_lower);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::CholeskyOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::CollectivePermuteDoneOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CollectivePermuteDoneOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CollectivePermuteDoneOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CollectivePermuteDoneOpGenericAdaptorBase(CollectivePermuteDoneOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CollectivePermuteDoneOpGenericAdaptor : public detail::CollectivePermuteDoneOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CollectivePermuteDoneOpGenericAdaptorBase;
public:
  CollectivePermuteDoneOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CollectivePermuteDoneOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CollectivePermuteDoneOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CollectivePermuteDoneOp, typename = std::enable_if_t<std::is_same_v<LateInst, CollectivePermuteDoneOp>>>
  CollectivePermuteDoneOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CollectivePermuteDoneOpAdaptor : public CollectivePermuteDoneOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CollectivePermuteDoneOpGenericAdaptor::CollectivePermuteDoneOpGenericAdaptor;
  CollectivePermuteDoneOpAdaptor(CollectivePermuteDoneOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CollectivePermuteDoneOp : public ::mlir::Op<CollectivePermuteDoneOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CollectivePermuteDoneOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CollectivePermuteDoneOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.collective_permute_done");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getToken();
  ::mlir::OpOperand &getTokenMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value token);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value token);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::CollectivePermuteDoneOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::CollectivePermuteStartOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CollectivePermuteStartOpGenericAdaptorBase {
public:
  struct Properties {
    using channel_idTy = ::mlir::mhlo::ChannelHandleAttr;
    channel_idTy channel_id;

    auto getChannelId() {
      auto &propStorage = this->channel_id;
      return ::llvm::dyn_cast_or_null<::mlir::mhlo::ChannelHandleAttr>(propStorage);
    }
    void setChannelId(const ::mlir::mhlo::ChannelHandleAttr &propValue) {
      this->channel_id = propValue;
    }
    using is_syncTy = ::mlir::BoolAttr;
    is_syncTy is_sync;

    auto getIsSync() {
      auto &propStorage = this->is_sync;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setIsSync(const ::mlir::BoolAttr &propValue) {
      this->is_sync = propValue;
    }
    using no_parallel_custom_callTy = ::mlir::BoolAttr;
    no_parallel_custom_callTy no_parallel_custom_call;

    auto getNoParallelCustomCall() {
      auto &propStorage = this->no_parallel_custom_call;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setNoParallelCustomCall(const ::mlir::BoolAttr &propValue) {
      this->no_parallel_custom_call = propValue;
    }
    using source_target_pairsTy = ::mlir::DenseIntElementsAttr;
    source_target_pairsTy source_target_pairs;

    auto getSourceTargetPairs() {
      auto &propStorage = this->source_target_pairs;
      return ::llvm::cast<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setSourceTargetPairs(const ::mlir::DenseIntElementsAttr &propValue) {
      this->source_target_pairs = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.channel_id == this->channel_id &&
        rhs.is_sync == this->is_sync &&
        rhs.no_parallel_custom_call == this->no_parallel_custom_call &&
        rhs.source_target_pairs == this->source_target_pairs &&
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
  CollectivePermuteStartOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  CollectivePermuteStartOpGenericAdaptorBase(CollectivePermuteStartOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getSourceTargetPairsAttr();
  ::mlir::DenseIntElementsAttr getSourceTargetPairs();
  ::mlir::mhlo::ChannelHandleAttr getChannelIdAttr();
  ::std::optional<::mlir::mhlo::ChannelHandleAttr> getChannelId();
  ::mlir::BoolAttr getIsSyncAttr();
  bool getIsSync();
  ::mlir::BoolAttr getNoParallelCustomCallAttr();
  bool getNoParallelCustomCall();
};
} // namespace detail
template <typename RangeT>
class CollectivePermuteStartOpGenericAdaptor : public detail::CollectivePermuteStartOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CollectivePermuteStartOpGenericAdaptorBase;
public:
  CollectivePermuteStartOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CollectivePermuteStartOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CollectivePermuteStartOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = CollectivePermuteStartOp, typename = std::enable_if_t<std::is_same_v<LateInst, CollectivePermuteStartOp>>>
  CollectivePermuteStartOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperand() {
    return (*getODSOperands(0).begin());
  }

  ValueT getOutput() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CollectivePermuteStartOpAdaptor : public CollectivePermuteStartOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CollectivePermuteStartOpGenericAdaptor::CollectivePermuteStartOpGenericAdaptor;
  CollectivePermuteStartOpAdaptor(CollectivePermuteStartOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CollectivePermuteStartOp : public ::mlir::Op<CollectivePermuteStartOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CollectivePermuteStartOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CollectivePermuteStartOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("channel_id"), ::llvm::StringRef("is_sync"), ::llvm::StringRef("no_parallel_custom_call"), ::llvm::StringRef("source_target_pairs")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getChannelIdAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getChannelIdAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIsSyncAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIsSyncAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getNoParallelCustomCallAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getNoParallelCustomCallAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getSourceTargetPairsAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getSourceTargetPairsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.collective_permute_start");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getOperand();
  ::mlir::TypedValue<::mlir::MemRefType> getOutput();
  ::mlir::OpOperand &getOperandMutable();
  ::mlir::OpOperand &getOutputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getToken();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseIntElementsAttr getSourceTargetPairsAttr();
  ::mlir::DenseIntElementsAttr getSourceTargetPairs();
  ::mlir::mhlo::ChannelHandleAttr getChannelIdAttr();
  ::std::optional<::mlir::mhlo::ChannelHandleAttr> getChannelId();
  ::mlir::BoolAttr getIsSyncAttr();
  bool getIsSync();
  ::mlir::BoolAttr getNoParallelCustomCallAttr();
  bool getNoParallelCustomCall();
  void setSourceTargetPairsAttr(::mlir::DenseIntElementsAttr attr);
  void setChannelIdAttr(::mlir::mhlo::ChannelHandleAttr attr);
  void setIsSyncAttr(::mlir::BoolAttr attr);
  void setIsSync(bool attrValue);
  void setNoParallelCustomCallAttr(::mlir::BoolAttr attr);
  void setNoParallelCustomCall(bool attrValue);
  ::mlir::Attribute removeChannelIdAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type token, ::mlir::Value operand, ::mlir::Value output, ::mlir::DenseIntElementsAttr source_target_pairs, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, ::mlir::BoolAttr is_sync, ::mlir::BoolAttr no_parallel_custom_call);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output, ::mlir::DenseIntElementsAttr source_target_pairs, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, ::mlir::BoolAttr is_sync, ::mlir::BoolAttr no_parallel_custom_call);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type token, ::mlir::Value operand, ::mlir::Value output, ::mlir::DenseIntElementsAttr source_target_pairs, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, bool is_sync, bool no_parallel_custom_call);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output, ::mlir::DenseIntElementsAttr source_target_pairs, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, bool is_sync, bool no_parallel_custom_call);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::CollectivePermuteStartOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::ConvBackwardFilterOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvBackwardFilterOpGenericAdaptorBase {
public:
  struct Properties {
    using backend_configTy = ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr;
    backend_configTy backend_config;

    auto getBackendConfig() {
      auto &propStorage = this->backend_config;
      return ::llvm::cast<::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr>(propStorage);
    }
    void setBackendConfig(const ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr &propValue) {
      this->backend_config = propValue;
    }
    using batch_group_countTy = ::mlir::IntegerAttr;
    batch_group_countTy batch_group_count;

    auto getBatchGroupCount() {
      auto &propStorage = this->batch_group_count;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setBatchGroupCount(const ::mlir::IntegerAttr &propValue) {
      this->batch_group_count = propValue;
    }
    using dimension_numbersTy = ::mlir::mhlo::ConvDimensionNumbersAttr;
    dimension_numbersTy dimension_numbers;

    auto getDimensionNumbers() {
      auto &propStorage = this->dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::ConvDimensionNumbersAttr>(propStorage);
    }
    void setDimensionNumbers(const ::mlir::mhlo::ConvDimensionNumbersAttr &propValue) {
      this->dimension_numbers = propValue;
    }
    using feature_group_countTy = ::mlir::IntegerAttr;
    feature_group_countTy feature_group_count;

    auto getFeatureGroupCount() {
      auto &propStorage = this->feature_group_count;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setFeatureGroupCount(const ::mlir::IntegerAttr &propValue) {
      this->feature_group_count = propValue;
    }
    using lhs_dilationTy = ::mlir::DenseIntElementsAttr;
    lhs_dilationTy lhs_dilation;

    auto getLhsDilation() {
      auto &propStorage = this->lhs_dilation;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setLhsDilation(const ::mlir::DenseIntElementsAttr &propValue) {
      this->lhs_dilation = propValue;
    }
    using paddingTy = ::mlir::DenseIntElementsAttr;
    paddingTy padding;

    auto getPadding() {
      auto &propStorage = this->padding;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setPadding(const ::mlir::DenseIntElementsAttr &propValue) {
      this->padding = propValue;
    }
    using precision_configTy = ::mlir::ArrayAttr;
    precision_configTy precision_config;

    auto getPrecisionConfig() {
      auto &propStorage = this->precision_config;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPrecisionConfig(const ::mlir::ArrayAttr &propValue) {
      this->precision_config = propValue;
    }
    using result_scaleTy = ::mlir::FloatAttr;
    result_scaleTy result_scale;

    auto getResultScale() {
      auto &propStorage = this->result_scale;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setResultScale(const ::mlir::FloatAttr &propValue) {
      this->result_scale = propValue;
    }
    using rhs_dilationTy = ::mlir::DenseIntElementsAttr;
    rhs_dilationTy rhs_dilation;

    auto getRhsDilation() {
      auto &propStorage = this->rhs_dilation;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setRhsDilation(const ::mlir::DenseIntElementsAttr &propValue) {
      this->rhs_dilation = propValue;
    }
    using window_reversalTy = ::mlir::DenseElementsAttr;
    window_reversalTy window_reversal;

    auto getWindowReversal() {
      auto &propStorage = this->window_reversal;
      return ::llvm::dyn_cast_or_null<::mlir::DenseElementsAttr>(propStorage);
    }
    void setWindowReversal(const ::mlir::DenseElementsAttr &propValue) {
      this->window_reversal = propValue;
    }
    using window_stridesTy = ::mlir::DenseIntElementsAttr;
    window_stridesTy window_strides;

    auto getWindowStrides() {
      auto &propStorage = this->window_strides;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setWindowStrides(const ::mlir::DenseIntElementsAttr &propValue) {
      this->window_strides = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.backend_config == this->backend_config &&
        rhs.batch_group_count == this->batch_group_count &&
        rhs.dimension_numbers == this->dimension_numbers &&
        rhs.feature_group_count == this->feature_group_count &&
        rhs.lhs_dilation == this->lhs_dilation &&
        rhs.padding == this->padding &&
        rhs.precision_config == this->precision_config &&
        rhs.result_scale == this->result_scale &&
        rhs.rhs_dilation == this->rhs_dilation &&
        rhs.window_reversal == this->window_reversal &&
        rhs.window_strides == this->window_strides &&
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
  ConvBackwardFilterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ConvBackwardFilterOpGenericAdaptorBase(ConvBackwardFilterOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getWindowStridesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getWindowStrides();
  ::mlir::DenseIntElementsAttr getPaddingAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getPadding();
  ::mlir::DenseIntElementsAttr getLhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getLhsDilation();
  ::mlir::DenseIntElementsAttr getRhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getRhsDilation();
  ::mlir::DenseElementsAttr getWindowReversalAttr();
  ::std::optional< ::mlir::DenseElementsAttr > getWindowReversal();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbersAttr();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbers();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getResultScaleAttr();
  ::llvm::APFloat getResultScale();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfigAttr();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfig();
};
} // namespace detail
template <typename RangeT>
class ConvBackwardFilterOpGenericAdaptor : public detail::ConvBackwardFilterOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvBackwardFilterOpGenericAdaptorBase;
public:
  ConvBackwardFilterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvBackwardFilterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvBackwardFilterOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ConvBackwardFilterOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvBackwardFilterOp>>>
  ConvBackwardFilterOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getDOutput() {
    return (*getODSOperands(1).begin());
  }

  ValueT getDFilter() {
    return (*getODSOperands(2).begin());
  }

  ValueT getScratch() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConvBackwardFilterOpAdaptor : public ConvBackwardFilterOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvBackwardFilterOpGenericAdaptor::ConvBackwardFilterOpGenericAdaptor;
  ConvBackwardFilterOpAdaptor(ConvBackwardFilterOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvBackwardFilterOp : public ::mlir::Op<ConvBackwardFilterOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvBackwardFilterOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvBackwardFilterOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("backend_config"), ::llvm::StringRef("batch_group_count"), ::llvm::StringRef("dimension_numbers"), ::llvm::StringRef("feature_group_count"), ::llvm::StringRef("lhs_dilation"), ::llvm::StringRef("padding"), ::llvm::StringRef("precision_config"), ::llvm::StringRef("result_scale"), ::llvm::StringRef("rhs_dilation"), ::llvm::StringRef("window_reversal"), ::llvm::StringRef("window_strides")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBackendConfigAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBackendConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getBatchGroupCountAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getBatchGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getDimensionNumbersAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getFeatureGroupCountAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getFeatureGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getLhsDilationAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getLhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getPaddingAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getPaddingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getPrecisionConfigAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getPrecisionConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getResultScaleAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getResultScaleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  ::mlir::StringAttr getRhsDilationAttrName() {
    return getAttributeNameForIndex(8);
  }

  static ::mlir::StringAttr getRhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 8);
  }

  ::mlir::StringAttr getWindowReversalAttrName() {
    return getAttributeNameForIndex(9);
  }

  static ::mlir::StringAttr getWindowReversalAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 9);
  }

  ::mlir::StringAttr getWindowStridesAttrName() {
    return getAttributeNameForIndex(10);
  }

  static ::mlir::StringAttr getWindowStridesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 10);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.conv_backwardfilter");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getInput();
  ::mlir::TypedValue<::mlir::MemRefType> getDOutput();
  ::mlir::TypedValue<::mlir::MemRefType> getDFilter();
  ::mlir::TypedValue<::mlir::MemRefType> getScratch();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::OpOperand &getDOutputMutable();
  ::mlir::OpOperand &getDFilterMutable();
  ::mlir::OpOperand &getScratchMutable();
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
  ::mlir::DenseIntElementsAttr getWindowStridesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getWindowStrides();
  ::mlir::DenseIntElementsAttr getPaddingAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getPadding();
  ::mlir::DenseIntElementsAttr getLhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getLhsDilation();
  ::mlir::DenseIntElementsAttr getRhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getRhsDilation();
  ::mlir::DenseElementsAttr getWindowReversalAttr();
  ::std::optional< ::mlir::DenseElementsAttr > getWindowReversal();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbersAttr();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbers();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getResultScaleAttr();
  ::llvm::APFloat getResultScale();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfigAttr();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfig();
  void setWindowStridesAttr(::mlir::DenseIntElementsAttr attr);
  void setPaddingAttr(::mlir::DenseIntElementsAttr attr);
  void setLhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setRhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setWindowReversalAttr(::mlir::DenseElementsAttr attr);
  void setDimensionNumbersAttr(::mlir::mhlo::ConvDimensionNumbersAttr attr);
  void setFeatureGroupCountAttr(::mlir::IntegerAttr attr);
  void setFeatureGroupCount(uint64_t attrValue);
  void setBatchGroupCountAttr(::mlir::IntegerAttr attr);
  void setBatchGroupCount(uint64_t attrValue);
  void setPrecisionConfigAttr(::mlir::ArrayAttr attr);
  void setResultScaleAttr(::mlir::FloatAttr attr);
  void setResultScale(::llvm::APFloat attrValue);
  void setBackendConfigAttr(::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr attr);
  ::mlir::Attribute removeWindowStridesAttr();
  ::mlir::Attribute removePaddingAttr();
  ::mlir::Attribute removeLhsDilationAttr();
  ::mlir::Attribute removeRhsDilationAttr();
  ::mlir::Attribute removeWindowReversalAttr();
  ::mlir::Attribute removePrecisionConfigAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value d_output, ::mlir::Value d_filter, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr result_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value d_output, ::mlir::Value d_filter, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr result_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value d_output, ::mlir::Value d_filter, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat result_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value d_output, ::mlir::Value d_filter, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat result_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
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
    assert(index < 11 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::ConvBackwardFilterOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::ConvBackwardInputOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvBackwardInputOpGenericAdaptorBase {
public:
  struct Properties {
    using backend_configTy = ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr;
    backend_configTy backend_config;

    auto getBackendConfig() {
      auto &propStorage = this->backend_config;
      return ::llvm::cast<::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr>(propStorage);
    }
    void setBackendConfig(const ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr &propValue) {
      this->backend_config = propValue;
    }
    using batch_group_countTy = ::mlir::IntegerAttr;
    batch_group_countTy batch_group_count;

    auto getBatchGroupCount() {
      auto &propStorage = this->batch_group_count;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setBatchGroupCount(const ::mlir::IntegerAttr &propValue) {
      this->batch_group_count = propValue;
    }
    using dimension_numbersTy = ::mlir::mhlo::ConvDimensionNumbersAttr;
    dimension_numbersTy dimension_numbers;

    auto getDimensionNumbers() {
      auto &propStorage = this->dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::ConvDimensionNumbersAttr>(propStorage);
    }
    void setDimensionNumbers(const ::mlir::mhlo::ConvDimensionNumbersAttr &propValue) {
      this->dimension_numbers = propValue;
    }
    using feature_group_countTy = ::mlir::IntegerAttr;
    feature_group_countTy feature_group_count;

    auto getFeatureGroupCount() {
      auto &propStorage = this->feature_group_count;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setFeatureGroupCount(const ::mlir::IntegerAttr &propValue) {
      this->feature_group_count = propValue;
    }
    using lhs_dilationTy = ::mlir::DenseIntElementsAttr;
    lhs_dilationTy lhs_dilation;

    auto getLhsDilation() {
      auto &propStorage = this->lhs_dilation;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setLhsDilation(const ::mlir::DenseIntElementsAttr &propValue) {
      this->lhs_dilation = propValue;
    }
    using paddingTy = ::mlir::DenseIntElementsAttr;
    paddingTy padding;

    auto getPadding() {
      auto &propStorage = this->padding;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setPadding(const ::mlir::DenseIntElementsAttr &propValue) {
      this->padding = propValue;
    }
    using precision_configTy = ::mlir::ArrayAttr;
    precision_configTy precision_config;

    auto getPrecisionConfig() {
      auto &propStorage = this->precision_config;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPrecisionConfig(const ::mlir::ArrayAttr &propValue) {
      this->precision_config = propValue;
    }
    using result_scaleTy = ::mlir::FloatAttr;
    result_scaleTy result_scale;

    auto getResultScale() {
      auto &propStorage = this->result_scale;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setResultScale(const ::mlir::FloatAttr &propValue) {
      this->result_scale = propValue;
    }
    using rhs_dilationTy = ::mlir::DenseIntElementsAttr;
    rhs_dilationTy rhs_dilation;

    auto getRhsDilation() {
      auto &propStorage = this->rhs_dilation;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setRhsDilation(const ::mlir::DenseIntElementsAttr &propValue) {
      this->rhs_dilation = propValue;
    }
    using window_reversalTy = ::mlir::DenseElementsAttr;
    window_reversalTy window_reversal;

    auto getWindowReversal() {
      auto &propStorage = this->window_reversal;
      return ::llvm::dyn_cast_or_null<::mlir::DenseElementsAttr>(propStorage);
    }
    void setWindowReversal(const ::mlir::DenseElementsAttr &propValue) {
      this->window_reversal = propValue;
    }
    using window_stridesTy = ::mlir::DenseIntElementsAttr;
    window_stridesTy window_strides;

    auto getWindowStrides() {
      auto &propStorage = this->window_strides;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setWindowStrides(const ::mlir::DenseIntElementsAttr &propValue) {
      this->window_strides = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.backend_config == this->backend_config &&
        rhs.batch_group_count == this->batch_group_count &&
        rhs.dimension_numbers == this->dimension_numbers &&
        rhs.feature_group_count == this->feature_group_count &&
        rhs.lhs_dilation == this->lhs_dilation &&
        rhs.padding == this->padding &&
        rhs.precision_config == this->precision_config &&
        rhs.result_scale == this->result_scale &&
        rhs.rhs_dilation == this->rhs_dilation &&
        rhs.window_reversal == this->window_reversal &&
        rhs.window_strides == this->window_strides &&
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
  ConvBackwardInputOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ConvBackwardInputOpGenericAdaptorBase(ConvBackwardInputOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getWindowStridesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getWindowStrides();
  ::mlir::DenseIntElementsAttr getPaddingAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getPadding();
  ::mlir::DenseIntElementsAttr getLhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getLhsDilation();
  ::mlir::DenseIntElementsAttr getRhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getRhsDilation();
  ::mlir::DenseElementsAttr getWindowReversalAttr();
  ::std::optional< ::mlir::DenseElementsAttr > getWindowReversal();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbersAttr();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbers();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getResultScaleAttr();
  ::llvm::APFloat getResultScale();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfigAttr();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfig();
};
} // namespace detail
template <typename RangeT>
class ConvBackwardInputOpGenericAdaptor : public detail::ConvBackwardInputOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvBackwardInputOpGenericAdaptorBase;
public:
  ConvBackwardInputOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvBackwardInputOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvBackwardInputOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ConvBackwardInputOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvBackwardInputOp>>>
  ConvBackwardInputOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getDOutput() {
    return (*getODSOperands(0).begin());
  }

  ValueT getFilter() {
    return (*getODSOperands(1).begin());
  }

  ValueT getDInput() {
    return (*getODSOperands(2).begin());
  }

  ValueT getScratch() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConvBackwardInputOpAdaptor : public ConvBackwardInputOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvBackwardInputOpGenericAdaptor::ConvBackwardInputOpGenericAdaptor;
  ConvBackwardInputOpAdaptor(ConvBackwardInputOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvBackwardInputOp : public ::mlir::Op<ConvBackwardInputOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvBackwardInputOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvBackwardInputOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("backend_config"), ::llvm::StringRef("batch_group_count"), ::llvm::StringRef("dimension_numbers"), ::llvm::StringRef("feature_group_count"), ::llvm::StringRef("lhs_dilation"), ::llvm::StringRef("padding"), ::llvm::StringRef("precision_config"), ::llvm::StringRef("result_scale"), ::llvm::StringRef("rhs_dilation"), ::llvm::StringRef("window_reversal"), ::llvm::StringRef("window_strides")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBackendConfigAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBackendConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getBatchGroupCountAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getBatchGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getDimensionNumbersAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getFeatureGroupCountAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getFeatureGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getLhsDilationAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getLhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getPaddingAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getPaddingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getPrecisionConfigAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getPrecisionConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getResultScaleAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getResultScaleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  ::mlir::StringAttr getRhsDilationAttrName() {
    return getAttributeNameForIndex(8);
  }

  static ::mlir::StringAttr getRhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 8);
  }

  ::mlir::StringAttr getWindowReversalAttrName() {
    return getAttributeNameForIndex(9);
  }

  static ::mlir::StringAttr getWindowReversalAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 9);
  }

  ::mlir::StringAttr getWindowStridesAttrName() {
    return getAttributeNameForIndex(10);
  }

  static ::mlir::StringAttr getWindowStridesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 10);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.conv_backwardinput");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getDOutput();
  ::mlir::TypedValue<::mlir::MemRefType> getFilter();
  ::mlir::TypedValue<::mlir::MemRefType> getDInput();
  ::mlir::TypedValue<::mlir::MemRefType> getScratch();
  ::mlir::OpOperand &getDOutputMutable();
  ::mlir::OpOperand &getFilterMutable();
  ::mlir::OpOperand &getDInputMutable();
  ::mlir::OpOperand &getScratchMutable();
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
  ::mlir::DenseIntElementsAttr getWindowStridesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getWindowStrides();
  ::mlir::DenseIntElementsAttr getPaddingAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getPadding();
  ::mlir::DenseIntElementsAttr getLhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getLhsDilation();
  ::mlir::DenseIntElementsAttr getRhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getRhsDilation();
  ::mlir::DenseElementsAttr getWindowReversalAttr();
  ::std::optional< ::mlir::DenseElementsAttr > getWindowReversal();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbersAttr();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbers();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getResultScaleAttr();
  ::llvm::APFloat getResultScale();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfigAttr();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfig();
  void setWindowStridesAttr(::mlir::DenseIntElementsAttr attr);
  void setPaddingAttr(::mlir::DenseIntElementsAttr attr);
  void setLhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setRhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setWindowReversalAttr(::mlir::DenseElementsAttr attr);
  void setDimensionNumbersAttr(::mlir::mhlo::ConvDimensionNumbersAttr attr);
  void setFeatureGroupCountAttr(::mlir::IntegerAttr attr);
  void setFeatureGroupCount(uint64_t attrValue);
  void setBatchGroupCountAttr(::mlir::IntegerAttr attr);
  void setBatchGroupCount(uint64_t attrValue);
  void setPrecisionConfigAttr(::mlir::ArrayAttr attr);
  void setResultScaleAttr(::mlir::FloatAttr attr);
  void setResultScale(::llvm::APFloat attrValue);
  void setBackendConfigAttr(::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr attr);
  ::mlir::Attribute removeWindowStridesAttr();
  ::mlir::Attribute removePaddingAttr();
  ::mlir::Attribute removeLhsDilationAttr();
  ::mlir::Attribute removeRhsDilationAttr();
  ::mlir::Attribute removeWindowReversalAttr();
  ::mlir::Attribute removePrecisionConfigAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value d_output, ::mlir::Value filter, ::mlir::Value d_input, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr result_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value d_output, ::mlir::Value filter, ::mlir::Value d_input, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr result_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value d_output, ::mlir::Value filter, ::mlir::Value d_input, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat result_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value d_output, ::mlir::Value filter, ::mlir::Value d_input, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat result_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
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
    assert(index < 11 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::ConvBackwardInputOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::ConvForwardFusedOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvForwardFusedOpGenericAdaptorBase {
public:
  struct Properties {
    using activation_modeTy = ::mlir::lmhlo_gpu::ActivationAttr;
    activation_modeTy activation_mode;

    auto getActivationMode() {
      auto &propStorage = this->activation_mode;
      return ::llvm::cast<::mlir::lmhlo_gpu::ActivationAttr>(propStorage);
    }
    void setActivationMode(const ::mlir::lmhlo_gpu::ActivationAttr &propValue) {
      this->activation_mode = propValue;
    }
    using backend_configTy = ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr;
    backend_configTy backend_config;

    auto getBackendConfig() {
      auto &propStorage = this->backend_config;
      return ::llvm::cast<::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr>(propStorage);
    }
    void setBackendConfig(const ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr &propValue) {
      this->backend_config = propValue;
    }
    using batch_group_countTy = ::mlir::IntegerAttr;
    batch_group_countTy batch_group_count;

    auto getBatchGroupCount() {
      auto &propStorage = this->batch_group_count;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setBatchGroupCount(const ::mlir::IntegerAttr &propValue) {
      this->batch_group_count = propValue;
    }
    using dimension_numbersTy = ::mlir::mhlo::ConvDimensionNumbersAttr;
    dimension_numbersTy dimension_numbers;

    auto getDimensionNumbers() {
      auto &propStorage = this->dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::ConvDimensionNumbersAttr>(propStorage);
    }
    void setDimensionNumbers(const ::mlir::mhlo::ConvDimensionNumbersAttr &propValue) {
      this->dimension_numbers = propValue;
    }
    using feature_group_countTy = ::mlir::IntegerAttr;
    feature_group_countTy feature_group_count;

    auto getFeatureGroupCount() {
      auto &propStorage = this->feature_group_count;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setFeatureGroupCount(const ::mlir::IntegerAttr &propValue) {
      this->feature_group_count = propValue;
    }
    using leakyrelu_alphaTy = ::mlir::FloatAttr;
    leakyrelu_alphaTy leakyrelu_alpha;

    auto getLeakyreluAlpha() {
      auto &propStorage = this->leakyrelu_alpha;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setLeakyreluAlpha(const ::mlir::FloatAttr &propValue) {
      this->leakyrelu_alpha = propValue;
    }
    using lhs_dilationTy = ::mlir::DenseIntElementsAttr;
    lhs_dilationTy lhs_dilation;

    auto getLhsDilation() {
      auto &propStorage = this->lhs_dilation;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setLhsDilation(const ::mlir::DenseIntElementsAttr &propValue) {
      this->lhs_dilation = propValue;
    }
    using paddingTy = ::mlir::DenseIntElementsAttr;
    paddingTy padding;

    auto getPadding() {
      auto &propStorage = this->padding;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setPadding(const ::mlir::DenseIntElementsAttr &propValue) {
      this->padding = propValue;
    }
    using precision_configTy = ::mlir::ArrayAttr;
    precision_configTy precision_config;

    auto getPrecisionConfig() {
      auto &propStorage = this->precision_config;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPrecisionConfig(const ::mlir::ArrayAttr &propValue) {
      this->precision_config = propValue;
    }
    using result_scaleTy = ::mlir::FloatAttr;
    result_scaleTy result_scale;

    auto getResultScale() {
      auto &propStorage = this->result_scale;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setResultScale(const ::mlir::FloatAttr &propValue) {
      this->result_scale = propValue;
    }
    using rhs_dilationTy = ::mlir::DenseIntElementsAttr;
    rhs_dilationTy rhs_dilation;

    auto getRhsDilation() {
      auto &propStorage = this->rhs_dilation;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setRhsDilation(const ::mlir::DenseIntElementsAttr &propValue) {
      this->rhs_dilation = propValue;
    }
    using window_reversalTy = ::mlir::DenseElementsAttr;
    window_reversalTy window_reversal;

    auto getWindowReversal() {
      auto &propStorage = this->window_reversal;
      return ::llvm::dyn_cast_or_null<::mlir::DenseElementsAttr>(propStorage);
    }
    void setWindowReversal(const ::mlir::DenseElementsAttr &propValue) {
      this->window_reversal = propValue;
    }
    using window_stridesTy = ::mlir::DenseIntElementsAttr;
    window_stridesTy window_strides;

    auto getWindowStrides() {
      auto &propStorage = this->window_strides;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setWindowStrides(const ::mlir::DenseIntElementsAttr &propValue) {
      this->window_strides = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.activation_mode == this->activation_mode &&
        rhs.backend_config == this->backend_config &&
        rhs.batch_group_count == this->batch_group_count &&
        rhs.dimension_numbers == this->dimension_numbers &&
        rhs.feature_group_count == this->feature_group_count &&
        rhs.leakyrelu_alpha == this->leakyrelu_alpha &&
        rhs.lhs_dilation == this->lhs_dilation &&
        rhs.padding == this->padding &&
        rhs.precision_config == this->precision_config &&
        rhs.result_scale == this->result_scale &&
        rhs.rhs_dilation == this->rhs_dilation &&
        rhs.window_reversal == this->window_reversal &&
        rhs.window_strides == this->window_strides &&
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
  ConvForwardFusedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ConvForwardFusedOpGenericAdaptorBase(ConvForwardFusedOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getWindowStridesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getWindowStrides();
  ::mlir::DenseIntElementsAttr getPaddingAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getPadding();
  ::mlir::DenseIntElementsAttr getLhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getLhsDilation();
  ::mlir::DenseIntElementsAttr getRhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getRhsDilation();
  ::mlir::DenseElementsAttr getWindowReversalAttr();
  ::std::optional< ::mlir::DenseElementsAttr > getWindowReversal();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbersAttr();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbers();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getResultScaleAttr();
  ::llvm::APFloat getResultScale();
  ::mlir::lmhlo_gpu::ActivationAttr getActivationModeAttr();
  ::mlir::lmhlo_gpu::Activation getActivationMode();
  ::mlir::FloatAttr getLeakyreluAlphaAttr();
  ::llvm::APFloat getLeakyreluAlpha();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfigAttr();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfig();
};
} // namespace detail
template <typename RangeT>
class ConvForwardFusedOpGenericAdaptor : public detail::ConvForwardFusedOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvForwardFusedOpGenericAdaptorBase;
public:
  ConvForwardFusedOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvForwardFusedOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvForwardFusedOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ConvForwardFusedOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvForwardFusedOp>>>
  ConvForwardFusedOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getFilter() {
    return (*getODSOperands(1).begin());
  }

  ValueT getBias() {
    return (*getODSOperands(2).begin());
  }

  ValueT getOutput() {
    return (*getODSOperands(3).begin());
  }

  ValueT getScratch() {
    return (*getODSOperands(4).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConvForwardFusedOpAdaptor : public ConvForwardFusedOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvForwardFusedOpGenericAdaptor::ConvForwardFusedOpGenericAdaptor;
  ConvForwardFusedOpAdaptor(ConvForwardFusedOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvForwardFusedOp : public ::mlir::Op<ConvForwardFusedOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<5>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvForwardFusedOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvForwardFusedOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("activation_mode"), ::llvm::StringRef("backend_config"), ::llvm::StringRef("batch_group_count"), ::llvm::StringRef("dimension_numbers"), ::llvm::StringRef("feature_group_count"), ::llvm::StringRef("leakyrelu_alpha"), ::llvm::StringRef("lhs_dilation"), ::llvm::StringRef("padding"), ::llvm::StringRef("precision_config"), ::llvm::StringRef("result_scale"), ::llvm::StringRef("rhs_dilation"), ::llvm::StringRef("window_reversal"), ::llvm::StringRef("window_strides")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getActivationModeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getActivationModeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getBackendConfigAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getBackendConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getBatchGroupCountAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getBatchGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getDimensionNumbersAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getFeatureGroupCountAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getFeatureGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getLeakyreluAlphaAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getLeakyreluAlphaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getLhsDilationAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getLhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getPaddingAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getPaddingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  ::mlir::StringAttr getPrecisionConfigAttrName() {
    return getAttributeNameForIndex(8);
  }

  static ::mlir::StringAttr getPrecisionConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 8);
  }

  ::mlir::StringAttr getResultScaleAttrName() {
    return getAttributeNameForIndex(9);
  }

  static ::mlir::StringAttr getResultScaleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 9);
  }

  ::mlir::StringAttr getRhsDilationAttrName() {
    return getAttributeNameForIndex(10);
  }

  static ::mlir::StringAttr getRhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 10);
  }

  ::mlir::StringAttr getWindowReversalAttrName() {
    return getAttributeNameForIndex(11);
  }

  static ::mlir::StringAttr getWindowReversalAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 11);
  }

  ::mlir::StringAttr getWindowStridesAttrName() {
    return getAttributeNameForIndex(12);
  }

  static ::mlir::StringAttr getWindowStridesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 12);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.conv_forward_fused");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getInput();
  ::mlir::TypedValue<::mlir::MemRefType> getFilter();
  ::mlir::TypedValue<::mlir::MemRefType> getBias();
  ::mlir::TypedValue<::mlir::MemRefType> getOutput();
  ::mlir::TypedValue<::mlir::MemRefType> getScratch();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::OpOperand &getFilterMutable();
  ::mlir::OpOperand &getBiasMutable();
  ::mlir::OpOperand &getOutputMutable();
  ::mlir::OpOperand &getScratchMutable();
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
  ::mlir::DenseIntElementsAttr getWindowStridesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getWindowStrides();
  ::mlir::DenseIntElementsAttr getPaddingAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getPadding();
  ::mlir::DenseIntElementsAttr getLhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getLhsDilation();
  ::mlir::DenseIntElementsAttr getRhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getRhsDilation();
  ::mlir::DenseElementsAttr getWindowReversalAttr();
  ::std::optional< ::mlir::DenseElementsAttr > getWindowReversal();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbersAttr();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbers();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getResultScaleAttr();
  ::llvm::APFloat getResultScale();
  ::mlir::lmhlo_gpu::ActivationAttr getActivationModeAttr();
  ::mlir::lmhlo_gpu::Activation getActivationMode();
  ::mlir::FloatAttr getLeakyreluAlphaAttr();
  ::llvm::APFloat getLeakyreluAlpha();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfigAttr();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfig();
  void setWindowStridesAttr(::mlir::DenseIntElementsAttr attr);
  void setPaddingAttr(::mlir::DenseIntElementsAttr attr);
  void setLhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setRhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setWindowReversalAttr(::mlir::DenseElementsAttr attr);
  void setDimensionNumbersAttr(::mlir::mhlo::ConvDimensionNumbersAttr attr);
  void setFeatureGroupCountAttr(::mlir::IntegerAttr attr);
  void setFeatureGroupCount(uint64_t attrValue);
  void setBatchGroupCountAttr(::mlir::IntegerAttr attr);
  void setBatchGroupCount(uint64_t attrValue);
  void setPrecisionConfigAttr(::mlir::ArrayAttr attr);
  void setResultScaleAttr(::mlir::FloatAttr attr);
  void setResultScale(::llvm::APFloat attrValue);
  void setActivationModeAttr(::mlir::lmhlo_gpu::ActivationAttr attr);
  void setActivationMode(::mlir::lmhlo_gpu::Activation attrValue);
  void setLeakyreluAlphaAttr(::mlir::FloatAttr attr);
  void setLeakyreluAlpha(::llvm::APFloat attrValue);
  void setBackendConfigAttr(::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr attr);
  ::mlir::Attribute removeWindowStridesAttr();
  ::mlir::Attribute removePaddingAttr();
  ::mlir::Attribute removeLhsDilationAttr();
  ::mlir::Attribute removeRhsDilationAttr();
  ::mlir::Attribute removeWindowReversalAttr();
  ::mlir::Attribute removePrecisionConfigAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value bias, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr result_scale, ::mlir::lmhlo_gpu::ActivationAttr activation_mode, ::mlir::FloatAttr leakyrelu_alpha, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value bias, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr result_scale, ::mlir::lmhlo_gpu::ActivationAttr activation_mode, ::mlir::FloatAttr leakyrelu_alpha, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value bias, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat result_scale, ::mlir::lmhlo_gpu::Activation activation_mode, ::llvm::APFloat leakyrelu_alpha, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value bias, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat result_scale, ::mlir::lmhlo_gpu::Activation activation_mode, ::llvm::APFloat leakyrelu_alpha, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
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
    assert(index < 13 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::ConvForwardFusedOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::ConvForwardFusedSideInputOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvForwardFusedSideInputOpGenericAdaptorBase {
public:
  struct Properties {
    using activation_modeTy = ::mlir::lmhlo_gpu::ActivationAttr;
    activation_modeTy activation_mode;

    auto getActivationMode() {
      auto &propStorage = this->activation_mode;
      return ::llvm::cast<::mlir::lmhlo_gpu::ActivationAttr>(propStorage);
    }
    void setActivationMode(const ::mlir::lmhlo_gpu::ActivationAttr &propValue) {
      this->activation_mode = propValue;
    }
    using backend_configTy = ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr;
    backend_configTy backend_config;

    auto getBackendConfig() {
      auto &propStorage = this->backend_config;
      return ::llvm::cast<::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr>(propStorage);
    }
    void setBackendConfig(const ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr &propValue) {
      this->backend_config = propValue;
    }
    using batch_group_countTy = ::mlir::IntegerAttr;
    batch_group_countTy batch_group_count;

    auto getBatchGroupCount() {
      auto &propStorage = this->batch_group_count;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setBatchGroupCount(const ::mlir::IntegerAttr &propValue) {
      this->batch_group_count = propValue;
    }
    using dimension_numbersTy = ::mlir::mhlo::ConvDimensionNumbersAttr;
    dimension_numbersTy dimension_numbers;

    auto getDimensionNumbers() {
      auto &propStorage = this->dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::ConvDimensionNumbersAttr>(propStorage);
    }
    void setDimensionNumbers(const ::mlir::mhlo::ConvDimensionNumbersAttr &propValue) {
      this->dimension_numbers = propValue;
    }
    using feature_group_countTy = ::mlir::IntegerAttr;
    feature_group_countTy feature_group_count;

    auto getFeatureGroupCount() {
      auto &propStorage = this->feature_group_count;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setFeatureGroupCount(const ::mlir::IntegerAttr &propValue) {
      this->feature_group_count = propValue;
    }
    using lhs_dilationTy = ::mlir::DenseIntElementsAttr;
    lhs_dilationTy lhs_dilation;

    auto getLhsDilation() {
      auto &propStorage = this->lhs_dilation;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setLhsDilation(const ::mlir::DenseIntElementsAttr &propValue) {
      this->lhs_dilation = propValue;
    }
    using paddingTy = ::mlir::DenseIntElementsAttr;
    paddingTy padding;

    auto getPadding() {
      auto &propStorage = this->padding;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setPadding(const ::mlir::DenseIntElementsAttr &propValue) {
      this->padding = propValue;
    }
    using precision_configTy = ::mlir::ArrayAttr;
    precision_configTy precision_config;

    auto getPrecisionConfig() {
      auto &propStorage = this->precision_config;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPrecisionConfig(const ::mlir::ArrayAttr &propValue) {
      this->precision_config = propValue;
    }
    using result_scaleTy = ::mlir::FloatAttr;
    result_scaleTy result_scale;

    auto getResultScale() {
      auto &propStorage = this->result_scale;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setResultScale(const ::mlir::FloatAttr &propValue) {
      this->result_scale = propValue;
    }
    using rhs_dilationTy = ::mlir::DenseIntElementsAttr;
    rhs_dilationTy rhs_dilation;

    auto getRhsDilation() {
      auto &propStorage = this->rhs_dilation;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setRhsDilation(const ::mlir::DenseIntElementsAttr &propValue) {
      this->rhs_dilation = propValue;
    }
    using side_input_scaleTy = ::mlir::FloatAttr;
    side_input_scaleTy side_input_scale;

    auto getSideInputScale() {
      auto &propStorage = this->side_input_scale;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setSideInputScale(const ::mlir::FloatAttr &propValue) {
      this->side_input_scale = propValue;
    }
    using window_reversalTy = ::mlir::DenseElementsAttr;
    window_reversalTy window_reversal;

    auto getWindowReversal() {
      auto &propStorage = this->window_reversal;
      return ::llvm::dyn_cast_or_null<::mlir::DenseElementsAttr>(propStorage);
    }
    void setWindowReversal(const ::mlir::DenseElementsAttr &propValue) {
      this->window_reversal = propValue;
    }
    using window_stridesTy = ::mlir::DenseIntElementsAttr;
    window_stridesTy window_strides;

    auto getWindowStrides() {
      auto &propStorage = this->window_strides;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setWindowStrides(const ::mlir::DenseIntElementsAttr &propValue) {
      this->window_strides = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.activation_mode == this->activation_mode &&
        rhs.backend_config == this->backend_config &&
        rhs.batch_group_count == this->batch_group_count &&
        rhs.dimension_numbers == this->dimension_numbers &&
        rhs.feature_group_count == this->feature_group_count &&
        rhs.lhs_dilation == this->lhs_dilation &&
        rhs.padding == this->padding &&
        rhs.precision_config == this->precision_config &&
        rhs.result_scale == this->result_scale &&
        rhs.rhs_dilation == this->rhs_dilation &&
        rhs.side_input_scale == this->side_input_scale &&
        rhs.window_reversal == this->window_reversal &&
        rhs.window_strides == this->window_strides &&
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
  ConvForwardFusedSideInputOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ConvForwardFusedSideInputOpGenericAdaptorBase(ConvForwardFusedSideInputOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getWindowStridesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getWindowStrides();
  ::mlir::DenseIntElementsAttr getPaddingAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getPadding();
  ::mlir::DenseIntElementsAttr getLhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getLhsDilation();
  ::mlir::DenseIntElementsAttr getRhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getRhsDilation();
  ::mlir::DenseElementsAttr getWindowReversalAttr();
  ::std::optional< ::mlir::DenseElementsAttr > getWindowReversal();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbersAttr();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbers();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getResultScaleAttr();
  ::llvm::APFloat getResultScale();
  ::mlir::lmhlo_gpu::ActivationAttr getActivationModeAttr();
  ::mlir::lmhlo_gpu::Activation getActivationMode();
  ::mlir::FloatAttr getSideInputScaleAttr();
  ::llvm::APFloat getSideInputScale();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfigAttr();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfig();
};
} // namespace detail
template <typename RangeT>
class ConvForwardFusedSideInputOpGenericAdaptor : public detail::ConvForwardFusedSideInputOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvForwardFusedSideInputOpGenericAdaptorBase;
public:
  ConvForwardFusedSideInputOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvForwardFusedSideInputOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvForwardFusedSideInputOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ConvForwardFusedSideInputOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvForwardFusedSideInputOp>>>
  ConvForwardFusedSideInputOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getFilter() {
    return (*getODSOperands(1).begin());
  }

  ValueT getBias() {
    return (*getODSOperands(2).begin());
  }

  ValueT getSideInput() {
    return (*getODSOperands(3).begin());
  }

  ValueT getOutput() {
    return (*getODSOperands(4).begin());
  }

  ValueT getScratch() {
    return (*getODSOperands(5).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConvForwardFusedSideInputOpAdaptor : public ConvForwardFusedSideInputOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvForwardFusedSideInputOpGenericAdaptor::ConvForwardFusedSideInputOpGenericAdaptor;
  ConvForwardFusedSideInputOpAdaptor(ConvForwardFusedSideInputOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvForwardFusedSideInputOp : public ::mlir::Op<ConvForwardFusedSideInputOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<6>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvForwardFusedSideInputOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvForwardFusedSideInputOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("activation_mode"), ::llvm::StringRef("backend_config"), ::llvm::StringRef("batch_group_count"), ::llvm::StringRef("dimension_numbers"), ::llvm::StringRef("feature_group_count"), ::llvm::StringRef("lhs_dilation"), ::llvm::StringRef("padding"), ::llvm::StringRef("precision_config"), ::llvm::StringRef("result_scale"), ::llvm::StringRef("rhs_dilation"), ::llvm::StringRef("side_input_scale"), ::llvm::StringRef("window_reversal"), ::llvm::StringRef("window_strides")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getActivationModeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getActivationModeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getBackendConfigAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getBackendConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getBatchGroupCountAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getBatchGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getDimensionNumbersAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getFeatureGroupCountAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getFeatureGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getLhsDilationAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getLhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getPaddingAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getPaddingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getPrecisionConfigAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getPrecisionConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  ::mlir::StringAttr getResultScaleAttrName() {
    return getAttributeNameForIndex(8);
  }

  static ::mlir::StringAttr getResultScaleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 8);
  }

  ::mlir::StringAttr getRhsDilationAttrName() {
    return getAttributeNameForIndex(9);
  }

  static ::mlir::StringAttr getRhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 9);
  }

  ::mlir::StringAttr getSideInputScaleAttrName() {
    return getAttributeNameForIndex(10);
  }

  static ::mlir::StringAttr getSideInputScaleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 10);
  }

  ::mlir::StringAttr getWindowReversalAttrName() {
    return getAttributeNameForIndex(11);
  }

  static ::mlir::StringAttr getWindowReversalAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 11);
  }

  ::mlir::StringAttr getWindowStridesAttrName() {
    return getAttributeNameForIndex(12);
  }

  static ::mlir::StringAttr getWindowStridesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 12);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.conv_forward_fused_with_side_input");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getInput();
  ::mlir::TypedValue<::mlir::MemRefType> getFilter();
  ::mlir::TypedValue<::mlir::MemRefType> getBias();
  ::mlir::TypedValue<::mlir::MemRefType> getSideInput();
  ::mlir::TypedValue<::mlir::MemRefType> getOutput();
  ::mlir::TypedValue<::mlir::MemRefType> getScratch();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::OpOperand &getFilterMutable();
  ::mlir::OpOperand &getBiasMutable();
  ::mlir::OpOperand &getSideInputMutable();
  ::mlir::OpOperand &getOutputMutable();
  ::mlir::OpOperand &getScratchMutable();
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
  ::mlir::DenseIntElementsAttr getWindowStridesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getWindowStrides();
  ::mlir::DenseIntElementsAttr getPaddingAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getPadding();
  ::mlir::DenseIntElementsAttr getLhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getLhsDilation();
  ::mlir::DenseIntElementsAttr getRhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getRhsDilation();
  ::mlir::DenseElementsAttr getWindowReversalAttr();
  ::std::optional< ::mlir::DenseElementsAttr > getWindowReversal();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbersAttr();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbers();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getResultScaleAttr();
  ::llvm::APFloat getResultScale();
  ::mlir::lmhlo_gpu::ActivationAttr getActivationModeAttr();
  ::mlir::lmhlo_gpu::Activation getActivationMode();
  ::mlir::FloatAttr getSideInputScaleAttr();
  ::llvm::APFloat getSideInputScale();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfigAttr();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfig();
  void setWindowStridesAttr(::mlir::DenseIntElementsAttr attr);
  void setPaddingAttr(::mlir::DenseIntElementsAttr attr);
  void setLhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setRhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setWindowReversalAttr(::mlir::DenseElementsAttr attr);
  void setDimensionNumbersAttr(::mlir::mhlo::ConvDimensionNumbersAttr attr);
  void setFeatureGroupCountAttr(::mlir::IntegerAttr attr);
  void setFeatureGroupCount(uint64_t attrValue);
  void setBatchGroupCountAttr(::mlir::IntegerAttr attr);
  void setBatchGroupCount(uint64_t attrValue);
  void setPrecisionConfigAttr(::mlir::ArrayAttr attr);
  void setResultScaleAttr(::mlir::FloatAttr attr);
  void setResultScale(::llvm::APFloat attrValue);
  void setActivationModeAttr(::mlir::lmhlo_gpu::ActivationAttr attr);
  void setActivationMode(::mlir::lmhlo_gpu::Activation attrValue);
  void setSideInputScaleAttr(::mlir::FloatAttr attr);
  void setSideInputScale(::llvm::APFloat attrValue);
  void setBackendConfigAttr(::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr attr);
  ::mlir::Attribute removeWindowStridesAttr();
  ::mlir::Attribute removePaddingAttr();
  ::mlir::Attribute removeLhsDilationAttr();
  ::mlir::Attribute removeRhsDilationAttr();
  ::mlir::Attribute removeWindowReversalAttr();
  ::mlir::Attribute removePrecisionConfigAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value bias, ::mlir::Value side_input, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr result_scale, ::mlir::lmhlo_gpu::ActivationAttr activation_mode, ::mlir::FloatAttr side_input_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value bias, ::mlir::Value side_input, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr result_scale, ::mlir::lmhlo_gpu::ActivationAttr activation_mode, ::mlir::FloatAttr side_input_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value bias, ::mlir::Value side_input, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat result_scale, ::mlir::lmhlo_gpu::Activation activation_mode, ::llvm::APFloat side_input_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value bias, ::mlir::Value side_input, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat result_scale, ::mlir::lmhlo_gpu::Activation activation_mode, ::llvm::APFloat side_input_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
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
    assert(index < 13 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::ConvForwardFusedSideInputOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::ConvForwardGraphOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvForwardGraphOpGenericAdaptorBase {
public:
  struct Properties {
    using backend_configTy = ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr;
    backend_configTy backend_config;

    auto getBackendConfig() {
      auto &propStorage = this->backend_config;
      return ::llvm::cast<::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr>(propStorage);
    }
    void setBackendConfig(const ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr &propValue) {
      this->backend_config = propValue;
    }
    using batch_group_countTy = ::mlir::IntegerAttr;
    batch_group_countTy batch_group_count;

    auto getBatchGroupCount() {
      auto &propStorage = this->batch_group_count;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setBatchGroupCount(const ::mlir::IntegerAttr &propValue) {
      this->batch_group_count = propValue;
    }
    using dimension_numbersTy = ::mlir::mhlo::ConvDimensionNumbersAttr;
    dimension_numbersTy dimension_numbers;

    auto getDimensionNumbers() {
      auto &propStorage = this->dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::ConvDimensionNumbersAttr>(propStorage);
    }
    void setDimensionNumbers(const ::mlir::mhlo::ConvDimensionNumbersAttr &propValue) {
      this->dimension_numbers = propValue;
    }
    using feature_group_countTy = ::mlir::IntegerAttr;
    feature_group_countTy feature_group_count;

    auto getFeatureGroupCount() {
      auto &propStorage = this->feature_group_count;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setFeatureGroupCount(const ::mlir::IntegerAttr &propValue) {
      this->feature_group_count = propValue;
    }
    using lhs_dilationTy = ::mlir::DenseIntElementsAttr;
    lhs_dilationTy lhs_dilation;

    auto getLhsDilation() {
      auto &propStorage = this->lhs_dilation;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setLhsDilation(const ::mlir::DenseIntElementsAttr &propValue) {
      this->lhs_dilation = propValue;
    }
    using n_aux_outputsTy = ::mlir::IntegerAttr;
    n_aux_outputsTy n_aux_outputs;

    auto getNAuxOutputs() {
      auto &propStorage = this->n_aux_outputs;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setNAuxOutputs(const ::mlir::IntegerAttr &propValue) {
      this->n_aux_outputs = propValue;
    }
    using paddingTy = ::mlir::DenseIntElementsAttr;
    paddingTy padding;

    auto getPadding() {
      auto &propStorage = this->padding;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setPadding(const ::mlir::DenseIntElementsAttr &propValue) {
      this->padding = propValue;
    }
    using precision_configTy = ::mlir::ArrayAttr;
    precision_configTy precision_config;

    auto getPrecisionConfig() {
      auto &propStorage = this->precision_config;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPrecisionConfig(const ::mlir::ArrayAttr &propValue) {
      this->precision_config = propValue;
    }
    using result_scaleTy = ::mlir::FloatAttr;
    result_scaleTy result_scale;

    auto getResultScale() {
      auto &propStorage = this->result_scale;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setResultScale(const ::mlir::FloatAttr &propValue) {
      this->result_scale = propValue;
    }
    using rhs_dilationTy = ::mlir::DenseIntElementsAttr;
    rhs_dilationTy rhs_dilation;

    auto getRhsDilation() {
      auto &propStorage = this->rhs_dilation;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setRhsDilation(const ::mlir::DenseIntElementsAttr &propValue) {
      this->rhs_dilation = propValue;
    }
    using serialized_graphTy = ::mlir::StringAttr;
    serialized_graphTy serialized_graph;

    auto getSerializedGraph() {
      auto &propStorage = this->serialized_graph;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setSerializedGraph(const ::mlir::StringAttr &propValue) {
      this->serialized_graph = propValue;
    }
    using window_reversalTy = ::mlir::DenseElementsAttr;
    window_reversalTy window_reversal;

    auto getWindowReversal() {
      auto &propStorage = this->window_reversal;
      return ::llvm::dyn_cast_or_null<::mlir::DenseElementsAttr>(propStorage);
    }
    void setWindowReversal(const ::mlir::DenseElementsAttr &propValue) {
      this->window_reversal = propValue;
    }
    using window_stridesTy = ::mlir::DenseIntElementsAttr;
    window_stridesTy window_strides;

    auto getWindowStrides() {
      auto &propStorage = this->window_strides;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setWindowStrides(const ::mlir::DenseIntElementsAttr &propValue) {
      this->window_strides = propValue;
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
        rhs.backend_config == this->backend_config &&
        rhs.batch_group_count == this->batch_group_count &&
        rhs.dimension_numbers == this->dimension_numbers &&
        rhs.feature_group_count == this->feature_group_count &&
        rhs.lhs_dilation == this->lhs_dilation &&
        rhs.n_aux_outputs == this->n_aux_outputs &&
        rhs.padding == this->padding &&
        rhs.precision_config == this->precision_config &&
        rhs.result_scale == this->result_scale &&
        rhs.rhs_dilation == this->rhs_dilation &&
        rhs.serialized_graph == this->serialized_graph &&
        rhs.window_reversal == this->window_reversal &&
        rhs.window_strides == this->window_strides &&
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
  ConvForwardGraphOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ConvForwardGraphOpGenericAdaptorBase(ConvForwardGraphOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getWindowStridesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getWindowStrides();
  ::mlir::DenseIntElementsAttr getPaddingAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getPadding();
  ::mlir::DenseIntElementsAttr getLhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getLhsDilation();
  ::mlir::DenseIntElementsAttr getRhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getRhsDilation();
  ::mlir::DenseElementsAttr getWindowReversalAttr();
  ::std::optional< ::mlir::DenseElementsAttr > getWindowReversal();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbersAttr();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbers();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getResultScaleAttr();
  ::llvm::APFloat getResultScale();
  ::mlir::IntegerAttr getNAuxOutputsAttr();
  uint32_t getNAuxOutputs();
  ::mlir::StringAttr getSerializedGraphAttr();
  ::llvm::StringRef getSerializedGraph();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfigAttr();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfig();
};
} // namespace detail
template <typename RangeT>
class ConvForwardGraphOpGenericAdaptor : public detail::ConvForwardGraphOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvForwardGraphOpGenericAdaptorBase;
public:
  ConvForwardGraphOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvForwardGraphOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvForwardGraphOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ConvForwardGraphOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvForwardGraphOp>>>
  ConvForwardGraphOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getFilter() {
    return (*getODSOperands(1).begin());
  }

  RangeT getBinaryOperands() {
    return getODSOperands(2);
  }

  ValueT getOutput() {
    return (*getODSOperands(3).begin());
  }

  RangeT getAuxOutputs() {
    return getODSOperands(4);
  }

  ValueT getScratch() {
    return (*getODSOperands(5).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConvForwardGraphOpAdaptor : public ConvForwardGraphOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvForwardGraphOpGenericAdaptor::ConvForwardGraphOpGenericAdaptor;
  ConvForwardGraphOpAdaptor(ConvForwardGraphOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvForwardGraphOp : public ::mlir::Op<ConvForwardGraphOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<4>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvForwardGraphOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvForwardGraphOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("backend_config"), ::llvm::StringRef("batch_group_count"), ::llvm::StringRef("dimension_numbers"), ::llvm::StringRef("feature_group_count"), ::llvm::StringRef("lhs_dilation"), ::llvm::StringRef("n_aux_outputs"), ::llvm::StringRef("padding"), ::llvm::StringRef("precision_config"), ::llvm::StringRef("result_scale"), ::llvm::StringRef("rhs_dilation"), ::llvm::StringRef("serialized_graph"), ::llvm::StringRef("window_reversal"), ::llvm::StringRef("window_strides"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBackendConfigAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBackendConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getBatchGroupCountAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getBatchGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getDimensionNumbersAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getFeatureGroupCountAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getFeatureGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getLhsDilationAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getLhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getNAuxOutputsAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getNAuxOutputsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getPaddingAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getPaddingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getPrecisionConfigAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getPrecisionConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  ::mlir::StringAttr getResultScaleAttrName() {
    return getAttributeNameForIndex(8);
  }

  static ::mlir::StringAttr getResultScaleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 8);
  }

  ::mlir::StringAttr getRhsDilationAttrName() {
    return getAttributeNameForIndex(9);
  }

  static ::mlir::StringAttr getRhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 9);
  }

  ::mlir::StringAttr getSerializedGraphAttrName() {
    return getAttributeNameForIndex(10);
  }

  static ::mlir::StringAttr getSerializedGraphAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 10);
  }

  ::mlir::StringAttr getWindowReversalAttrName() {
    return getAttributeNameForIndex(11);
  }

  static ::mlir::StringAttr getWindowReversalAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 11);
  }

  ::mlir::StringAttr getWindowStridesAttrName() {
    return getAttributeNameForIndex(12);
  }

  static ::mlir::StringAttr getWindowStridesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 12);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.conv_forward_graph");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getInput();
  ::mlir::TypedValue<::mlir::MemRefType> getFilter();
  ::mlir::Operation::operand_range getBinaryOperands();
  ::mlir::TypedValue<::mlir::MemRefType> getOutput();
  ::mlir::Operation::operand_range getAuxOutputs();
  ::mlir::TypedValue<::mlir::MemRefType> getScratch();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::OpOperand &getFilterMutable();
  ::mlir::MutableOperandRange getBinaryOperandsMutable();
  ::mlir::OpOperand &getOutputMutable();
  ::mlir::MutableOperandRange getAuxOutputsMutable();
  ::mlir::OpOperand &getScratchMutable();
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
  ::mlir::DenseIntElementsAttr getWindowStridesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getWindowStrides();
  ::mlir::DenseIntElementsAttr getPaddingAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getPadding();
  ::mlir::DenseIntElementsAttr getLhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getLhsDilation();
  ::mlir::DenseIntElementsAttr getRhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getRhsDilation();
  ::mlir::DenseElementsAttr getWindowReversalAttr();
  ::std::optional< ::mlir::DenseElementsAttr > getWindowReversal();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbersAttr();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbers();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getResultScaleAttr();
  ::llvm::APFloat getResultScale();
  ::mlir::IntegerAttr getNAuxOutputsAttr();
  uint32_t getNAuxOutputs();
  ::mlir::StringAttr getSerializedGraphAttr();
  ::llvm::StringRef getSerializedGraph();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfigAttr();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfig();
  void setWindowStridesAttr(::mlir::DenseIntElementsAttr attr);
  void setPaddingAttr(::mlir::DenseIntElementsAttr attr);
  void setLhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setRhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setWindowReversalAttr(::mlir::DenseElementsAttr attr);
  void setDimensionNumbersAttr(::mlir::mhlo::ConvDimensionNumbersAttr attr);
  void setFeatureGroupCountAttr(::mlir::IntegerAttr attr);
  void setFeatureGroupCount(uint64_t attrValue);
  void setBatchGroupCountAttr(::mlir::IntegerAttr attr);
  void setBatchGroupCount(uint64_t attrValue);
  void setPrecisionConfigAttr(::mlir::ArrayAttr attr);
  void setResultScaleAttr(::mlir::FloatAttr attr);
  void setResultScale(::llvm::APFloat attrValue);
  void setNAuxOutputsAttr(::mlir::IntegerAttr attr);
  void setNAuxOutputs(uint32_t attrValue);
  void setSerializedGraphAttr(::mlir::StringAttr attr);
  void setSerializedGraph(::llvm::StringRef attrValue);
  void setBackendConfigAttr(::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr attr);
  ::mlir::Attribute removeWindowStridesAttr();
  ::mlir::Attribute removePaddingAttr();
  ::mlir::Attribute removeLhsDilationAttr();
  ::mlir::Attribute removeRhsDilationAttr();
  ::mlir::Attribute removeWindowReversalAttr();
  ::mlir::Attribute removePrecisionConfigAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value filter, ::mlir::ValueRange binary_operands, ::mlir::Value output, ::mlir::ValueRange aux_outputs, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr result_scale, ::mlir::IntegerAttr n_aux_outputs, ::mlir::StringAttr serialized_graph, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value filter, ::mlir::ValueRange binary_operands, ::mlir::Value output, ::mlir::ValueRange aux_outputs, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr result_scale, ::mlir::IntegerAttr n_aux_outputs, ::mlir::StringAttr serialized_graph, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value filter, ::mlir::ValueRange binary_operands, ::mlir::Value output, ::mlir::ValueRange aux_outputs, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat result_scale, uint32_t n_aux_outputs, ::llvm::StringRef serialized_graph, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value filter, ::mlir::ValueRange binary_operands, ::mlir::Value output, ::mlir::ValueRange aux_outputs, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat result_scale, uint32_t n_aux_outputs, ::llvm::StringRef serialized_graph, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
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
    assert(index < 13 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::ConvForwardGraphOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::ConvForwardOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvForwardOpGenericAdaptorBase {
public:
  struct Properties {
    using backend_configTy = ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr;
    backend_configTy backend_config;

    auto getBackendConfig() {
      auto &propStorage = this->backend_config;
      return ::llvm::cast<::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr>(propStorage);
    }
    void setBackendConfig(const ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr &propValue) {
      this->backend_config = propValue;
    }
    using batch_group_countTy = ::mlir::IntegerAttr;
    batch_group_countTy batch_group_count;

    auto getBatchGroupCount() {
      auto &propStorage = this->batch_group_count;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setBatchGroupCount(const ::mlir::IntegerAttr &propValue) {
      this->batch_group_count = propValue;
    }
    using dimension_numbersTy = ::mlir::mhlo::ConvDimensionNumbersAttr;
    dimension_numbersTy dimension_numbers;

    auto getDimensionNumbers() {
      auto &propStorage = this->dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::ConvDimensionNumbersAttr>(propStorage);
    }
    void setDimensionNumbers(const ::mlir::mhlo::ConvDimensionNumbersAttr &propValue) {
      this->dimension_numbers = propValue;
    }
    using feature_group_countTy = ::mlir::IntegerAttr;
    feature_group_countTy feature_group_count;

    auto getFeatureGroupCount() {
      auto &propStorage = this->feature_group_count;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setFeatureGroupCount(const ::mlir::IntegerAttr &propValue) {
      this->feature_group_count = propValue;
    }
    using lhs_dilationTy = ::mlir::DenseIntElementsAttr;
    lhs_dilationTy lhs_dilation;

    auto getLhsDilation() {
      auto &propStorage = this->lhs_dilation;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setLhsDilation(const ::mlir::DenseIntElementsAttr &propValue) {
      this->lhs_dilation = propValue;
    }
    using paddingTy = ::mlir::DenseIntElementsAttr;
    paddingTy padding;

    auto getPadding() {
      auto &propStorage = this->padding;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setPadding(const ::mlir::DenseIntElementsAttr &propValue) {
      this->padding = propValue;
    }
    using precision_configTy = ::mlir::ArrayAttr;
    precision_configTy precision_config;

    auto getPrecisionConfig() {
      auto &propStorage = this->precision_config;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPrecisionConfig(const ::mlir::ArrayAttr &propValue) {
      this->precision_config = propValue;
    }
    using result_scaleTy = ::mlir::FloatAttr;
    result_scaleTy result_scale;

    auto getResultScale() {
      auto &propStorage = this->result_scale;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setResultScale(const ::mlir::FloatAttr &propValue) {
      this->result_scale = propValue;
    }
    using rhs_dilationTy = ::mlir::DenseIntElementsAttr;
    rhs_dilationTy rhs_dilation;

    auto getRhsDilation() {
      auto &propStorage = this->rhs_dilation;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setRhsDilation(const ::mlir::DenseIntElementsAttr &propValue) {
      this->rhs_dilation = propValue;
    }
    using window_reversalTy = ::mlir::DenseElementsAttr;
    window_reversalTy window_reversal;

    auto getWindowReversal() {
      auto &propStorage = this->window_reversal;
      return ::llvm::dyn_cast_or_null<::mlir::DenseElementsAttr>(propStorage);
    }
    void setWindowReversal(const ::mlir::DenseElementsAttr &propValue) {
      this->window_reversal = propValue;
    }
    using window_stridesTy = ::mlir::DenseIntElementsAttr;
    window_stridesTy window_strides;

    auto getWindowStrides() {
      auto &propStorage = this->window_strides;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setWindowStrides(const ::mlir::DenseIntElementsAttr &propValue) {
      this->window_strides = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.backend_config == this->backend_config &&
        rhs.batch_group_count == this->batch_group_count &&
        rhs.dimension_numbers == this->dimension_numbers &&
        rhs.feature_group_count == this->feature_group_count &&
        rhs.lhs_dilation == this->lhs_dilation &&
        rhs.padding == this->padding &&
        rhs.precision_config == this->precision_config &&
        rhs.result_scale == this->result_scale &&
        rhs.rhs_dilation == this->rhs_dilation &&
        rhs.window_reversal == this->window_reversal &&
        rhs.window_strides == this->window_strides &&
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
  ConvForwardOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ConvForwardOpGenericAdaptorBase(ConvForwardOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getWindowStridesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getWindowStrides();
  ::mlir::DenseIntElementsAttr getPaddingAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getPadding();
  ::mlir::DenseIntElementsAttr getLhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getLhsDilation();
  ::mlir::DenseIntElementsAttr getRhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getRhsDilation();
  ::mlir::DenseElementsAttr getWindowReversalAttr();
  ::std::optional< ::mlir::DenseElementsAttr > getWindowReversal();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbersAttr();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbers();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getResultScaleAttr();
  ::llvm::APFloat getResultScale();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfigAttr();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfig();
};
} // namespace detail
template <typename RangeT>
class ConvForwardOpGenericAdaptor : public detail::ConvForwardOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvForwardOpGenericAdaptorBase;
public:
  ConvForwardOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvForwardOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvForwardOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ConvForwardOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvForwardOp>>>
  ConvForwardOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getFilter() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOutput() {
    return (*getODSOperands(2).begin());
  }

  ValueT getScratch() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConvForwardOpAdaptor : public ConvForwardOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvForwardOpGenericAdaptor::ConvForwardOpGenericAdaptor;
  ConvForwardOpAdaptor(ConvForwardOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvForwardOp : public ::mlir::Op<ConvForwardOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvForwardOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvForwardOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("backend_config"), ::llvm::StringRef("batch_group_count"), ::llvm::StringRef("dimension_numbers"), ::llvm::StringRef("feature_group_count"), ::llvm::StringRef("lhs_dilation"), ::llvm::StringRef("padding"), ::llvm::StringRef("precision_config"), ::llvm::StringRef("result_scale"), ::llvm::StringRef("rhs_dilation"), ::llvm::StringRef("window_reversal"), ::llvm::StringRef("window_strides")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBackendConfigAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBackendConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getBatchGroupCountAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getBatchGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getDimensionNumbersAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getFeatureGroupCountAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getFeatureGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getLhsDilationAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getLhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getPaddingAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getPaddingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getPrecisionConfigAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getPrecisionConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getResultScaleAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getResultScaleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  ::mlir::StringAttr getRhsDilationAttrName() {
    return getAttributeNameForIndex(8);
  }

  static ::mlir::StringAttr getRhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 8);
  }

  ::mlir::StringAttr getWindowReversalAttrName() {
    return getAttributeNameForIndex(9);
  }

  static ::mlir::StringAttr getWindowReversalAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 9);
  }

  ::mlir::StringAttr getWindowStridesAttrName() {
    return getAttributeNameForIndex(10);
  }

  static ::mlir::StringAttr getWindowStridesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 10);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.conv_forward");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getInput();
  ::mlir::TypedValue<::mlir::MemRefType> getFilter();
  ::mlir::TypedValue<::mlir::MemRefType> getOutput();
  ::mlir::TypedValue<::mlir::MemRefType> getScratch();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::OpOperand &getFilterMutable();
  ::mlir::OpOperand &getOutputMutable();
  ::mlir::OpOperand &getScratchMutable();
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
  ::mlir::DenseIntElementsAttr getWindowStridesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getWindowStrides();
  ::mlir::DenseIntElementsAttr getPaddingAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getPadding();
  ::mlir::DenseIntElementsAttr getLhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getLhsDilation();
  ::mlir::DenseIntElementsAttr getRhsDilationAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getRhsDilation();
  ::mlir::DenseElementsAttr getWindowReversalAttr();
  ::std::optional< ::mlir::DenseElementsAttr > getWindowReversal();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbersAttr();
  ::mlir::mhlo::ConvDimensionNumbersAttr getDimensionNumbers();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getResultScaleAttr();
  ::llvm::APFloat getResultScale();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfigAttr();
  ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr getBackendConfig();
  void setWindowStridesAttr(::mlir::DenseIntElementsAttr attr);
  void setPaddingAttr(::mlir::DenseIntElementsAttr attr);
  void setLhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setRhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setWindowReversalAttr(::mlir::DenseElementsAttr attr);
  void setDimensionNumbersAttr(::mlir::mhlo::ConvDimensionNumbersAttr attr);
  void setFeatureGroupCountAttr(::mlir::IntegerAttr attr);
  void setFeatureGroupCount(uint64_t attrValue);
  void setBatchGroupCountAttr(::mlir::IntegerAttr attr);
  void setBatchGroupCount(uint64_t attrValue);
  void setPrecisionConfigAttr(::mlir::ArrayAttr attr);
  void setResultScaleAttr(::mlir::FloatAttr attr);
  void setResultScale(::llvm::APFloat attrValue);
  void setBackendConfigAttr(::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr attr);
  ::mlir::Attribute removeWindowStridesAttr();
  ::mlir::Attribute removePaddingAttr();
  ::mlir::Attribute removeLhsDilationAttr();
  ::mlir::Attribute removeRhsDilationAttr();
  ::mlir::Attribute removeWindowReversalAttr();
  ::mlir::Attribute removePrecisionConfigAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr result_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr result_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat result_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value filter, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat result_scale, ::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr backend_config);
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
    assert(index < 11 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::ConvForwardOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::CublasLtMatmulF8Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CublasLtMatmulF8OpGenericAdaptorBase {
public:
  struct Properties {
    using algorithmTy = ::mlir::IntegerAttr;
    algorithmTy algorithm;

    auto getAlgorithm() {
      auto &propStorage = this->algorithm;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setAlgorithm(const ::mlir::IntegerAttr &propValue) {
      this->algorithm = propValue;
    }
    using alpha_imagTy = ::mlir::FloatAttr;
    alpha_imagTy alpha_imag;

    auto getAlphaImag() {
      auto &propStorage = this->alpha_imag;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setAlphaImag(const ::mlir::FloatAttr &propValue) {
      this->alpha_imag = propValue;
    }
    using alpha_realTy = ::mlir::FloatAttr;
    alpha_realTy alpha_real;

    auto getAlphaReal() {
      auto &propStorage = this->alpha_real;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setAlphaReal(const ::mlir::FloatAttr &propValue) {
      this->alpha_real = propValue;
    }
    using betaTy = ::mlir::FloatAttr;
    betaTy beta;

    auto getBeta() {
      auto &propStorage = this->beta;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setBeta(const ::mlir::FloatAttr &propValue) {
      this->beta = propValue;
    }
    using dot_dimension_numbersTy = ::mlir::mhlo::DotDimensionNumbersAttr;
    dot_dimension_numbersTy dot_dimension_numbers;

    auto getDotDimensionNumbers() {
      auto &propStorage = this->dot_dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::DotDimensionNumbersAttr>(propStorage);
    }
    void setDotDimensionNumbers(const ::mlir::mhlo::DotDimensionNumbersAttr &propValue) {
      this->dot_dimension_numbers = propValue;
    }
    using epilogueTy = ::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr;
    epilogueTy epilogue;

    auto getEpilogue() {
      auto &propStorage = this->epilogue;
      return ::llvm::cast<::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr>(propStorage);
    }
    void setEpilogue(const ::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr &propValue) {
      this->epilogue = propValue;
    }
    using grad_xTy = ::mlir::BoolAttr;
    grad_xTy grad_x;

    auto getGradX() {
      auto &propStorage = this->grad_x;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setGradX(const ::mlir::BoolAttr &propValue) {
      this->grad_x = propValue;
    }
    using grad_yTy = ::mlir::BoolAttr;
    grad_yTy grad_y;

    auto getGradY() {
      auto &propStorage = this->grad_y;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setGradY(const ::mlir::BoolAttr &propValue) {
      this->grad_y = propValue;
    }
    using precision_configTy = ::mlir::ArrayAttr;
    precision_configTy precision_config;

    auto getPrecisionConfig() {
      auto &propStorage = this->precision_config;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPrecisionConfig(const ::mlir::ArrayAttr &propValue) {
      this->precision_config = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 10>;
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
        rhs.algorithm == this->algorithm &&
        rhs.alpha_imag == this->alpha_imag &&
        rhs.alpha_real == this->alpha_real &&
        rhs.beta == this->beta &&
        rhs.dot_dimension_numbers == this->dot_dimension_numbers &&
        rhs.epilogue == this->epilogue &&
        rhs.grad_x == this->grad_x &&
        rhs.grad_y == this->grad_y &&
        rhs.precision_config == this->precision_config &&
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
  CublasLtMatmulF8OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  CublasLtMatmulF8OpGenericAdaptorBase(CublasLtMatmulF8Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::mhlo::DotDimensionNumbersAttr getDotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getDotDimensionNumbers();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getAlphaRealAttr();
  ::llvm::APFloat getAlphaReal();
  ::mlir::FloatAttr getAlphaImagAttr();
  ::llvm::APFloat getAlphaImag();
  ::mlir::FloatAttr getBetaAttr();
  ::llvm::APFloat getBeta();
  ::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr getEpilogueAttr();
  ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue getEpilogue();
  ::mlir::IntegerAttr getAlgorithmAttr();
  uint64_t getAlgorithm();
  ::mlir::BoolAttr getGradXAttr();
  ::std::optional< bool > getGradX();
  ::mlir::BoolAttr getGradYAttr();
  ::std::optional< bool > getGradY();
};
} // namespace detail
template <typename RangeT>
class CublasLtMatmulF8OpGenericAdaptor : public detail::CublasLtMatmulF8OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CublasLtMatmulF8OpGenericAdaptorBase;
public:
  CublasLtMatmulF8OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CublasLtMatmulF8OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CublasLtMatmulF8OpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = CublasLtMatmulF8Op, typename = std::enable_if_t<std::is_same_v<LateInst, CublasLtMatmulF8Op>>>
  CublasLtMatmulF8OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getAScale() {
    return (*getODSOperands(3).begin());
  }

  ValueT getBScale() {
    return (*getODSOperands(4).begin());
  }

  ValueT getCScale() {
    return (*getODSOperands(5).begin());
  }

  ValueT getDScale() {
    return (*getODSOperands(6).begin());
  }

  ValueT getD() {
    return (*getODSOperands(7).begin());
  }

  ValueT getBias() {
    auto operands = getODSOperands(8);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getDAmax() {
    auto operands = getODSOperands(9);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CublasLtMatmulF8OpAdaptor : public CublasLtMatmulF8OpGenericAdaptor<::mlir::ValueRange> {
public:
  using CublasLtMatmulF8OpGenericAdaptor::CublasLtMatmulF8OpGenericAdaptor;
  CublasLtMatmulF8OpAdaptor(CublasLtMatmulF8Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CublasLtMatmulF8Op : public ::mlir::Op<CublasLtMatmulF8Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<8>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CublasLtMatmulF8OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CublasLtMatmulF8OpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("algorithm"), ::llvm::StringRef("alpha_imag"), ::llvm::StringRef("alpha_real"), ::llvm::StringRef("beta"), ::llvm::StringRef("dot_dimension_numbers"), ::llvm::StringRef("epilogue"), ::llvm::StringRef("grad_x"), ::llvm::StringRef("grad_y"), ::llvm::StringRef("precision_config"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAlgorithmAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAlgorithmAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getAlphaImagAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getAlphaImagAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getAlphaRealAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getAlphaRealAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getBetaAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getBetaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getDotDimensionNumbersAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getDotDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getEpilogueAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getEpilogueAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getGradXAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getGradXAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getGradYAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getGradYAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  ::mlir::StringAttr getPrecisionConfigAttrName() {
    return getAttributeNameForIndex(8);
  }

  static ::mlir::StringAttr getPrecisionConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 8);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.cublas.lt.matmul.f8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getA();
  ::mlir::TypedValue<::mlir::MemRefType> getB();
  ::mlir::TypedValue<::mlir::MemRefType> getC();
  ::mlir::TypedValue<::mlir::MemRefType> getAScale();
  ::mlir::TypedValue<::mlir::MemRefType> getBScale();
  ::mlir::TypedValue<::mlir::MemRefType> getCScale();
  ::mlir::TypedValue<::mlir::MemRefType> getDScale();
  ::mlir::TypedValue<::mlir::MemRefType> getD();
  ::mlir::TypedValue<::mlir::MemRefType> getBias();
  ::mlir::TypedValue<::mlir::MemRefType> getDAmax();
  ::mlir::OpOperand &getAMutable();
  ::mlir::OpOperand &getBMutable();
  ::mlir::OpOperand &getCMutable();
  ::mlir::OpOperand &getAScaleMutable();
  ::mlir::OpOperand &getBScaleMutable();
  ::mlir::OpOperand &getCScaleMutable();
  ::mlir::OpOperand &getDScaleMutable();
  ::mlir::OpOperand &getDMutable();
  ::mlir::MutableOperandRange getBiasMutable();
  ::mlir::MutableOperandRange getDAmaxMutable();
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
  ::mlir::mhlo::DotDimensionNumbersAttr getDotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getDotDimensionNumbers();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getAlphaRealAttr();
  ::llvm::APFloat getAlphaReal();
  ::mlir::FloatAttr getAlphaImagAttr();
  ::llvm::APFloat getAlphaImag();
  ::mlir::FloatAttr getBetaAttr();
  ::llvm::APFloat getBeta();
  ::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr getEpilogueAttr();
  ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue getEpilogue();
  ::mlir::IntegerAttr getAlgorithmAttr();
  uint64_t getAlgorithm();
  ::mlir::BoolAttr getGradXAttr();
  ::std::optional< bool > getGradX();
  ::mlir::BoolAttr getGradYAttr();
  ::std::optional< bool > getGradY();
  void setDotDimensionNumbersAttr(::mlir::mhlo::DotDimensionNumbersAttr attr);
  void setPrecisionConfigAttr(::mlir::ArrayAttr attr);
  void setAlphaRealAttr(::mlir::FloatAttr attr);
  void setAlphaReal(::llvm::APFloat attrValue);
  void setAlphaImagAttr(::mlir::FloatAttr attr);
  void setAlphaImag(::llvm::APFloat attrValue);
  void setBetaAttr(::mlir::FloatAttr attr);
  void setBeta(::llvm::APFloat attrValue);
  void setEpilogueAttr(::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr attr);
  void setEpilogue(::mlir::lmhlo_gpu::CublasLtMatmulEpilogue attrValue);
  void setAlgorithmAttr(::mlir::IntegerAttr attr);
  void setAlgorithm(uint64_t attrValue);
  void setGradXAttr(::mlir::BoolAttr attr);
  void setGradX(::std::optional<bool> attrValue);
  void setGradYAttr(::mlir::BoolAttr attr);
  void setGradY(::std::optional<bool> attrValue);
  ::mlir::Attribute removePrecisionConfigAttr();
  ::mlir::Attribute removeGradXAttr();
  ::mlir::Attribute removeGradYAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::Value a_scale, ::mlir::Value b_scale, ::mlir::Value c_scale, ::mlir::Value d_scale, ::mlir::Value d, /*optional*/::mlir::Value bias, /*optional*/::mlir::Value d_amax, ::mlir::mhlo::DotDimensionNumbersAttr dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr alpha_real, ::mlir::FloatAttr alpha_imag, ::mlir::FloatAttr beta, ::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr epilogue, ::mlir::IntegerAttr algorithm, /*optional*/::mlir::BoolAttr grad_x, /*optional*/::mlir::BoolAttr grad_y);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::Value a_scale, ::mlir::Value b_scale, ::mlir::Value c_scale, ::mlir::Value d_scale, ::mlir::Value d, /*optional*/::mlir::Value bias, /*optional*/::mlir::Value d_amax, ::mlir::mhlo::DotDimensionNumbersAttr dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr alpha_real, ::mlir::FloatAttr alpha_imag, ::mlir::FloatAttr beta, ::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr epilogue, ::mlir::IntegerAttr algorithm, /*optional*/::mlir::BoolAttr grad_x, /*optional*/::mlir::BoolAttr grad_y);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::Value a_scale, ::mlir::Value b_scale, ::mlir::Value c_scale, ::mlir::Value d_scale, ::mlir::Value d, /*optional*/::mlir::Value bias, /*optional*/::mlir::Value d_amax, ::mlir::mhlo::DotDimensionNumbersAttr dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat alpha_real, ::llvm::APFloat alpha_imag, ::llvm::APFloat beta, ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue epilogue, uint64_t algorithm, /*optional*/::mlir::BoolAttr grad_x, /*optional*/::mlir::BoolAttr grad_y);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::Value a_scale, ::mlir::Value b_scale, ::mlir::Value c_scale, ::mlir::Value d_scale, ::mlir::Value d, /*optional*/::mlir::Value bias, /*optional*/::mlir::Value d_amax, ::mlir::mhlo::DotDimensionNumbersAttr dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat alpha_real, ::llvm::APFloat alpha_imag, ::llvm::APFloat beta, ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue epilogue, uint64_t algorithm, /*optional*/::mlir::BoolAttr grad_x, /*optional*/::mlir::BoolAttr grad_y);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 9 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::CublasLtMatmulF8Op)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::CublasLtMatmulOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CublasLtMatmulOpGenericAdaptorBase {
public:
  struct Properties {
    using algorithmTy = ::mlir::IntegerAttr;
    algorithmTy algorithm;

    auto getAlgorithm() {
      auto &propStorage = this->algorithm;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setAlgorithm(const ::mlir::IntegerAttr &propValue) {
      this->algorithm = propValue;
    }
    using alpha_imagTy = ::mlir::FloatAttr;
    alpha_imagTy alpha_imag;

    auto getAlphaImag() {
      auto &propStorage = this->alpha_imag;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setAlphaImag(const ::mlir::FloatAttr &propValue) {
      this->alpha_imag = propValue;
    }
    using alpha_realTy = ::mlir::FloatAttr;
    alpha_realTy alpha_real;

    auto getAlphaReal() {
      auto &propStorage = this->alpha_real;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setAlphaReal(const ::mlir::FloatAttr &propValue) {
      this->alpha_real = propValue;
    }
    using betaTy = ::mlir::FloatAttr;
    betaTy beta;

    auto getBeta() {
      auto &propStorage = this->beta;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setBeta(const ::mlir::FloatAttr &propValue) {
      this->beta = propValue;
    }
    using dot_dimension_numbersTy = ::mlir::mhlo::DotDimensionNumbersAttr;
    dot_dimension_numbersTy dot_dimension_numbers;

    auto getDotDimensionNumbers() {
      auto &propStorage = this->dot_dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::DotDimensionNumbersAttr>(propStorage);
    }
    void setDotDimensionNumbers(const ::mlir::mhlo::DotDimensionNumbersAttr &propValue) {
      this->dot_dimension_numbers = propValue;
    }
    using epilogueTy = ::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr;
    epilogueTy epilogue;

    auto getEpilogue() {
      auto &propStorage = this->epilogue;
      return ::llvm::cast<::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr>(propStorage);
    }
    void setEpilogue(const ::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr &propValue) {
      this->epilogue = propValue;
    }
    using grad_xTy = ::mlir::BoolAttr;
    grad_xTy grad_x;

    auto getGradX() {
      auto &propStorage = this->grad_x;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setGradX(const ::mlir::BoolAttr &propValue) {
      this->grad_x = propValue;
    }
    using grad_yTy = ::mlir::BoolAttr;
    grad_yTy grad_y;

    auto getGradY() {
      auto &propStorage = this->grad_y;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setGradY(const ::mlir::BoolAttr &propValue) {
      this->grad_y = propValue;
    }
    using precision_configTy = ::mlir::ArrayAttr;
    precision_configTy precision_config;

    auto getPrecisionConfig() {
      auto &propStorage = this->precision_config;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPrecisionConfig(const ::mlir::ArrayAttr &propValue) {
      this->precision_config = propValue;
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
        rhs.algorithm == this->algorithm &&
        rhs.alpha_imag == this->alpha_imag &&
        rhs.alpha_real == this->alpha_real &&
        rhs.beta == this->beta &&
        rhs.dot_dimension_numbers == this->dot_dimension_numbers &&
        rhs.epilogue == this->epilogue &&
        rhs.grad_x == this->grad_x &&
        rhs.grad_y == this->grad_y &&
        rhs.precision_config == this->precision_config &&
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
  CublasLtMatmulOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  CublasLtMatmulOpGenericAdaptorBase(CublasLtMatmulOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::mhlo::DotDimensionNumbersAttr getDotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getDotDimensionNumbers();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getAlphaRealAttr();
  ::llvm::APFloat getAlphaReal();
  ::mlir::FloatAttr getAlphaImagAttr();
  ::llvm::APFloat getAlphaImag();
  ::mlir::FloatAttr getBetaAttr();
  ::llvm::APFloat getBeta();
  ::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr getEpilogueAttr();
  ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue getEpilogue();
  ::mlir::IntegerAttr getAlgorithmAttr();
  uint64_t getAlgorithm();
  ::mlir::BoolAttr getGradXAttr();
  ::std::optional< bool > getGradX();
  ::mlir::BoolAttr getGradYAttr();
  ::std::optional< bool > getGradY();
};
} // namespace detail
template <typename RangeT>
class CublasLtMatmulOpGenericAdaptor : public detail::CublasLtMatmulOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CublasLtMatmulOpGenericAdaptorBase;
public:
  CublasLtMatmulOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CublasLtMatmulOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CublasLtMatmulOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = CublasLtMatmulOp, typename = std::enable_if_t<std::is_same_v<LateInst, CublasLtMatmulOp>>>
  CublasLtMatmulOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getD() {
    return (*getODSOperands(3).begin());
  }

  ValueT getBias() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAux() {
    auto operands = getODSOperands(5);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CublasLtMatmulOpAdaptor : public CublasLtMatmulOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CublasLtMatmulOpGenericAdaptor::CublasLtMatmulOpGenericAdaptor;
  CublasLtMatmulOpAdaptor(CublasLtMatmulOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CublasLtMatmulOp : public ::mlir::Op<CublasLtMatmulOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<4>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CublasLtMatmulOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CublasLtMatmulOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("algorithm"), ::llvm::StringRef("alpha_imag"), ::llvm::StringRef("alpha_real"), ::llvm::StringRef("beta"), ::llvm::StringRef("dot_dimension_numbers"), ::llvm::StringRef("epilogue"), ::llvm::StringRef("grad_x"), ::llvm::StringRef("grad_y"), ::llvm::StringRef("precision_config"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAlgorithmAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAlgorithmAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getAlphaImagAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getAlphaImagAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getAlphaRealAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getAlphaRealAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getBetaAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getBetaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getDotDimensionNumbersAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getDotDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getEpilogueAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getEpilogueAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getGradXAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getGradXAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getGradYAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getGradYAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  ::mlir::StringAttr getPrecisionConfigAttrName() {
    return getAttributeNameForIndex(8);
  }

  static ::mlir::StringAttr getPrecisionConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 8);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.cublas.lt.matmul");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getA();
  ::mlir::TypedValue<::mlir::MemRefType> getB();
  ::mlir::TypedValue<::mlir::MemRefType> getC();
  ::mlir::TypedValue<::mlir::MemRefType> getD();
  ::mlir::TypedValue<::mlir::MemRefType> getBias();
  ::mlir::TypedValue<::mlir::MemRefType> getAux();
  ::mlir::OpOperand &getAMutable();
  ::mlir::OpOperand &getBMutable();
  ::mlir::OpOperand &getCMutable();
  ::mlir::OpOperand &getDMutable();
  ::mlir::MutableOperandRange getBiasMutable();
  ::mlir::MutableOperandRange getAuxMutable();
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
  ::mlir::mhlo::DotDimensionNumbersAttr getDotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getDotDimensionNumbers();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getAlphaRealAttr();
  ::llvm::APFloat getAlphaReal();
  ::mlir::FloatAttr getAlphaImagAttr();
  ::llvm::APFloat getAlphaImag();
  ::mlir::FloatAttr getBetaAttr();
  ::llvm::APFloat getBeta();
  ::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr getEpilogueAttr();
  ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue getEpilogue();
  ::mlir::IntegerAttr getAlgorithmAttr();
  uint64_t getAlgorithm();
  ::mlir::BoolAttr getGradXAttr();
  ::std::optional< bool > getGradX();
  ::mlir::BoolAttr getGradYAttr();
  ::std::optional< bool > getGradY();
  void setDotDimensionNumbersAttr(::mlir::mhlo::DotDimensionNumbersAttr attr);
  void setPrecisionConfigAttr(::mlir::ArrayAttr attr);
  void setAlphaRealAttr(::mlir::FloatAttr attr);
  void setAlphaReal(::llvm::APFloat attrValue);
  void setAlphaImagAttr(::mlir::FloatAttr attr);
  void setAlphaImag(::llvm::APFloat attrValue);
  void setBetaAttr(::mlir::FloatAttr attr);
  void setBeta(::llvm::APFloat attrValue);
  void setEpilogueAttr(::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr attr);
  void setEpilogue(::mlir::lmhlo_gpu::CublasLtMatmulEpilogue attrValue);
  void setAlgorithmAttr(::mlir::IntegerAttr attr);
  void setAlgorithm(uint64_t attrValue);
  void setGradXAttr(::mlir::BoolAttr attr);
  void setGradX(::std::optional<bool> attrValue);
  void setGradYAttr(::mlir::BoolAttr attr);
  void setGradY(::std::optional<bool> attrValue);
  ::mlir::Attribute removePrecisionConfigAttr();
  ::mlir::Attribute removeGradXAttr();
  ::mlir::Attribute removeGradYAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::Value d, /*optional*/::mlir::Value bias, /*optional*/::mlir::Value aux, ::mlir::mhlo::DotDimensionNumbersAttr dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr alpha_real, ::mlir::FloatAttr alpha_imag, ::mlir::FloatAttr beta, ::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr epilogue, ::mlir::IntegerAttr algorithm, /*optional*/::mlir::BoolAttr grad_x, /*optional*/::mlir::BoolAttr grad_y);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::Value d, /*optional*/::mlir::Value bias, /*optional*/::mlir::Value aux, ::mlir::mhlo::DotDimensionNumbersAttr dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr alpha_real, ::mlir::FloatAttr alpha_imag, ::mlir::FloatAttr beta, ::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr epilogue, ::mlir::IntegerAttr algorithm, /*optional*/::mlir::BoolAttr grad_x, /*optional*/::mlir::BoolAttr grad_y);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::Value d, /*optional*/::mlir::Value bias, /*optional*/::mlir::Value aux, ::mlir::mhlo::DotDimensionNumbersAttr dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat alpha_real, ::llvm::APFloat alpha_imag, ::llvm::APFloat beta, ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue epilogue, uint64_t algorithm, /*optional*/::mlir::BoolAttr grad_x, /*optional*/::mlir::BoolAttr grad_y);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, ::mlir::Value d, /*optional*/::mlir::Value bias, /*optional*/::mlir::Value aux, ::mlir::mhlo::DotDimensionNumbersAttr dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat alpha_real, ::llvm::APFloat alpha_imag, ::llvm::APFloat beta, ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue epilogue, uint64_t algorithm, /*optional*/::mlir::BoolAttr grad_x, /*optional*/::mlir::BoolAttr grad_y);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 9 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::CublasLtMatmulOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::CudnnConvReorderFilterAndBiasOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CudnnConvReorderFilterAndBiasOpGenericAdaptorBase {
public:
  struct Properties {
    using filter_dimsTy = ::mlir::DenseIntElementsAttr;
    filter_dimsTy filter_dims;

    auto getFilterDims() {
      auto &propStorage = this->filter_dims;
      return ::llvm::cast<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setFilterDims(const ::mlir::DenseIntElementsAttr &propValue) {
      this->filter_dims = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.filter_dims == this->filter_dims &&
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
  CudnnConvReorderFilterAndBiasOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  CudnnConvReorderFilterAndBiasOpGenericAdaptorBase(CudnnConvReorderFilterAndBiasOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getFilterDimsAttr();
  ::mlir::DenseIntElementsAttr getFilterDims();
};
} // namespace detail
template <typename RangeT>
class CudnnConvReorderFilterAndBiasOpGenericAdaptor : public detail::CudnnConvReorderFilterAndBiasOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CudnnConvReorderFilterAndBiasOpGenericAdaptorBase;
public:
  CudnnConvReorderFilterAndBiasOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CudnnConvReorderFilterAndBiasOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CudnnConvReorderFilterAndBiasOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = CudnnConvReorderFilterAndBiasOp, typename = std::enable_if_t<std::is_same_v<LateInst, CudnnConvReorderFilterAndBiasOp>>>
  CudnnConvReorderFilterAndBiasOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getFilterInput() {
    return (*getODSOperands(0).begin());
  }

  ValueT getBiasInput() {
    return (*getODSOperands(1).begin());
  }

  ValueT getFilterOutput() {
    return (*getODSOperands(2).begin());
  }

  ValueT getBiasOutput() {
    return (*getODSOperands(3).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CudnnConvReorderFilterAndBiasOpAdaptor : public CudnnConvReorderFilterAndBiasOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CudnnConvReorderFilterAndBiasOpGenericAdaptor::CudnnConvReorderFilterAndBiasOpGenericAdaptor;
  CudnnConvReorderFilterAndBiasOpAdaptor(CudnnConvReorderFilterAndBiasOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CudnnConvReorderFilterAndBiasOp : public ::mlir::Op<CudnnConvReorderFilterAndBiasOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CudnnConvReorderFilterAndBiasOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CudnnConvReorderFilterAndBiasOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("filter_dims")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFilterDimsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFilterDimsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.cudnn_conv_reorder_filter_and_bias");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getFilterInput();
  ::mlir::TypedValue<::mlir::MemRefType> getBiasInput();
  ::mlir::TypedValue<::mlir::MemRefType> getFilterOutput();
  ::mlir::TypedValue<::mlir::MemRefType> getBiasOutput();
  ::mlir::OpOperand &getFilterInputMutable();
  ::mlir::OpOperand &getBiasInputMutable();
  ::mlir::OpOperand &getFilterOutputMutable();
  ::mlir::OpOperand &getBiasOutputMutable();
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
  ::mlir::DenseIntElementsAttr getFilterDimsAttr();
  ::mlir::DenseIntElementsAttr getFilterDims();
  void setFilterDimsAttr(::mlir::DenseIntElementsAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value filter_input, ::mlir::Value bias_input, ::mlir::Value filter_output, ::mlir::Value bias_output, ::mlir::DenseIntElementsAttr filter_dims);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value filter_input, ::mlir::Value bias_input, ::mlir::Value filter_output, ::mlir::Value bias_output, ::mlir::DenseIntElementsAttr filter_dims);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::CudnnConvReorderFilterAndBiasOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::CudnnConvReorderFilterOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CudnnConvReorderFilterOpGenericAdaptorBase {
public:
  struct Properties {
    using filter_dimsTy = ::mlir::DenseIntElementsAttr;
    filter_dimsTy filter_dims;

    auto getFilterDims() {
      auto &propStorage = this->filter_dims;
      return ::llvm::cast<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setFilterDims(const ::mlir::DenseIntElementsAttr &propValue) {
      this->filter_dims = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.filter_dims == this->filter_dims &&
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
  CudnnConvReorderFilterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  CudnnConvReorderFilterOpGenericAdaptorBase(CudnnConvReorderFilterOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getFilterDimsAttr();
  ::mlir::DenseIntElementsAttr getFilterDims();
};
} // namespace detail
template <typename RangeT>
class CudnnConvReorderFilterOpGenericAdaptor : public detail::CudnnConvReorderFilterOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CudnnConvReorderFilterOpGenericAdaptorBase;
public:
  CudnnConvReorderFilterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CudnnConvReorderFilterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CudnnConvReorderFilterOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = CudnnConvReorderFilterOp, typename = std::enable_if_t<std::is_same_v<LateInst, CudnnConvReorderFilterOp>>>
  CudnnConvReorderFilterOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getFilterInput() {
    return (*getODSOperands(0).begin());
  }

  ValueT getFilterOutput() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CudnnConvReorderFilterOpAdaptor : public CudnnConvReorderFilterOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CudnnConvReorderFilterOpGenericAdaptor::CudnnConvReorderFilterOpGenericAdaptor;
  CudnnConvReorderFilterOpAdaptor(CudnnConvReorderFilterOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CudnnConvReorderFilterOp : public ::mlir::Op<CudnnConvReorderFilterOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CudnnConvReorderFilterOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CudnnConvReorderFilterOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("filter_dims")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFilterDimsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFilterDimsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.cudnn_conv_reorder_filter");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getFilterInput();
  ::mlir::TypedValue<::mlir::MemRefType> getFilterOutput();
  ::mlir::OpOperand &getFilterInputMutable();
  ::mlir::OpOperand &getFilterOutputMutable();
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
  ::mlir::DenseIntElementsAttr getFilterDimsAttr();
  ::mlir::DenseIntElementsAttr getFilterDims();
  void setFilterDimsAttr(::mlir::DenseIntElementsAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value filter_input, ::mlir::Value filter_output, ::mlir::DenseIntElementsAttr filter_dims);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value filter_input, ::mlir::Value filter_output, ::mlir::DenseIntElementsAttr filter_dims);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::CudnnConvReorderFilterOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::CudnnNormOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CudnnNormOpGenericAdaptorBase {
public:
  struct Properties {
    using algorithm_configTy = ::mlir::lmhlo_gpu::NormAlgorithmConfigAttr;
    algorithm_configTy algorithm_config;

    auto getAlgorithmConfig() {
      auto &propStorage = this->algorithm_config;
      return ::llvm::cast<::mlir::lmhlo_gpu::NormAlgorithmConfigAttr>(propStorage);
    }
    void setAlgorithmConfig(const ::mlir::lmhlo_gpu::NormAlgorithmConfigAttr &propValue) {
      this->algorithm_config = propValue;
    }
    using epsilonTy = ::mlir::FloatAttr;
    epsilonTy epsilon;

    auto getEpsilon() {
      auto &propStorage = this->epsilon;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setEpsilon(const ::mlir::FloatAttr &propValue) {
      this->epsilon = propValue;
    }
    using operand_layoutsTy = ::mlir::ArrayAttr;
    operand_layoutsTy operand_layouts;

    auto getOperandLayouts() {
      auto &propStorage = this->operand_layouts;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setOperandLayouts(const ::mlir::ArrayAttr &propValue) {
      this->operand_layouts = propValue;
    }
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
        rhs.algorithm_config == this->algorithm_config &&
        rhs.epsilon == this->epsilon &&
        rhs.operand_layouts == this->operand_layouts &&
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
  CudnnNormOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  CudnnNormOpGenericAdaptorBase(CudnnNormOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::lmhlo_gpu::NormAlgorithmConfigAttr getAlgorithmConfigAttr();
  ::mlir::lmhlo_gpu::NormAlgorithmConfigAttr getAlgorithmConfig();
  ::mlir::FloatAttr getEpsilonAttr();
  ::llvm::APFloat getEpsilon();
  ::mlir::ArrayAttr getOperandLayoutsAttr();
  ::mlir::ArrayAttr getOperandLayouts();
};
} // namespace detail
template <typename RangeT>
class CudnnNormOpGenericAdaptor : public detail::CudnnNormOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CudnnNormOpGenericAdaptorBase;
public:
  CudnnNormOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CudnnNormOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CudnnNormOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = CudnnNormOp, typename = std::enable_if_t<std::is_same_v<LateInst, CudnnNormOp>>>
  CudnnNormOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getScale() {
    return (*getODSOperands(1).begin());
  }

  ValueT getBias() {
    return (*getODSOperands(2).begin());
  }

  ValueT getOutput() {
    return (*getODSOperands(3).begin());
  }

  ValueT getExpectation() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getNormFactor() {
    auto operands = getODSOperands(5);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getScratch() {
    return (*getODSOperands(6).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CudnnNormOpAdaptor : public CudnnNormOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CudnnNormOpGenericAdaptor::CudnnNormOpGenericAdaptor;
  CudnnNormOpAdaptor(CudnnNormOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CudnnNormOp : public ::mlir::Op<CudnnNormOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<5>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CudnnNormOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CudnnNormOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("algorithm_config"), ::llvm::StringRef("epsilon"), ::llvm::StringRef("operand_layouts"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAlgorithmConfigAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAlgorithmConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getEpsilonAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getEpsilonAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandLayoutsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getOperandLayoutsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.Norm");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getInput();
  ::mlir::TypedValue<::mlir::MemRefType> getScale();
  ::mlir::TypedValue<::mlir::MemRefType> getBias();
  ::mlir::TypedValue<::mlir::MemRefType> getOutput();
  ::mlir::TypedValue<::mlir::MemRefType> getExpectation();
  ::mlir::TypedValue<::mlir::MemRefType> getNormFactor();
  ::mlir::TypedValue<::mlir::MemRefType> getScratch();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::OpOperand &getScaleMutable();
  ::mlir::OpOperand &getBiasMutable();
  ::mlir::OpOperand &getOutputMutable();
  ::mlir::MutableOperandRange getExpectationMutable();
  ::mlir::MutableOperandRange getNormFactorMutable();
  ::mlir::OpOperand &getScratchMutable();
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
  ::mlir::lmhlo_gpu::NormAlgorithmConfigAttr getAlgorithmConfigAttr();
  ::mlir::lmhlo_gpu::NormAlgorithmConfigAttr getAlgorithmConfig();
  ::mlir::FloatAttr getEpsilonAttr();
  ::llvm::APFloat getEpsilon();
  ::mlir::ArrayAttr getOperandLayoutsAttr();
  ::mlir::ArrayAttr getOperandLayouts();
  void setAlgorithmConfigAttr(::mlir::lmhlo_gpu::NormAlgorithmConfigAttr attr);
  void setEpsilonAttr(::mlir::FloatAttr attr);
  void setEpsilon(::llvm::APFloat attrValue);
  void setOperandLayoutsAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value scale, ::mlir::Value bias, ::mlir::Value output, /*optional*/::mlir::Value expectation, /*optional*/::mlir::Value norm_factor, ::mlir::Value scratch, ::mlir::lmhlo_gpu::NormAlgorithmConfigAttr algorithm_config, ::mlir::FloatAttr epsilon, ::mlir::ArrayAttr operand_layouts);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value scale, ::mlir::Value bias, ::mlir::Value output, /*optional*/::mlir::Value expectation, /*optional*/::mlir::Value norm_factor, ::mlir::Value scratch, ::mlir::lmhlo_gpu::NormAlgorithmConfigAttr algorithm_config, ::mlir::FloatAttr epsilon, ::mlir::ArrayAttr operand_layouts);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value input, ::mlir::Value scale, ::mlir::Value bias, ::mlir::Value output, /*optional*/::mlir::Value expectation, /*optional*/::mlir::Value norm_factor, ::mlir::Value scratch, ::mlir::lmhlo_gpu::NormAlgorithmConfigAttr algorithm_config, ::llvm::APFloat epsilon, ::mlir::ArrayAttr operand_layouts);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input, ::mlir::Value scale, ::mlir::Value bias, ::mlir::Value output, /*optional*/::mlir::Value expectation, /*optional*/::mlir::Value norm_factor, ::mlir::Value scratch, ::mlir::lmhlo_gpu::NormAlgorithmConfigAttr algorithm_config, ::llvm::APFloat epsilon, ::mlir::ArrayAttr operand_layouts);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::CudnnNormOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::GEMMOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GEMMOpGenericAdaptorBase {
public:
  struct Properties {
    using algorithmTy = ::mlir::IntegerAttr;
    algorithmTy algorithm;

    auto getAlgorithm() {
      auto &propStorage = this->algorithm;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setAlgorithm(const ::mlir::IntegerAttr &propValue) {
      this->algorithm = propValue;
    }
    using alpha_imagTy = ::mlir::FloatAttr;
    alpha_imagTy alpha_imag;

    auto getAlphaImag() {
      auto &propStorage = this->alpha_imag;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setAlphaImag(const ::mlir::FloatAttr &propValue) {
      this->alpha_imag = propValue;
    }
    using alpha_realTy = ::mlir::FloatAttr;
    alpha_realTy alpha_real;

    auto getAlphaReal() {
      auto &propStorage = this->alpha_real;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setAlphaReal(const ::mlir::FloatAttr &propValue) {
      this->alpha_real = propValue;
    }
    using betaTy = ::mlir::FloatAttr;
    betaTy beta;

    auto getBeta() {
      auto &propStorage = this->beta;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setBeta(const ::mlir::FloatAttr &propValue) {
      this->beta = propValue;
    }
    using dot_dimension_numbersTy = ::mlir::mhlo::DotDimensionNumbersAttr;
    dot_dimension_numbersTy dot_dimension_numbers;

    auto getDotDimensionNumbers() {
      auto &propStorage = this->dot_dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::DotDimensionNumbersAttr>(propStorage);
    }
    void setDotDimensionNumbers(const ::mlir::mhlo::DotDimensionNumbersAttr &propValue) {
      this->dot_dimension_numbers = propValue;
    }
    using grad_xTy = ::mlir::BoolAttr;
    grad_xTy grad_x;

    auto getGradX() {
      auto &propStorage = this->grad_x;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setGradX(const ::mlir::BoolAttr &propValue) {
      this->grad_x = propValue;
    }
    using grad_yTy = ::mlir::BoolAttr;
    grad_yTy grad_y;

    auto getGradY() {
      auto &propStorage = this->grad_y;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setGradY(const ::mlir::BoolAttr &propValue) {
      this->grad_y = propValue;
    }
    using precision_configTy = ::mlir::ArrayAttr;
    precision_configTy precision_config;

    auto getPrecisionConfig() {
      auto &propStorage = this->precision_config;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setPrecisionConfig(const ::mlir::ArrayAttr &propValue) {
      this->precision_config = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.algorithm == this->algorithm &&
        rhs.alpha_imag == this->alpha_imag &&
        rhs.alpha_real == this->alpha_real &&
        rhs.beta == this->beta &&
        rhs.dot_dimension_numbers == this->dot_dimension_numbers &&
        rhs.grad_x == this->grad_x &&
        rhs.grad_y == this->grad_y &&
        rhs.precision_config == this->precision_config &&
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
  GEMMOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  GEMMOpGenericAdaptorBase(GEMMOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::mhlo::DotDimensionNumbersAttr getDotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getDotDimensionNumbers();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getAlphaRealAttr();
  ::llvm::APFloat getAlphaReal();
  ::mlir::FloatAttr getAlphaImagAttr();
  ::llvm::APFloat getAlphaImag();
  ::mlir::FloatAttr getBetaAttr();
  ::llvm::APFloat getBeta();
  ::mlir::IntegerAttr getAlgorithmAttr();
  ::std::optional<uint64_t> getAlgorithm();
  ::mlir::BoolAttr getGradXAttr();
  ::std::optional< bool > getGradX();
  ::mlir::BoolAttr getGradYAttr();
  ::std::optional< bool > getGradY();
};
} // namespace detail
template <typename RangeT>
class GEMMOpGenericAdaptor : public detail::GEMMOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GEMMOpGenericAdaptorBase;
public:
  GEMMOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GEMMOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GEMMOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = GEMMOp, typename = std::enable_if_t<std::is_same_v<LateInst, GEMMOp>>>
  GEMMOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getWorkspace() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GEMMOpAdaptor : public GEMMOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GEMMOpGenericAdaptor::GEMMOpGenericAdaptor;
  GEMMOpAdaptor(GEMMOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GEMMOp : public ::mlir::Op<GEMMOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GEMMOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GEMMOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("algorithm"), ::llvm::StringRef("alpha_imag"), ::llvm::StringRef("alpha_real"), ::llvm::StringRef("beta"), ::llvm::StringRef("dot_dimension_numbers"), ::llvm::StringRef("grad_x"), ::llvm::StringRef("grad_y"), ::llvm::StringRef("precision_config")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAlgorithmAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAlgorithmAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getAlphaImagAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getAlphaImagAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getAlphaRealAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getAlphaRealAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getBetaAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getBetaAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getDotDimensionNumbersAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getDotDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getGradXAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getGradXAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getGradYAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getGradYAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getPrecisionConfigAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getPrecisionConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.gemm");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getA();
  ::mlir::TypedValue<::mlir::MemRefType> getB();
  ::mlir::TypedValue<::mlir::MemRefType> getC();
  ::mlir::TypedValue<::mlir::MemRefType> getWorkspace();
  ::mlir::OpOperand &getAMutable();
  ::mlir::OpOperand &getBMutable();
  ::mlir::OpOperand &getCMutable();
  ::mlir::MutableOperandRange getWorkspaceMutable();
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
  ::mlir::mhlo::DotDimensionNumbersAttr getDotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getDotDimensionNumbers();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  ::mlir::FloatAttr getAlphaRealAttr();
  ::llvm::APFloat getAlphaReal();
  ::mlir::FloatAttr getAlphaImagAttr();
  ::llvm::APFloat getAlphaImag();
  ::mlir::FloatAttr getBetaAttr();
  ::llvm::APFloat getBeta();
  ::mlir::IntegerAttr getAlgorithmAttr();
  ::std::optional<uint64_t> getAlgorithm();
  ::mlir::BoolAttr getGradXAttr();
  ::std::optional< bool > getGradX();
  ::mlir::BoolAttr getGradYAttr();
  ::std::optional< bool > getGradY();
  void setDotDimensionNumbersAttr(::mlir::mhlo::DotDimensionNumbersAttr attr);
  void setPrecisionConfigAttr(::mlir::ArrayAttr attr);
  void setAlphaRealAttr(::mlir::FloatAttr attr);
  void setAlphaReal(::llvm::APFloat attrValue);
  void setAlphaImagAttr(::mlir::FloatAttr attr);
  void setAlphaImag(::llvm::APFloat attrValue);
  void setBetaAttr(::mlir::FloatAttr attr);
  void setBeta(::llvm::APFloat attrValue);
  void setAlgorithmAttr(::mlir::IntegerAttr attr);
  void setAlgorithm(::std::optional<uint64_t> attrValue);
  void setGradXAttr(::mlir::BoolAttr attr);
  void setGradX(::std::optional<bool> attrValue);
  void setGradYAttr(::mlir::BoolAttr attr);
  void setGradY(::std::optional<bool> attrValue);
  ::mlir::Attribute removePrecisionConfigAttr();
  ::mlir::Attribute removeAlgorithmAttr();
  ::mlir::Attribute removeGradXAttr();
  ::mlir::Attribute removeGradYAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, /*optional*/::mlir::Value workspace, ::mlir::mhlo::DotDimensionNumbersAttr dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr alpha_real, ::mlir::FloatAttr alpha_imag, ::mlir::FloatAttr beta, /*optional*/::mlir::IntegerAttr algorithm, /*optional*/::mlir::BoolAttr grad_x, /*optional*/::mlir::BoolAttr grad_y);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, /*optional*/::mlir::Value workspace, ::mlir::mhlo::DotDimensionNumbersAttr dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::mlir::FloatAttr alpha_real, ::mlir::FloatAttr alpha_imag, ::mlir::FloatAttr beta, /*optional*/::mlir::IntegerAttr algorithm, /*optional*/::mlir::BoolAttr grad_x, /*optional*/::mlir::BoolAttr grad_y);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, /*optional*/::mlir::Value workspace, ::mlir::mhlo::DotDimensionNumbersAttr dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat alpha_real, ::llvm::APFloat alpha_imag, ::llvm::APFloat beta, /*optional*/::mlir::IntegerAttr algorithm, /*optional*/::mlir::BoolAttr grad_x, /*optional*/::mlir::BoolAttr grad_y);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value a, ::mlir::Value b, ::mlir::Value c, /*optional*/::mlir::Value workspace, ::mlir::mhlo::DotDimensionNumbersAttr dot_dimension_numbers, /*optional*/::mlir::ArrayAttr precision_config, ::llvm::APFloat alpha_real, ::llvm::APFloat alpha_imag, ::llvm::APFloat beta, /*optional*/::mlir::IntegerAttr algorithm, /*optional*/::mlir::BoolAttr grad_x, /*optional*/::mlir::BoolAttr grad_y);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::GEMMOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::RadixSortOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RadixSortOpGenericAdaptorBase {
public:
  struct Properties {
    using descendingTy = ::mlir::BoolAttr;
    descendingTy descending;

    auto getDescending() {
      auto &propStorage = this->descending;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setDescending(const ::mlir::BoolAttr &propValue) {
      this->descending = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.descending == this->descending &&
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
  RadixSortOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RadixSortOpGenericAdaptorBase(RadixSortOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::BoolAttr getDescendingAttr();
  bool getDescending();
};
} // namespace detail
template <typename RangeT>
class RadixSortOpGenericAdaptor : public detail::RadixSortOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RadixSortOpGenericAdaptorBase;
public:
  RadixSortOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RadixSortOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RadixSortOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RadixSortOp, typename = std::enable_if_t<std::is_same_v<LateInst, RadixSortOp>>>
  RadixSortOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOutput() {
    return getODSOperands(1);
  }

  ValueT getScratch() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RadixSortOpAdaptor : public RadixSortOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RadixSortOpGenericAdaptor::RadixSortOpGenericAdaptor;
  RadixSortOpAdaptor(RadixSortOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RadixSortOp : public ::mlir::Op<RadixSortOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RadixSortOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RadixSortOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("descending")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDescendingAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDescendingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.radix_sort");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getInputs();
  ::mlir::Operation::operand_range getOutput();
  ::mlir::TypedValue<::mlir::MemRefType> getScratch();
  ::mlir::MutableOperandRange getInputsMutable();
  ::mlir::MutableOperandRange getOutputMutable();
  ::mlir::OpOperand &getScratchMutable();
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
  ::mlir::BoolAttr getDescendingAttr();
  bool getDescending();
  void setDescendingAttr(::mlir::BoolAttr attr);
  void setDescending(::std::optional<bool> attrValue);
  ::mlir::Attribute removeDescendingAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange inputs, ::mlir::ValueRange output, ::mlir::Value scratch, /*optional*/::mlir::BoolAttr descending);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::ValueRange output, ::mlir::Value scratch, /*optional*/::mlir::BoolAttr descending);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange inputs, ::mlir::ValueRange output, ::mlir::Value scratch, /*optional*/bool descending = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::ValueRange output, ::mlir::Value scratch, /*optional*/bool descending = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::RadixSortOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::ReduceScatterDoneOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReduceScatterDoneOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ReduceScatterDoneOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ReduceScatterDoneOpGenericAdaptorBase(ReduceScatterDoneOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ReduceScatterDoneOpGenericAdaptor : public detail::ReduceScatterDoneOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReduceScatterDoneOpGenericAdaptorBase;
public:
  ReduceScatterDoneOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReduceScatterDoneOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReduceScatterDoneOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ReduceScatterDoneOp, typename = std::enable_if_t<std::is_same_v<LateInst, ReduceScatterDoneOp>>>
  ReduceScatterDoneOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ReduceScatterDoneOpAdaptor : public ReduceScatterDoneOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReduceScatterDoneOpGenericAdaptor::ReduceScatterDoneOpGenericAdaptor;
  ReduceScatterDoneOpAdaptor(ReduceScatterDoneOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReduceScatterDoneOp : public ::mlir::Op<ReduceScatterDoneOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReduceScatterDoneOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReduceScatterDoneOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.reduce_scatter_done");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getToken();
  ::mlir::OpOperand &getTokenMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value token);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value token);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::ReduceScatterDoneOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::ReduceScatterStartOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReduceScatterStartOpGenericAdaptorBase {
public:
  struct Properties {
    using channel_idTy = ::mlir::mhlo::ChannelHandleAttr;
    channel_idTy channel_id;

    auto getChannelId() {
      auto &propStorage = this->channel_id;
      return ::llvm::dyn_cast_or_null<::mlir::mhlo::ChannelHandleAttr>(propStorage);
    }
    void setChannelId(const ::mlir::mhlo::ChannelHandleAttr &propValue) {
      this->channel_id = propValue;
    }
    using constrain_layoutTy = ::mlir::BoolAttr;
    constrain_layoutTy constrain_layout;

    auto getConstrainLayout() {
      auto &propStorage = this->constrain_layout;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setConstrainLayout(const ::mlir::BoolAttr &propValue) {
      this->constrain_layout = propValue;
    }
    using is_syncTy = ::mlir::BoolAttr;
    is_syncTy is_sync;

    auto getIsSync() {
      auto &propStorage = this->is_sync;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setIsSync(const ::mlir::BoolAttr &propValue) {
      this->is_sync = propValue;
    }
    using no_parallel_custom_callTy = ::mlir::BoolAttr;
    no_parallel_custom_callTy no_parallel_custom_call;

    auto getNoParallelCustomCall() {
      auto &propStorage = this->no_parallel_custom_call;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setNoParallelCustomCall(const ::mlir::BoolAttr &propValue) {
      this->no_parallel_custom_call = propValue;
    }
    using replica_groupsTy = ::mlir::DenseIntElementsAttr;
    replica_groupsTy replica_groups;

    auto getReplicaGroups() {
      auto &propStorage = this->replica_groups;
      return ::llvm::cast<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setReplicaGroups(const ::mlir::DenseIntElementsAttr &propValue) {
      this->replica_groups = propValue;
    }
    using scatter_dimensionTy = ::mlir::IntegerAttr;
    scatter_dimensionTy scatter_dimension;

    auto getScatterDimension() {
      auto &propStorage = this->scatter_dimension;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setScatterDimension(const ::mlir::IntegerAttr &propValue) {
      this->scatter_dimension = propValue;
    }
    using use_global_device_idsTy = ::mlir::BoolAttr;
    use_global_device_idsTy use_global_device_ids;

    auto getUseGlobalDeviceIds() {
      auto &propStorage = this->use_global_device_ids;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setUseGlobalDeviceIds(const ::mlir::BoolAttr &propValue) {
      this->use_global_device_ids = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.channel_id == this->channel_id &&
        rhs.constrain_layout == this->constrain_layout &&
        rhs.is_sync == this->is_sync &&
        rhs.no_parallel_custom_call == this->no_parallel_custom_call &&
        rhs.replica_groups == this->replica_groups &&
        rhs.scatter_dimension == this->scatter_dimension &&
        rhs.use_global_device_ids == this->use_global_device_ids &&
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
  ReduceScatterStartOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ReduceScatterStartOpGenericAdaptorBase(ReduceScatterStartOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getReplicaGroupsAttr();
  ::mlir::DenseIntElementsAttr getReplicaGroups();
  ::mlir::BoolAttr getConstrainLayoutAttr();
  bool getConstrainLayout();
  ::mlir::mhlo::ChannelHandleAttr getChannelIdAttr();
  ::std::optional<::mlir::mhlo::ChannelHandleAttr> getChannelId();
  ::mlir::BoolAttr getUseGlobalDeviceIdsAttr();
  bool getUseGlobalDeviceIds();
  ::mlir::BoolAttr getIsSyncAttr();
  bool getIsSync();
  ::mlir::BoolAttr getNoParallelCustomCallAttr();
  bool getNoParallelCustomCall();
  ::mlir::IntegerAttr getScatterDimensionAttr();
  uint64_t getScatterDimension();
  ::mlir::Region &getComputation();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ReduceScatterStartOpGenericAdaptor : public detail::ReduceScatterStartOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReduceScatterStartOpGenericAdaptorBase;
public:
  ReduceScatterStartOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReduceScatterStartOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReduceScatterStartOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ReduceScatterStartOp, typename = std::enable_if_t<std::is_same_v<LateInst, ReduceScatterStartOp>>>
  ReduceScatterStartOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOutputs() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ReduceScatterStartOpAdaptor : public ReduceScatterStartOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReduceScatterStartOpGenericAdaptor::ReduceScatterStartOpGenericAdaptor;
  ReduceScatterStartOpAdaptor(ReduceScatterStartOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReduceScatterStartOp : public ::mlir::Op<ReduceScatterStartOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsElementType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReduceScatterStartOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReduceScatterStartOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("channel_id"), ::llvm::StringRef("constrain_layout"), ::llvm::StringRef("is_sync"), ::llvm::StringRef("no_parallel_custom_call"), ::llvm::StringRef("replica_groups"), ::llvm::StringRef("scatter_dimension"), ::llvm::StringRef("use_global_device_ids")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getChannelIdAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getChannelIdAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getConstrainLayoutAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getConstrainLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getIsSyncAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getIsSyncAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getNoParallelCustomCallAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getNoParallelCustomCallAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getReplicaGroupsAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getReplicaGroupsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getScatterDimensionAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getScatterDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getUseGlobalDeviceIdsAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getUseGlobalDeviceIdsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.reduce_scatter_start");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getInputs();
  ::mlir::Operation::operand_range getOutputs();
  ::mlir::MutableOperandRange getInputsMutable();
  ::mlir::MutableOperandRange getOutputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getToken();
  ::mlir::Region &getComputation();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseIntElementsAttr getReplicaGroupsAttr();
  ::mlir::DenseIntElementsAttr getReplicaGroups();
  ::mlir::BoolAttr getConstrainLayoutAttr();
  bool getConstrainLayout();
  ::mlir::mhlo::ChannelHandleAttr getChannelIdAttr();
  ::std::optional<::mlir::mhlo::ChannelHandleAttr> getChannelId();
  ::mlir::BoolAttr getUseGlobalDeviceIdsAttr();
  bool getUseGlobalDeviceIds();
  ::mlir::BoolAttr getIsSyncAttr();
  bool getIsSync();
  ::mlir::BoolAttr getNoParallelCustomCallAttr();
  bool getNoParallelCustomCall();
  ::mlir::IntegerAttr getScatterDimensionAttr();
  uint64_t getScatterDimension();
  void setReplicaGroupsAttr(::mlir::DenseIntElementsAttr attr);
  void setConstrainLayoutAttr(::mlir::BoolAttr attr);
  void setConstrainLayout(::std::optional<bool> attrValue);
  void setChannelIdAttr(::mlir::mhlo::ChannelHandleAttr attr);
  void setUseGlobalDeviceIdsAttr(::mlir::BoolAttr attr);
  void setUseGlobalDeviceIds(::std::optional<bool> attrValue);
  void setIsSyncAttr(::mlir::BoolAttr attr);
  void setIsSync(bool attrValue);
  void setNoParallelCustomCallAttr(::mlir::BoolAttr attr);
  void setNoParallelCustomCall(bool attrValue);
  void setScatterDimensionAttr(::mlir::IntegerAttr attr);
  void setScatterDimension(uint64_t attrValue);
  ::mlir::Attribute removeConstrainLayoutAttr();
  ::mlir::Attribute removeChannelIdAttr();
  ::mlir::Attribute removeUseGlobalDeviceIdsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type token, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/::mlir::BoolAttr use_global_device_ids, ::mlir::BoolAttr is_sync, ::mlir::BoolAttr no_parallel_custom_call, ::mlir::IntegerAttr scatter_dimension);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/::mlir::BoolAttr constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/::mlir::BoolAttr use_global_device_ids, ::mlir::BoolAttr is_sync, ::mlir::BoolAttr no_parallel_custom_call, ::mlir::IntegerAttr scatter_dimension);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type token, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/bool use_global_device_ids, bool is_sync, bool no_parallel_custom_call, uint64_t scatter_dimension);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::ValueRange outputs, ::mlir::DenseIntElementsAttr replica_groups, /*optional*/bool constrain_layout, /*optional*/::mlir::mhlo::ChannelHandleAttr channel_id, /*optional*/bool use_global_device_ids, bool is_sync, bool no_parallel_custom_call, uint64_t scatter_dimension);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 7 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::ReduceScatterStartOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::fusedMHABackwardOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class fusedMHABackwardOpGenericAdaptorBase {
public:
  struct Properties {
    using algorithm_configTy = ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr;
    algorithm_configTy algorithm_config;

    auto getAlgorithmConfig() {
      auto &propStorage = this->algorithm_config;
      return ::llvm::cast<::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr>(propStorage);
    }
    void setAlgorithmConfig(const ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr &propValue) {
      this->algorithm_config = propValue;
    }
    using bmm1_grad_gemm1_dot_dimension_numbersTy = ::mlir::mhlo::DotDimensionNumbersAttr;
    bmm1_grad_gemm1_dot_dimension_numbersTy bmm1_grad_gemm1_dot_dimension_numbers;

    auto getBmm1GradGemm1DotDimensionNumbers() {
      auto &propStorage = this->bmm1_grad_gemm1_dot_dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::DotDimensionNumbersAttr>(propStorage);
    }
    void setBmm1GradGemm1DotDimensionNumbers(const ::mlir::mhlo::DotDimensionNumbersAttr &propValue) {
      this->bmm1_grad_gemm1_dot_dimension_numbers = propValue;
    }
    using bmm1_grad_gemm2_dot_dimension_numbersTy = ::mlir::mhlo::DotDimensionNumbersAttr;
    bmm1_grad_gemm2_dot_dimension_numbersTy bmm1_grad_gemm2_dot_dimension_numbers;

    auto getBmm1GradGemm2DotDimensionNumbers() {
      auto &propStorage = this->bmm1_grad_gemm2_dot_dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::DotDimensionNumbersAttr>(propStorage);
    }
    void setBmm1GradGemm2DotDimensionNumbers(const ::mlir::mhlo::DotDimensionNumbersAttr &propValue) {
      this->bmm1_grad_gemm2_dot_dimension_numbers = propValue;
    }
    using bmm2_grad_gemm1_dot_dimension_numbersTy = ::mlir::mhlo::DotDimensionNumbersAttr;
    bmm2_grad_gemm1_dot_dimension_numbersTy bmm2_grad_gemm1_dot_dimension_numbers;

    auto getBmm2GradGemm1DotDimensionNumbers() {
      auto &propStorage = this->bmm2_grad_gemm1_dot_dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::DotDimensionNumbersAttr>(propStorage);
    }
    void setBmm2GradGemm1DotDimensionNumbers(const ::mlir::mhlo::DotDimensionNumbersAttr &propValue) {
      this->bmm2_grad_gemm1_dot_dimension_numbers = propValue;
    }
    using bmm2_grad_gemm2_dot_dimension_numbersTy = ::mlir::mhlo::DotDimensionNumbersAttr;
    bmm2_grad_gemm2_dot_dimension_numbersTy bmm2_grad_gemm2_dot_dimension_numbers;

    auto getBmm2GradGemm2DotDimensionNumbers() {
      auto &propStorage = this->bmm2_grad_gemm2_dot_dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::DotDimensionNumbersAttr>(propStorage);
    }
    void setBmm2GradGemm2DotDimensionNumbers(const ::mlir::mhlo::DotDimensionNumbersAttr &propValue) {
      this->bmm2_grad_gemm2_dot_dimension_numbers = propValue;
    }
    using dropout_rateTy = ::mlir::FloatAttr;
    dropout_rateTy dropout_rate;

    auto getDropoutRate() {
      auto &propStorage = this->dropout_rate;
      return ::llvm::dyn_cast_or_null<::mlir::FloatAttr>(propStorage);
    }
    void setDropoutRate(const ::mlir::FloatAttr &propValue) {
      this->dropout_rate = propValue;
    }
    using fmha_scaleTy = ::mlir::FloatAttr;
    fmha_scaleTy fmha_scale;

    auto getFmhaScale() {
      auto &propStorage = this->fmha_scale;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setFmhaScale(const ::mlir::FloatAttr &propValue) {
      this->fmha_scale = propValue;
    }
    using fused_mha_dagTy = ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignatureAttr;
    fused_mha_dagTy fused_mha_dag;

    auto getFusedMhaDag() {
      auto &propStorage = this->fused_mha_dag;
      return ::llvm::cast<::mlir::lmhlo_gpu::FusedMhaBackwardDagSignatureAttr>(propStorage);
    }
    void setFusedMhaDag(const ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignatureAttr &propValue) {
      this->fused_mha_dag = propValue;
    }
    using intermediate_tensor_dimensionsTy = ::mlir::ArrayAttr;
    intermediate_tensor_dimensionsTy intermediate_tensor_dimensions;

    auto getIntermediateTensorDimensions() {
      auto &propStorage = this->intermediate_tensor_dimensions;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setIntermediateTensorDimensions(const ::mlir::ArrayAttr &propValue) {
      this->intermediate_tensor_dimensions = propValue;
    }
    using intermediate_tensor_layoutTy = ::mlir::ArrayAttr;
    intermediate_tensor_layoutTy intermediate_tensor_layout;

    auto getIntermediateTensorLayout() {
      auto &propStorage = this->intermediate_tensor_layout;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setIntermediateTensorLayout(const ::mlir::ArrayAttr &propValue) {
      this->intermediate_tensor_layout = propValue;
    }
    using is_causal_maskTy = ::mlir::BoolAttr;
    is_causal_maskTy is_causal_mask;

    auto getIsCausalMask() {
      auto &propStorage = this->is_causal_mask;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setIsCausalMask(const ::mlir::BoolAttr &propValue) {
      this->is_causal_mask = propValue;
    }
    using is_flash_attentionTy = ::mlir::BoolAttr;
    is_flash_attentionTy is_flash_attention;

    auto getIsFlashAttention() {
      auto &propStorage = this->is_flash_attention;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setIsFlashAttention(const ::mlir::BoolAttr &propValue) {
      this->is_flash_attention = propValue;
    }
    using seedTy = ::mlir::IntegerAttr;
    seedTy seed;

    auto getSeed() {
      auto &propStorage = this->seed;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setSeed(const ::mlir::IntegerAttr &propValue) {
      this->seed = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 16>;
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
        rhs.algorithm_config == this->algorithm_config &&
        rhs.bmm1_grad_gemm1_dot_dimension_numbers == this->bmm1_grad_gemm1_dot_dimension_numbers &&
        rhs.bmm1_grad_gemm2_dot_dimension_numbers == this->bmm1_grad_gemm2_dot_dimension_numbers &&
        rhs.bmm2_grad_gemm1_dot_dimension_numbers == this->bmm2_grad_gemm1_dot_dimension_numbers &&
        rhs.bmm2_grad_gemm2_dot_dimension_numbers == this->bmm2_grad_gemm2_dot_dimension_numbers &&
        rhs.dropout_rate == this->dropout_rate &&
        rhs.fmha_scale == this->fmha_scale &&
        rhs.fused_mha_dag == this->fused_mha_dag &&
        rhs.intermediate_tensor_dimensions == this->intermediate_tensor_dimensions &&
        rhs.intermediate_tensor_layout == this->intermediate_tensor_layout &&
        rhs.is_causal_mask == this->is_causal_mask &&
        rhs.is_flash_attention == this->is_flash_attention &&
        rhs.seed == this->seed &&
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
  fusedMHABackwardOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  fusedMHABackwardOpGenericAdaptorBase(fusedMHABackwardOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm1GradGemm1DotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm1GradGemm1DotDimensionNumbers();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm1GradGemm2DotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm1GradGemm2DotDimensionNumbers();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm2GradGemm1DotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm2GradGemm1DotDimensionNumbers();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm2GradGemm2DotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm2GradGemm2DotDimensionNumbers();
  ::mlir::ArrayAttr getIntermediateTensorDimensionsAttr();
  ::mlir::ArrayAttr getIntermediateTensorDimensions();
  ::mlir::ArrayAttr getIntermediateTensorLayoutAttr();
  ::mlir::ArrayAttr getIntermediateTensorLayout();
  ::mlir::FloatAttr getFmhaScaleAttr();
  ::llvm::APFloat getFmhaScale();
  ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignatureAttr getFusedMhaDagAttr();
  ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature getFusedMhaDag();
  ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr getAlgorithmConfigAttr();
  ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr getAlgorithmConfig();
  ::mlir::FloatAttr getDropoutRateAttr();
  ::std::optional< ::llvm::APFloat > getDropoutRate();
  ::mlir::IntegerAttr getSeedAttr();
  ::std::optional<uint64_t> getSeed();
  ::mlir::BoolAttr getIsFlashAttentionAttr();
  bool getIsFlashAttention();
  ::mlir::BoolAttr getIsCausalMaskAttr();
  bool getIsCausalMask();
};
} // namespace detail
template <typename RangeT>
class fusedMHABackwardOpGenericAdaptor : public detail::fusedMHABackwardOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::fusedMHABackwardOpGenericAdaptorBase;
public:
  fusedMHABackwardOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  fusedMHABackwardOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : fusedMHABackwardOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = fusedMHABackwardOp, typename = std::enable_if_t<std::is_same_v<LateInst, fusedMHABackwardOp>>>
  fusedMHABackwardOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getBmm1GradGemm1Rhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getBmm1GradGemm2Rhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getBmm2GradGemm2Rhs() {
    return (*getODSOperands(2).begin());
  }

  ValueT getBmm2GradGemm1Lhs() {
    return (*getODSOperands(3).begin());
  }

  ValueT getDOutput() {
    return (*getODSOperands(4).begin());
  }

  ValueT getMask() {
    auto operands = getODSOperands(5);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getBias() {
    auto operands = getODSOperands(6);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getFwdOutput() {
    auto operands = getODSOperands(7);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getDBmm1Lhs() {
    return (*getODSOperands(8).begin());
  }

  ValueT getDBmm1Rhs() {
    return (*getODSOperands(9).begin());
  }

  ValueT getDBmm2Rhs() {
    return (*getODSOperands(10).begin());
  }

  ValueT getD_S() {
    auto operands = getODSOperands(11);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getSoftmaxSum() {
    auto operands = getODSOperands(12);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getD_QAccum() {
    auto operands = getODSOperands(13);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getScratch() {
    return (*getODSOperands(14).begin());
  }

  ValueT getDBias() {
    auto operands = getODSOperands(15);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class fusedMHABackwardOpAdaptor : public fusedMHABackwardOpGenericAdaptor<::mlir::ValueRange> {
public:
  using fusedMHABackwardOpGenericAdaptor::fusedMHABackwardOpGenericAdaptor;
  fusedMHABackwardOpAdaptor(fusedMHABackwardOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class fusedMHABackwardOp : public ::mlir::Op<fusedMHABackwardOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<9>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = fusedMHABackwardOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = fusedMHABackwardOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("algorithm_config"), ::llvm::StringRef("bmm1_grad_gemm1_dot_dimension_numbers"), ::llvm::StringRef("bmm1_grad_gemm2_dot_dimension_numbers"), ::llvm::StringRef("bmm2_grad_gemm1_dot_dimension_numbers"), ::llvm::StringRef("bmm2_grad_gemm2_dot_dimension_numbers"), ::llvm::StringRef("dropout_rate"), ::llvm::StringRef("fmha_scale"), ::llvm::StringRef("fused_mha_dag"), ::llvm::StringRef("intermediate_tensor_dimensions"), ::llvm::StringRef("intermediate_tensor_layout"), ::llvm::StringRef("is_causal_mask"), ::llvm::StringRef("is_flash_attention"), ::llvm::StringRef("seed"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAlgorithmConfigAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAlgorithmConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getBmm1GradGemm1DotDimensionNumbersAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getBmm1GradGemm1DotDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getBmm1GradGemm2DotDimensionNumbersAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getBmm1GradGemm2DotDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getBmm2GradGemm1DotDimensionNumbersAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getBmm2GradGemm1DotDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getBmm2GradGemm2DotDimensionNumbersAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getBmm2GradGemm2DotDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getDropoutRateAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getDropoutRateAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getFmhaScaleAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getFmhaScaleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getFusedMhaDagAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getFusedMhaDagAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  ::mlir::StringAttr getIntermediateTensorDimensionsAttrName() {
    return getAttributeNameForIndex(8);
  }

  static ::mlir::StringAttr getIntermediateTensorDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 8);
  }

  ::mlir::StringAttr getIntermediateTensorLayoutAttrName() {
    return getAttributeNameForIndex(9);
  }

  static ::mlir::StringAttr getIntermediateTensorLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 9);
  }

  ::mlir::StringAttr getIsCausalMaskAttrName() {
    return getAttributeNameForIndex(10);
  }

  static ::mlir::StringAttr getIsCausalMaskAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 10);
  }

  ::mlir::StringAttr getIsFlashAttentionAttrName() {
    return getAttributeNameForIndex(11);
  }

  static ::mlir::StringAttr getIsFlashAttentionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 11);
  }

  ::mlir::StringAttr getSeedAttrName() {
    return getAttributeNameForIndex(12);
  }

  static ::mlir::StringAttr getSeedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 12);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.fMHABackward");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getBmm1GradGemm1Rhs();
  ::mlir::TypedValue<::mlir::MemRefType> getBmm1GradGemm2Rhs();
  ::mlir::TypedValue<::mlir::MemRefType> getBmm2GradGemm2Rhs();
  ::mlir::TypedValue<::mlir::MemRefType> getBmm2GradGemm1Lhs();
  ::mlir::TypedValue<::mlir::MemRefType> getDOutput();
  ::mlir::TypedValue<::mlir::MemRefType> getMask();
  ::mlir::TypedValue<::mlir::MemRefType> getBias();
  ::mlir::TypedValue<::mlir::MemRefType> getFwdOutput();
  ::mlir::TypedValue<::mlir::MemRefType> getDBmm1Lhs();
  ::mlir::TypedValue<::mlir::MemRefType> getDBmm1Rhs();
  ::mlir::TypedValue<::mlir::MemRefType> getDBmm2Rhs();
  ::mlir::TypedValue<::mlir::MemRefType> getD_S();
  ::mlir::TypedValue<::mlir::MemRefType> getSoftmaxSum();
  ::mlir::TypedValue<::mlir::MemRefType> getD_QAccum();
  ::mlir::TypedValue<::mlir::MemRefType> getScratch();
  ::mlir::TypedValue<::mlir::MemRefType> getDBias();
  ::mlir::OpOperand &getBmm1GradGemm1RhsMutable();
  ::mlir::OpOperand &getBmm1GradGemm2RhsMutable();
  ::mlir::OpOperand &getBmm2GradGemm2RhsMutable();
  ::mlir::OpOperand &getBmm2GradGemm1LhsMutable();
  ::mlir::OpOperand &getDOutputMutable();
  ::mlir::MutableOperandRange getMaskMutable();
  ::mlir::MutableOperandRange getBiasMutable();
  ::mlir::MutableOperandRange getFwdOutputMutable();
  ::mlir::OpOperand &getDBmm1LhsMutable();
  ::mlir::OpOperand &getDBmm1RhsMutable();
  ::mlir::OpOperand &getDBmm2RhsMutable();
  ::mlir::MutableOperandRange getD_SMutable();
  ::mlir::MutableOperandRange getSoftmaxSumMutable();
  ::mlir::MutableOperandRange getD_QAccumMutable();
  ::mlir::OpOperand &getScratchMutable();
  ::mlir::MutableOperandRange getDBiasMutable();
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
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm1GradGemm1DotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm1GradGemm1DotDimensionNumbers();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm1GradGemm2DotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm1GradGemm2DotDimensionNumbers();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm2GradGemm1DotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm2GradGemm1DotDimensionNumbers();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm2GradGemm2DotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm2GradGemm2DotDimensionNumbers();
  ::mlir::ArrayAttr getIntermediateTensorDimensionsAttr();
  ::mlir::ArrayAttr getIntermediateTensorDimensions();
  ::mlir::ArrayAttr getIntermediateTensorLayoutAttr();
  ::mlir::ArrayAttr getIntermediateTensorLayout();
  ::mlir::FloatAttr getFmhaScaleAttr();
  ::llvm::APFloat getFmhaScale();
  ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignatureAttr getFusedMhaDagAttr();
  ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature getFusedMhaDag();
  ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr getAlgorithmConfigAttr();
  ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr getAlgorithmConfig();
  ::mlir::FloatAttr getDropoutRateAttr();
  ::std::optional< ::llvm::APFloat > getDropoutRate();
  ::mlir::IntegerAttr getSeedAttr();
  ::std::optional<uint64_t> getSeed();
  ::mlir::BoolAttr getIsFlashAttentionAttr();
  bool getIsFlashAttention();
  ::mlir::BoolAttr getIsCausalMaskAttr();
  bool getIsCausalMask();
  void setBmm1GradGemm1DotDimensionNumbersAttr(::mlir::mhlo::DotDimensionNumbersAttr attr);
  void setBmm1GradGemm2DotDimensionNumbersAttr(::mlir::mhlo::DotDimensionNumbersAttr attr);
  void setBmm2GradGemm1DotDimensionNumbersAttr(::mlir::mhlo::DotDimensionNumbersAttr attr);
  void setBmm2GradGemm2DotDimensionNumbersAttr(::mlir::mhlo::DotDimensionNumbersAttr attr);
  void setIntermediateTensorDimensionsAttr(::mlir::ArrayAttr attr);
  void setIntermediateTensorLayoutAttr(::mlir::ArrayAttr attr);
  void setFmhaScaleAttr(::mlir::FloatAttr attr);
  void setFmhaScale(::llvm::APFloat attrValue);
  void setFusedMhaDagAttr(::mlir::lmhlo_gpu::FusedMhaBackwardDagSignatureAttr attr);
  void setFusedMhaDag(::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature attrValue);
  void setAlgorithmConfigAttr(::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr attr);
  void setDropoutRateAttr(::mlir::FloatAttr attr);
  void setDropoutRate(::std::optional<::llvm::APFloat> attrValue);
  void setSeedAttr(::mlir::IntegerAttr attr);
  void setSeed(::std::optional<uint64_t> attrValue);
  void setIsFlashAttentionAttr(::mlir::BoolAttr attr);
  void setIsFlashAttention(bool attrValue);
  void setIsCausalMaskAttr(::mlir::BoolAttr attr);
  void setIsCausalMask(bool attrValue);
  ::mlir::Attribute removeDropoutRateAttr();
  ::mlir::Attribute removeSeedAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value bmm1_grad_gemm1_rhs, ::mlir::Value bmm1_grad_gemm2_rhs, ::mlir::Value bmm2_grad_gemm2_rhs, ::mlir::Value bmm2_grad_gemm1_lhs, ::mlir::Value d_output, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value bias, /*optional*/::mlir::Value fwd_output, ::mlir::Value d_bmm1_lhs, ::mlir::Value d_bmm1_rhs, ::mlir::Value d_bmm2_rhs, /*optional*/::mlir::Value d_S, /*optional*/::mlir::Value softmax_sum, /*optional*/::mlir::Value d_Q_accum, ::mlir::Value scratch, /*optional*/::mlir::Value d_bias, ::mlir::mhlo::DotDimensionNumbersAttr bmm1_grad_gemm1_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm1_grad_gemm2_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm2_grad_gemm1_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm2_grad_gemm2_dot_dimension_numbers, ::mlir::ArrayAttr intermediate_tensor_dimensions, ::mlir::ArrayAttr intermediate_tensor_layout, ::mlir::FloatAttr fmha_scale, ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignatureAttr fused_mha_dag, ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr algorithm_config, /*optional*/::mlir::FloatAttr dropout_rate, /*optional*/::mlir::IntegerAttr seed, ::mlir::BoolAttr is_flash_attention, ::mlir::BoolAttr is_causal_mask);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value bmm1_grad_gemm1_rhs, ::mlir::Value bmm1_grad_gemm2_rhs, ::mlir::Value bmm2_grad_gemm2_rhs, ::mlir::Value bmm2_grad_gemm1_lhs, ::mlir::Value d_output, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value bias, /*optional*/::mlir::Value fwd_output, ::mlir::Value d_bmm1_lhs, ::mlir::Value d_bmm1_rhs, ::mlir::Value d_bmm2_rhs, /*optional*/::mlir::Value d_S, /*optional*/::mlir::Value softmax_sum, /*optional*/::mlir::Value d_Q_accum, ::mlir::Value scratch, /*optional*/::mlir::Value d_bias, ::mlir::mhlo::DotDimensionNumbersAttr bmm1_grad_gemm1_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm1_grad_gemm2_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm2_grad_gemm1_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm2_grad_gemm2_dot_dimension_numbers, ::mlir::ArrayAttr intermediate_tensor_dimensions, ::mlir::ArrayAttr intermediate_tensor_layout, ::mlir::FloatAttr fmha_scale, ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignatureAttr fused_mha_dag, ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr algorithm_config, /*optional*/::mlir::FloatAttr dropout_rate, /*optional*/::mlir::IntegerAttr seed, ::mlir::BoolAttr is_flash_attention, ::mlir::BoolAttr is_causal_mask);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value bmm1_grad_gemm1_rhs, ::mlir::Value bmm1_grad_gemm2_rhs, ::mlir::Value bmm2_grad_gemm2_rhs, ::mlir::Value bmm2_grad_gemm1_lhs, ::mlir::Value d_output, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value bias, /*optional*/::mlir::Value fwd_output, ::mlir::Value d_bmm1_lhs, ::mlir::Value d_bmm1_rhs, ::mlir::Value d_bmm2_rhs, /*optional*/::mlir::Value d_S, /*optional*/::mlir::Value softmax_sum, /*optional*/::mlir::Value d_Q_accum, ::mlir::Value scratch, /*optional*/::mlir::Value d_bias, ::mlir::mhlo::DotDimensionNumbersAttr bmm1_grad_gemm1_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm1_grad_gemm2_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm2_grad_gemm1_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm2_grad_gemm2_dot_dimension_numbers, ::mlir::ArrayAttr intermediate_tensor_dimensions, ::mlir::ArrayAttr intermediate_tensor_layout, ::llvm::APFloat fmha_scale, ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature fused_mha_dag, ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr algorithm_config, /*optional*/::mlir::FloatAttr dropout_rate, /*optional*/::mlir::IntegerAttr seed, bool is_flash_attention, bool is_causal_mask);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value bmm1_grad_gemm1_rhs, ::mlir::Value bmm1_grad_gemm2_rhs, ::mlir::Value bmm2_grad_gemm2_rhs, ::mlir::Value bmm2_grad_gemm1_lhs, ::mlir::Value d_output, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value bias, /*optional*/::mlir::Value fwd_output, ::mlir::Value d_bmm1_lhs, ::mlir::Value d_bmm1_rhs, ::mlir::Value d_bmm2_rhs, /*optional*/::mlir::Value d_S, /*optional*/::mlir::Value softmax_sum, /*optional*/::mlir::Value d_Q_accum, ::mlir::Value scratch, /*optional*/::mlir::Value d_bias, ::mlir::mhlo::DotDimensionNumbersAttr bmm1_grad_gemm1_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm1_grad_gemm2_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm2_grad_gemm1_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm2_grad_gemm2_dot_dimension_numbers, ::mlir::ArrayAttr intermediate_tensor_dimensions, ::mlir::ArrayAttr intermediate_tensor_layout, ::llvm::APFloat fmha_scale, ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature fused_mha_dag, ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr algorithm_config, /*optional*/::mlir::FloatAttr dropout_rate, /*optional*/::mlir::IntegerAttr seed, bool is_flash_attention, bool is_causal_mask);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 13 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::fusedMHABackwardOp)

namespace mlir {
namespace lmhlo_gpu {

//===----------------------------------------------------------------------===//
// ::mlir::lmhlo_gpu::fusedMHAOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class fusedMHAOpGenericAdaptorBase {
public:
  struct Properties {
    using algorithm_configTy = ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr;
    algorithm_configTy algorithm_config;

    auto getAlgorithmConfig() {
      auto &propStorage = this->algorithm_config;
      return ::llvm::cast<::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr>(propStorage);
    }
    void setAlgorithmConfig(const ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr &propValue) {
      this->algorithm_config = propValue;
    }
    using bmm1_dot_dimension_numbersTy = ::mlir::mhlo::DotDimensionNumbersAttr;
    bmm1_dot_dimension_numbersTy bmm1_dot_dimension_numbers;

    auto getBmm1DotDimensionNumbers() {
      auto &propStorage = this->bmm1_dot_dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::DotDimensionNumbersAttr>(propStorage);
    }
    void setBmm1DotDimensionNumbers(const ::mlir::mhlo::DotDimensionNumbersAttr &propValue) {
      this->bmm1_dot_dimension_numbers = propValue;
    }
    using bmm2_dot_dimension_numbersTy = ::mlir::mhlo::DotDimensionNumbersAttr;
    bmm2_dot_dimension_numbersTy bmm2_dot_dimension_numbers;

    auto getBmm2DotDimensionNumbers() {
      auto &propStorage = this->bmm2_dot_dimension_numbers;
      return ::llvm::cast<::mlir::mhlo::DotDimensionNumbersAttr>(propStorage);
    }
    void setBmm2DotDimensionNumbers(const ::mlir::mhlo::DotDimensionNumbersAttr &propValue) {
      this->bmm2_dot_dimension_numbers = propValue;
    }
    using dropout_rateTy = ::mlir::FloatAttr;
    dropout_rateTy dropout_rate;

    auto getDropoutRate() {
      auto &propStorage = this->dropout_rate;
      return ::llvm::dyn_cast_or_null<::mlir::FloatAttr>(propStorage);
    }
    void setDropoutRate(const ::mlir::FloatAttr &propValue) {
      this->dropout_rate = propValue;
    }
    using fmha_scaleTy = ::mlir::FloatAttr;
    fmha_scaleTy fmha_scale;

    auto getFmhaScale() {
      auto &propStorage = this->fmha_scale;
      return ::llvm::cast<::mlir::FloatAttr>(propStorage);
    }
    void setFmhaScale(const ::mlir::FloatAttr &propValue) {
      this->fmha_scale = propValue;
    }
    using fused_mha_dagTy = ::mlir::lmhlo_gpu::FusedMhaDagSignatureAttr;
    fused_mha_dagTy fused_mha_dag;

    auto getFusedMhaDag() {
      auto &propStorage = this->fused_mha_dag;
      return ::llvm::cast<::mlir::lmhlo_gpu::FusedMhaDagSignatureAttr>(propStorage);
    }
    void setFusedMhaDag(const ::mlir::lmhlo_gpu::FusedMhaDagSignatureAttr &propValue) {
      this->fused_mha_dag = propValue;
    }
    using intermediate_tensor_dimensionsTy = ::mlir::ArrayAttr;
    intermediate_tensor_dimensionsTy intermediate_tensor_dimensions;

    auto getIntermediateTensorDimensions() {
      auto &propStorage = this->intermediate_tensor_dimensions;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setIntermediateTensorDimensions(const ::mlir::ArrayAttr &propValue) {
      this->intermediate_tensor_dimensions = propValue;
    }
    using intermediate_tensor_layoutTy = ::mlir::ArrayAttr;
    intermediate_tensor_layoutTy intermediate_tensor_layout;

    auto getIntermediateTensorLayout() {
      auto &propStorage = this->intermediate_tensor_layout;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setIntermediateTensorLayout(const ::mlir::ArrayAttr &propValue) {
      this->intermediate_tensor_layout = propValue;
    }
    using is_causal_maskTy = ::mlir::BoolAttr;
    is_causal_maskTy is_causal_mask;

    auto getIsCausalMask() {
      auto &propStorage = this->is_causal_mask;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setIsCausalMask(const ::mlir::BoolAttr &propValue) {
      this->is_causal_mask = propValue;
    }
    using is_flash_attentionTy = ::mlir::BoolAttr;
    is_flash_attentionTy is_flash_attention;

    auto getIsFlashAttention() {
      auto &propStorage = this->is_flash_attention;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setIsFlashAttention(const ::mlir::BoolAttr &propValue) {
      this->is_flash_attention = propValue;
    }
    using seedTy = ::mlir::IntegerAttr;
    seedTy seed;

    auto getSeed() {
      auto &propStorage = this->seed;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setSeed(const ::mlir::IntegerAttr &propValue) {
      this->seed = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 8>;
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
        rhs.algorithm_config == this->algorithm_config &&
        rhs.bmm1_dot_dimension_numbers == this->bmm1_dot_dimension_numbers &&
        rhs.bmm2_dot_dimension_numbers == this->bmm2_dot_dimension_numbers &&
        rhs.dropout_rate == this->dropout_rate &&
        rhs.fmha_scale == this->fmha_scale &&
        rhs.fused_mha_dag == this->fused_mha_dag &&
        rhs.intermediate_tensor_dimensions == this->intermediate_tensor_dimensions &&
        rhs.intermediate_tensor_layout == this->intermediate_tensor_layout &&
        rhs.is_causal_mask == this->is_causal_mask &&
        rhs.is_flash_attention == this->is_flash_attention &&
        rhs.seed == this->seed &&
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
  fusedMHAOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  fusedMHAOpGenericAdaptorBase(fusedMHAOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm1DotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm1DotDimensionNumbers();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm2DotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm2DotDimensionNumbers();
  ::mlir::ArrayAttr getIntermediateTensorDimensionsAttr();
  ::mlir::ArrayAttr getIntermediateTensorDimensions();
  ::mlir::ArrayAttr getIntermediateTensorLayoutAttr();
  ::mlir::ArrayAttr getIntermediateTensorLayout();
  ::mlir::FloatAttr getFmhaScaleAttr();
  ::llvm::APFloat getFmhaScale();
  ::mlir::lmhlo_gpu::FusedMhaDagSignatureAttr getFusedMhaDagAttr();
  ::mlir::lmhlo_gpu::FusedMhaDagSignature getFusedMhaDag();
  ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr getAlgorithmConfigAttr();
  ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr getAlgorithmConfig();
  ::mlir::FloatAttr getDropoutRateAttr();
  ::std::optional< ::llvm::APFloat > getDropoutRate();
  ::mlir::IntegerAttr getSeedAttr();
  ::std::optional<uint64_t> getSeed();
  ::mlir::BoolAttr getIsFlashAttentionAttr();
  bool getIsFlashAttention();
  ::mlir::BoolAttr getIsCausalMaskAttr();
  bool getIsCausalMask();
};
} // namespace detail
template <typename RangeT>
class fusedMHAOpGenericAdaptor : public detail::fusedMHAOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::fusedMHAOpGenericAdaptorBase;
public:
  fusedMHAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  fusedMHAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : fusedMHAOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = fusedMHAOp, typename = std::enable_if_t<std::is_same_v<LateInst, fusedMHAOp>>>
  fusedMHAOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhsBmm1() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhsBmm1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getRhsBmm2() {
    return (*getODSOperands(2).begin());
  }

  ValueT getMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getBias() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getOutput() {
    return (*getODSOperands(5).begin());
  }

  ValueT getScratch() {
    return (*getODSOperands(6).begin());
  }

  ValueT getActivation() {
    auto operands = getODSOperands(7);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class fusedMHAOpAdaptor : public fusedMHAOpGenericAdaptor<::mlir::ValueRange> {
public:
  using fusedMHAOpGenericAdaptor::fusedMHAOpGenericAdaptor;
  fusedMHAOpAdaptor(fusedMHAOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class fusedMHAOp : public ::mlir::Op<fusedMHAOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<5>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = fusedMHAOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = fusedMHAOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("algorithm_config"), ::llvm::StringRef("bmm1_dot_dimension_numbers"), ::llvm::StringRef("bmm2_dot_dimension_numbers"), ::llvm::StringRef("dropout_rate"), ::llvm::StringRef("fmha_scale"), ::llvm::StringRef("fused_mha_dag"), ::llvm::StringRef("intermediate_tensor_dimensions"), ::llvm::StringRef("intermediate_tensor_layout"), ::llvm::StringRef("is_causal_mask"), ::llvm::StringRef("is_flash_attention"), ::llvm::StringRef("seed"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAlgorithmConfigAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAlgorithmConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getBmm1DotDimensionNumbersAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getBmm1DotDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getBmm2DotDimensionNumbersAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getBmm2DotDimensionNumbersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getDropoutRateAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getDropoutRateAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getFmhaScaleAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getFmhaScaleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getFusedMhaDagAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getFusedMhaDagAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getIntermediateTensorDimensionsAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getIntermediateTensorDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getIntermediateTensorLayoutAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getIntermediateTensorLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  ::mlir::StringAttr getIsCausalMaskAttrName() {
    return getAttributeNameForIndex(8);
  }

  static ::mlir::StringAttr getIsCausalMaskAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 8);
  }

  ::mlir::StringAttr getIsFlashAttentionAttrName() {
    return getAttributeNameForIndex(9);
  }

  static ::mlir::StringAttr getIsFlashAttentionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 9);
  }

  ::mlir::StringAttr getSeedAttrName() {
    return getAttributeNameForIndex(10);
  }

  static ::mlir::StringAttr getSeedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 10);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("lmhlo_gpu.fMHA");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getLhsBmm1();
  ::mlir::TypedValue<::mlir::MemRefType> getRhsBmm1();
  ::mlir::TypedValue<::mlir::MemRefType> getRhsBmm2();
  ::mlir::TypedValue<::mlir::MemRefType> getMask();
  ::mlir::TypedValue<::mlir::MemRefType> getBias();
  ::mlir::TypedValue<::mlir::MemRefType> getOutput();
  ::mlir::TypedValue<::mlir::MemRefType> getScratch();
  ::mlir::TypedValue<::mlir::MemRefType> getActivation();
  ::mlir::OpOperand &getLhsBmm1Mutable();
  ::mlir::OpOperand &getRhsBmm1Mutable();
  ::mlir::OpOperand &getRhsBmm2Mutable();
  ::mlir::MutableOperandRange getMaskMutable();
  ::mlir::MutableOperandRange getBiasMutable();
  ::mlir::OpOperand &getOutputMutable();
  ::mlir::OpOperand &getScratchMutable();
  ::mlir::MutableOperandRange getActivationMutable();
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
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm1DotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm1DotDimensionNumbers();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm2DotDimensionNumbersAttr();
  ::mlir::mhlo::DotDimensionNumbersAttr getBmm2DotDimensionNumbers();
  ::mlir::ArrayAttr getIntermediateTensorDimensionsAttr();
  ::mlir::ArrayAttr getIntermediateTensorDimensions();
  ::mlir::ArrayAttr getIntermediateTensorLayoutAttr();
  ::mlir::ArrayAttr getIntermediateTensorLayout();
  ::mlir::FloatAttr getFmhaScaleAttr();
  ::llvm::APFloat getFmhaScale();
  ::mlir::lmhlo_gpu::FusedMhaDagSignatureAttr getFusedMhaDagAttr();
  ::mlir::lmhlo_gpu::FusedMhaDagSignature getFusedMhaDag();
  ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr getAlgorithmConfigAttr();
  ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr getAlgorithmConfig();
  ::mlir::FloatAttr getDropoutRateAttr();
  ::std::optional< ::llvm::APFloat > getDropoutRate();
  ::mlir::IntegerAttr getSeedAttr();
  ::std::optional<uint64_t> getSeed();
  ::mlir::BoolAttr getIsFlashAttentionAttr();
  bool getIsFlashAttention();
  ::mlir::BoolAttr getIsCausalMaskAttr();
  bool getIsCausalMask();
  void setBmm1DotDimensionNumbersAttr(::mlir::mhlo::DotDimensionNumbersAttr attr);
  void setBmm2DotDimensionNumbersAttr(::mlir::mhlo::DotDimensionNumbersAttr attr);
  void setIntermediateTensorDimensionsAttr(::mlir::ArrayAttr attr);
  void setIntermediateTensorLayoutAttr(::mlir::ArrayAttr attr);
  void setFmhaScaleAttr(::mlir::FloatAttr attr);
  void setFmhaScale(::llvm::APFloat attrValue);
  void setFusedMhaDagAttr(::mlir::lmhlo_gpu::FusedMhaDagSignatureAttr attr);
  void setFusedMhaDag(::mlir::lmhlo_gpu::FusedMhaDagSignature attrValue);
  void setAlgorithmConfigAttr(::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr attr);
  void setDropoutRateAttr(::mlir::FloatAttr attr);
  void setDropoutRate(::std::optional<::llvm::APFloat> attrValue);
  void setSeedAttr(::mlir::IntegerAttr attr);
  void setSeed(::std::optional<uint64_t> attrValue);
  void setIsFlashAttentionAttr(::mlir::BoolAttr attr);
  void setIsFlashAttention(bool attrValue);
  void setIsCausalMaskAttr(::mlir::BoolAttr attr);
  void setIsCausalMask(bool attrValue);
  ::mlir::Attribute removeDropoutRateAttr();
  ::mlir::Attribute removeSeedAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs_bmm1, ::mlir::Value rhs_bmm1, ::mlir::Value rhs_bmm2, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value bias, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::Value activation, ::mlir::mhlo::DotDimensionNumbersAttr bmm1_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm2_dot_dimension_numbers, ::mlir::ArrayAttr intermediate_tensor_dimensions, ::mlir::ArrayAttr intermediate_tensor_layout, ::mlir::FloatAttr fmha_scale, ::mlir::lmhlo_gpu::FusedMhaDagSignatureAttr fused_mha_dag, ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr algorithm_config, /*optional*/::mlir::FloatAttr dropout_rate, /*optional*/::mlir::IntegerAttr seed, ::mlir::BoolAttr is_flash_attention, ::mlir::BoolAttr is_causal_mask);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs_bmm1, ::mlir::Value rhs_bmm1, ::mlir::Value rhs_bmm2, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value bias, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::Value activation, ::mlir::mhlo::DotDimensionNumbersAttr bmm1_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm2_dot_dimension_numbers, ::mlir::ArrayAttr intermediate_tensor_dimensions, ::mlir::ArrayAttr intermediate_tensor_layout, ::mlir::FloatAttr fmha_scale, ::mlir::lmhlo_gpu::FusedMhaDagSignatureAttr fused_mha_dag, ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr algorithm_config, /*optional*/::mlir::FloatAttr dropout_rate, /*optional*/::mlir::IntegerAttr seed, ::mlir::BoolAttr is_flash_attention, ::mlir::BoolAttr is_causal_mask);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs_bmm1, ::mlir::Value rhs_bmm1, ::mlir::Value rhs_bmm2, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value bias, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::Value activation, ::mlir::mhlo::DotDimensionNumbersAttr bmm1_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm2_dot_dimension_numbers, ::mlir::ArrayAttr intermediate_tensor_dimensions, ::mlir::ArrayAttr intermediate_tensor_layout, ::llvm::APFloat fmha_scale, ::mlir::lmhlo_gpu::FusedMhaDagSignature fused_mha_dag, ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr algorithm_config, /*optional*/::mlir::FloatAttr dropout_rate, /*optional*/::mlir::IntegerAttr seed, bool is_flash_attention, bool is_causal_mask);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs_bmm1, ::mlir::Value rhs_bmm1, ::mlir::Value rhs_bmm2, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value bias, ::mlir::Value output, ::mlir::Value scratch, /*optional*/::mlir::Value activation, ::mlir::mhlo::DotDimensionNumbersAttr bmm1_dot_dimension_numbers, ::mlir::mhlo::DotDimensionNumbersAttr bmm2_dot_dimension_numbers, ::mlir::ArrayAttr intermediate_tensor_dimensions, ::mlir::ArrayAttr intermediate_tensor_layout, ::llvm::APFloat fmha_scale, ::mlir::lmhlo_gpu::FusedMhaDagSignature fused_mha_dag, ::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr algorithm_config, /*optional*/::mlir::FloatAttr dropout_rate, /*optional*/::mlir::IntegerAttr seed, bool is_flash_attention, bool is_causal_mask);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 11 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::fusedMHAOp)


#endif  // GET_OP_CLASSES

