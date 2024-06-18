/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: xla_cpu_ops.td                                                       *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace xla_cpu {
class AddDependencyOp;
} // namespace xla_cpu
} // namespace mlir
namespace mlir {
namespace xla_cpu {
class AllReduceOp;
} // namespace xla_cpu
} // namespace mlir
namespace mlir {
namespace xla_cpu {
class AllToAllOp;
} // namespace xla_cpu
} // namespace mlir
namespace mlir {
namespace xla_cpu {
class CollectivePermuteOp;
} // namespace xla_cpu
} // namespace mlir
namespace mlir {
namespace xla_cpu {
class ConvolutionOp;
} // namespace xla_cpu
} // namespace mlir
namespace mlir {
namespace xla_cpu {
class FftOp;
} // namespace xla_cpu
} // namespace mlir
namespace mlir {
namespace xla_cpu {
class InfeedOp;
} // namespace xla_cpu
} // namespace mlir
namespace mlir {
namespace xla_cpu {
class MemRefElementCastOp;
} // namespace xla_cpu
} // namespace mlir
namespace mlir {
namespace xla_cpu {
class OutfeedOp;
} // namespace xla_cpu
} // namespace mlir
namespace mlir {
namespace xla_cpu {
class PartitionIdOp;
} // namespace xla_cpu
} // namespace mlir
namespace mlir {
namespace xla_cpu {
class ReplicaIdOp;
} // namespace xla_cpu
} // namespace mlir
namespace mlir {
namespace xla_cpu {
class RngBitGeneratorOp;
} // namespace xla_cpu
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace xla_cpu {

//===----------------------------------------------------------------------===//
// ::mlir::xla_cpu::AddDependencyOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AddDependencyOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AddDependencyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AddDependencyOpGenericAdaptorBase(AddDependencyOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AddDependencyOpGenericAdaptor : public detail::AddDependencyOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AddDependencyOpGenericAdaptorBase;
public:
  AddDependencyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AddDependencyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AddDependencyOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AddDependencyOp, typename = std::enable_if_t<std::is_same_v<LateInst, AddDependencyOp>>>
  AddDependencyOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getToken() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AddDependencyOpAdaptor : public AddDependencyOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AddDependencyOpGenericAdaptor::AddDependencyOpGenericAdaptor;
  AddDependencyOpAdaptor(AddDependencyOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AddDependencyOp : public ::mlir::Op<AddDependencyOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::bufferization::BufferizableOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AddDependencyOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AddDependencyOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("xla_cpu.add_dependency");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getOperand();
  ::mlir::Value getToken();
  ::mlir::OpOperand &getOperandMutable();
  ::mlir::OpOperand &getTokenMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value operand, ::mlir::Value token);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value token);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
  // Declarations for BufferizableOpInterface:
  bool bufferizesToMemoryRead(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return opOperand.getOperandNumber() == 0;
  }
  bool bufferizesToMemoryWrite(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return false;
  }
  bufferization::AliasingValueList getAliasingValues(
      OpOperand &opOperand, const bufferization::AnalysisState &state) {
    if (opOperand.getOperandNumber() == 0 || opOperand.getOperandNumber() == 1)
      return {};
    return {{getOperation()->getOpResult(0),
             bufferization::BufferRelation::Unknown, /*isDefinite=*/false}};
  }
  LogicalResult bufferize(RewriterBase &rewriter,
      const bufferization::BufferizationOptions &options);
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::AddDependencyOp)

