/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: rt_ops.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace xla {
namespace runtime {
class CallOp;
} // namespace runtime
} // namespace xla
namespace xla {
namespace runtime {
class ExportOp;
} // namespace runtime
} // namespace xla
namespace xla {
namespace runtime {
class IsOkOp;
} // namespace runtime
} // namespace xla
namespace xla {
namespace runtime {
class SetErrorOp;
} // namespace runtime
} // namespace xla
namespace xla {
namespace runtime {
class SetOutputOp;
} // namespace runtime
} // namespace xla
namespace xla {
namespace runtime {
class TraceOp;
} // namespace runtime
} // namespace xla
namespace xla {
namespace runtime {
class UnsignedCastOp;
} // namespace runtime
} // namespace xla
namespace xla {
namespace runtime {
class YieldOp;
} // namespace runtime
} // namespace xla
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace xla {
namespace runtime {

//===----------------------------------------------------------------------===//
// ::xla::runtime::CallOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CallOpGenericAdaptorBase {
public:
  struct Properties {
    using calleeTy = ::mlir::StringAttr;
    calleeTy callee;

    auto getCallee() {
      auto &propStorage = this->callee;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setCallee(const ::mlir::StringAttr &propValue) {
      this->callee = propValue;
    }
    using dynamicTy = ::mlir::UnitAttr;
    dynamicTy dynamic;

    auto getDynamic() {
      auto &propStorage = this->dynamic;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setDynamic(const ::mlir::UnitAttr &propValue) {
      this->dynamic = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.callee == this->callee &&
        rhs.dynamic == this->dynamic &&
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
  CallOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  CallOpGenericAdaptorBase(CallOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getCalleeAttr();
  ::llvm::StringRef getCallee();
  ::mlir::UnitAttr getDynamicAttr();
  bool getDynamic();
};
} // namespace detail
template <typename RangeT>
class CallOpGenericAdaptor : public detail::CallOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CallOpGenericAdaptorBase;
public:
  CallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CallOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = CallOp, typename = std::enable_if_t<std::is_same_v<LateInst, CallOp>>>
  CallOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    return (*getODSOperands(0).begin());
  }

  RangeT getArguments() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CallOpAdaptor : public CallOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CallOpGenericAdaptor::CallOpGenericAdaptor;
  CallOpAdaptor(CallOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CallOp : public ::mlir::Op<CallOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::AtLeastNResults<1>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CallOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CallOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("callee"), ::llvm::StringRef("dynamic")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getCalleeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getCalleeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getDynamicAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getDynamicAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rt.call");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::xla::runtime::ExecutionContextType> getCtx();
  ::mlir::Operation::operand_range getArguments();
  ::mlir::OpOperand &getCtxMutable();
  ::mlir::MutableOperandRange getArgumentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::xla::runtime::StatusType> getStatus();
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
  ::mlir::StringAttr getCalleeAttr();
  ::llvm::StringRef getCallee();
  ::mlir::UnitAttr getDynamicAttr();
  bool getDynamic();
  void setCalleeAttr(::mlir::StringAttr attr);
  void setCallee(::llvm::StringRef attrValue);
  void setDynamicAttr(::mlir::UnitAttr attr);
  void setDynamic(bool attrValue);
  ::mlir::Attribute removeDynamicAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type status, ::mlir::TypeRange results, ::mlir::Value ctx, ::mlir::StringAttr callee, /*optional*/::mlir::UnitAttr dynamic, ::mlir::ValueRange arguments);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::StringAttr callee, /*optional*/::mlir::UnitAttr dynamic, ::mlir::ValueRange arguments);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type status, ::mlir::TypeRange results, ::mlir::Value ctx, ::llvm::StringRef callee, /*optional*/bool dynamic, ::mlir::ValueRange arguments);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::llvm::StringRef callee, /*optional*/bool dynamic, ::mlir::ValueRange arguments);
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
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace runtime
} // namespace xla
MLIR_DECLARE_EXPLICIT_TYPE_ID(::xla::runtime::CallOp)

