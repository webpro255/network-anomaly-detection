/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ControlFlowOps.td                                                    *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace cf {
class AssertOp;
} // namespace cf
} // namespace mlir
namespace mlir {
namespace cf {
class BranchOp;
} // namespace cf
} // namespace mlir
namespace mlir {
namespace cf {
class CondBranchOp;
} // namespace cf
} // namespace mlir
namespace mlir {
namespace cf {
class SwitchOp;
} // namespace cf
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace cf {

//===----------------------------------------------------------------------===//
// ::mlir::cf::AssertOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AssertOpGenericAdaptorBase {
public:
  struct Properties {
    using msgTy = ::mlir::StringAttr;
    msgTy msg;

    auto getMsg() {
      auto &propStorage = this->msg;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setMsg(const ::mlir::StringAttr &propValue) {
      this->msg = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.msg == this->msg &&
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
  AssertOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  AssertOpGenericAdaptorBase(AssertOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getMsgAttr();
  ::llvm::StringRef getMsg();
};
} // namespace detail
template <typename RangeT>
class AssertOpGenericAdaptor : public detail::AssertOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AssertOpGenericAdaptorBase;
public:
  AssertOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AssertOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AssertOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = AssertOp, typename = std::enable_if_t<std::is_same_v<LateInst, AssertOp>>>
  AssertOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getArg() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AssertOpAdaptor : public AssertOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AssertOpGenericAdaptor::AssertOpGenericAdaptor;
  AssertOpAdaptor(AssertOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AssertOp : public ::mlir::Op<AssertOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AssertOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AssertOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("msg")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMsgAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMsgAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("cf.assert");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getArg();
  ::mlir::OpOperand &getArgMutable();
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
  ::mlir::StringAttr getMsgAttr();
  ::llvm::StringRef getMsg();
  void setMsgAttr(::mlir::StringAttr attr);
  void setMsg(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg, ::mlir::StringAttr msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg, ::mlir::StringAttr msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg, ::llvm::StringRef msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg, ::llvm::StringRef msg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult canonicalize(AssertOp op, ::mlir::PatternRewriter &rewriter);
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
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
} // namespace cf
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::cf::AssertOp)

namespace mlir {
namespace cf {

//===----------------------------------------------------------------------===//
// ::mlir::cf::BranchOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BranchOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BranchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BranchOpGenericAdaptorBase(BranchOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class BranchOpGenericAdaptor : public detail::BranchOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BranchOpGenericAdaptorBase;
public:
  BranchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BranchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BranchOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BranchOp, typename = std::enable_if_t<std::is_same_v<LateInst, BranchOp>>>
  BranchOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getDestOperands() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BranchOpAdaptor : public BranchOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BranchOpGenericAdaptor::BranchOpGenericAdaptor;
  BranchOpAdaptor(BranchOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BranchOp : public ::mlir::Op<BranchOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::OneSuccessor, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BranchOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BranchOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BranchOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("cf.br");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getDestOperands();
  ::mlir::MutableOperandRange getDestOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Block *getDest();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Block *dest, ValueRange destOperands = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange destOperands, ::mlir::Block *dest);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange destOperands, ::mlir::Block *dest);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult canonicalize(BranchOp op, ::mlir::PatternRewriter &rewriter);
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::SuccessorOperands getSuccessorOperands(unsigned index);
  ::mlir::Block *getSuccessorForOperands(::llvm::ArrayRef<::mlir::Attribute> operands);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  void setDest(Block *block);

  /// Erase the operand at 'index' from the operand list.
  void eraseOperand(unsigned index);
};
} // namespace cf
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::cf::BranchOp)

namespace mlir {
namespace cf {

//===----------------------------------------------------------------------===//
// ::mlir::cf::CondBranchOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CondBranchOpGenericAdaptorBase {
public:
  struct Properties {
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
  CondBranchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  CondBranchOpGenericAdaptorBase(CondBranchOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CondBranchOpGenericAdaptor : public detail::CondBranchOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CondBranchOpGenericAdaptorBase;
public:
  CondBranchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CondBranchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CondBranchOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = CondBranchOp, typename = std::enable_if_t<std::is_same_v<LateInst, CondBranchOp>>>
  CondBranchOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCondition() {
    return (*getODSOperands(0).begin());
  }

  RangeT getTrueDestOperands() {
    return getODSOperands(1);
  }

  RangeT getFalseDestOperands() {
    return getODSOperands(2);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CondBranchOpAdaptor : public CondBranchOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CondBranchOpGenericAdaptor::CondBranchOpGenericAdaptor;
  CondBranchOpAdaptor(CondBranchOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CondBranchOp : public ::mlir::Op<CondBranchOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::NSuccessors<2>::Impl, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::BranchOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CondBranchOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CondBranchOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("cf.cond_br");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getCondition();
  ::mlir::Operation::operand_range getTrueDestOperands();
  ::mlir::Operation::operand_range getFalseDestOperands();
  ::mlir::OpOperand &getConditionMutable();
  ::mlir::MutableOperandRange getTrueDestOperandsMutable();
  ::mlir::MutableOperandRange getFalseDestOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Block *getTrueDest();
  ::mlir::Block *getFalseDest();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value condition, Block *trueDest, ValueRange trueOperands, Block *falseDest, ValueRange falseOperands);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value condition, Block *trueDest, Block *falseDest, ValueRange falseOperands = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value condition, ::mlir::ValueRange trueDestOperands, ::mlir::ValueRange falseDestOperands, ::mlir::Block *trueDest, ::mlir::Block *falseDest);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value condition, ::mlir::ValueRange trueDestOperands, ::mlir::ValueRange falseDestOperands, ::mlir::Block *trueDest, ::mlir::Block *falseDest);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::SuccessorOperands getSuccessorOperands(unsigned index);
  ::mlir::Block *getSuccessorForOperands(::llvm::ArrayRef<::mlir::Attribute> operands);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    return {};
  }

public:
    // These are the indices into the dests list.
    enum { trueIndex = 0, falseIndex = 1 };

    // Accessors for operands to the 'true' destination.
    Value getTrueOperand(unsigned idx) {
      assert(idx < getNumTrueOperands());
      return getOperand(getTrueDestOperandIndex() + idx);
    }

    void setTrueOperand(unsigned idx, Value value) {
      assert(idx < getNumTrueOperands());
      setOperand(getTrueDestOperandIndex() + idx, value);
    }

    unsigned getNumTrueOperands()  { return getTrueOperands().size(); }

    /// Erase the operand at 'index' from the true operand list.
    void eraseTrueOperand(unsigned index)  {
      getTrueDestOperandsMutable().erase(index);
    }

    // Accessors for operands to the 'false' destination.
    Value getFalseOperand(unsigned idx) {
      assert(idx < getNumFalseOperands());
      return getOperand(getFalseDestOperandIndex() + idx);
    }
    void setFalseOperand(unsigned idx, Value value) {
      assert(idx < getNumFalseOperands());
      setOperand(getFalseDestOperandIndex() + idx, value);
    }

    operand_range getTrueOperands() { return getTrueDestOperands(); }
    operand_range getFalseOperands() { return getFalseDestOperands(); }

    unsigned getNumFalseOperands() { return getFalseOperands().size(); }

    /// Erase the operand at 'index' from the false operand list.
    void eraseFalseOperand(unsigned index) {
      getFalseDestOperandsMutable().erase(index);
    }

  private:
    /// Get the index of the first true destination operand.
    unsigned getTrueDestOperandIndex() { return 1; }

    /// Get the index of the first false destination operand.
    unsigned getFalseDestOperandIndex() {
      return getTrueDestOperandIndex() + getNumTrueOperands();
    }
};
} // namespace cf
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::cf::CondBranchOp)

namespace mlir {
namespace cf {

//===----------------------------------------------------------------------===//
// ::mlir::cf::SwitchOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SwitchOpGenericAdaptorBase {
public:
  struct Properties {
    using case_operand_segmentsTy = ::mlir::DenseI32ArrayAttr;
    case_operand_segmentsTy case_operand_segments;