namespace mlir {
namespace xla_cpu {

//===----------------------------------------------------------------------===//
// ::mlir::xla_cpu::AllReduceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllReduceOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AllReduceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AllReduceOpGenericAdaptorBase(AllReduceOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getReplicaGroupsAttr();
  ::mlir::DenseIntElementsAttr getReplicaGroups();
  ::mlir::IntegerAttr getChannelHandleAttr();
  uint64_t getChannelHandle();
  ::mlir::IntegerAttr getUseGlobalDeviceIdsAttr();
  uint32_t getUseGlobalDeviceIds();
  ::mlir::IntegerAttr getReductionKindAttr();
  ::llvm::APInt getReductionKind();
};
} // namespace detail
template <typename RangeT>
class AllReduceOpGenericAdaptor : public detail::AllReduceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllReduceOpGenericAdaptorBase;
public:
  AllReduceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllReduceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllReduceOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AllReduceOp, typename = std::enable_if_t<std::is_same_v<LateInst, AllReduceOp>>>
  AllReduceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperand() {
    return getODSOperands(0);
  }

  RangeT getDsts() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AllReduceOpAdaptor : public AllReduceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllReduceOpGenericAdaptor::AllReduceOpGenericAdaptor;
  AllReduceOpAdaptor(AllReduceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllReduceOp : public ::mlir::Op<AllReduceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::SameOperandsElementType, ::mlir::bufferization::BufferizableOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllReduceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllReduceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("channel_handle"), ::llvm::StringRef("reduction_kind"), ::llvm::StringRef("replica_groups"), ::llvm::StringRef("use_global_device_ids")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getChannelHandleAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getChannelHandleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getReductionKindAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getReductionKindAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getReplicaGroupsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getReplicaGroupsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getUseGlobalDeviceIdsAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getUseGlobalDeviceIdsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("xla_cpu.all_reduce");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getOperand();
  ::mlir::Operation::operand_range getDsts();
  ::mlir::MutableOperandRange getOperandMutable();
  ::mlir::MutableOperandRange getDstsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseIntElementsAttr getReplicaGroupsAttr();
  ::mlir::DenseIntElementsAttr getReplicaGroups();
  ::mlir::IntegerAttr getChannelHandleAttr();
  uint64_t getChannelHandle();
  ::mlir::IntegerAttr getUseGlobalDeviceIdsAttr();
  uint32_t getUseGlobalDeviceIds();
  ::mlir::IntegerAttr getReductionKindAttr();
  ::llvm::APInt getReductionKind();
  void setReplicaGroupsAttr(::mlir::DenseIntElementsAttr attr);
  void setChannelHandleAttr(::mlir::IntegerAttr attr);
  void setChannelHandle(uint64_t attrValue);
  void setUseGlobalDeviceIdsAttr(::mlir::IntegerAttr attr);
  void setUseGlobalDeviceIds(uint32_t attrValue);
  void setReductionKindAttr(::mlir::IntegerAttr attr);
  void setReductionKind(::llvm::APInt attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::ValueRange operand, ::mlir::ValueRange dsts, ::mlir::DenseIntElementsAttr replica_groups, ::mlir::IntegerAttr channel_handle, ::mlir::IntegerAttr use_global_device_ids, ::mlir::IntegerAttr reduction_kind);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::ValueRange operand, ::mlir::ValueRange dsts, ::mlir::DenseIntElementsAttr replica_groups, uint64_t channel_handle, uint32_t use_global_device_ids, ::llvm::APInt reduction_kind);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
  // Declarations for BufferizableOpInterface:
  bool bufferizesToMemoryRead(OpOperand &opOperand,
      const bufferization::AnalysisState &state);
  bool bufferizesToMemoryWrite(OpOperand &opOperand,
      const bufferization::AnalysisState &state);
  bufferization::AliasingValueList getAliasingValues(
      OpOperand &opOperand, const bufferization::AnalysisState &state);
  LogicalResult bufferize(RewriterBase &rewriter,
      const bufferization::BufferizationOptions &options);
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::AllReduceOp)

namespace mlir {
namespace xla_cpu {

//===----------------------------------------------------------------------===//
// ::mlir::xla_cpu::AllToAllOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllToAllOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AllToAllOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AllToAllOpGenericAdaptorBase(AllToAllOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getReplicaGroupsAttr();
  ::mlir::DenseIntElementsAttr getReplicaGroups();
  ::mlir::IntegerAttr getChannelIdPresentAttr();
  uint32_t getChannelIdPresent();
  ::mlir::IntegerAttr getOpIdAttr();
  uint64_t getOpId();
  ::mlir::IntegerAttr getSplitDimensionAttr();
  ::std::optional<uint64_t> getSplitDimension();
  ::mlir::IntegerAttr getConcatDimensionAttr();
  ::std::optional<uint64_t> getConcatDimension();
  ::mlir::IntegerAttr getSplitCountAttr();
  ::std::optional<uint64_t> getSplitCount();
};
} // namespace detail
template <typename RangeT>
class AllToAllOpGenericAdaptor : public detail::AllToAllOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllToAllOpGenericAdaptorBase;
public:
  AllToAllOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllToAllOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllToAllOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AllToAllOp, typename = std::enable_if_t<std::is_same_v<LateInst, AllToAllOp>>>
  AllToAllOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperand() {
    return getODSOperands(0);
  }

  RangeT getDst() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AllToAllOpAdaptor : public AllToAllOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllToAllOpGenericAdaptor::AllToAllOpGenericAdaptor;
  AllToAllOpAdaptor(AllToAllOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllToAllOp : public ::mlir::Op<AllToAllOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::SameOperandsElementType, ::mlir::bufferization::BufferizableOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllToAllOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllToAllOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("channel_id_present"), ::llvm::StringRef("concat_dimension"), ::llvm::StringRef("op_id"), ::llvm::StringRef("replica_groups"), ::llvm::StringRef("split_count"), ::llvm::StringRef("split_dimension")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getChannelIdPresentAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getChannelIdPresentAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getConcatDimensionAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getConcatDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOpIdAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getOpIdAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getReplicaGroupsAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getReplicaGroupsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getSplitCountAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getSplitCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getSplitDimensionAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getSplitDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("xla_cpu.all_to_all");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getOperand();
  ::mlir::Operation::operand_range getDst();
  ::mlir::MutableOperandRange getOperandMutable();
  ::mlir::MutableOperandRange getDstMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseIntElementsAttr getReplicaGroupsAttr();
  ::mlir::DenseIntElementsAttr getReplicaGroups();
  ::mlir::IntegerAttr getChannelIdPresentAttr();
  uint32_t getChannelIdPresent();
  ::mlir::IntegerAttr getOpIdAttr();
  uint64_t getOpId();
  ::mlir::IntegerAttr getSplitDimensionAttr();
  ::std::optional<uint64_t> getSplitDimension();
  ::mlir::IntegerAttr getConcatDimensionAttr();
  ::std::optional<uint64_t> getConcatDimension();
  ::mlir::IntegerAttr getSplitCountAttr();
  ::std::optional<uint64_t> getSplitCount();
  void setReplicaGroupsAttr(::mlir::DenseIntElementsAttr attr);
  void setChannelIdPresentAttr(::mlir::IntegerAttr attr);
  void setChannelIdPresent(uint32_t attrValue);
  void setOpIdAttr(::mlir::IntegerAttr attr);
  void setOpId(uint64_t attrValue);
  void setSplitDimensionAttr(::mlir::IntegerAttr attr);
  void setSplitDimension(::std::optional<uint64_t> attrValue);
  void setConcatDimensionAttr(::mlir::IntegerAttr attr);
  void setConcatDimension(::std::optional<uint64_t> attrValue);
  void setSplitCountAttr(::mlir::IntegerAttr attr);
  void setSplitCount(::std::optional<uint64_t> attrValue);
  ::mlir::Attribute removeSplitDimensionAttr();
  ::mlir::Attribute removeConcatDimensionAttr();
  ::mlir::Attribute removeSplitCountAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::ValueRange operand, ::mlir::ValueRange dst, ::mlir::DenseIntElementsAttr replica_groups, ::mlir::IntegerAttr channel_id_present, ::mlir::IntegerAttr op_id, /*optional*/::mlir::IntegerAttr split_dimension, /*optional*/::mlir::IntegerAttr concat_dimension, /*optional*/::mlir::IntegerAttr split_count);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::ValueRange operand, ::mlir::ValueRange dst, ::mlir::DenseIntElementsAttr replica_groups, uint32_t channel_id_present, uint64_t op_id, /*optional*/::mlir::IntegerAttr split_dimension, /*optional*/::mlir::IntegerAttr concat_dimension, /*optional*/::mlir::IntegerAttr split_count);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
  // Declarations for BufferizableOpInterface:
  bool bufferizesToMemoryRead(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return opOperand.getOperandNumber() < getNumOperands() / 2;
  }
  bool bufferizesToMemoryWrite(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return opOperand.getOperandNumber() >= getNumOperands() / 2;
  }
  bufferization::AliasingValueList getAliasingValues(
      OpOperand &opOperand, const bufferization::AnalysisState &state) {
    if (bufferizesToMemoryRead(opOperand, state)) return {};
    return {{getOperation()->getOpResult(opOperand.getOperandNumber() - getNumOperands() / 2),
             bufferization::BufferRelation::Equivalent}};
  }
  LogicalResult bufferize(RewriterBase &rewriter,
      const bufferization::BufferizationOptions &options);
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::AllToAllOp)