namespace xla {
namespace runtime {

//===----------------------------------------------------------------------===//
// ::xla::runtime::ExportOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ExportOpGenericAdaptorBase {
public:
  struct Properties {
    using function_refTy = ::mlir::FlatSymbolRefAttr;
    function_refTy function_ref;

    auto getFunctionRef() {
      auto &propStorage = this->function_ref;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setFunctionRef(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->function_ref = propValue;
    }
    using ordinalTy = ::mlir::IntegerAttr;
    ordinalTy ordinal;

    auto getOrdinal() {
      auto &propStorage = this->ordinal;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setOrdinal(const ::mlir::IntegerAttr &propValue) {
      this->ordinal = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.function_ref == this->function_ref &&
        rhs.ordinal == this->ordinal &&
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
  ExportOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ExportOpGenericAdaptorBase(ExportOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getFunctionRefAttr();
  ::llvm::StringRef getFunctionRef();
  ::mlir::IntegerAttr getOrdinalAttr();
  ::std::optional< ::llvm::APInt > getOrdinal();
};
} // namespace detail
template <typename RangeT>
class ExportOpGenericAdaptor : public detail::ExportOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ExportOpGenericAdaptorBase;
public:
  ExportOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ExportOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ExportOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ExportOp, typename = std::enable_if_t<std::is_same_v<LateInst, ExportOp>>>
  ExportOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ExportOpAdaptor : public ExportOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ExportOpGenericAdaptor::ExportOpGenericAdaptor;
  ExportOpAdaptor(ExportOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ExportOp : public ::mlir::Op<ExportOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::HasParent<mlir::ModuleOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ExportOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ExportOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("function_ref"), ::llvm::StringRef("ordinal")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getFunctionRefAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getFunctionRefAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOrdinalAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOrdinalAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rt.export");
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
  ::mlir::FlatSymbolRefAttr getFunctionRefAttr();
  ::llvm::StringRef getFunctionRef();
  ::mlir::IntegerAttr getOrdinalAttr();
  ::std::optional< ::llvm::APInt > getOrdinal();
  void setFunctionRefAttr(::mlir::FlatSymbolRefAttr attr);
  void setFunctionRef(::llvm::StringRef attrValue);
  void setOrdinalAttr(::mlir::IntegerAttr attr);
  void setOrdinal(::std::optional<::llvm::APInt> attrValue);
  ::mlir::Attribute removeOrdinalAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::FunctionOpInterface function_ref);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::FunctionOpInterface function_ref, unsigned ordinal);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
  std::optional<unsigned> ordinal();
  mlir::FunctionOpInterface exported(mlir::SymbolTable& sym_table);
};
} // namespace runtime
} // namespace xla
MLIR_DECLARE_EXPLICIT_TYPE_ID(::xla::runtime::ExportOp)

namespace xla {
namespace runtime {

//===----------------------------------------------------------------------===//
// ::xla::runtime::IsOkOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class IsOkOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  IsOkOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  IsOkOpGenericAdaptorBase(IsOkOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class IsOkOpGenericAdaptor : public detail::IsOkOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::IsOkOpGenericAdaptorBase;
public:
  IsOkOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  IsOkOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : IsOkOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = IsOkOp, typename = std::enable_if_t<std::is_same_v<LateInst, IsOkOp>>>
  IsOkOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getStatus() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class IsOkOpAdaptor : public IsOkOpGenericAdaptor<::mlir::ValueRange> {
public:
  using IsOkOpGenericAdaptor::IsOkOpGenericAdaptor;
  IsOkOpAdaptor(IsOkOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class IsOkOp : public ::mlir::Op<IsOkOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = IsOkOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = IsOkOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rt.is_ok");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::xla::runtime::StatusType> getStatus();
  ::mlir::OpOperand &getStatusMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getOk();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type ok, ::mlir::Value status);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value status);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace runtime
} // namespace xla
MLIR_DECLARE_EXPLICIT_TYPE_ID(::xla::runtime::IsOkOp)

namespace xla {
namespace runtime {

//===----------------------------------------------------------------------===//
// ::xla::runtime::SetErrorOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SetErrorOpGenericAdaptorBase {
public:
  struct Properties {
    using errorTy = ::mlir::StringAttr;
    errorTy error;

