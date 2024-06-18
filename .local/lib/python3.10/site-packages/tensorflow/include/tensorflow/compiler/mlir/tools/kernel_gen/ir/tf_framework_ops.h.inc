/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: tf_framework_ops.td                                                  *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class IsValidMemRefOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class JITCompileFromStrOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class JITCompileOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class JITCompileYieldOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class JITExecuteOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class NullContextOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class NullMemRefOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class ReportErrorOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class TFAllocOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class TFAssertOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class TFDeallocOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::IsValidMemRefOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class IsValidMemRefOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  IsValidMemRefOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  IsValidMemRefOpGenericAdaptorBase(IsValidMemRefOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class IsValidMemRefOpGenericAdaptor : public detail::IsValidMemRefOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::IsValidMemRefOpGenericAdaptorBase;
public:
  IsValidMemRefOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  IsValidMemRefOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : IsValidMemRefOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = IsValidMemRefOp, typename = std::enable_if_t<std::is_same_v<LateInst, IsValidMemRefOp>>>
  IsValidMemRefOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class IsValidMemRefOpAdaptor : public IsValidMemRefOpGenericAdaptor<::mlir::ValueRange> {
public:
  using IsValidMemRefOpGenericAdaptor::IsValidMemRefOpGenericAdaptor;
  IsValidMemRefOpAdaptor(IsValidMemRefOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class IsValidMemRefOp : public ::mlir::Op<IsValidMemRefOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = IsValidMemRefOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = IsValidMemRefOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.is_valid_memref");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getArg();
  ::mlir::OpOperand &getArgMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::IsValidMemRefOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::JITCompileFromStrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class JITCompileFromStrOpGenericAdaptorBase {
public:
  struct Properties {
    using codeTy = ::mlir::StringAttr;
    codeTy code;

    auto getCode() {
      auto &propStorage = this->code;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setCode(const ::mlir::StringAttr &propValue) {
      this->code = propValue;
    }
    using cpuCodegenTy = ::mlir::BoolAttr;
    cpuCodegenTy cpuCodegen;

    auto getCpuCodegen() {
      auto &propStorage = this->cpuCodegen;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setCpuCodegen(const ::mlir::BoolAttr &propValue) {
      this->cpuCodegen = propValue;
    }
    using enableFtzTy = ::mlir::BoolAttr;
    enableFtzTy enableFtz;

    auto getEnableFtz() {
      auto &propStorage = this->enableFtz;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setEnableFtz(const ::mlir::BoolAttr &propValue) {
      this->enableFtz = propValue;
    }
    using index64BitTy = ::mlir::BoolAttr;
    index64BitTy index64Bit;

    auto getIndex64Bit() {
      auto &propStorage = this->index64Bit;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setIndex64Bit(const ::mlir::BoolAttr &propValue) {
      this->index64Bit = propValue;
    }
    using maxSupportedRankTy = ::mlir::IntegerAttr;
    maxSupportedRankTy maxSupportedRank;

    auto getMaxSupportedRank() {
      auto &propStorage = this->maxSupportedRank;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setMaxSupportedRank(const ::mlir::IntegerAttr &propValue) {
      this->maxSupportedRank = propValue;
    }
    using tileSizesTy = ::mlir::ArrayAttr;
    tileSizesTy tileSizes;

    auto getTileSizes() {
      auto &propStorage = this->tileSizes;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setTileSizes(const ::mlir::ArrayAttr &propValue) {
      this->tileSizes = propValue;
    }
    using unrollFactorsTy = ::mlir::ArrayAttr;
    unrollFactorsTy unrollFactors;

    auto getUnrollFactors() {
      auto &propStorage = this->unrollFactors;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setUnrollFactors(const ::mlir::ArrayAttr &propValue) {
      this->unrollFactors = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.code == this->code &&
        rhs.cpuCodegen == this->cpuCodegen &&
        rhs.enableFtz == this->enableFtz &&
        rhs.index64Bit == this->index64Bit &&
        rhs.maxSupportedRank == this->maxSupportedRank &&
        rhs.tileSizes == this->tileSizes &&
        rhs.unrollFactors == this->unrollFactors &&
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
  JITCompileFromStrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  JITCompileFromStrOpGenericAdaptorBase(JITCompileFromStrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getCodeAttr();
  ::llvm::StringRef getCode();
  ::mlir::ArrayAttr getTileSizesAttr();
  ::mlir::ArrayAttr getTileSizes();
  ::mlir::ArrayAttr getUnrollFactorsAttr();
  ::mlir::ArrayAttr getUnrollFactors();
  ::mlir::IntegerAttr getMaxSupportedRankAttr();
  uint64_t getMaxSupportedRank();
  ::mlir::BoolAttr getEnableFtzAttr();
  bool getEnableFtz();
  ::mlir::BoolAttr getIndex64BitAttr();
  bool getIndex64Bit();
  ::mlir::BoolAttr getCpuCodegenAttr();
  bool getCpuCodegen();
};
} // namespace detail
template <typename RangeT>
class JITCompileFromStrOpGenericAdaptor : public detail::JITCompileFromStrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::JITCompileFromStrOpGenericAdaptorBase;
public:
  JITCompileFromStrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  JITCompileFromStrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : JITCompileFromStrOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = JITCompileFromStrOp, typename = std::enable_if_t<std::is_same_v<LateInst, JITCompileFromStrOp>>>
  JITCompileFromStrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class JITCompileFromStrOpAdaptor : public JITCompileFromStrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using JITCompileFromStrOpGenericAdaptor::JITCompileFromStrOpGenericAdaptor;
  JITCompileFromStrOpAdaptor(JITCompileFromStrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class JITCompileFromStrOp : public ::mlir::Op<JITCompileFromStrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = JITCompileFromStrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = JITCompileFromStrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("code"), ::llvm::StringRef("cpuCodegen"), ::llvm::StringRef("enableFtz"), ::llvm::StringRef("index64Bit"), ::llvm::StringRef("maxSupportedRank"), ::llvm::StringRef("tileSizes"), ::llvm::StringRef("unrollFactors")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getCodeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getCodeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getCpuCodegenAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getCpuCodegenAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getEnableFtzAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getEnableFtzAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getIndex64BitAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getIndex64BitAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getMaxSupportedRankAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getMaxSupportedRankAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getTileSizesAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getUnrollFactorsAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getUnrollFactorsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.jit_compile_from_str");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
  ::mlir::MutableOperandRange getCtxMutable();
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
  ::mlir::StringAttr getCodeAttr();
  ::llvm::StringRef getCode();
  ::mlir::ArrayAttr getTileSizesAttr();
  ::mlir::ArrayAttr getTileSizes();
  ::mlir::ArrayAttr getUnrollFactorsAttr();
  ::mlir::ArrayAttr getUnrollFactors();
  ::mlir::IntegerAttr getMaxSupportedRankAttr();
  uint64_t getMaxSupportedRank();
  ::mlir::BoolAttr getEnableFtzAttr();
  bool getEnableFtz();
  ::mlir::BoolAttr getIndex64BitAttr();
  bool getIndex64Bit();
  ::mlir::BoolAttr getCpuCodegenAttr();
  bool getCpuCodegen();
  void setCodeAttr(::mlir::StringAttr attr);
  void setCode(::llvm::StringRef attrValue);
  void setTileSizesAttr(::mlir::ArrayAttr attr);
  void setUnrollFactorsAttr(::mlir::ArrayAttr attr);
  void setMaxSupportedRankAttr(::mlir::IntegerAttr attr);
  void setMaxSupportedRank(uint64_t attrValue);
  void setEnableFtzAttr(::mlir::BoolAttr attr);
  void setEnableFtz(bool attrValue);
  void setIndex64BitAttr(::mlir::BoolAttr attr);
  void setIndex64Bit(bool attrValue);
  void setCpuCodegenAttr(::mlir::BoolAttr attr);
  void setCpuCodegen(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, /*optional*/::mlir::Value ctx, ::mlir::StringAttr code, ::mlir::ArrayAttr tileSizes, ::mlir::ArrayAttr unrollFactors, ::mlir::IntegerAttr maxSupportedRank, ::mlir::BoolAttr enableFtz, ::mlir::BoolAttr index64Bit, ::mlir::BoolAttr cpuCodegen);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ctx, ::mlir::StringAttr code, ::mlir::ArrayAttr tileSizes, ::mlir::ArrayAttr unrollFactors, ::mlir::IntegerAttr maxSupportedRank, ::mlir::BoolAttr enableFtz, ::mlir::BoolAttr index64Bit, ::mlir::BoolAttr cpuCodegen);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, /*optional*/::mlir::Value ctx, ::llvm::StringRef code, ::mlir::ArrayAttr tileSizes, ::mlir::ArrayAttr unrollFactors, uint64_t maxSupportedRank, bool enableFtz, bool index64Bit, bool cpuCodegen);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ctx, ::llvm::StringRef code, ::mlir::ArrayAttr tileSizes, ::mlir::ArrayAttr unrollFactors, uint64_t maxSupportedRank, bool enableFtz, bool index64Bit, bool cpuCodegen);
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
    assert(index < 7 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  static constexpr StringRef kJITEntryFunctionName = "main";
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::JITCompileFromStrOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::JITCompileOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class JITCompileOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  JITCompileOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  JITCompileOpGenericAdaptorBase(JITCompileOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getBody();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class JITCompileOpGenericAdaptor : public detail::JITCompileOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::JITCompileOpGenericAdaptorBase;
public:
  JITCompileOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  JITCompileOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : JITCompileOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = JITCompileOp, typename = std::enable_if_t<std::is_same_v<LateInst, JITCompileOp>>>
  JITCompileOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class JITCompileOpAdaptor : public JITCompileOpGenericAdaptor<::mlir::ValueRange> {
public:
  using JITCompileOpGenericAdaptor::JITCompileOpGenericAdaptor;
  JITCompileOpAdaptor(JITCompileOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class JITCompileOp : public ::mlir::Op<JITCompileOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = JITCompileOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = JITCompileOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.jit_compile");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
  ::mlir::MutableOperandRange getCtxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  ::mlir::Region &getBody();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, /*optional*/::mlir::Value ctx);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ctx);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::JITCompileOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::JITCompileYieldOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class JITCompileYieldOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  JITCompileYieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  JITCompileYieldOpGenericAdaptorBase(JITCompileYieldOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class JITCompileYieldOpGenericAdaptor : public detail::JITCompileYieldOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::JITCompileYieldOpGenericAdaptorBase;
public:
  JITCompileYieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  JITCompileYieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : JITCompileYieldOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = JITCompileYieldOp, typename = std::enable_if_t<std::is_same_v<LateInst, JITCompileYieldOp>>>
  JITCompileYieldOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getResult() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class JITCompileYieldOpAdaptor : public JITCompileYieldOpGenericAdaptor<::mlir::ValueRange> {
public:
  using JITCompileYieldOpGenericAdaptor::JITCompileYieldOpGenericAdaptor;
  JITCompileYieldOpAdaptor(JITCompileYieldOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class JITCompileYieldOp : public ::mlir::Op<JITCompileYieldOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::HasParent<JITCompileOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::RegionBranchTerminatorOpInterface::Trait, ::mlir::OpTrait::ReturnLike, ::mlir::OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = JITCompileYieldOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = JITCompileYieldOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.jit_compile_yield");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getResult();
  ::mlir::OpOperand &getResultMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value result);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::MutableOperandRange getMutableSuccessorOperands(::mlir::RegionBranchPoint point);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::JITCompileYieldOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::JITExecuteOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class JITExecuteOpGenericAdaptorBase {
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
  JITExecuteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  JITExecuteOpGenericAdaptorBase(JITExecuteOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class JITExecuteOpGenericAdaptor : public detail::JITExecuteOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::JITExecuteOpGenericAdaptorBase;
public:
  JITExecuteOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  JITExecuteOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : JITExecuteOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = JITExecuteOp, typename = std::enable_if_t<std::is_same_v<LateInst, JITExecuteOp>>>
  JITExecuteOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getCallable() {
    return (*getODSOperands(1).begin());
  }

  RangeT getInputs() {
    return getODSOperands(2);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class JITExecuteOpAdaptor : public JITExecuteOpGenericAdaptor<::mlir::ValueRange> {
public:
  using JITExecuteOpGenericAdaptor::JITExecuteOpGenericAdaptor;
  JITExecuteOpAdaptor(JITExecuteOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class JITExecuteOp : public ::mlir::Op<JITExecuteOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::bufferization::AllocationOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = JITExecuteOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = JITExecuteOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("tf_framework.jit_execute");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
  ::mlir::Value getCallable();
  ::mlir::Operation::operand_range getInputs();
  ::mlir::MutableOperandRange getCtxMutable();
  ::mlir::OpOperand &getCallableMutable();
  ::mlir::MutableOperandRange getInputsMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, /*optional*/::mlir::Value ctx, ::mlir::Value callable, ::mlir::ValueRange inputs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ctx, ::mlir::Value callable, ::mlir::ValueRange inputs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::std::optional<::mlir::Operation*> buildDealloc(::mlir::OpBuilder&builder, ::mlir::Value alloc);
  static ::std::optional<::mlir::Value> buildClone(::mlir::OpBuilder&builder, ::mlir::Value alloc);
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
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::JITExecuteOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::NullContextOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class NullContextOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  NullContextOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  NullContextOpGenericAdaptorBase(NullContextOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class NullContextOpGenericAdaptor : public detail::NullContextOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::NullContextOpGenericAdaptorBase;
public:
  NullContextOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  NullContextOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : NullContextOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = NullContextOp, typename = std::enable_if_t<std::is_same_v<LateInst, NullContextOp>>>
  NullContextOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class NullContextOpAdaptor : public NullContextOpGenericAdaptor<::mlir::ValueRange> {
public:
  using NullContextOpGenericAdaptor::NullContextOpGenericAdaptor;
  NullContextOpAdaptor(NullContextOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class NullContextOp : public ::mlir::Op<NullContextOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = NullContextOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = NullContextOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.null_context");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::NullContextOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::NullMemRefOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class NullMemRefOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  NullMemRefOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  NullMemRefOpGenericAdaptorBase(NullMemRefOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class NullMemRefOpGenericAdaptor : public detail::NullMemRefOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::NullMemRefOpGenericAdaptorBase;
public:
  NullMemRefOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  NullMemRefOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : NullMemRefOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = NullMemRefOp, typename = std::enable_if_t<std::is_same_v<LateInst, NullMemRefOp>>>
  NullMemRefOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class NullMemRefOpAdaptor : public NullMemRefOpGenericAdaptor<::mlir::ValueRange> {
public:
  using NullMemRefOpGenericAdaptor::NullMemRefOpGenericAdaptor;
  NullMemRefOpAdaptor(NullMemRefOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class NullMemRefOp : public ::mlir::Op<NullMemRefOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::BaseMemRefType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = NullMemRefOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = NullMemRefOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.null_memref");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::BaseMemRefType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::NullMemRefOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::ReportErrorOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReportErrorOpGenericAdaptorBase {
public:
  struct Properties {
    using error_codeTy = ::mlir::kernel_gen::tf_framework::ErrorCodeAttr;
    error_codeTy error_code;

    auto getErrorCode() {
      auto &propStorage = this->error_code;
      return ::llvm::cast<::mlir::kernel_gen::tf_framework::ErrorCodeAttr>(propStorage);
    }
    void setErrorCode(const ::mlir::kernel_gen::tf_framework::ErrorCodeAttr &propValue) {
      this->error_code = propValue;
    }
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
        rhs.error_code == this->error_code &&
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
  ReportErrorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ReportErrorOpGenericAdaptorBase(ReportErrorOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::kernel_gen::tf_framework::ErrorCodeAttr getErrorCodeAttr();
  ::mlir::kernel_gen::tf_framework::ErrorCode getErrorCode();
  ::mlir::StringAttr getMsgAttr();
  ::llvm::StringRef getMsg();
};
} // namespace detail
template <typename RangeT>
class ReportErrorOpGenericAdaptor : public detail::ReportErrorOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReportErrorOpGenericAdaptorBase;
public:
  ReportErrorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReportErrorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReportErrorOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ReportErrorOp, typename = std::enable_if_t<std::is_same_v<LateInst, ReportErrorOp>>>
  ReportErrorOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ReportErrorOpAdaptor : public ReportErrorOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReportErrorOpGenericAdaptor::ReportErrorOpGenericAdaptor;
  ReportErrorOpAdaptor(ReportErrorOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReportErrorOp : public ::mlir::Op<ReportErrorOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReportErrorOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReportErrorOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("error_code"), ::llvm::StringRef("msg")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getErrorCodeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getErrorCodeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMsgAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMsgAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.report_error");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
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
  ::mlir::kernel_gen::tf_framework::ErrorCodeAttr getErrorCodeAttr();
  ::mlir::kernel_gen::tf_framework::ErrorCode getErrorCode();
  ::mlir::StringAttr getMsgAttr();
  ::llvm::StringRef getMsg();
  void setErrorCodeAttr(::mlir::kernel_gen::tf_framework::ErrorCodeAttr attr);
  void setErrorCode(::mlir::kernel_gen::tf_framework::ErrorCode attrValue);
  void setMsgAttr(::mlir::StringAttr attr);
  void setMsg(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, ::mlir::kernel_gen::tf_framework::ErrorCodeAttr error_code, ::mlir::StringAttr msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::kernel_gen::tf_framework::ErrorCodeAttr error_code, ::mlir::StringAttr msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, ::mlir::kernel_gen::tf_framework::ErrorCode error_code, ::llvm::StringRef msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::kernel_gen::tf_framework::ErrorCode error_code, ::llvm::StringRef msg);
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
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::ReportErrorOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::TFAllocOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TFAllocOpGenericAdaptorBase {
public:
  struct Properties {
    using input_indicesTy = ::mlir::ArrayAttr;
    input_indicesTy input_indices;

    auto getInputIndices() {
      auto &propStorage = this->input_indices;
      return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(propStorage);
    }
    void setInputIndices(const ::mlir::ArrayAttr &propValue) {
      this->input_indices = propValue;
    }
    using output_indexTy = ::mlir::IntegerAttr;
    output_indexTy output_index;

    auto getOutputIndex() {
      auto &propStorage = this->output_index;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setOutputIndex(const ::mlir::IntegerAttr &propValue) {
      this->output_index = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.input_indices == this->input_indices &&
        rhs.output_index == this->output_index &&
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
  TFAllocOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  TFAllocOpGenericAdaptorBase(TFAllocOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getInputIndicesAttr();
  ::std::optional< ::mlir::ArrayAttr > getInputIndices();
  ::mlir::IntegerAttr getOutputIndexAttr();
  ::std::optional<uint32_t> getOutputIndex();
};
} // namespace detail
template <typename RangeT>
class TFAllocOpGenericAdaptor : public detail::TFAllocOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TFAllocOpGenericAdaptorBase;
public:
  TFAllocOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TFAllocOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TFAllocOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = TFAllocOp, typename = std::enable_if_t<std::is_same_v<LateInst, TFAllocOp>>>
  TFAllocOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getDynSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TFAllocOpAdaptor : public TFAllocOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TFAllocOpGenericAdaptor::TFAllocOpGenericAdaptor;
  TFAllocOpAdaptor(TFAllocOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TFAllocOp : public ::mlir::Op<TFAllocOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::MemRefType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::bufferization::AllocationOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TFAllocOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TFAllocOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("input_indices"), ::llvm::StringRef("output_index")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInputIndicesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInputIndicesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOutputIndexAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOutputIndexAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.alloc");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
  ::mlir::Operation::operand_range getDynSizes();
  ::mlir::OpOperand &getCtxMutable();
  ::mlir::MutableOperandRange getDynSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::ArrayAttr getInputIndicesAttr();
  ::std::optional< ::mlir::ArrayAttr > getInputIndices();
  ::mlir::IntegerAttr getOutputIndexAttr();
  ::std::optional<uint32_t> getOutputIndex();
  void setInputIndicesAttr(::mlir::ArrayAttr attr);
  void setOutputIndexAttr(::mlir::IntegerAttr attr);
  void setOutputIndex(::std::optional<uint32_t> attrValue);
  ::mlir::Attribute removeInputIndicesAttr();
  ::mlir::Attribute removeOutputIndexAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, MemRefType memref_type, Value ctx);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, MemRefType memref_type, Value ctx, ValueRange dyn_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value ctx, ::mlir::ValueRange dyn_sizes, /*optional*/::mlir::ArrayAttr input_indices, /*optional*/::mlir::IntegerAttr output_index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::ValueRange dyn_sizes, /*optional*/::mlir::ArrayAttr input_indices, /*optional*/::mlir::IntegerAttr output_index);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::std::optional<::mlir::Operation*> buildDealloc(::mlir::OpBuilder&builder, ::mlir::Value alloc);
  static ::std::optional<::mlir::Value> buildClone(::mlir::OpBuilder&builder, ::mlir::Value alloc);
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
  MemRefType getType() { return getResult().getType().cast<MemRefType>(); }
  static constexpr StringRef kReuseOutputAttrName = "reuse_output";
  static constexpr StringRef kReuseInputCandidatesAttrName =
      "reuse_input_candidates";
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::TFAllocOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::TFAssertOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TFAssertOpGenericAdaptorBase {
public:
  struct Properties {
    using error_codeTy = ::mlir::kernel_gen::tf_framework::ErrorCodeAttr;
    error_codeTy error_code;

    auto getErrorCode() {
      auto &propStorage = this->error_code;
      return ::llvm::cast<::mlir::kernel_gen::tf_framework::ErrorCodeAttr>(propStorage);
    }
    void setErrorCode(const ::mlir::kernel_gen::tf_framework::ErrorCodeAttr &propValue) {
      this->error_code = propValue;
    }
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
        rhs.error_code == this->error_code &&
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
  TFAssertOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  TFAssertOpGenericAdaptorBase(TFAssertOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::kernel_gen::tf_framework::ErrorCodeAttr getErrorCodeAttr();
  ::mlir::kernel_gen::tf_framework::ErrorCode getErrorCode();
  ::mlir::StringAttr getMsgAttr();
  ::llvm::StringRef getMsg();
};
} // namespace detail
template <typename RangeT>
class TFAssertOpGenericAdaptor : public detail::TFAssertOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TFAssertOpGenericAdaptorBase;
public:
  TFAssertOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TFAssertOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TFAssertOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = TFAssertOp, typename = std::enable_if_t<std::is_same_v<LateInst, TFAssertOp>>>
  TFAssertOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getArg() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TFAssertOpAdaptor : public TFAssertOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TFAssertOpGenericAdaptor::TFAssertOpGenericAdaptor;
  TFAssertOpAdaptor(TFAssertOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TFAssertOp : public ::mlir::Op<TFAssertOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TFAssertOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TFAssertOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("error_code"), ::llvm::StringRef("msg")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getErrorCodeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getErrorCodeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMsgAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMsgAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.assert");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
  ::mlir::TypedValue<::mlir::IntegerType> getArg();
  ::mlir::OpOperand &getCtxMutable();
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
  ::mlir::kernel_gen::tf_framework::ErrorCodeAttr getErrorCodeAttr();
  ::mlir::kernel_gen::tf_framework::ErrorCode getErrorCode();
  ::mlir::StringAttr getMsgAttr();
  ::llvm::StringRef getMsg();
  void setErrorCodeAttr(::mlir::kernel_gen::tf_framework::ErrorCodeAttr attr);
  void setErrorCode(::mlir::kernel_gen::tf_framework::ErrorCode attrValue);
  void setMsgAttr(::mlir::StringAttr attr);
  void setMsg(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, ::mlir::Value arg, ::mlir::kernel_gen::tf_framework::ErrorCodeAttr error_code, ::mlir::StringAttr msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::Value arg, ::mlir::kernel_gen::tf_framework::ErrorCodeAttr error_code, ::mlir::StringAttr msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, ::mlir::Value arg, ::mlir::kernel_gen::tf_framework::ErrorCode error_code, ::llvm::StringRef msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::Value arg, ::mlir::kernel_gen::tf_framework::ErrorCode error_code, ::llvm::StringRef msg);
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
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::TFAssertOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::TFDeallocOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TFDeallocOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  TFDeallocOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  TFDeallocOpGenericAdaptorBase(TFDeallocOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class TFDeallocOpGenericAdaptor : public detail::TFDeallocOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TFDeallocOpGenericAdaptorBase;
public:
  TFDeallocOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TFDeallocOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TFDeallocOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = TFDeallocOp, typename = std::enable_if_t<std::is_same_v<LateInst, TFDeallocOp>>>
  TFDeallocOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getMemref() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TFDeallocOpAdaptor : public TFDeallocOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TFDeallocOpGenericAdaptor::TFDeallocOpGenericAdaptor;
  TFDeallocOpAdaptor(TFDeallocOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TFDeallocOp : public ::mlir::Op<TFDeallocOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TFDeallocOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TFDeallocOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.dealloc");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
  ::mlir::TypedValue<::mlir::BaseMemRefType> getMemref();
  ::mlir::OpOperand &getCtxMutable();
  ::mlir::OpOperand &getMemrefMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, ::mlir::Value memref);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::Value memref);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::TFDeallocOp)


#endif  // GET_OP_CLASSES