namespace mlir {
namespace xla_cpu {

//===----------------------------------------------------------------------===//
// ::mlir::xla_cpu::CollectivePermuteOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CollectivePermuteOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CollectivePermuteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CollectivePermuteOpGenericAdaptorBase(CollectivePermuteOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getSourceTargetPairsAttr();
  ::mlir::DenseIntElementsAttr getSourceTargetPairs();
  ::mlir::IntegerAttr getChannelHandleAttr();
  uint64_t getChannelHandle();
};
} // namespace detail
template <typename RangeT>
class CollectivePermuteOpGenericAdaptor : public detail::CollectivePermuteOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CollectivePermuteOpGenericAdaptorBase;
public:
  CollectivePermuteOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CollectivePermuteOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CollectivePermuteOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CollectivePermuteOp, typename = std::enable_if_t<std::is_same_v<LateInst, CollectivePermuteOp>>>
  CollectivePermuteOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getDst() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CollectivePermuteOpAdaptor : public CollectivePermuteOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CollectivePermuteOpGenericAdaptor::CollectivePermuteOpGenericAdaptor;
  CollectivePermuteOpAdaptor(CollectivePermuteOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CollectivePermuteOp : public ::mlir::Op<CollectivePermuteOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::bufferization::BufferizableOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CollectivePermuteOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CollectivePermuteOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("channel_handle"), ::llvm::StringRef("source_target_pairs")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getChannelHandleAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getChannelHandleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getSourceTargetPairsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getSourceTargetPairsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("xla_cpu.collective_permute");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::ShapedType> getOperand();
  ::mlir::TypedValue<::mlir::ShapedType> getDst();
  ::mlir::OpOperand &getOperandMutable();
  ::mlir::OpOperand &getDstMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseIntElementsAttr getSourceTargetPairsAttr();
  ::mlir::DenseIntElementsAttr getSourceTargetPairs();
  ::mlir::IntegerAttr getChannelHandleAttr();
  uint64_t getChannelHandle();
  void setSourceTargetPairsAttr(::mlir::DenseIntElementsAttr attr);
  void setChannelHandleAttr(::mlir::IntegerAttr attr);
  void setChannelHandle(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::Value operand, ::mlir::Value dst, ::mlir::DenseIntElementsAttr source_target_pairs, ::mlir::IntegerAttr channel_handle);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::Value operand, ::mlir::Value dst, ::mlir::DenseIntElementsAttr source_target_pairs, uint64_t channel_handle);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
  // Declarations for BufferizableOpInterface:
  bool bufferizesToMemoryRead(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return opOperand.getOperandNumber() == 0;
  }
  bool bufferizesToMemoryWrite(OpOperand   &opOperand,
      const bufferization::AnalysisState &state) {
    return opOperand.getOperandNumber() == 1;
  }
  bufferization::AliasingValueList getAliasingValues(
      OpOperand &opOperand, const bufferization::AnalysisState &state) {
    if (opOperand.getOperandNumber() == 0) return {};
    return {{getOperation()->getOpResult(0),
             bufferization::BufferRelation::Equivalent}};
  }
  LogicalResult bufferize(RewriterBase &rewriter,
      const bufferization::BufferizationOptions &options);
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::CollectivePermuteOp)