    auto getCaseOperandSegments() {
      auto &propStorage = this->case_operand_segments;
      return ::llvm::cast<::mlir::DenseI32ArrayAttr>(propStorage);
    }
    void setCaseOperandSegments(const ::mlir::DenseI32ArrayAttr &propValue) {
      this->case_operand_segments = propValue;
    }
    using case_valuesTy = ::mlir::DenseIntElementsAttr;
    case_valuesTy case_values;

    auto getCaseValues() {
      auto &propStorage = this->case_values;
      return ::llvm::dyn_cast_or_null<::mlir::DenseIntElementsAttr>(propStorage);
    }
    void setCaseValues(const ::mlir::DenseIntElementsAttr &propValue) {
      this->case_values = propValue;
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
        rhs.case_operand_segments == this->case_operand_segments &&
        rhs.case_values == this->case_values &&
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
  SwitchOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SwitchOpGenericAdaptorBase(SwitchOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseIntElementsAttr getCaseValuesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getCaseValues();
  ::mlir::DenseI32ArrayAttr getCaseOperandSegmentsAttr();
  ::llvm::ArrayRef<int32_t> getCaseOperandSegments();
};
} // namespace detail
template <typename RangeT>
class SwitchOpGenericAdaptor : public detail::SwitchOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SwitchOpGenericAdaptorBase;
public:
  SwitchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SwitchOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SwitchOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SwitchOp, typename = std::enable_if_t<std::is_same_v<LateInst, SwitchOp>>>
  SwitchOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getFlag() {
    return (*getODSOperands(0).begin());
  }