    auto getError() {
      auto &propStorage = this->error;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setError(const ::mlir::StringAttr &propValue) {
      this->error = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.error == this->error &&
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
  SetErrorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SetErrorOpGenericAdaptorBase(SetErrorOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getErrorAttr();
  ::llvm::StringRef getError();
};
} // namespace detail
template <typename RangeT>
class SetErrorOpGenericAdaptor : public detail::SetErrorOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SetErrorOpGenericAdaptorBase;
public:
  SetErrorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SetErrorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SetErrorOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SetErrorOp, typename = std::enable_if_t<std::is_same_v<LateInst, SetErrorOp>>>
  SetErrorOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SetErrorOpAdaptor : public SetErrorOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SetErrorOpGenericAdaptor::SetErrorOpGenericAdaptor;
  SetErrorOpAdaptor(SetErrorOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SetErrorOp : public ::mlir::Op<SetErrorOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SetErrorOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SetErrorOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("error")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getErrorAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getErrorAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rt.set_error");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::xla::runtime::ExecutionContextType> getCtx();
  ::mlir::OpOperand &getCtxMutable();
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
  ::mlir::StringAttr getErrorAttr();
  ::llvm::StringRef getError();
  void setErrorAttr(::mlir::StringAttr attr);
  void setError(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, ::mlir::StringAttr error);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::StringAttr error);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, ::llvm::StringRef error);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::llvm::StringRef error);
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
} // namespace runtime
} // namespace xla
MLIR_DECLARE_EXPLICIT_TYPE_ID(::xla::runtime::SetErrorOp)

namespace xla {
namespace runtime {

//===----------------------------------------------------------------------===//
// ::xla::runtime::SetOutputOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SetOutputOpGenericAdaptorBase {
public:
  struct Properties {
    using indexTy = ::mlir::IntegerAttr;
    indexTy index;

    auto getIndex() {
      auto &propStorage = this->index;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setIndex(const ::mlir::IntegerAttr &propValue) {
      this->index = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.index == this->index &&
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
  SetOutputOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SetOutputOpGenericAdaptorBase(SetOutputOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getIndexAttr();
  uint64_t getIndex();
};
} // namespace detail
template <typename RangeT>
class SetOutputOpGenericAdaptor : public detail::SetOutputOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SetOutputOpGenericAdaptorBase;
public:
  SetOutputOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SetOutputOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SetOutputOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SetOutputOp, typename = std::enable_if_t<std::is_same_v<LateInst, SetOutputOp>>>
  SetOutputOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    return (*getODSOperands(0).begin());
  }

  ValueT getValue() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SetOutputOpAdaptor : public SetOutputOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SetOutputOpGenericAdaptor::SetOutputOpGenericAdaptor;
  SetOutputOpAdaptor(SetOutputOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SetOutputOp : public ::mlir::Op<SetOutputOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SetOutputOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SetOutputOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("index")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIndexAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIndexAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rt.set_output");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::xla::runtime::ExecutionContextType> getCtx();
  ::mlir::Value getValue();
  ::mlir::OpOperand &getCtxMutable();
  ::mlir::OpOperand &getValueMutable();
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
  ::mlir::IntegerAttr getIndexAttr();
  uint64_t getIndex();
  void setIndexAttr(::mlir::IntegerAttr attr);
  void setIndex(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, ::mlir::IntegerAttr index, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::IntegerAttr index, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, uint64_t index, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, uint64_t index, ::mlir::Value value);
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
} // namespace runtime
} // namespace xla
MLIR_DECLARE_EXPLICIT_TYPE_ID(::xla::runtime::SetOutputOp)

namespace xla {
namespace runtime {

//===----------------------------------------------------------------------===//
// ::xla::runtime::TraceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TraceOpGenericAdaptorBase {
public:
  struct Properties {
    using annotationTy = xla::runtime::TraceAnnotationAttrInterface;
    annotationTy annotation;