namespace mlir {
namespace xla_cpu {

//===----------------------------------------------------------------------===//
// ::mlir::xla_cpu::ConvolutionOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvolutionOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConvolutionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConvolutionOpGenericAdaptorBase(ConvolutionOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
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
  ::mlir::IntegerAttr getInputBatchDimensionAttr();
  uint64_t getInputBatchDimension();
  ::mlir::IntegerAttr getInputFeatureDimensionAttr();
  uint64_t getInputFeatureDimension();
  ::mlir::ArrayAttr getInputSpatialDimensionsAttr();
  ::mlir::ArrayAttr getInputSpatialDimensions();
  ::mlir::IntegerAttr getKernelInputFeatureDimensionAttr();
  uint64_t getKernelInputFeatureDimension();
  ::mlir::IntegerAttr getKernelOutputFeatureDimensionAttr();
  uint64_t getKernelOutputFeatureDimension();
  ::mlir::ArrayAttr getKernelSpatialDimensionsAttr();
  ::mlir::ArrayAttr getKernelSpatialDimensions();
  ::mlir::IntegerAttr getOutputBatchDimensionAttr();
  uint64_t getOutputBatchDimension();
  ::mlir::IntegerAttr getOutputFeatureDimensionAttr();
  uint64_t getOutputFeatureDimension();
  ::mlir::ArrayAttr getOutputSpatialDimensionsAttr();
  ::mlir::ArrayAttr getOutputSpatialDimensions();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
};
} // namespace detail
template <typename RangeT>
class ConvolutionOpGenericAdaptor : public detail::ConvolutionOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvolutionOpGenericAdaptorBase;
public:
  ConvolutionOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvolutionOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvolutionOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConvolutionOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvolutionOp>>>
  ConvolutionOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getKernel() {
    return (*getODSOperands(1).begin());
  }

  ValueT getDst() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConvolutionOpAdaptor : public ConvolutionOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvolutionOpGenericAdaptor::ConvolutionOpGenericAdaptor;
  ConvolutionOpAdaptor(ConvolutionOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvolutionOp : public ::mlir::Op<ConvolutionOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::bufferization::BufferizableOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvolutionOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvolutionOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("batch_group_count"), ::llvm::StringRef("feature_group_count"), ::llvm::StringRef("inputBatchDimension"), ::llvm::StringRef("inputFeatureDimension"), ::llvm::StringRef("inputSpatialDimensions"), ::llvm::StringRef("kernelInputFeatureDimension"), ::llvm::StringRef("kernelOutputFeatureDimension"), ::llvm::StringRef("kernelSpatialDimensions"), ::llvm::StringRef("lhs_dilation"), ::llvm::StringRef("outputBatchDimension"), ::llvm::StringRef("outputFeatureDimension"), ::llvm::StringRef("outputSpatialDimensions"), ::llvm::StringRef("padding"), ::llvm::StringRef("precision_config"), ::llvm::StringRef("rhs_dilation"), ::llvm::StringRef("window_reversal"), ::llvm::StringRef("window_strides")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBatchGroupCountAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBatchGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getFeatureGroupCountAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getFeatureGroupCountAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getInputBatchDimensionAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getInputBatchDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getInputFeatureDimensionAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getInputFeatureDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getInputSpatialDimensionsAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getInputSpatialDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getKernelInputFeatureDimensionAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getKernelInputFeatureDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getKernelOutputFeatureDimensionAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getKernelOutputFeatureDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getKernelSpatialDimensionsAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getKernelSpatialDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  ::mlir::StringAttr getLhsDilationAttrName() {
    return getAttributeNameForIndex(8);
  }

  static ::mlir::StringAttr getLhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 8);
  }

  ::mlir::StringAttr getOutputBatchDimensionAttrName() {
    return getAttributeNameForIndex(9);
  }

  static ::mlir::StringAttr getOutputBatchDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 9);
  }

  ::mlir::StringAttr getOutputFeatureDimensionAttrName() {
    return getAttributeNameForIndex(10);
  }

  static ::mlir::StringAttr getOutputFeatureDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 10);
  }

  ::mlir::StringAttr getOutputSpatialDimensionsAttrName() {
    return getAttributeNameForIndex(11);
  }

  static ::mlir::StringAttr getOutputSpatialDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 11);
  }

  ::mlir::StringAttr getPaddingAttrName() {
    return getAttributeNameForIndex(12);
  }

  static ::mlir::StringAttr getPaddingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 12);
  }

  ::mlir::StringAttr getPrecisionConfigAttrName() {
    return getAttributeNameForIndex(13);
  }

  static ::mlir::StringAttr getPrecisionConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 13);
  }

  ::mlir::StringAttr getRhsDilationAttrName() {
    return getAttributeNameForIndex(14);
  }

  static ::mlir::StringAttr getRhsDilationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 14);
  }

  ::mlir::StringAttr getWindowReversalAttrName() {
    return getAttributeNameForIndex(15);
  }

  static ::mlir::StringAttr getWindowReversalAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 15);
  }

  ::mlir::StringAttr getWindowStridesAttrName() {
    return getAttributeNameForIndex(16);
  }

  static ::mlir::StringAttr getWindowStridesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 16);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("xla_cpu.convolution");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::ShapedType> getInput();
  ::mlir::TypedValue<::mlir::ShapedType> getKernel();
  ::mlir::TypedValue<::mlir::ShapedType> getDst();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::OpOperand &getKernelMutable();
  ::mlir::OpOperand &getDstMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
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
  ::mlir::IntegerAttr getInputBatchDimensionAttr();
  uint64_t getInputBatchDimension();
  ::mlir::IntegerAttr getInputFeatureDimensionAttr();
  uint64_t getInputFeatureDimension();
  ::mlir::ArrayAttr getInputSpatialDimensionsAttr();
  ::mlir::ArrayAttr getInputSpatialDimensions();
  ::mlir::IntegerAttr getKernelInputFeatureDimensionAttr();
  uint64_t getKernelInputFeatureDimension();
  ::mlir::IntegerAttr getKernelOutputFeatureDimensionAttr();
  uint64_t getKernelOutputFeatureDimension();
  ::mlir::ArrayAttr getKernelSpatialDimensionsAttr();
  ::mlir::ArrayAttr getKernelSpatialDimensions();
  ::mlir::IntegerAttr getOutputBatchDimensionAttr();
  uint64_t getOutputBatchDimension();
  ::mlir::IntegerAttr getOutputFeatureDimensionAttr();
  uint64_t getOutputFeatureDimension();
  ::mlir::ArrayAttr getOutputSpatialDimensionsAttr();
  ::mlir::ArrayAttr getOutputSpatialDimensions();
  ::mlir::IntegerAttr getFeatureGroupCountAttr();
  uint64_t getFeatureGroupCount();
  ::mlir::IntegerAttr getBatchGroupCountAttr();
  uint64_t getBatchGroupCount();
  ::mlir::ArrayAttr getPrecisionConfigAttr();
  ::std::optional< ::mlir::ArrayAttr > getPrecisionConfig();
  void setWindowStridesAttr(::mlir::DenseIntElementsAttr attr);
  void setPaddingAttr(::mlir::DenseIntElementsAttr attr);
  void setLhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setRhsDilationAttr(::mlir::DenseIntElementsAttr attr);
  void setWindowReversalAttr(::mlir::DenseElementsAttr attr);
  void setInputBatchDimensionAttr(::mlir::IntegerAttr attr);
  void setInputBatchDimension(uint64_t attrValue);
  void setInputFeatureDimensionAttr(::mlir::IntegerAttr attr);
  void setInputFeatureDimension(uint64_t attrValue);
  void setInputSpatialDimensionsAttr(::mlir::ArrayAttr attr);
  void setKernelInputFeatureDimensionAttr(::mlir::IntegerAttr attr);
  void setKernelInputFeatureDimension(uint64_t attrValue);
  void setKernelOutputFeatureDimensionAttr(::mlir::IntegerAttr attr);
  void setKernelOutputFeatureDimension(uint64_t attrValue);
  void setKernelSpatialDimensionsAttr(::mlir::ArrayAttr attr);
  void setOutputBatchDimensionAttr(::mlir::IntegerAttr attr);
  void setOutputBatchDimension(uint64_t attrValue);
  void setOutputFeatureDimensionAttr(::mlir::IntegerAttr attr);
  void setOutputFeatureDimension(uint64_t attrValue);
  void setOutputSpatialDimensionsAttr(::mlir::ArrayAttr attr);
  void setFeatureGroupCountAttr(::mlir::IntegerAttr attr);
  void setFeatureGroupCount(uint64_t attrValue);
  void setBatchGroupCountAttr(::mlir::IntegerAttr attr);
  void setBatchGroupCount(uint64_t attrValue);
  void setPrecisionConfigAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeWindowStridesAttr();
  ::mlir::Attribute removePaddingAttr();
  ::mlir::Attribute removeLhsDilationAttr();
  ::mlir::Attribute removeRhsDilationAttr();
  ::mlir::Attribute removeWindowReversalAttr();
  ::mlir::Attribute removePrecisionConfigAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::Value input, ::mlir::Value kernel, ::mlir::Value dst, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, ::mlir::IntegerAttr inputBatchDimension, ::mlir::IntegerAttr inputFeatureDimension, ::mlir::ArrayAttr inputSpatialDimensions, ::mlir::IntegerAttr kernelInputFeatureDimension, ::mlir::IntegerAttr kernelOutputFeatureDimension, ::mlir::ArrayAttr kernelSpatialDimensions, ::mlir::IntegerAttr outputBatchDimension, ::mlir::IntegerAttr outputFeatureDimension, ::mlir::ArrayAttr outputSpatialDimensions, ::mlir::IntegerAttr feature_group_count, ::mlir::IntegerAttr batch_group_count, /*optional*/::mlir::ArrayAttr precision_config);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::Value input, ::mlir::Value kernel, ::mlir::Value dst, /*optional*/::mlir::DenseIntElementsAttr window_strides, /*optional*/::mlir::DenseIntElementsAttr padding, /*optional*/::mlir::DenseIntElementsAttr lhs_dilation, /*optional*/::mlir::DenseIntElementsAttr rhs_dilation, /*optional*/::mlir::DenseElementsAttr window_reversal, uint64_t inputBatchDimension, uint64_t inputFeatureDimension, ::mlir::ArrayAttr inputSpatialDimensions, uint64_t kernelInputFeatureDimension, uint64_t kernelOutputFeatureDimension, ::mlir::ArrayAttr kernelSpatialDimensions, uint64_t outputBatchDimension, uint64_t outputFeatureDimension, ::mlir::ArrayAttr outputSpatialDimensions, uint64_t feature_group_count, uint64_t batch_group_count, /*optional*/::mlir::ArrayAttr precision_config);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 17 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  // Declarations for BufferizableOpInterface:
  bool bufferizesToMemoryRead(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return opOperand.getOperandNumber() < 2;
  }
  bool bufferizesToMemoryWrite(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return opOperand.getOperandNumber() == 2;
  }
  bufferization::AliasingValueList getAliasingValues(
      OpOperand &opOperand, const bufferization::AnalysisState &state) {
    if (opOperand.getOperandNumber() < 2) return {};
    return {{getOperation()->getOpResult(0),
             bufferization::BufferRelation::Equivalent}};
  }
  LogicalResult bufferize(RewriterBase &rewriter,
      const bufferization::BufferizationOptions &options);
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::ConvolutionOp)

