/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: TransformOps.td                                                      *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace transform {
class AlternativesOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class AnnotateOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyCanonicalizationPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyCommonSubexpressionEliminationOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyConversionPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyDeadCodeEliminationOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyLoopInvariantCodeMotionOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyRegisteredPassOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ApplyToLLVMConversionPatternsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class CastOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class CollectMatchingOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ForeachMatchOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ForeachOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class GetConsumersOfResult;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class GetDefiningOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class GetOperandOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class GetParentOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class GetProducerOfOperand;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class GetResultOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class GetTypeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class IncludeOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchOperationEmptyOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchOperationNameOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MatchParamCmpIOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class MergeHandlesOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class NamedSequenceOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class NumAssociationsOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ParamConstantOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class PrintOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class ReplicateOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class SelectOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class SequenceOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class SplitHandleOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class VerifyOp;
} // namespace transform
} // namespace mlir
namespace mlir {
namespace transform {
class YieldOp;
} // namespace transform
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::AlternativesOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AlternativesOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AlternativesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AlternativesOpGenericAdaptorBase(AlternativesOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::RegionRange getAlternatives();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class AlternativesOpGenericAdaptor : public detail::AlternativesOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AlternativesOpGenericAdaptorBase;
public:
  AlternativesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AlternativesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AlternativesOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AlternativesOp, typename = std::enable_if_t<std::is_same_v<LateInst, AlternativesOp>>>
  AlternativesOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getScope() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AlternativesOpAdaptor : public AlternativesOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AlternativesOpGenericAdaptor::AlternativesOpGenericAdaptor;
  AlternativesOpAdaptor(AlternativesOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AlternativesOp : public ::mlir::Op<AlternativesOp, ::mlir::OpTrait::VariadicRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::SingleBlockImplicitTerminator<::mlir::transform::YieldOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::RegionBranchOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::IsIsolatedFromAbove, ::mlir::transform::PossibleTopLevelTransformOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AlternativesOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AlternativesOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.alternatives");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getScope();
  ::mlir::MutableOperandRange getScopeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResults();
  ::mlir::MutableArrayRef<::mlir::Region> getAlternatives();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, /*optional*/::mlir::Value scope, unsigned alternativesCount);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes, unsigned numRegions);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::OperandRange getEntrySuccessorOperands(::mlir::RegionBranchPoint point);
  void getSuccessorRegions(::mlir::RegionBranchPoint point, ::llvm::SmallVectorImpl<::mlir::RegionSuccessor> &regions);
  void getRegionInvocationBounds(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::InvocationBounds> &invocationBounds);
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::AlternativesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::AnnotateOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AnnotateOpGenericAdaptorBase {
public:
  struct Properties {
    using nameTy = ::mlir::StringAttr;
    nameTy name;

    auto getName() {
      auto &propStorage = this->name;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setName(const ::mlir::StringAttr &propValue) {
      this->name = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.name == this->name &&
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
  AnnotateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  AnnotateOpGenericAdaptorBase(AnnotateOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getNameAttr();
  ::llvm::StringRef getName();
};
} // namespace detail
template <typename RangeT>
class AnnotateOpGenericAdaptor : public detail::AnnotateOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AnnotateOpGenericAdaptorBase;
public:
  AnnotateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AnnotateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AnnotateOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = AnnotateOp, typename = std::enable_if_t<std::is_same_v<LateInst, AnnotateOp>>>
  AnnotateOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  ValueT getParam() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AnnotateOpAdaptor : public AnnotateOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AnnotateOpGenericAdaptor::AnnotateOpGenericAdaptor;
  AnnotateOpAdaptor(AnnotateOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AnnotateOp : public ::mlir::Op<AnnotateOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AnnotateOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AnnotateOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getNameAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.annotate");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getParam();
  ::mlir::OpOperand &getTargetMutable();
  ::mlir::MutableOperandRange getParamMutable();
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
  ::mlir::StringAttr getNameAttr();
  ::llvm::StringRef getName();
  void setNameAttr(::mlir::StringAttr attr);
  void setName(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::mlir::StringAttr name, /*optional*/::mlir::Value param);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::StringAttr name, /*optional*/::mlir::Value param);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target, ::llvm::StringRef name, /*optional*/::mlir::Value param);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::StringRef name, /*optional*/::mlir::Value param);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::AnnotateOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyCanonicalizationPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyCanonicalizationPatternsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyCanonicalizationPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ApplyCanonicalizationPatternsOpGenericAdaptorBase(ApplyCanonicalizationPatternsOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyCanonicalizationPatternsOpGenericAdaptor : public detail::ApplyCanonicalizationPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyCanonicalizationPatternsOpGenericAdaptorBase;
public:
  ApplyCanonicalizationPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyCanonicalizationPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyCanonicalizationPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ApplyCanonicalizationPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyCanonicalizationPatternsOp>>>
  ApplyCanonicalizationPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ApplyCanonicalizationPatternsOpAdaptor : public ApplyCanonicalizationPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyCanonicalizationPatternsOpGenericAdaptor::ApplyCanonicalizationPatternsOpGenericAdaptor;
  ApplyCanonicalizationPatternsOpAdaptor(ApplyCanonicalizationPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyCanonicalizationPatternsOp : public ::mlir::Op<ApplyCanonicalizationPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::transform::PatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyCanonicalizationPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyCanonicalizationPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns.canonicalization");
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
  void populatePatterns(::mlir::RewritePatternSet &patterns);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyCanonicalizationPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyCommonSubexpressionEliminationOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyCommonSubexpressionEliminationOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyCommonSubexpressionEliminationOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ApplyCommonSubexpressionEliminationOpGenericAdaptorBase(ApplyCommonSubexpressionEliminationOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyCommonSubexpressionEliminationOpGenericAdaptor : public detail::ApplyCommonSubexpressionEliminationOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyCommonSubexpressionEliminationOpGenericAdaptorBase;
public:
  ApplyCommonSubexpressionEliminationOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyCommonSubexpressionEliminationOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyCommonSubexpressionEliminationOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ApplyCommonSubexpressionEliminationOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyCommonSubexpressionEliminationOp>>>
  ApplyCommonSubexpressionEliminationOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyCommonSubexpressionEliminationOpAdaptor : public ApplyCommonSubexpressionEliminationOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyCommonSubexpressionEliminationOpGenericAdaptor::ApplyCommonSubexpressionEliminationOpGenericAdaptor;
  ApplyCommonSubexpressionEliminationOpAdaptor(ApplyCommonSubexpressionEliminationOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyCommonSubexpressionEliminationOp : public ::mlir::Op<ApplyCommonSubexpressionEliminationOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyCommonSubexpressionEliminationOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyCommonSubexpressionEliminationOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_cse");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
    ::mlir::transform::TransformRewriter &rewriter,
    ::mlir::Operation *target,
    ::mlir::transform::ApplyToEachResultList &results,
    ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyCommonSubexpressionEliminationOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyConversionPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyConversionPatternsOpGenericAdaptorBase {
public:
  struct Properties {
    using illegal_dialectsTy = ::mlir::ArrayAttr;
    illegal_dialectsTy illegal_dialects;

    auto getIllegalDialects() {
      auto &propStorage = this->illegal_dialects;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setIllegalDialects(const ::mlir::ArrayAttr &propValue) {
      this->illegal_dialects = propValue;
    }
    using illegal_opsTy = ::mlir::ArrayAttr;
    illegal_opsTy illegal_ops;

    auto getIllegalOps() {
      auto &propStorage = this->illegal_ops;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setIllegalOps(const ::mlir::ArrayAttr &propValue) {
      this->illegal_ops = propValue;
    }
    using legal_dialectsTy = ::mlir::ArrayAttr;
    legal_dialectsTy legal_dialects;

    auto getLegalDialects() {
      auto &propStorage = this->legal_dialects;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setLegalDialects(const ::mlir::ArrayAttr &propValue) {
      this->legal_dialects = propValue;
    }
    using legal_opsTy = ::mlir::ArrayAttr;
    legal_opsTy legal_ops;

    auto getLegalOps() {
      auto &propStorage = this->legal_ops;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setLegalOps(const ::mlir::ArrayAttr &propValue) {
      this->legal_ops = propValue;
    }
    using partial_conversionTy = ::mlir::UnitAttr;
    partial_conversionTy partial_conversion;

    auto getPartialConversion() {
      auto &propStorage = this->partial_conversion;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setPartialConversion(const ::mlir::UnitAttr &propValue) {
      this->partial_conversion = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.illegal_dialects == this->illegal_dialects &&
        rhs.illegal_ops == this->illegal_ops &&
        rhs.legal_dialects == this->legal_dialects &&
        rhs.legal_ops == this->legal_ops &&
        rhs.partial_conversion == this->partial_conversion &&
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
  ApplyConversionPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ApplyConversionPatternsOpGenericAdaptorBase(ApplyConversionPatternsOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getLegalOpsAttr();
  ::std::optional< ::mlir::ArrayAttr > getLegalOps();
  ::mlir::ArrayAttr getIllegalOpsAttr();
  ::std::optional< ::mlir::ArrayAttr > getIllegalOps();
  ::mlir::ArrayAttr getLegalDialectsAttr();
  ::std::optional< ::mlir::ArrayAttr > getLegalDialects();
  ::mlir::ArrayAttr getIllegalDialectsAttr();
  ::std::optional< ::mlir::ArrayAttr > getIllegalDialects();
  ::mlir::UnitAttr getPartialConversionAttr();
  bool getPartialConversion();
  ::mlir::Region &getPatterns();
  ::mlir::RegionRange getDefaultTypeConverterRegion();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ApplyConversionPatternsOpGenericAdaptor : public detail::ApplyConversionPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyConversionPatternsOpGenericAdaptorBase;
public:
  ApplyConversionPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyConversionPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyConversionPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ApplyConversionPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyConversionPatternsOp>>>
  ApplyConversionPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyConversionPatternsOpAdaptor : public ApplyConversionPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyConversionPatternsOpGenericAdaptor::ApplyConversionPatternsOpGenericAdaptor;
  ApplyConversionPatternsOpAdaptor(ApplyConversionPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyConversionPatternsOp : public ::mlir::Op<ApplyConversionPatternsOp, ::mlir::OpTrait::AtLeastNRegions<1>::Impl, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::NoTerminator, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::RegionKindInterface::Trait, ::mlir::OpTrait::HasOnlyGraphRegion> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyConversionPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyConversionPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("illegal_dialects"), ::llvm::StringRef("illegal_ops"), ::llvm::StringRef("legal_dialects"), ::llvm::StringRef("legal_ops"), ::llvm::StringRef("partial_conversion")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIllegalDialectsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIllegalDialectsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIllegalOpsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIllegalOpsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getLegalDialectsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getLegalDialectsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getLegalOpsAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getLegalOpsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getPartialConversionAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getPartialConversionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_conversion_patterns");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getPatterns();
  ::mlir::MutableArrayRef<::mlir::Region> getDefaultTypeConverterRegion();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::ArrayAttr getLegalOpsAttr();
  ::std::optional< ::mlir::ArrayAttr > getLegalOps();
  ::mlir::ArrayAttr getIllegalOpsAttr();
  ::std::optional< ::mlir::ArrayAttr > getIllegalOps();
  ::mlir::ArrayAttr getLegalDialectsAttr();
  ::std::optional< ::mlir::ArrayAttr > getLegalDialects();
  ::mlir::ArrayAttr getIllegalDialectsAttr();
  ::std::optional< ::mlir::ArrayAttr > getIllegalDialects();
  ::mlir::UnitAttr getPartialConversionAttr();
  bool getPartialConversion();
  void setLegalOpsAttr(::mlir::ArrayAttr attr);
  void setIllegalOpsAttr(::mlir::ArrayAttr attr);
  void setLegalDialectsAttr(::mlir::ArrayAttr attr);
  void setIllegalDialectsAttr(::mlir::ArrayAttr attr);
  void setPartialConversionAttr(::mlir::UnitAttr attr);
  void setPartialConversion(bool attrValue);
  ::mlir::Attribute removeLegalOpsAttr();
  ::mlir::Attribute removeIllegalOpsAttr();
  ::mlir::Attribute removeLegalDialectsAttr();
  ::mlir::Attribute removeIllegalDialectsAttr();
  ::mlir::Attribute removePartialConversionAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, function_ref<void(OpBuilder &, Location)> patternsBodyBuilder = nullptr, function_ref<void(OpBuilder &, Location)> typeConverterBodyBuilder = nullptr);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 5 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  ::mlir::transform::TypeConverterBuilderOpInterface getDefaultTypeConverter() {
    if (getDefaultTypeConverterRegion().size() == 0)
      return {};
    return ::llvm::cast<::mlir::transform::TypeConverterBuilderOpInterface>(
        &getDefaultTypeConverterRegion()[0].front().front());
  }
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyConversionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyDeadCodeEliminationOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyDeadCodeEliminationOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyDeadCodeEliminationOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ApplyDeadCodeEliminationOpGenericAdaptorBase(ApplyDeadCodeEliminationOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyDeadCodeEliminationOpGenericAdaptor : public detail::ApplyDeadCodeEliminationOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyDeadCodeEliminationOpGenericAdaptorBase;
public:
  ApplyDeadCodeEliminationOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyDeadCodeEliminationOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyDeadCodeEliminationOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ApplyDeadCodeEliminationOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyDeadCodeEliminationOp>>>
  ApplyDeadCodeEliminationOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyDeadCodeEliminationOpAdaptor : public ApplyDeadCodeEliminationOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyDeadCodeEliminationOpGenericAdaptor::ApplyDeadCodeEliminationOpGenericAdaptor;
  ApplyDeadCodeEliminationOpAdaptor(ApplyDeadCodeEliminationOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyDeadCodeEliminationOp : public ::mlir::Op<ApplyDeadCodeEliminationOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyDeadCodeEliminationOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyDeadCodeEliminationOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_dce");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
    ::mlir::transform::TransformRewriter &rewriter,
    ::mlir::Operation *target,
    ::mlir::transform::ApplyToEachResultList &results,
    ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyDeadCodeEliminationOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyLoopInvariantCodeMotionOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyLoopInvariantCodeMotionOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ApplyLoopInvariantCodeMotionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ApplyLoopInvariantCodeMotionOpGenericAdaptorBase(ApplyLoopInvariantCodeMotionOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ApplyLoopInvariantCodeMotionOpGenericAdaptor : public detail::ApplyLoopInvariantCodeMotionOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyLoopInvariantCodeMotionOpGenericAdaptorBase;
public:
  ApplyLoopInvariantCodeMotionOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyLoopInvariantCodeMotionOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyLoopInvariantCodeMotionOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ApplyLoopInvariantCodeMotionOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyLoopInvariantCodeMotionOp>>>
  ApplyLoopInvariantCodeMotionOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyLoopInvariantCodeMotionOpAdaptor : public ApplyLoopInvariantCodeMotionOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyLoopInvariantCodeMotionOpGenericAdaptor::ApplyLoopInvariantCodeMotionOpGenericAdaptor;
  ApplyLoopInvariantCodeMotionOpAdaptor(ApplyLoopInvariantCodeMotionOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyLoopInvariantCodeMotionOp : public ::mlir::Op<ApplyLoopInvariantCodeMotionOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyLoopInvariantCodeMotionOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyLoopInvariantCodeMotionOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_licm");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
    ::mlir::transform::TransformRewriter &rewriter,
    ::mlir::LoopLikeOpInterface target,
    ::mlir::transform::ApplyToEachResultList &results,
    ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyLoopInvariantCodeMotionOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyPatternsOpGenericAdaptorBase {
public:
  struct Properties {
    using apply_cseTy = ::mlir::UnitAttr;
    apply_cseTy apply_cse;

    auto getApplyCse() {
      auto &propStorage = this->apply_cse;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setApplyCse(const ::mlir::UnitAttr &propValue) {
      this->apply_cse = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.apply_cse == this->apply_cse &&
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
  ApplyPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ApplyPatternsOpGenericAdaptorBase(ApplyPatternsOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getApplyCseAttr();
  bool getApplyCse();
  ::mlir::Region &getPatterns();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ApplyPatternsOpGenericAdaptor : public detail::ApplyPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyPatternsOpGenericAdaptorBase;
public:
  ApplyPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ApplyPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyPatternsOp>>>
  ApplyPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyPatternsOpAdaptor : public ApplyPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyPatternsOpGenericAdaptor::ApplyPatternsOpGenericAdaptor;
  ApplyPatternsOpAdaptor(ApplyPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyPatternsOp : public ::mlir::Op<ApplyPatternsOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::NoTerminator, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait, ::mlir::RegionKindInterface::Trait, ::mlir::OpTrait::HasOnlyGraphRegion> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("apply_cse")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getApplyCseAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getApplyCseAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_patterns");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getPatterns();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::UnitAttr getApplyCseAttr();
  bool getApplyCse();
  void setApplyCseAttr(::mlir::UnitAttr attr);
  void setApplyCse(bool attrValue);
  ::mlir::Attribute removeApplyCseAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, function_ref<void(OpBuilder &, Location)> bodyBuilder = nullptr);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
  ::mlir::DiagnosedSilenceableFailure applyToOne(
    ::mlir::transform::TransformRewriter &rewriter,
    ::mlir::Operation *target,
    ::mlir::transform::ApplyToEachResultList &results,
    ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyRegisteredPassOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyRegisteredPassOpGenericAdaptorBase {
public:
  struct Properties {
    using optionsTy = ::mlir::StringAttr;
    optionsTy options;

    auto getOptions() {
      auto &propStorage = this->options;
      return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(propStorage);
    }
    void setOptions(const ::mlir::StringAttr &propValue) {
      this->options = propValue;
    }
    using pass_nameTy = ::mlir::StringAttr;
    pass_nameTy pass_name;

    auto getPassName() {
      auto &propStorage = this->pass_name;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setPassName(const ::mlir::StringAttr &propValue) {
      this->pass_name = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.options == this->options &&
        rhs.pass_name == this->pass_name &&
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
  ApplyRegisteredPassOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ApplyRegisteredPassOpGenericAdaptorBase(ApplyRegisteredPassOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getPassNameAttr();
  ::llvm::StringRef getPassName();
  ::mlir::StringAttr getOptionsAttr();
  ::llvm::StringRef getOptions();
};
} // namespace detail
template <typename RangeT>
class ApplyRegisteredPassOpGenericAdaptor : public detail::ApplyRegisteredPassOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyRegisteredPassOpGenericAdaptorBase;
public:
  ApplyRegisteredPassOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyRegisteredPassOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyRegisteredPassOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ApplyRegisteredPassOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyRegisteredPassOp>>>
  ApplyRegisteredPassOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ApplyRegisteredPassOpAdaptor : public ApplyRegisteredPassOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyRegisteredPassOpGenericAdaptor::ApplyRegisteredPassOpGenericAdaptor;
  ApplyRegisteredPassOpAdaptor(ApplyRegisteredPassOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyRegisteredPassOp : public ::mlir::Op<ApplyRegisteredPassOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyRegisteredPassOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyRegisteredPassOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("options"), ::llvm::StringRef("pass_name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getOptionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getOptionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getPassNameAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getPassNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_registered_pass");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::StringAttr getPassNameAttr();
  ::llvm::StringRef getPassName();
  ::mlir::StringAttr getOptionsAttr();
  ::llvm::StringRef getOptions();
  void setPassNameAttr(::mlir::StringAttr attr);
  void setPassName(::llvm::StringRef attrValue);
  void setOptionsAttr(::mlir::StringAttr attr);
  void setOptions(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::mlir::StringAttr pass_name, ::mlir::StringAttr options);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::StringAttr pass_name, ::mlir::StringAttr options);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::llvm::StringRef pass_name, ::llvm::StringRef options = "");
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::StringRef pass_name, ::llvm::StringRef options = "");
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
  ::mlir::DiagnosedSilenceableFailure applyToOne(
    ::mlir::transform::TransformRewriter &rewriter,
    ::mlir::Operation *target,
    ::mlir::transform::ApplyToEachResultList &results,
    ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyRegisteredPassOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ApplyToLLVMConversionPatternsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ApplyToLLVMConversionPatternsOpGenericAdaptorBase {
public:
  struct Properties {
    using dialect_nameTy = ::mlir::StringAttr;
    dialect_nameTy dialect_name;

    auto getDialectName() {
      auto &propStorage = this->dialect_name;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setDialectName(const ::mlir::StringAttr &propValue) {
      this->dialect_name = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.dialect_name == this->dialect_name &&
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
  ApplyToLLVMConversionPatternsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ApplyToLLVMConversionPatternsOpGenericAdaptorBase(ApplyToLLVMConversionPatternsOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getDialectNameAttr();
  ::llvm::StringRef getDialectName();
};
} // namespace detail
template <typename RangeT>
class ApplyToLLVMConversionPatternsOpGenericAdaptor : public detail::ApplyToLLVMConversionPatternsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ApplyToLLVMConversionPatternsOpGenericAdaptorBase;
public:
  ApplyToLLVMConversionPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ApplyToLLVMConversionPatternsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ApplyToLLVMConversionPatternsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ApplyToLLVMConversionPatternsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ApplyToLLVMConversionPatternsOp>>>
  ApplyToLLVMConversionPatternsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ApplyToLLVMConversionPatternsOpAdaptor : public ApplyToLLVMConversionPatternsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ApplyToLLVMConversionPatternsOpGenericAdaptor::ApplyToLLVMConversionPatternsOpGenericAdaptor;
  ApplyToLLVMConversionPatternsOpAdaptor(ApplyToLLVMConversionPatternsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ApplyToLLVMConversionPatternsOp : public ::mlir::Op<ApplyToLLVMConversionPatternsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::ConversionPatternDescriptorOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ApplyToLLVMConversionPatternsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ApplyToLLVMConversionPatternsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dialect_name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDialectNameAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDialectNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.apply_conversion_patterns.dialect_to_llvm");
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
  ::mlir::StringAttr getDialectNameAttr();
  ::llvm::StringRef getDialectName();
  void setDialectNameAttr(::mlir::StringAttr attr);
  void setDialectName(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr dialect_name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr dialect_name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef dialect_name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef dialect_name);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void populatePatterns(::mlir::TypeConverter &typeConverter, ::mlir::RewritePatternSet &patterns);
  ::mlir::LogicalResult verifyTypeConverter(TypeConverterBuilderOpInterface builder);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ApplyToLLVMConversionPatternsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::CastOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CastOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CastOpGenericAdaptorBase(CastOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CastOpGenericAdaptor : public detail::CastOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CastOpGenericAdaptorBase;
public:
  CastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CastOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CastOp, typename = std::enable_if_t<std::is_same_v<LateInst, CastOp>>>
  CastOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class CastOpAdaptor : public CastOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CastOpGenericAdaptor::CastOpGenericAdaptor;
  CastOpAdaptor(CastOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CastOp : public ::mlir::Op<CastOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::CastOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CastOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CastOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.cast");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getInput();
  ::mlir::OpOperand &getInputMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getOutput();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value input);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static bool areCastCompatible(::mlir::TypeRange inputs, ::mlir::TypeRange outputs);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
    ::mlir::transform::TransformRewriter &rewriter,
    ::mlir::Operation *target,
    ::mlir::transform::ApplyToEachResultList &results,
    ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::CastOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::CollectMatchingOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CollectMatchingOpGenericAdaptorBase {
public:
  struct Properties {
    using matcherTy = ::mlir::SymbolRefAttr;
    matcherTy matcher;

    auto getMatcher() {
      auto &propStorage = this->matcher;
      return ::llvm::cast<::mlir::SymbolRefAttr>(propStorage);
    }
    void setMatcher(const ::mlir::SymbolRefAttr &propValue) {
      this->matcher = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.matcher == this->matcher &&
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
  CollectMatchingOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  CollectMatchingOpGenericAdaptorBase(CollectMatchingOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::SymbolRefAttr getMatcherAttr();
  ::mlir::SymbolRefAttr getMatcher();
};
} // namespace detail
template <typename RangeT>
class CollectMatchingOpGenericAdaptor : public detail::CollectMatchingOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CollectMatchingOpGenericAdaptorBase;
public:
  CollectMatchingOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CollectMatchingOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CollectMatchingOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = CollectMatchingOp, typename = std::enable_if_t<std::is_same_v<LateInst, CollectMatchingOp>>>
  CollectMatchingOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getRoot() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CollectMatchingOpAdaptor : public CollectMatchingOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CollectMatchingOpGenericAdaptor::CollectMatchingOpGenericAdaptor;
  CollectMatchingOpAdaptor(CollectMatchingOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CollectMatchingOp : public ::mlir::Op<CollectMatchingOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::SymbolUserOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CollectMatchingOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CollectMatchingOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("matcher")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMatcherAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMatcherAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.collect_matching");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getRoot();
  ::mlir::OpOperand &getRootMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResults();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::SymbolRefAttr getMatcherAttr();
  ::mlir::SymbolRefAttr getMatcher();
  void setMatcherAttr(::mlir::SymbolRefAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value root, ::mlir::SymbolRefAttr matcher);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::CollectMatchingOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ForeachMatchOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ForeachMatchOpGenericAdaptorBase {
public:
  struct Properties {
    using actionsTy = ::mlir::ArrayAttr;
    actionsTy actions;

    auto getActions() {
      auto &propStorage = this->actions;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setActions(const ::mlir::ArrayAttr &propValue) {
      this->actions = propValue;
    }
    using matchersTy = ::mlir::ArrayAttr;
    matchersTy matchers;

    auto getMatchers() {
      auto &propStorage = this->matchers;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setMatchers(const ::mlir::ArrayAttr &propValue) {
      this->matchers = propValue;
    }
    using restrict_rootTy = ::mlir::UnitAttr;
    restrict_rootTy restrict_root;

    auto getRestrictRoot() {
      auto &propStorage = this->restrict_root;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setRestrictRoot(const ::mlir::UnitAttr &propValue) {
      this->restrict_root = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.actions == this->actions &&
        rhs.matchers == this->matchers &&
        rhs.restrict_root == this->restrict_root &&
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
  ForeachMatchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ForeachMatchOpGenericAdaptorBase(ForeachMatchOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getRestrictRootAttr();
  bool getRestrictRoot();
  ::mlir::ArrayAttr getMatchersAttr();
  ::mlir::ArrayAttr getMatchers();
  ::mlir::ArrayAttr getActionsAttr();
  ::mlir::ArrayAttr getActions();
};
} // namespace detail
template <typename RangeT>
class ForeachMatchOpGenericAdaptor : public detail::ForeachMatchOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ForeachMatchOpGenericAdaptorBase;
public:
  ForeachMatchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ForeachMatchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ForeachMatchOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ForeachMatchOp, typename = std::enable_if_t<std::is_same_v<LateInst, ForeachMatchOp>>>
  ForeachMatchOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getRoot() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ForeachMatchOpAdaptor : public ForeachMatchOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ForeachMatchOpGenericAdaptor::ForeachMatchOpGenericAdaptor;
  ForeachMatchOpAdaptor(ForeachMatchOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ForeachMatchOp : public ::mlir::Op<ForeachMatchOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::SymbolUserOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ForeachMatchOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ForeachMatchOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("actions"), ::llvm::StringRef("matchers"), ::llvm::StringRef("restrict_root")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getActionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getActionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMatchersAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMatchersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getRestrictRootAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getRestrictRootAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.foreach_match");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getRoot();
  ::mlir::OpOperand &getRootMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getUpdated();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::UnitAttr getRestrictRootAttr();
  bool getRestrictRoot();
  ::mlir::ArrayAttr getMatchersAttr();
  ::mlir::ArrayAttr getMatchers();
  ::mlir::ArrayAttr getActionsAttr();
  ::mlir::ArrayAttr getActions();
  void setRestrictRootAttr(::mlir::UnitAttr attr);
  void setRestrictRoot(bool attrValue);
  void setMatchersAttr(::mlir::ArrayAttr attr);
  void setActionsAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeRestrictRootAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type updated, ::mlir::Value root, /*optional*/::mlir::UnitAttr restrict_root, ::mlir::ArrayAttr matchers, ::mlir::ArrayAttr actions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value root, /*optional*/::mlir::UnitAttr restrict_root, ::mlir::ArrayAttr matchers, ::mlir::ArrayAttr actions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type updated, ::mlir::Value root, /*optional*/bool restrict_root, ::mlir::ArrayAttr matchers, ::mlir::ArrayAttr actions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value root, /*optional*/bool restrict_root, ::mlir::ArrayAttr matchers, ::mlir::ArrayAttr actions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ForeachMatchOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ForeachOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ForeachOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ForeachOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ForeachOpGenericAdaptorBase(ForeachOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getBody();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ForeachOpGenericAdaptor : public detail::ForeachOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ForeachOpGenericAdaptorBase;
public:
  ForeachOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ForeachOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ForeachOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ForeachOp, typename = std::enable_if_t<std::is_same_v<LateInst, ForeachOp>>>
  ForeachOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ForeachOpAdaptor : public ForeachOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ForeachOpGenericAdaptor::ForeachOpGenericAdaptor;
  ForeachOpAdaptor(ForeachOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ForeachOp : public ::mlir::Op<ForeachOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::SingleBlockImplicitTerminator<::mlir::transform::YieldOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::RegionBranchOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ForeachOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ForeachOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.foreach");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResults();
  ::mlir::Region &getBody();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  ::mlir::OperandRange getEntrySuccessorOperands(::mlir::RegionBranchPoint point);
  void getSuccessorRegions(::mlir::RegionBranchPoint point, ::llvm::SmallVectorImpl<::mlir::RegionSuccessor> &regions);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  /// Allow the dialect prefix to be omitted.
  static StringRef getDefaultDialect() { return "transform"; }

  BlockArgument getIterationVariable() {
    return getBody().front().getArgument(0);
  }

  transform::YieldOp getYieldOp();
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ForeachOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetConsumersOfResult declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetConsumersOfResultGenericAdaptorBase {
public:
  struct Properties {
    using result_numberTy = ::mlir::IntegerAttr;
    result_numberTy result_number;

    auto getResultNumber() {
      auto &propStorage = this->result_number;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setResultNumber(const ::mlir::IntegerAttr &propValue) {
      this->result_number = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.result_number == this->result_number &&
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
  GetConsumersOfResultGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  GetConsumersOfResultGenericAdaptorBase(GetConsumersOfResult op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getResultNumberAttr();
  uint64_t getResultNumber();
};
} // namespace detail
template <typename RangeT>
class GetConsumersOfResultGenericAdaptor : public detail::GetConsumersOfResultGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetConsumersOfResultGenericAdaptorBase;
public:
  GetConsumersOfResultGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetConsumersOfResultGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetConsumersOfResultGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = GetConsumersOfResult, typename = std::enable_if_t<std::is_same_v<LateInst, GetConsumersOfResult>>>
  GetConsumersOfResultGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GetConsumersOfResultAdaptor : public GetConsumersOfResultGenericAdaptor<::mlir::ValueRange> {
public:
  using GetConsumersOfResultGenericAdaptor::GetConsumersOfResultGenericAdaptor;
  GetConsumersOfResultAdaptor(GetConsumersOfResult op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetConsumersOfResult : public ::mlir::Op<GetConsumersOfResult, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::NavigationTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetConsumersOfResultAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetConsumersOfResultGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("result_number")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getResultNumberAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getResultNumberAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.get_consumers_of_result");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getConsumers();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getResultNumberAttr();
  uint64_t getResultNumber();
  void setResultNumberAttr(::mlir::IntegerAttr attr);
  void setResultNumber(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type consumers, ::mlir::Value target, ::mlir::IntegerAttr result_number);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr result_number);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type consumers, ::mlir::Value target, uint64_t result_number);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t result_number);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::GetConsumersOfResult)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetDefiningOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetDefiningOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GetDefiningOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  GetDefiningOpGenericAdaptorBase(GetDefiningOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class GetDefiningOpGenericAdaptor : public detail::GetDefiningOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetDefiningOpGenericAdaptorBase;
public:
  GetDefiningOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetDefiningOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetDefiningOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = GetDefiningOp, typename = std::enable_if_t<std::is_same_v<LateInst, GetDefiningOp>>>
  GetDefiningOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GetDefiningOpAdaptor : public GetDefiningOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetDefiningOpGenericAdaptor::GetDefiningOpGenericAdaptor;
  GetDefiningOpAdaptor(GetDefiningOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetDefiningOp : public ::mlir::Op<GetDefiningOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::transform::NavigationTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetDefiningOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetDefiningOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.get_defining_op");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::GetDefiningOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetOperandOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetOperandOpGenericAdaptorBase {
public:
  struct Properties {
    using is_allTy = ::mlir::UnitAttr;
    is_allTy is_all;

    auto getIsAll() {
      auto &propStorage = this->is_all;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setIsAll(const ::mlir::UnitAttr &propValue) {
      this->is_all = propValue;
    }
    using is_invertedTy = ::mlir::UnitAttr;
    is_invertedTy is_inverted;

    auto getIsInverted() {
      auto &propStorage = this->is_inverted;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setIsInverted(const ::mlir::UnitAttr &propValue) {
      this->is_inverted = propValue;
    }
    using raw_position_listTy = ::mlir::DenseI64ArrayAttr;
    raw_position_listTy raw_position_list;

    auto getRawPositionList() {
      auto &propStorage = this->raw_position_list;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setRawPositionList(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->raw_position_list = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.is_all == this->is_all &&
        rhs.is_inverted == this->is_inverted &&
        rhs.raw_position_list == this->raw_position_list &&
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
  GetOperandOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  GetOperandOpGenericAdaptorBase(GetOperandOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getRawPositionListAttr();
  ::llvm::ArrayRef<int64_t> getRawPositionList();
  ::mlir::UnitAttr getIsInvertedAttr();
  bool getIsInverted();
  ::mlir::UnitAttr getIsAllAttr();
  bool getIsAll();
};
} // namespace detail
template <typename RangeT>
class GetOperandOpGenericAdaptor : public detail::GetOperandOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetOperandOpGenericAdaptorBase;
public:
  GetOperandOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetOperandOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetOperandOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = GetOperandOp, typename = std::enable_if_t<std::is_same_v<LateInst, GetOperandOp>>>
  GetOperandOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GetOperandOpAdaptor : public GetOperandOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetOperandOpGenericAdaptor::GetOperandOpGenericAdaptor;
  GetOperandOpAdaptor(GetOperandOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetOperandOp : public ::mlir::Op<GetOperandOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformValueHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::NavigationTransformOpTrait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetOperandOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetOperandOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("is_all"), ::llvm::StringRef("is_inverted"), ::llvm::StringRef("raw_position_list")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIsAllAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIsAllAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIsInvertedAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIsInvertedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getRawPositionListAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getRawPositionListAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.get_operand");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getRawPositionListAttr();
  ::llvm::ArrayRef<int64_t> getRawPositionList();
  ::mlir::UnitAttr getIsInvertedAttr();
  bool getIsInverted();
  ::mlir::UnitAttr getIsAllAttr();
  bool getIsAll();
  void setRawPositionListAttr(::mlir::DenseI64ArrayAttr attr);
  void setRawPositionList(::llvm::ArrayRef<int64_t> attrValue);
  void setIsInvertedAttr(::mlir::UnitAttr attr);
  void setIsInverted(bool attrValue);
  void setIsAllAttr(::mlir::UnitAttr attr);
  void setIsAll(bool attrValue);
  ::mlir::Attribute removeIsInvertedAttr();
  ::mlir::Attribute removeIsAllAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted = false, /*optional*/bool is_all = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted = false, /*optional*/bool is_all = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::GetOperandOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetParentOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetParentOpGenericAdaptorBase {
public:
  struct Properties {
    using allow_empty_resultsTy = ::mlir::UnitAttr;
    allow_empty_resultsTy allow_empty_results;

    auto getAllowEmptyResults() {
      auto &propStorage = this->allow_empty_results;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setAllowEmptyResults(const ::mlir::UnitAttr &propValue) {
      this->allow_empty_results = propValue;
    }
    using deduplicateTy = ::mlir::UnitAttr;
    deduplicateTy deduplicate;

    auto getDeduplicate() {
      auto &propStorage = this->deduplicate;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setDeduplicate(const ::mlir::UnitAttr &propValue) {
      this->deduplicate = propValue;
    }
    using isolated_from_aboveTy = ::mlir::UnitAttr;
    isolated_from_aboveTy isolated_from_above;

    auto getIsolatedFromAbove() {
      auto &propStorage = this->isolated_from_above;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setIsolatedFromAbove(const ::mlir::UnitAttr &propValue) {
      this->isolated_from_above = propValue;
    }
    using nth_parentTy = ::mlir::IntegerAttr;
    nth_parentTy nth_parent;

    auto getNthParent() {
      auto &propStorage = this->nth_parent;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setNthParent(const ::mlir::IntegerAttr &propValue) {
      this->nth_parent = propValue;
    }
    using op_nameTy = ::mlir::StringAttr;
    op_nameTy op_name;

    auto getOpName() {
      auto &propStorage = this->op_name;
      return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(propStorage);
    }
    void setOpName(const ::mlir::StringAttr &propValue) {
      this->op_name = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.allow_empty_results == this->allow_empty_results &&
        rhs.deduplicate == this->deduplicate &&
        rhs.isolated_from_above == this->isolated_from_above &&
        rhs.nth_parent == this->nth_parent &&
        rhs.op_name == this->op_name &&
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
  GetParentOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  GetParentOpGenericAdaptorBase(GetParentOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getIsolatedFromAboveAttr();
  bool getIsolatedFromAbove();
  ::mlir::UnitAttr getAllowEmptyResultsAttr();
  bool getAllowEmptyResults();
  ::mlir::StringAttr getOpNameAttr();
  ::std::optional< ::llvm::StringRef > getOpName();
  ::mlir::UnitAttr getDeduplicateAttr();
  bool getDeduplicate();
  ::mlir::IntegerAttr getNthParentAttr();
  uint64_t getNthParent();
};
} // namespace detail
template <typename RangeT>
class GetParentOpGenericAdaptor : public detail::GetParentOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetParentOpGenericAdaptorBase;
public:
  GetParentOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetParentOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetParentOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = GetParentOp, typename = std::enable_if_t<std::is_same_v<LateInst, GetParentOp>>>
  GetParentOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GetParentOpAdaptor : public GetParentOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetParentOpGenericAdaptor::GetParentOpGenericAdaptor;
  GetParentOpAdaptor(GetParentOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetParentOp : public ::mlir::Op<GetParentOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::transform::NavigationTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetParentOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetParentOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("allow_empty_results"), ::llvm::StringRef("deduplicate"), ::llvm::StringRef("isolated_from_above"), ::llvm::StringRef("nth_parent"), ::llvm::StringRef("op_name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAllowEmptyResultsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAllowEmptyResultsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getDeduplicateAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getDeduplicateAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getIsolatedFromAboveAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getIsolatedFromAboveAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getNthParentAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getNthParentAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getOpNameAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getOpNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.get_parent_op");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getParent();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::UnitAttr getIsolatedFromAboveAttr();
  bool getIsolatedFromAbove();
  ::mlir::UnitAttr getAllowEmptyResultsAttr();
  bool getAllowEmptyResults();
  ::mlir::StringAttr getOpNameAttr();
  ::std::optional< ::llvm::StringRef > getOpName();
  ::mlir::UnitAttr getDeduplicateAttr();
  bool getDeduplicate();
  ::mlir::IntegerAttr getNthParentAttr();
  uint64_t getNthParent();
  void setIsolatedFromAboveAttr(::mlir::UnitAttr attr);
  void setIsolatedFromAbove(bool attrValue);
  void setAllowEmptyResultsAttr(::mlir::UnitAttr attr);
  void setAllowEmptyResults(bool attrValue);
  void setOpNameAttr(::mlir::StringAttr attr);
  void setOpName(::std::optional<::llvm::StringRef> attrValue);
  void setDeduplicateAttr(::mlir::UnitAttr attr);
  void setDeduplicate(bool attrValue);
  void setNthParentAttr(::mlir::IntegerAttr attr);
  void setNthParent(uint64_t attrValue);
  ::mlir::Attribute removeIsolatedFromAboveAttr();
  ::mlir::Attribute removeAllowEmptyResultsAttr();
  ::mlir::Attribute removeOpNameAttr();
  ::mlir::Attribute removeDeduplicateAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type parent, ::mlir::Value target, /*optional*/::mlir::UnitAttr isolated_from_above, /*optional*/::mlir::UnitAttr allow_empty_results, /*optional*/::mlir::StringAttr op_name, /*optional*/::mlir::UnitAttr deduplicate, ::mlir::IntegerAttr nth_parent = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/::mlir::UnitAttr isolated_from_above, /*optional*/::mlir::UnitAttr allow_empty_results, /*optional*/::mlir::StringAttr op_name, /*optional*/::mlir::UnitAttr deduplicate, ::mlir::IntegerAttr nth_parent = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type parent, ::mlir::Value target, /*optional*/bool isolated_from_above, /*optional*/bool allow_empty_results, /*optional*/::mlir::StringAttr op_name, /*optional*/bool deduplicate = false, uint64_t nth_parent = 1);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, /*optional*/bool isolated_from_above, /*optional*/bool allow_empty_results, /*optional*/::mlir::StringAttr op_name, /*optional*/bool deduplicate = false, uint64_t nth_parent = 1);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 5 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::GetParentOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetProducerOfOperand declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetProducerOfOperandGenericAdaptorBase {
public:
  struct Properties {
    using operand_numberTy = ::mlir::IntegerAttr;
    operand_numberTy operand_number;

    auto getOperandNumber() {
      auto &propStorage = this->operand_number;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setOperandNumber(const ::mlir::IntegerAttr &propValue) {
      this->operand_number = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.operand_number == this->operand_number &&
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
  GetProducerOfOperandGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  GetProducerOfOperandGenericAdaptorBase(GetProducerOfOperand op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getOperandNumberAttr();
  uint64_t getOperandNumber();
};
} // namespace detail
template <typename RangeT>
class GetProducerOfOperandGenericAdaptor : public detail::GetProducerOfOperandGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetProducerOfOperandGenericAdaptorBase;
public:
  GetProducerOfOperandGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetProducerOfOperandGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetProducerOfOperandGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = GetProducerOfOperand, typename = std::enable_if_t<std::is_same_v<LateInst, GetProducerOfOperand>>>
  GetProducerOfOperandGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GetProducerOfOperandAdaptor : public GetProducerOfOperandGenericAdaptor<::mlir::ValueRange> {
public:
  using GetProducerOfOperandGenericAdaptor::GetProducerOfOperandGenericAdaptor;
  GetProducerOfOperandAdaptor(GetProducerOfOperand op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetProducerOfOperand : public ::mlir::Op<GetProducerOfOperand, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::NavigationTransformOpTrait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetProducerOfOperandAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetProducerOfOperandGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("operand_number")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getOperandNumberAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getOperandNumberAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.get_producer_of_operand");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getProducer();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getOperandNumberAttr();
  uint64_t getOperandNumber();
  void setOperandNumberAttr(::mlir::IntegerAttr attr);
  void setOperandNumber(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type producer, ::mlir::Value target, ::mlir::IntegerAttr operand_number);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::IntegerAttr operand_number);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type producer, ::mlir::Value target, uint64_t operand_number);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, uint64_t operand_number);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::GetProducerOfOperand)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetResultOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetResultOpGenericAdaptorBase {
public:
  struct Properties {
    using is_allTy = ::mlir::UnitAttr;
    is_allTy is_all;

    auto getIsAll() {
      auto &propStorage = this->is_all;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setIsAll(const ::mlir::UnitAttr &propValue) {
      this->is_all = propValue;
    }
    using is_invertedTy = ::mlir::UnitAttr;
    is_invertedTy is_inverted;

    auto getIsInverted() {
      auto &propStorage = this->is_inverted;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setIsInverted(const ::mlir::UnitAttr &propValue) {
      this->is_inverted = propValue;
    }
    using raw_position_listTy = ::mlir::DenseI64ArrayAttr;
    raw_position_listTy raw_position_list;

    auto getRawPositionList() {
      auto &propStorage = this->raw_position_list;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setRawPositionList(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->raw_position_list = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.is_all == this->is_all &&
        rhs.is_inverted == this->is_inverted &&
        rhs.raw_position_list == this->raw_position_list &&
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
  GetResultOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  GetResultOpGenericAdaptorBase(GetResultOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getRawPositionListAttr();
  ::llvm::ArrayRef<int64_t> getRawPositionList();
  ::mlir::UnitAttr getIsInvertedAttr();
  bool getIsInverted();
  ::mlir::UnitAttr getIsAllAttr();
  bool getIsAll();
};
} // namespace detail
template <typename RangeT>
class GetResultOpGenericAdaptor : public detail::GetResultOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetResultOpGenericAdaptorBase;
public:
  GetResultOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetResultOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetResultOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = GetResultOp, typename = std::enable_if_t<std::is_same_v<LateInst, GetResultOp>>>
  GetResultOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GetResultOpAdaptor : public GetResultOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetResultOpGenericAdaptor::GetResultOpGenericAdaptor;
  GetResultOpAdaptor(GetResultOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetResultOp : public ::mlir::Op<GetResultOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformValueHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::NavigationTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetResultOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetResultOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("is_all"), ::llvm::StringRef("is_inverted"), ::llvm::StringRef("raw_position_list")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIsAllAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIsAllAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIsInvertedAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIsInvertedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getRawPositionListAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getRawPositionListAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.get_result");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getRawPositionListAttr();
  ::llvm::ArrayRef<int64_t> getRawPositionList();
  ::mlir::UnitAttr getIsInvertedAttr();
  bool getIsInverted();
  ::mlir::UnitAttr getIsAllAttr();
  bool getIsAll();
  void setRawPositionListAttr(::mlir::DenseI64ArrayAttr attr);
  void setRawPositionList(::llvm::ArrayRef<int64_t> attrValue);
  void setIsInvertedAttr(::mlir::UnitAttr attr);
  void setIsInverted(bool attrValue);
  void setIsAllAttr(::mlir::UnitAttr attr);
  void setIsAll(bool attrValue);
  ::mlir::Attribute removeIsInvertedAttr();
  ::mlir::Attribute removeIsAllAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::DenseI64ArrayAttr raw_position_list, /*optional*/::mlir::UnitAttr is_inverted, /*optional*/::mlir::UnitAttr is_all = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted = false, /*optional*/bool is_all = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::ArrayRef<int64_t> raw_position_list, /*optional*/bool is_inverted = false, /*optional*/bool is_all = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::GetResultOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::GetTypeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetTypeOpGenericAdaptorBase {
public:
  struct Properties {
    using elementalTy = ::mlir::UnitAttr;
    elementalTy elemental;

    auto getElemental() {
      auto &propStorage = this->elemental;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setElemental(const ::mlir::UnitAttr &propValue) {
      this->elemental = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.elemental == this->elemental &&
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
  GetTypeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  GetTypeOpGenericAdaptorBase(GetTypeOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getElementalAttr();
  bool getElemental();
};
} // namespace detail
template <typename RangeT>
class GetTypeOpGenericAdaptor : public detail::GetTypeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetTypeOpGenericAdaptorBase;
public:
  GetTypeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetTypeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetTypeOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = GetTypeOp, typename = std::enable_if_t<std::is_same_v<LateInst, GetTypeOp>>>
  GetTypeOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getValue() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GetTypeOpAdaptor : public GetTypeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetTypeOpGenericAdaptor::GetTypeOpGenericAdaptor;
  GetTypeOpAdaptor(GetTypeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetTypeOp : public ::mlir::Op<GetTypeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformParamTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetTypeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetTypeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("elemental")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getElementalAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getElementalAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.get_type");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformValueHandleTypeInterface> getValue();
  ::mlir::OpOperand &getValueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getTypeParam();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::UnitAttr getElementalAttr();
  bool getElemental();
  void setElementalAttr(::mlir::UnitAttr attr);
  void setElemental(bool attrValue);
  ::mlir::Attribute removeElementalAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type type_param, ::mlir::Value value, /*optional*/::mlir::UnitAttr elemental);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, /*optional*/::mlir::UnitAttr elemental);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type type_param, ::mlir::Value value, /*optional*/bool elemental = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, /*optional*/bool elemental = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::GetTypeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::IncludeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class IncludeOpGenericAdaptorBase {
public:
  struct Properties {
    using failure_propagation_modeTy = ::mlir::transform::FailurePropagationModeAttr;
    failure_propagation_modeTy failure_propagation_mode;

    auto getFailurePropagationMode() {
      auto &propStorage = this->failure_propagation_mode;
      return ::llvm::cast<::mlir::transform::FailurePropagationModeAttr>(propStorage);
    }
    void setFailurePropagationMode(const ::mlir::transform::FailurePropagationModeAttr &propValue) {
      this->failure_propagation_mode = propValue;
    }
    using targetTy = ::mlir::SymbolRefAttr;
    targetTy target;

    auto getTarget() {
      auto &propStorage = this->target;
      return ::llvm::cast<::mlir::SymbolRefAttr>(propStorage);
    }
    void setTarget(const ::mlir::SymbolRefAttr &propValue) {
      this->target = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.failure_propagation_mode == this->failure_propagation_mode &&
        rhs.target == this->target &&
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
  IncludeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  IncludeOpGenericAdaptorBase(IncludeOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::SymbolRefAttr getTargetAttr();
  ::mlir::SymbolRefAttr getTarget();
  ::mlir::transform::FailurePropagationModeAttr getFailurePropagationModeAttr();
  ::mlir::transform::FailurePropagationMode getFailurePropagationMode();
};
} // namespace detail
template <typename RangeT>
class IncludeOpGenericAdaptor : public detail::IncludeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::IncludeOpGenericAdaptorBase;
public:
  IncludeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  IncludeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : IncludeOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = IncludeOp, typename = std::enable_if_t<std::is_same_v<LateInst, IncludeOp>>>
  IncludeOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return getODSOperands(0);
  }

private:
  RangeT odsOperands;
};
class IncludeOpAdaptor : public IncludeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using IncludeOpGenericAdaptor::IncludeOpGenericAdaptor;
  IncludeOpAdaptor(IncludeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class IncludeOp : public ::mlir::Op<IncludeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::CallOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = IncludeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = IncludeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("failure_propagation_mode"), ::llvm::StringRef("target")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFailurePropagationModeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFailurePropagationModeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getTargetAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getTargetAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.include");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getOperands();
  ::mlir::MutableOperandRange getOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResults();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::SymbolRefAttr getTargetAttr();
  ::mlir::SymbolRefAttr getTarget();
  ::mlir::transform::FailurePropagationModeAttr getFailurePropagationModeAttr();
  ::mlir::transform::FailurePropagationMode getFailurePropagationMode();
  void setTargetAttr(::mlir::SymbolRefAttr attr);
  void setFailurePropagationModeAttr(::mlir::transform::FailurePropagationModeAttr attr);
  void setFailurePropagationMode(::mlir::transform::FailurePropagationMode attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::SymbolRefAttr target, ::mlir::transform::FailurePropagationModeAttr failure_propagation_mode, ::mlir::ValueRange operands);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::SymbolRefAttr target, ::mlir::transform::FailurePropagationMode failure_propagation_mode, ::mlir::ValueRange operands);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
  ::mlir::CallInterfaceCallable getCallableForCallee() {
    return getTarget();
  }

  void setCalleeFromCallable(::mlir::CallInterfaceCallable callee) {
    setTargetAttr(callee.get<SymbolRefAttr>());
  }

  ::mlir::Operation::operand_range getArgOperands() {
    return getOperands();
  }

  ::mlir::MutableOperandRange getArgOperandsMutable() {
    return getOperandsMutable();
  }
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::IncludeOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchOperationEmptyOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchOperationEmptyOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MatchOperationEmptyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  MatchOperationEmptyOpGenericAdaptorBase(MatchOperationEmptyOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class MatchOperationEmptyOpGenericAdaptor : public detail::MatchOperationEmptyOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchOperationEmptyOpGenericAdaptorBase;
public:
  MatchOperationEmptyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchOperationEmptyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchOperationEmptyOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MatchOperationEmptyOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchOperationEmptyOp>>>
  MatchOperationEmptyOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperandHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchOperationEmptyOpAdaptor : public MatchOperationEmptyOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchOperationEmptyOpGenericAdaptor::MatchOperationEmptyOpGenericAdaptor;
  MatchOperationEmptyOpAdaptor(MatchOperationEmptyOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MatchOperationEmptyOp : public ::mlir::Op<MatchOperationEmptyOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::AtMostOneOpMatcherOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchOperationEmptyOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchOperationEmptyOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.operation_empty");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getOperandHandle();
  ::mlir::OpOperand &getOperandHandleMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure matchOperation(
        ::std::optional<::mlir::Operation *> maybeCurrent,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchOperationEmptyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchOperationNameOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchOperationNameOpGenericAdaptorBase {
public:
  struct Properties {
    using op_namesTy = ::mlir::ArrayAttr;
    op_namesTy op_names;

    auto getOpNames() {
      auto &propStorage = this->op_names;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setOpNames(const ::mlir::ArrayAttr &propValue) {
      this->op_names = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.op_names == this->op_names &&
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
  MatchOperationNameOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  MatchOperationNameOpGenericAdaptorBase(MatchOperationNameOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getOpNamesAttr();
  ::mlir::ArrayAttr getOpNames();
};
} // namespace detail
template <typename RangeT>
class MatchOperationNameOpGenericAdaptor : public detail::MatchOperationNameOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchOperationNameOpGenericAdaptorBase;
public:
  MatchOperationNameOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchOperationNameOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchOperationNameOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = MatchOperationNameOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchOperationNameOp>>>
  MatchOperationNameOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getOperandHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchOperationNameOpAdaptor : public MatchOperationNameOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchOperationNameOpGenericAdaptor::MatchOperationNameOpGenericAdaptor;
  MatchOperationNameOpAdaptor(MatchOperationNameOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MatchOperationNameOp : public ::mlir::Op<MatchOperationNameOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::SingleOpMatcherOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchOperationNameOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchOperationNameOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("op_names")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getOpNamesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getOpNamesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.operation_name");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getOperandHandle();
  ::mlir::OpOperand &getOperandHandleMutable();
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
  ::mlir::ArrayAttr getOpNamesAttr();
  ::mlir::ArrayAttr getOpNames();
  void setOpNamesAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand_handle, ::mlir::ArrayAttr op_names);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand_handle, ::mlir::ArrayAttr op_names);
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
  ::mlir::DiagnosedSilenceableFailure matchOperation(
        ::mlir::Operation *current,
        ::mlir::transform::TransformResults &results,
        ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchOperationNameOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MatchParamCmpIOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MatchParamCmpIOpGenericAdaptorBase {
public:
  struct Properties {
    using predicateTy = ::mlir::transform::MatchCmpIPredicateAttr;
    predicateTy predicate;

    auto getPredicate() {
      auto &propStorage = this->predicate;
      return ::llvm::cast<::mlir::transform::MatchCmpIPredicateAttr>(propStorage);
    }
    void setPredicate(const ::mlir::transform::MatchCmpIPredicateAttr &propValue) {
      this->predicate = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.predicate == this->predicate &&
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
  MatchParamCmpIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  MatchParamCmpIOpGenericAdaptorBase(MatchParamCmpIOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::transform::MatchCmpIPredicateAttr getPredicateAttr();
  ::mlir::transform::MatchCmpIPredicate getPredicate();
};
} // namespace detail
template <typename RangeT>
class MatchParamCmpIOpGenericAdaptor : public detail::MatchParamCmpIOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MatchParamCmpIOpGenericAdaptorBase;
public:
  MatchParamCmpIOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MatchParamCmpIOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MatchParamCmpIOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = MatchParamCmpIOp, typename = std::enable_if_t<std::is_same_v<LateInst, MatchParamCmpIOp>>>
  MatchParamCmpIOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getParam() {
    return (*getODSOperands(0).begin());
  }

  ValueT getReference() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MatchParamCmpIOpAdaptor : public MatchParamCmpIOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MatchParamCmpIOpGenericAdaptor::MatchParamCmpIOpGenericAdaptor;
  MatchParamCmpIOpAdaptor(MatchParamCmpIOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MatchParamCmpIOp : public ::mlir::Op<MatchParamCmpIOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameTypeOperands> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MatchParamCmpIOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MatchParamCmpIOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("predicate")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getPredicateAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getPredicateAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.match.param.cmpi");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getParam();
  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getReference();
  ::mlir::OpOperand &getParamMutable();
  ::mlir::OpOperand &getReferenceMutable();
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
  ::mlir::transform::MatchCmpIPredicateAttr getPredicateAttr();
  ::mlir::transform::MatchCmpIPredicate getPredicate();
  void setPredicateAttr(::mlir::transform::MatchCmpIPredicateAttr attr);
  void setPredicate(::mlir::transform::MatchCmpIPredicate attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value param, ::mlir::Value reference, ::mlir::transform::MatchCmpIPredicateAttr predicate);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value param, ::mlir::Value reference, ::mlir::transform::MatchCmpIPredicateAttr predicate);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value param, ::mlir::Value reference, ::mlir::transform::MatchCmpIPredicate predicate);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value param, ::mlir::Value reference, ::mlir::transform::MatchCmpIPredicate predicate);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MatchParamCmpIOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::MergeHandlesOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MergeHandlesOpGenericAdaptorBase {
public:
  struct Properties {
    using deduplicateTy = ::mlir::UnitAttr;
    deduplicateTy deduplicate;

    auto getDeduplicate() {
      auto &propStorage = this->deduplicate;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setDeduplicate(const ::mlir::UnitAttr &propValue) {
      this->deduplicate = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.deduplicate == this->deduplicate &&
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
  MergeHandlesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  MergeHandlesOpGenericAdaptorBase(MergeHandlesOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getDeduplicateAttr();
  bool getDeduplicate();
};
} // namespace detail
template <typename RangeT>
class MergeHandlesOpGenericAdaptor : public detail::MergeHandlesOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MergeHandlesOpGenericAdaptorBase;
public:
  MergeHandlesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MergeHandlesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MergeHandlesOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = MergeHandlesOp, typename = std::enable_if_t<std::is_same_v<LateInst, MergeHandlesOp>>>
  MergeHandlesOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getHandles() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MergeHandlesOpAdaptor : public MergeHandlesOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MergeHandlesOpGenericAdaptor::MergeHandlesOpGenericAdaptor;
  MergeHandlesOpAdaptor(MergeHandlesOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MergeHandlesOp : public ::mlir::Op<MergeHandlesOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MergeHandlesOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MergeHandlesOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("deduplicate")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDeduplicateAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDeduplicateAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.merge_handles");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getHandles();
  ::mlir::MutableOperandRange getHandlesMutable();
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
  ::mlir::UnitAttr getDeduplicateAttr();
  bool getDeduplicate();
  void setDeduplicateAttr(::mlir::UnitAttr attr);
  void setDeduplicate(bool attrValue);
  ::mlir::Attribute removeDeduplicateAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange handles, /*optional*/::mlir::UnitAttr deduplicate);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange handles, /*optional*/::mlir::UnitAttr deduplicate);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange handles, /*optional*/bool deduplicate = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange handles, /*optional*/bool deduplicate = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange handles, /*optional*/::mlir::UnitAttr deduplicate);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange handles, /*optional*/bool deduplicate = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::OpFoldResult fold(FoldAdaptor adaptor);
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  bool allowsRepeatedHandleOperands();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::MergeHandlesOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::NamedSequenceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class NamedSequenceOpGenericAdaptorBase {
public:
  struct Properties {
    using arg_attrsTy = ::mlir::ArrayAttr;
    arg_attrsTy arg_attrs;

    auto getArgAttrs() {
      auto &propStorage = this->arg_attrs;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setArgAttrs(const ::mlir::ArrayAttr &propValue) {
      this->arg_attrs = propValue;
    }
    using function_typeTy = ::mlir::TypeAttr;
    function_typeTy function_type;

    auto getFunctionType() {
      auto &propStorage = this->function_type;
      return ::llvm::cast<::mlir::TypeAttr>(propStorage);
    }
    void setFunctionType(const ::mlir::TypeAttr &propValue) {
      this->function_type = propValue;
    }
    using res_attrsTy = ::mlir::ArrayAttr;
    res_attrsTy res_attrs;

    auto getResAttrs() {
      auto &propStorage = this->res_attrs;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setResAttrs(const ::mlir::ArrayAttr &propValue) {
      this->res_attrs = propValue;
    }
    using sym_nameTy = ::mlir::StringAttr;
    sym_nameTy sym_name;

    auto getSymName() {
      auto &propStorage = this->sym_name;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setSymName(const ::mlir::StringAttr &propValue) {
      this->sym_name = propValue;
    }
    using sym_visibilityTy = ::mlir::StringAttr;
    sym_visibilityTy sym_visibility;

    auto getSymVisibility() {
      auto &propStorage = this->sym_visibility;
      return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(propStorage);
    }
    void setSymVisibility(const ::mlir::StringAttr &propValue) {
      this->sym_visibility = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.arg_attrs == this->arg_attrs &&
        rhs.function_type == this->function_type &&
        rhs.res_attrs == this->res_attrs &&
        rhs.sym_name == this->sym_name &&
        rhs.sym_visibility == this->sym_visibility &&
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
  NamedSequenceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  NamedSequenceOpGenericAdaptorBase(NamedSequenceOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getSymNameAttr();
  ::llvm::StringRef getSymName();
  ::mlir::TypeAttr getFunctionTypeAttr();
  ::mlir::FunctionType getFunctionType();
  ::mlir::StringAttr getSymVisibilityAttr();
  ::std::optional< ::llvm::StringRef > getSymVisibility();
  ::mlir::ArrayAttr getArgAttrsAttr();
  ::std::optional< ::mlir::ArrayAttr > getArgAttrs();
  ::mlir::ArrayAttr getResAttrsAttr();
  ::std::optional< ::mlir::ArrayAttr > getResAttrs();
  ::mlir::Region &getBody();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class NamedSequenceOpGenericAdaptor : public detail::NamedSequenceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::NamedSequenceOpGenericAdaptorBase;
public:
  NamedSequenceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  NamedSequenceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : NamedSequenceOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = NamedSequenceOp, typename = std::enable_if_t<std::is_same_v<LateInst, NamedSequenceOp>>>
  NamedSequenceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class NamedSequenceOpAdaptor : public NamedSequenceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using NamedSequenceOpGenericAdaptor::NamedSequenceOpGenericAdaptor;
  NamedSequenceOpAdaptor(NamedSequenceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class NamedSequenceOp : public ::mlir::Op<NamedSequenceOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::SymbolOpInterface::Trait, ::mlir::CallableOpInterface::Trait, ::mlir::FunctionOpInterface::Trait, ::mlir::OpTrait::IsIsolatedFromAbove, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = NamedSequenceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = NamedSequenceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("arg_attrs"), ::llvm::StringRef("function_type"), ::llvm::StringRef("res_attrs"), ::llvm::StringRef("sym_name"), ::llvm::StringRef("sym_visibility")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getArgAttrsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getArgAttrsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getFunctionTypeAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getFunctionTypeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getResAttrsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getResAttrsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getSymNameAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getSymNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getSymVisibilityAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getSymVisibilityAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.named_sequence");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getBody();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::StringAttr getSymNameAttr();
  ::llvm::StringRef getSymName();
  ::mlir::TypeAttr getFunctionTypeAttr();
  ::mlir::FunctionType getFunctionType();
  ::mlir::StringAttr getSymVisibilityAttr();
  ::std::optional< ::llvm::StringRef > getSymVisibility();
  ::mlir::ArrayAttr getArgAttrsAttr();
  ::std::optional< ::mlir::ArrayAttr > getArgAttrs();
  ::mlir::ArrayAttr getResAttrsAttr();
  ::std::optional< ::mlir::ArrayAttr > getResAttrs();
  void setSymNameAttr(::mlir::StringAttr attr);
  void setSymName(::llvm::StringRef attrValue);
  void setFunctionTypeAttr(::mlir::TypeAttr attr);
  void setSymVisibilityAttr(::mlir::StringAttr attr);
  void setSymVisibility(::std::optional<::llvm::StringRef> attrValue);
  void setArgAttrsAttr(::mlir::ArrayAttr attr);
  void setResAttrsAttr(::mlir::ArrayAttr attr);
  ::mlir::Attribute removeSymVisibilityAttr();
  ::mlir::Attribute removeArgAttrsAttr();
  ::mlir::Attribute removeResAttrsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, StringRef symName, Type rootType, TypeRange resultType, SequenceBodyBuilderFn bodyBuilder, ArrayRef<NamedAttribute> attrs = {}, ArrayRef<DictionaryAttr> argAttrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::StringAttr sym_visibility, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::StringAttr sym_visibility, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::StringAttr sym_visibility, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::StringAttr sym_visibility, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 5 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  ::llvm::ArrayRef<::mlir::Type> getArgumentTypes() {
    return getFunctionType().getInputs();
  }
  ::llvm::ArrayRef<::mlir::Type> getResultTypes() {
    return getFunctionType().getResults();
  }
  ::mlir::Region *getCallableRegion() {
    return &getBody();
  }
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::NamedSequenceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::NumAssociationsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class NumAssociationsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  NumAssociationsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  NumAssociationsOpGenericAdaptorBase(NumAssociationsOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class NumAssociationsOpGenericAdaptor : public detail::NumAssociationsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::NumAssociationsOpGenericAdaptorBase;
public:
  NumAssociationsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  NumAssociationsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : NumAssociationsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = NumAssociationsOp, typename = std::enable_if_t<std::is_same_v<LateInst, NumAssociationsOp>>>
  NumAssociationsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class NumAssociationsOpAdaptor : public NumAssociationsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using NumAssociationsOpGenericAdaptor::NumAssociationsOpGenericAdaptor;
  NumAssociationsOpAdaptor(NumAssociationsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class NumAssociationsOp : public ::mlir::Op<NumAssociationsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformParamTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ParamProducerTransformOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = NumAssociationsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = NumAssociationsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.num_associations");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getHandle();
  ::mlir::OpOperand &getHandleMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getNum();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type num, ::mlir::Value handle);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value handle);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::NumAssociationsOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ParamConstantOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ParamConstantOpGenericAdaptorBase {
public:
  struct Properties {
    using valueTy = ::mlir::Attribute;
    valueTy value;

    auto getValue() {
      auto &propStorage = this->value;
      return ::llvm::cast<::mlir::Attribute>(propStorage);
    }
    void setValue(const ::mlir::Attribute &propValue) {
      this->value = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.value == this->value &&
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
  ParamConstantOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ParamConstantOpGenericAdaptorBase(ParamConstantOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Attribute getValueAttr();
  ::mlir::Attribute getValue();
};
} // namespace detail
template <typename RangeT>
class ParamConstantOpGenericAdaptor : public detail::ParamConstantOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ParamConstantOpGenericAdaptorBase;
public:
  ParamConstantOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ParamConstantOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ParamConstantOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ParamConstantOp, typename = std::enable_if_t<std::is_same_v<LateInst, ParamConstantOp>>>
  ParamConstantOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ParamConstantOpAdaptor : public ParamConstantOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ParamConstantOpGenericAdaptor::ParamConstantOpGenericAdaptor;
  ParamConstantOpAdaptor(ParamConstantOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ParamConstantOp : public ::mlir::Op<ParamConstantOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformParamTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ParamProducerTransformOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ParamConstantOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ParamConstantOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("value")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getValueAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getValueAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.param.constant");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformParamTypeInterface> getParam();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::Attribute getValueAttr();
  ::mlir::Attribute getValue();
  void setValueAttr(::mlir::Attribute attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type param, ::mlir::Attribute value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Attribute value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ParamConstantOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::PrintOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PrintOpGenericAdaptorBase {
public:
  struct Properties {
    using nameTy = ::mlir::StringAttr;
    nameTy name;

    auto getName() {
      auto &propStorage = this->name;
      return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(propStorage);
    }
    void setName(const ::mlir::StringAttr &propValue) {
      this->name = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.name == this->name &&
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
  PrintOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  PrintOpGenericAdaptorBase(PrintOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getNameAttr();
  ::std::optional< ::llvm::StringRef > getName();
};
} // namespace detail
template <typename RangeT>
class PrintOpGenericAdaptor : public detail::PrintOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PrintOpGenericAdaptorBase;
public:
  PrintOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PrintOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PrintOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = PrintOp, typename = std::enable_if_t<std::is_same_v<LateInst, PrintOp>>>
  PrintOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PrintOpAdaptor : public PrintOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PrintOpGenericAdaptor::PrintOpGenericAdaptor;
  PrintOpAdaptor(PrintOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PrintOp : public ::mlir::Op<PrintOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PrintOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PrintOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getNameAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.print");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::MutableOperandRange getTargetMutable();
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
  ::mlir::StringAttr getNameAttr();
  ::std::optional< ::llvm::StringRef > getName();
  void setNameAttr(::mlir::StringAttr attr);
  void setName(::std::optional<::llvm::StringRef> attrValue);
  ::mlir::Attribute removeNameAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, StringRef name = StringRef());
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value target, StringRef name = StringRef());
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value target, /*optional*/::mlir::StringAttr name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value target, /*optional*/::mlir::StringAttr name);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::PrintOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::ReplicateOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReplicateOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ReplicateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ReplicateOpGenericAdaptorBase(ReplicateOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ReplicateOpGenericAdaptor : public detail::ReplicateOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReplicateOpGenericAdaptorBase;
public:
  ReplicateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReplicateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReplicateOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ReplicateOp, typename = std::enable_if_t<std::is_same_v<LateInst, ReplicateOp>>>
  ReplicateOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getPattern() {
    return (*getODSOperands(0).begin());
  }

  RangeT getHandles() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ReplicateOpAdaptor : public ReplicateOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReplicateOpGenericAdaptor::ReplicateOpGenericAdaptor;
  ReplicateOpAdaptor(ReplicateOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReplicateOp : public ::mlir::Op<ReplicateOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReplicateOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReplicateOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.replicate");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getPattern();
  ::mlir::Operation::operand_range getHandles();
  ::mlir::OpOperand &getPatternMutable();
  ::mlir::MutableOperandRange getHandlesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getReplicated();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange replicated, ::mlir::Value pattern, ::mlir::ValueRange handles);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::ReplicateOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SelectOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SelectOpGenericAdaptorBase {
public:
  struct Properties {
    using op_nameTy = ::mlir::StringAttr;
    op_nameTy op_name;

    auto getOpName() {
      auto &propStorage = this->op_name;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setOpName(const ::mlir::StringAttr &propValue) {
      this->op_name = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.op_name == this->op_name &&
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
  SelectOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SelectOpGenericAdaptorBase(SelectOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getOpNameAttr();
  ::llvm::StringRef getOpName();
};
} // namespace detail
template <typename RangeT>
class SelectOpGenericAdaptor : public detail::SelectOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SelectOpGenericAdaptorBase;
public:
  SelectOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SelectOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SelectOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SelectOp, typename = std::enable_if_t<std::is_same_v<LateInst, SelectOp>>>
  SelectOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SelectOpAdaptor : public SelectOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SelectOpGenericAdaptor::SelectOpGenericAdaptor;
  SelectOpAdaptor(SelectOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SelectOp : public ::mlir::Op<SelectOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::transform::TransformHandleTypeInterface>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::NavigationTransformOpTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SelectOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SelectOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("op_name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getOpNameAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getOpNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.select");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::StringAttr getOpNameAttr();
  ::llvm::StringRef getOpName();
  void setOpNameAttr(::mlir::StringAttr attr);
  void setOpName(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::mlir::StringAttr op_name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::mlir::StringAttr op_name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value target, ::llvm::StringRef op_name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target, ::llvm::StringRef op_name);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::SelectOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SequenceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SequenceOpGenericAdaptorBase {
public:
  struct Properties {
    using failure_propagation_modeTy = ::mlir::transform::FailurePropagationModeAttr;
    failure_propagation_modeTy failure_propagation_mode;

    auto getFailurePropagationMode() {
      auto &propStorage = this->failure_propagation_mode;
      return ::llvm::cast<::mlir::transform::FailurePropagationModeAttr>(propStorage);
    }
    void setFailurePropagationMode(const ::mlir::transform::FailurePropagationModeAttr &propValue) {
      this->failure_propagation_mode = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 2>;
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
        rhs.failure_propagation_mode == this->failure_propagation_mode &&
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
  SequenceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SequenceOpGenericAdaptorBase(SequenceOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::transform::FailurePropagationModeAttr getFailurePropagationModeAttr();
  ::mlir::transform::FailurePropagationMode getFailurePropagationMode();
  ::mlir::Region &getBody();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class SequenceOpGenericAdaptor : public detail::SequenceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SequenceOpGenericAdaptorBase;
public:
  SequenceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SequenceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SequenceOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SequenceOp, typename = std::enable_if_t<std::is_same_v<LateInst, SequenceOp>>>
  SequenceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getRoot() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getExtraBindings() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SequenceOpAdaptor : public SequenceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SequenceOpGenericAdaptor::SequenceOpGenericAdaptor;
  SequenceOpAdaptor(SequenceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SequenceOp : public ::mlir::Op<SequenceOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::SingleBlockImplicitTerminator<::mlir::transform::YieldOp>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::RegionBranchOpInterface::Trait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::MatchOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait, ::mlir::transform::PossibleTopLevelTransformOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SequenceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SequenceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("failure_propagation_mode"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFailurePropagationModeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFailurePropagationModeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.sequence");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getRoot();
  ::mlir::Operation::operand_range getExtraBindings();
  ::mlir::MutableOperandRange getRootMutable();
  ::mlir::MutableOperandRange getExtraBindingsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResults();
  ::mlir::Region &getBody();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::transform::FailurePropagationModeAttr getFailurePropagationModeAttr();
  ::mlir::transform::FailurePropagationMode getFailurePropagationMode();
  void setFailurePropagationModeAttr(::mlir::transform::FailurePropagationModeAttr attr);
  void setFailurePropagationMode(::mlir::transform::FailurePropagationMode attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::transform::FailurePropagationMode failure_propagation_mode, ::mlir::Value root, SequenceBodyBuilderFn bodyBuilder);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::transform::FailurePropagationMode failure_propagation_mode, ::mlir::Value root, ::mlir::ValueRange extraBindings, SequenceBodyBuilderArgsFn bodyBuilder);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::transform::FailurePropagationMode failure_propagation_mode, ::mlir::Type bbArgType, SequenceBodyBuilderFn bodyBuilder);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::transform::FailurePropagationMode failure_propagation_mode, ::mlir::Type bbArgType, ::mlir::TypeRange extraBindingTypes, SequenceBodyBuilderArgsFn bodyBuilder);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::transform::FailurePropagationModeAttr failure_propagation_mode, /*optional*/::mlir::Value root, ::mlir::ValueRange extra_bindings);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::transform::FailurePropagationMode failure_propagation_mode, /*optional*/::mlir::Value root, ::mlir::ValueRange extra_bindings);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::OperandRange getEntrySuccessorOperands(::mlir::RegionBranchPoint point);
  void getSuccessorRegions(::mlir::RegionBranchPoint point, ::llvm::SmallVectorImpl<::mlir::RegionSuccessor> &regions);
  void getRegionInvocationBounds(::llvm::ArrayRef<::mlir::Attribute> operands, ::llvm::SmallVectorImpl<::mlir::InvocationBounds> &invocationBounds);
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
  /// Allow the dialect prefix to be omitted.
  static StringRef getDefaultDialect() { return "transform"; }
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::SequenceOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::SplitHandleOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SplitHandleOpGenericAdaptorBase {
public:
  struct Properties {
    using fail_on_payload_too_smallTy = ::mlir::BoolAttr;
    fail_on_payload_too_smallTy fail_on_payload_too_small;

    auto getFailOnPayloadTooSmall() {
      auto &propStorage = this->fail_on_payload_too_small;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setFailOnPayloadTooSmall(const ::mlir::BoolAttr &propValue) {
      this->fail_on_payload_too_small = propValue;
    }
    using overflow_resultTy = ::mlir::IntegerAttr;
    overflow_resultTy overflow_result;

    auto getOverflowResult() {
      auto &propStorage = this->overflow_result;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setOverflowResult(const ::mlir::IntegerAttr &propValue) {
      this->overflow_result = propValue;
    }
    using pass_through_empty_handleTy = ::mlir::BoolAttr;
    pass_through_empty_handleTy pass_through_empty_handle;

    auto getPassThroughEmptyHandle() {
      auto &propStorage = this->pass_through_empty_handle;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setPassThroughEmptyHandle(const ::mlir::BoolAttr &propValue) {
      this->pass_through_empty_handle = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.fail_on_payload_too_small == this->fail_on_payload_too_small &&
        rhs.overflow_result == this->overflow_result &&
        rhs.pass_through_empty_handle == this->pass_through_empty_handle &&
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
  SplitHandleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SplitHandleOpGenericAdaptorBase(SplitHandleOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::BoolAttr getPassThroughEmptyHandleAttr();
  bool getPassThroughEmptyHandle();
  ::mlir::BoolAttr getFailOnPayloadTooSmallAttr();
  bool getFailOnPayloadTooSmall();
  ::mlir::IntegerAttr getOverflowResultAttr();
  ::std::optional<uint64_t> getOverflowResult();
};
} // namespace detail
template <typename RangeT>
class SplitHandleOpGenericAdaptor : public detail::SplitHandleOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SplitHandleOpGenericAdaptorBase;
public:
  SplitHandleOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SplitHandleOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SplitHandleOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SplitHandleOp, typename = std::enable_if_t<std::is_same_v<LateInst, SplitHandleOp>>>
  SplitHandleOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getHandle() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SplitHandleOpAdaptor : public SplitHandleOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SplitHandleOpGenericAdaptor::SplitHandleOpGenericAdaptor;
  SplitHandleOpAdaptor(SplitHandleOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SplitHandleOp : public ::mlir::Op<SplitHandleOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::transform::FunctionalStyleTransformOpTrait, ::mlir::transform::TransformOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SplitHandleOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SplitHandleOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("fail_on_payload_too_small"), ::llvm::StringRef("overflow_result"), ::llvm::StringRef("pass_through_empty_handle")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFailOnPayloadTooSmallAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFailOnPayloadTooSmallAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOverflowResultAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOverflowResultAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getPassThroughEmptyHandleAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getPassThroughEmptyHandleAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.split_handle");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getHandle();
  ::mlir::OpOperand &getHandleMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResults();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::BoolAttr getPassThroughEmptyHandleAttr();
  bool getPassThroughEmptyHandle();
  ::mlir::BoolAttr getFailOnPayloadTooSmallAttr();
  bool getFailOnPayloadTooSmall();
  ::mlir::IntegerAttr getOverflowResultAttr();
  ::std::optional<uint64_t> getOverflowResult();
  void setPassThroughEmptyHandleAttr(::mlir::BoolAttr attr);
  void setPassThroughEmptyHandle(bool attrValue);
  void setFailOnPayloadTooSmallAttr(::mlir::BoolAttr attr);
  void setFailOnPayloadTooSmall(bool attrValue);
  void setOverflowResultAttr(::mlir::IntegerAttr attr);
  void setOverflowResult(::std::optional<uint64_t> attrValue);
  ::mlir::Attribute removeOverflowResultAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value handle, int64_t numResultHandles);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value handle, ::mlir::BoolAttr pass_through_empty_handle, ::mlir::BoolAttr fail_on_payload_too_small, /*optional*/::mlir::IntegerAttr overflow_result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value handle, bool pass_through_empty_handle, bool fail_on_payload_too_small, /*optional*/::mlir::IntegerAttr overflow_result);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::DiagnosedSilenceableFailure apply(::mlir::transform::TransformRewriter &rewriter, ::mlir::transform::TransformResults &transformResults, ::mlir::transform::TransformState &state);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::SplitHandleOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::VerifyOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class VerifyOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  VerifyOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  VerifyOpGenericAdaptorBase(VerifyOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class VerifyOpGenericAdaptor : public detail::VerifyOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::VerifyOpGenericAdaptorBase;
public:
  VerifyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  VerifyOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : VerifyOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = VerifyOp, typename = std::enable_if_t<std::is_same_v<LateInst, VerifyOp>>>
  VerifyOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTarget() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class VerifyOpAdaptor : public VerifyOpGenericAdaptor<::mlir::ValueRange> {
public:
  using VerifyOpGenericAdaptor::VerifyOpGenericAdaptor;
  VerifyOpAdaptor(VerifyOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class VerifyOp : public ::mlir::Op<VerifyOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::transform::TransformOpInterface::Trait, ::mlir::transform::TransformEachOpTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::transform::ReportTrackingListenerFailuresOpTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = VerifyOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = VerifyOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.verify");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::transform::TransformHandleTypeInterface> getTarget();
  ::mlir::OpOperand &getTargetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value target);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value target);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  ::mlir::DiagnosedSilenceableFailure applyToOne(
    ::mlir::transform::TransformRewriter &rewriter,
    ::mlir::Operation *target,
    ::mlir::transform::ApplyToEachResultList &results,
    ::mlir::transform::TransformState &state);
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::VerifyOp)

namespace mlir {
namespace transform {

//===----------------------------------------------------------------------===//
// ::mlir::transform::YieldOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class YieldOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  YieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  YieldOpGenericAdaptorBase(YieldOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class YieldOpGenericAdaptor : public detail::YieldOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::YieldOpGenericAdaptorBase;
public:
  YieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  YieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : YieldOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = YieldOp, typename = std::enable_if_t<std::is_same_v<LateInst, YieldOp>>>
  YieldOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return getODSOperands(0);
  }

private:
  RangeT odsOperands;
};
class YieldOpAdaptor : public YieldOpGenericAdaptor<::mlir::ValueRange> {
public:
  using YieldOpGenericAdaptor::YieldOpGenericAdaptor;
  YieldOpAdaptor(YieldOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class YieldOp : public ::mlir::Op<YieldOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsTerminator, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = YieldOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = YieldOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("transform.yield");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getOperands();
  ::mlir::MutableOperandRange getOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace transform
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::transform::YieldOp)


#endif  // GET_OP_CLASSES