    auto getAnnotation() {
      auto &propStorage = this->annotation;
      return ::llvm::cast<xla::runtime::TraceAnnotationAttrInterface>(propStorage);
    }
    void setAnnotation(const xla::runtime::TraceAnnotationAttrInterface &propValue) {
      this->annotation = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.annotation == this->annotation &&
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
  TraceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  TraceOpGenericAdaptorBase(TraceOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  xla::runtime::TraceAnnotationAttrInterface getAnnotationAttr();
  xla::runtime::TraceAnnotationAttrInterface getAnnotation();
  ::mlir::Region &getBody();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class TraceOpGenericAdaptor : public detail::TraceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TraceOpGenericAdaptorBase;
public:
  TraceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TraceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TraceOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = TraceOp, typename = std::enable_if_t<std::is_same_v<LateInst, TraceOp>>>
  TraceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TraceOpAdaptor : public TraceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TraceOpGenericAdaptor::TraceOpGenericAdaptor;
  TraceOpAdaptor(TraceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TraceOp : public ::mlir::Op<TraceOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpTrait::AutomaticAllocationScope, ::mlir::OpAsmOpInterface::Trait, ::mlir::RegionBranchOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TraceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TraceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("annotation")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAnnotationAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAnnotationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rt.trace");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::xla::runtime::ExecutionContextType> getCtx();
  ::mlir::OpOperand &getCtxMutable();
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
  xla::runtime::TraceAnnotationAttrInterface getAnnotationAttr();
  xla::runtime::TraceAnnotationAttrInterface getAnnotation();
  void setAnnotationAttr(xla::runtime::TraceAnnotationAttrInterface attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, mlir::TypeRange results, mlir::Value exec_ctx, TraceAnnotationAttrInterface annotation, llvm::function_ref<void(mlir::OpBuilder&, mlir::Location)> bodyBuilder = nullptr);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getSuccessorRegions(::mlir::RegionBranchPoint point, ::llvm::SmallVectorImpl<::mlir::RegionSuccessor> &regions);
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
  // OpAsmOpInterface: Allow the dialect prefix to be omitted.
  static llvm::StringRef getDefaultDialect() { return "rt"; }
};
} // namespace runtime
} // namespace xla
MLIR_DECLARE_EXPLICIT_TYPE_ID(::xla::runtime::TraceOp)

namespace xla {
namespace runtime {

//===----------------------------------------------------------------------===//
// ::xla::runtime::UnsignedCastOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UnsignedCastOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  UnsignedCastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  UnsignedCastOpGenericAdaptorBase(UnsignedCastOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class UnsignedCastOpGenericAdaptor : public detail::UnsignedCastOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UnsignedCastOpGenericAdaptorBase;
public:
  UnsignedCastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  UnsignedCastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : UnsignedCastOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = UnsignedCastOp, typename = std::enable_if_t<std::is_same_v<LateInst, UnsignedCastOp>>>
  UnsignedCastOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class UnsignedCastOpAdaptor : public UnsignedCastOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UnsignedCastOpGenericAdaptor::UnsignedCastOpGenericAdaptor;
  UnsignedCastOpAdaptor(UnsignedCastOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UnsignedCastOp : public ::mlir::Op<UnsignedCastOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UnsignedCastOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UnsignedCastOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("rt.unsigned_cast");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getValue();
  ::mlir::OpOperand &getValueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace runtime
} // namespace xla
MLIR_DECLARE_EXPLICIT_TYPE_ID(::xla::runtime::UnsignedCastOp)

namespace xla {
namespace runtime {

//===----------------------------------------------------------------------===//
// ::xla::runtime::YieldOp declarations
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

  RangeT getArguments() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
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
class YieldOp : public ::mlir::Op<YieldOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::HasParent<TraceOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::IsTerminator, ::mlir::RegionBranchTerminatorOpInterface::Trait> {
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
    return ::llvm::StringLiteral("rt.yield");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArguments();
  ::mlir::MutableOperandRange getArgumentsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange arguments);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::MutableOperandRange getMutableSuccessorOperands(::mlir::RegionBranchPoint point);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace runtime
} // namespace xla
MLIR_DECLARE_EXPLICIT_TYPE_ID(::xla::runtime::YieldOp)


#endif  // GET_OP_CLASSES