namespace mlir {
namespace xla_cpu {

//===----------------------------------------------------------------------===//
// ::mlir::xla_cpu::FftOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class FftOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  FftOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  FftOpGenericAdaptorBase(FftOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getFftTypeAttr();
  uint32_t getFftType();
  ::mlir::ArrayAttr getFftLengthAttr();
  ::mlir::ArrayAttr getFftLength();
};
} // namespace detail
template <typename RangeT>
class FftOpGenericAdaptor : public detail::FftOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::FftOpGenericAdaptorBase;
public:
  FftOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  FftOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : FftOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = FftOp, typename = std::enable_if_t<std::is_same_v<LateInst, FftOp>>>
  FftOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getDst() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class FftOpAdaptor : public FftOpGenericAdaptor<::mlir::ValueRange> {
public:
  using FftOpGenericAdaptor::FftOpGenericAdaptor;
  FftOpAdaptor(FftOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class FftOp : public ::mlir::Op<FftOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::bufferization::BufferizableOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = FftOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = FftOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("fft_length"), ::llvm::StringRef("fft_type")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFftLengthAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFftLengthAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getFftTypeAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getFftTypeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("xla_cpu.fft");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::ShapedType> getOperand();
  ::mlir::TypedValue<::mlir::ShapedType> getDst();
  ::mlir::OpOperand &getOperandMutable();
  ::mlir::OpOperand &getDstMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::IntegerAttr getFftTypeAttr();
  uint32_t getFftType();
  ::mlir::ArrayAttr getFftLengthAttr();
  ::mlir::ArrayAttr getFftLength();
  void setFftTypeAttr(::mlir::IntegerAttr attr);
  void setFftType(uint32_t attrValue);
  void setFftLengthAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::Value operand, ::mlir::Value dst, ::mlir::IntegerAttr fft_type, ::mlir::ArrayAttr fft_length);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::Value operand, ::mlir::Value dst, uint32_t fft_type, ::mlir::ArrayAttr fft_length);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
  // Declarations for BufferizableOpInterface:
  bool bufferizesToMemoryRead(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return opOperand.getOperandNumber() == 0;
  }
  bool bufferizesToMemoryWrite(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return opOperand.getOperandNumber() == 1;
  }
  bufferization::AliasingValueList getAliasingValues(
      OpOperand &opOperand, const bufferization::AnalysisState &state) {
    if (opOperand.getOperandNumber() == 0) return {};
    return {{getOperation()->getOpResult(0),
             bufferization::BufferRelation::Equivalent}};
  }
  LogicalResult bufferize(RewriterBase &rewriter,
      const bufferization::BufferizationOptions &options);
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::FftOp)