  RangeT getDefaultOperands() {
    return getODSOperands(1);
  }

  ::llvm::SmallVector<RangeT> getCaseOperands() {
    auto tblgenTmpOperands = getODSOperands(2);
    auto sizes = getCaseOperandSegments();

    ::llvm::SmallVector<RangeT> tblgenTmpOperandGroups;
    for (int i = 0, e = sizes.size(); i < e; ++i) {
      tblgenTmpOperandGroups.push_back(tblgenTmpOperands.take_front(sizes[i]));
      tblgenTmpOperands = tblgenTmpOperands.drop_front(sizes[i]);
    }
    return tblgenTmpOperandGroups;
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SwitchOpAdaptor : public SwitchOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SwitchOpGenericAdaptor::SwitchOpGenericAdaptor;
  SwitchOpAdaptor(SwitchOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SwitchOp : public ::mlir::Op<SwitchOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::AtLeastNSuccessors<1>::Impl, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::BranchOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SwitchOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SwitchOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("case_operand_segments"), ::llvm::StringRef("case_values"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getCaseOperandSegmentsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getCaseOperandSegmentsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getCaseValuesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getCaseValuesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("cf.switch");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getFlag();
  ::mlir::Operation::operand_range getDefaultOperands();
  ::mlir::OperandRangeRange getCaseOperands();
  ::mlir::OpOperand &getFlagMutable();
  ::mlir::MutableOperandRange getDefaultOperandsMutable();
  ::mlir::MutableOperandRangeRange getCaseOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Block *getDefaultDestination();
  ::mlir::SuccessorRange getCaseDestinations();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseIntElementsAttr getCaseValuesAttr();
  ::std::optional< ::mlir::DenseIntElementsAttr > getCaseValues();
  ::mlir::DenseI32ArrayAttr getCaseOperandSegmentsAttr();
  ::llvm::ArrayRef<int32_t> getCaseOperandSegments();
  void setCaseValuesAttr(::mlir::DenseIntElementsAttr attr);
  void setCaseOperandSegmentsAttr(::mlir::DenseI32ArrayAttr attr);
  void setCaseOperandSegments(::llvm::ArrayRef<int32_t> attrValue);
  ::mlir::Attribute removeCaseValuesAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value flag, Block *defaultDestination, ValueRange defaultOperands, ArrayRef<APInt> caseValues = {}, BlockRange caseDestinations = {}, ArrayRef<ValueRange> caseOperands = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value flag, Block *defaultDestination, ValueRange defaultOperands, ArrayRef<int32_t> caseValues = {}, BlockRange caseDestinations = {}, ArrayRef<ValueRange> caseOperands = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value flag, Block *defaultDestination, ValueRange defaultOperands, DenseIntElementsAttr caseValues = {}, BlockRange caseDestinations = {}, ArrayRef<ValueRange> caseOperands = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value flag, ::mlir::ValueRange defaultOperands, ::llvm::ArrayRef<::mlir::ValueRange> caseOperands, /*optional*/::mlir::DenseIntElementsAttr case_values, ::mlir::Block *defaultDestination, ::mlir::BlockRange caseDestinations);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value flag, ::mlir::ValueRange defaultOperands, ::llvm::ArrayRef<::mlir::ValueRange> caseOperands, /*optional*/::mlir::DenseIntElementsAttr case_values, ::mlir::Block *defaultDestination, ::mlir::BlockRange caseDestinations);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::SuccessorOperands getSuccessorOperands(unsigned index);
  ::mlir::Block *getSuccessorForOperands(::llvm::ArrayRef<::mlir::Attribute> operands);
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
  /// Return the operands for the case destination block at the given index.
  OperandRange getCaseOperands(unsigned index) {
    return getCaseOperands()[index];
  }

  /// Return a mutable range of operands for the case destination block at the
  /// given index.
  MutableOperandRange getCaseOperandsMutable(unsigned index) {
    return getCaseOperandsMutable()[index];
  }
};
} // namespace cf
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::cf::SwitchOp)


#endif  // GET_OP_CLASSES