namespace mlir {
namespace xla_cpu {

//===----------------------------------------------------------------------===//
// ::mlir::xla_cpu::InfeedOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class InfeedOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  InfeedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  InfeedOpGenericAdaptorBase(InfeedOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getConfigAttr();
  ::llvm::StringRef getConfig();
  ::mlir::ArrayAttr getLayoutAttr();
  ::std::optional< ::mlir::ArrayAttr > getLayout();
};
} // namespace detail
template <typename RangeT>
class InfeedOpGenericAdaptor : public detail::InfeedOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::InfeedOpGenericAdaptorBase;
public:
  InfeedOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  InfeedOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : InfeedOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = InfeedOp, typename = std::enable_if_t<std::is_same_v<LateInst, InfeedOp>>>
  InfeedOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getDst() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class InfeedOpAdaptor : public InfeedOpGenericAdaptor<::mlir::ValueRange> {
public:
  using InfeedOpGenericAdaptor::InfeedOpGenericAdaptor;
  InfeedOpAdaptor(InfeedOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class InfeedOp : public ::mlir::Op<InfeedOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::bufferization::BufferizableOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = InfeedOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = InfeedOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("config"), ::llvm::StringRef("layout")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getConfigAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getLayoutAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("xla_cpu.infeed");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getDst();
  ::mlir::MutableOperandRange getDstMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::StringAttr getConfigAttr();
  ::llvm::StringRef getConfig();
  ::mlir::ArrayAttr getLayoutAttr();
  ::std::optional< ::mlir::ArrayAttr > getLayout();
  void setConfigAttr(::mlir::StringAttr attr);
  void setConfig(::llvm::StringRef attrValue);
  void setLayoutAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeLayoutAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::ValueRange dst, ::mlir::StringAttr config, /*optional*/::mlir::ArrayAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::ValueRange dst, ::llvm::StringRef config, /*optional*/::mlir::ArrayAttr layout);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
  // Declarations for BufferizableOpInterface:
  bool bufferizesToMemoryRead(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return false;
  }
  bool bufferizesToMemoryWrite(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return true;
  }
  bufferization::AliasingValueList getAliasingValues(
      OpOperand &opOperand, const bufferization::AnalysisState &state) {
    return {{getOperation()->getOpResult(0),
             bufferization::BufferRelation::Equivalent}};
  }
  LogicalResult bufferize(RewriterBase &rewriter,
      const bufferization::BufferizationOptions &options);
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::InfeedOp)

namespace mlir {
namespace xla_cpu {

//===----------------------------------------------------------------------===//
// ::mlir::xla_cpu::MemRefElementCastOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MemRefElementCastOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MemRefElementCastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  MemRefElementCastOpGenericAdaptorBase(MemRefElementCastOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class MemRefElementCastOpGenericAdaptor : public detail::MemRefElementCastOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MemRefElementCastOpGenericAdaptorBase;
public:
  MemRefElementCastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MemRefElementCastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MemRefElementCastOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MemRefElementCastOp, typename = std::enable_if_t<std::is_same_v<LateInst, MemRefElementCastOp>>>
  MemRefElementCastOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MemRefElementCastOpAdaptor : public MemRefElementCastOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MemRefElementCastOpGenericAdaptor::MemRefElementCastOpGenericAdaptor;
  MemRefElementCastOpAdaptor(MemRefElementCastOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MemRefElementCastOp : public ::mlir::Op<MemRefElementCastOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::MemRefType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MemRefElementCastOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MemRefElementCastOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("xla_cpu.memref_element_cast");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getSrc();
  ::mlir::OpOperand &getSrcMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getDst();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value src);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::MemRefElementCastOp)

namespace mlir {
namespace xla_cpu {

//===----------------------------------------------------------------------===//
// ::mlir::xla_cpu::OutfeedOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class OutfeedOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  OutfeedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  OutfeedOpGenericAdaptorBase(OutfeedOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getConfigAttr();
  ::llvm::StringRef getConfig();
  ::mlir::ArrayAttr getResultTypeAttr();
  ::mlir::ArrayAttr getResultType();
};
} // namespace detail
template <typename RangeT>
class OutfeedOpGenericAdaptor : public detail::OutfeedOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::OutfeedOpGenericAdaptorBase;
public:
  OutfeedOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  OutfeedOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : OutfeedOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = OutfeedOp, typename = std::enable_if_t<std::is_same_v<LateInst, OutfeedOp>>>
  OutfeedOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperand() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class OutfeedOpAdaptor : public OutfeedOpGenericAdaptor<::mlir::ValueRange> {
public:
  using OutfeedOpGenericAdaptor::OutfeedOpGenericAdaptor;
  OutfeedOpAdaptor(OutfeedOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class OutfeedOp : public ::mlir::Op<OutfeedOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::bufferization::BufferizableOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = OutfeedOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = OutfeedOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("config"), ::llvm::StringRef("result_type")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getConfigAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getConfigAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getResultTypeAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getResultTypeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("xla_cpu.outfeed");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getOperand();
  ::mlir::MutableOperandRange getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::StringAttr getConfigAttr();
  ::llvm::StringRef getConfig();
  ::mlir::ArrayAttr getResultTypeAttr();
  ::mlir::ArrayAttr getResultType();
  void setConfigAttr(::mlir::StringAttr attr);
  void setConfig(::llvm::StringRef attrValue);
  void setResultTypeAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operand, ::mlir::StringAttr config, ::mlir::ArrayAttr result_type);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operand, ::mlir::StringAttr config, ::mlir::ArrayAttr result_type);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operand, ::llvm::StringRef config, ::mlir::ArrayAttr result_type);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operand, ::llvm::StringRef config, ::mlir::ArrayAttr result_type);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
  // Declarations for BufferizableOpInterface:
  bool bufferizesToMemoryRead(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return true;
  }
  bool bufferizesToMemoryWrite(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return false;
  }
  bufferization::AliasingValueList getAliasingValues(
      OpOperand &opOperand, const bufferization::AnalysisState &state) {
    return {};
  }
  LogicalResult bufferize(RewriterBase &rewriter,
      const bufferization::BufferizationOptions &options);
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::OutfeedOp)

namespace mlir {
namespace xla_cpu {

//===----------------------------------------------------------------------===//
// ::mlir::xla_cpu::PartitionIdOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PartitionIdOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  PartitionIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  PartitionIdOpGenericAdaptorBase(PartitionIdOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class PartitionIdOpGenericAdaptor : public detail::PartitionIdOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PartitionIdOpGenericAdaptorBase;
public:
  PartitionIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PartitionIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PartitionIdOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = PartitionIdOp, typename = std::enable_if_t<std::is_same_v<LateInst, PartitionIdOp>>>
  PartitionIdOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class PartitionIdOpAdaptor : public PartitionIdOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PartitionIdOpGenericAdaptor::PartitionIdOpGenericAdaptor;
  PartitionIdOpAdaptor(PartitionIdOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PartitionIdOp : public ::mlir::Op<PartitionIdOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PartitionIdOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PartitionIdOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("xla_cpu.partition_id");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
public:
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::PartitionIdOp)

namespace mlir {
namespace xla_cpu {

//===----------------------------------------------------------------------===//
// ::mlir::xla_cpu::ReplicaIdOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReplicaIdOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ReplicaIdOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ReplicaIdOpGenericAdaptorBase(ReplicaIdOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ReplicaIdOpGenericAdaptor : public detail::ReplicaIdOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReplicaIdOpGenericAdaptorBase;
public:
  ReplicaIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReplicaIdOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReplicaIdOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ReplicaIdOp, typename = std::enable_if_t<std::is_same_v<LateInst, ReplicaIdOp>>>
  ReplicaIdOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ReplicaIdOpAdaptor : public ReplicaIdOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReplicaIdOpGenericAdaptor::ReplicaIdOpGenericAdaptor;
  ReplicaIdOpAdaptor(ReplicaIdOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReplicaIdOp : public ::mlir::Op<ReplicaIdOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReplicaIdOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReplicaIdOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("xla_cpu.replica_id");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
public:
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::ReplicaIdOp)

namespace mlir {
namespace xla_cpu {

//===----------------------------------------------------------------------===//
// ::mlir::xla_cpu::RngBitGeneratorOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RngBitGeneratorOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RngBitGeneratorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  RngBitGeneratorOpGenericAdaptorBase(RngBitGeneratorOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Attribute getRngAlgorithmAttr();
  ::mlir::Attribute getRngAlgorithm();
};
} // namespace detail
template <typename RangeT>
class RngBitGeneratorOpGenericAdaptor : public detail::RngBitGeneratorOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RngBitGeneratorOpGenericAdaptorBase;
public:
  RngBitGeneratorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RngBitGeneratorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RngBitGeneratorOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = RngBitGeneratorOp, typename = std::enable_if_t<std::is_same_v<LateInst, RngBitGeneratorOp>>>
  RngBitGeneratorOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getState() {
    return (*getODSOperands(0).begin());
  }

  ValueT getDstState() {
    return (*getODSOperands(1).begin());
  }

  ValueT getDst() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RngBitGeneratorOpAdaptor : public RngBitGeneratorOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RngBitGeneratorOpGenericAdaptor::RngBitGeneratorOpGenericAdaptor;
  RngBitGeneratorOpAdaptor(RngBitGeneratorOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RngBitGeneratorOp : public ::mlir::Op<RngBitGeneratorOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::bufferization::BufferizableOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RngBitGeneratorOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RngBitGeneratorOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("rng_algorithm")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getRngAlgorithmAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getRngAlgorithmAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("xla_cpu.rng_bit_generator");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::ShapedType> getState();
  ::mlir::TypedValue<::mlir::ShapedType> getDstState();
  ::mlir::TypedValue<::mlir::ShapedType> getDst();
  ::mlir::OpOperand &getStateMutable();
  ::mlir::OpOperand &getDstStateMutable();
  ::mlir::OpOperand &getDstMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Attribute getRngAlgorithmAttr();
  ::mlir::Attribute getRngAlgorithm();
  void setRngAlgorithmAttr(::mlir::Attribute attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultType0, ::mlir::Value state, ::mlir::Value dst_state, ::mlir::Value dst, ::mlir::Attribute rng_algorithm);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
  // Declarations for BufferizableOpInterface:
  bool bufferizesToMemoryRead(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return opOperand.getOperandNumber() == 0;
  }
  bool bufferizesToMemoryWrite(OpOperand &opOperand,
      const bufferization::AnalysisState &state) {
    return opOperand.getOperandNumber() != 0;
  }
  bufferization::AliasingValueList getAliasingValues(
      OpOperand &opOperand, const bufferization::AnalysisState &state) {
    if (opOperand.getOperandNumber() == 0) return {};
    return {{getOperation()->getOpResult(opOperand.getOperandNumber()-1),
             bufferization::BufferRelation::Equivalent}};
  }
  LogicalResult bufferize(RewriterBase &rewriter,
      const bufferization::BufferizationOptions &options);
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::RngBitGeneratorOp)


#endif  // GET_OP_CLASSES

