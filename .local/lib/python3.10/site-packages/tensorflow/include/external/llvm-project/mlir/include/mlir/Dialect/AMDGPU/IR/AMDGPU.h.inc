/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: AMDGPU.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace amdgpu {
class ExtPackedFp8Op;
} // namespace amdgpu
} // namespace mlir
namespace mlir {
namespace amdgpu {
class LDSBarrierOp;
} // namespace amdgpu
} // namespace mlir
namespace mlir {
namespace amdgpu {
class MFMAOp;
} // namespace amdgpu
} // namespace mlir
namespace mlir {
namespace amdgpu {
class PackedStochRoundFp8Op;
} // namespace amdgpu
} // namespace mlir
namespace mlir {
namespace amdgpu {
class PackedTrunc2xFp8Op;
} // namespace amdgpu
} // namespace mlir
namespace mlir {
namespace amdgpu {
class RawBufferAtomicCmpswapOp;
} // namespace amdgpu
} // namespace mlir
namespace mlir {
namespace amdgpu {
class RawBufferAtomicFaddOp;
} // namespace amdgpu
} // namespace mlir
namespace mlir {
namespace amdgpu {
class RawBufferAtomicFmaxOp;
} // namespace amdgpu
} // namespace mlir
namespace mlir {
namespace amdgpu {
class RawBufferAtomicSmaxOp;
} // namespace amdgpu
} // namespace mlir
namespace mlir {
namespace amdgpu {
class RawBufferAtomicUminOp;
} // namespace amdgpu
} // namespace mlir
namespace mlir {
namespace amdgpu {
class RawBufferLoadOp;
} // namespace amdgpu
} // namespace mlir
namespace mlir {
namespace amdgpu {
class RawBufferStoreOp;
} // namespace amdgpu
} // namespace mlir
namespace mlir {
namespace amdgpu {
class WMMAOp;
} // namespace amdgpu
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::ExtPackedFp8Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ExtPackedFp8OpGenericAdaptorBase {
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
  ExtPackedFp8OpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ExtPackedFp8OpGenericAdaptorBase(ExtPackedFp8Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getIndexAttr();
  uint32_t getIndex();
};
} // namespace detail
template <typename RangeT>
class ExtPackedFp8OpGenericAdaptor : public detail::ExtPackedFp8OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ExtPackedFp8OpGenericAdaptorBase;
public:
  ExtPackedFp8OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ExtPackedFp8OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ExtPackedFp8OpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ExtPackedFp8Op, typename = std::enable_if_t<std::is_same_v<LateInst, ExtPackedFp8Op>>>
  ExtPackedFp8OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSource() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ExtPackedFp8OpAdaptor : public ExtPackedFp8OpGenericAdaptor<::mlir::ValueRange> {
public:
  using ExtPackedFp8OpGenericAdaptor::ExtPackedFp8OpGenericAdaptor;
  ExtPackedFp8OpAdaptor(ExtPackedFp8Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ExtPackedFp8Op : public ::mlir::Op<ExtPackedFp8Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::FloatType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ExtPackedFp8OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ExtPackedFp8OpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("amdgpu.ext_packed_fp8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getSource();
  ::mlir::OpOperand &getSourceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::FloatType> getRes();
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
  uint32_t getIndex();
  void setIndexAttr(::mlir::IntegerAttr attr);
  void setIndex(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, ::mlir::IntegerAttr index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::IntegerAttr index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, uint32_t index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, uint32_t index);
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
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::ExtPackedFp8Op)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::LDSBarrierOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LDSBarrierOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  LDSBarrierOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  LDSBarrierOpGenericAdaptorBase(LDSBarrierOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class LDSBarrierOpGenericAdaptor : public detail::LDSBarrierOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LDSBarrierOpGenericAdaptorBase;
public:
  LDSBarrierOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LDSBarrierOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LDSBarrierOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = LDSBarrierOp, typename = std::enable_if_t<std::is_same_v<LateInst, LDSBarrierOp>>>
  LDSBarrierOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class LDSBarrierOpAdaptor : public LDSBarrierOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LDSBarrierOpGenericAdaptor::LDSBarrierOpGenericAdaptor;
  LDSBarrierOpAdaptor(LDSBarrierOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LDSBarrierOp : public ::mlir::Op<LDSBarrierOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LDSBarrierOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LDSBarrierOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("amdgpu.lds_barrier");
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
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::LDSBarrierOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::MFMAOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MFMAOpGenericAdaptorBase {
public:
  struct Properties {
    using abidTy = ::mlir::IntegerAttr;
    abidTy abid;

    auto getAbid() {
      auto &propStorage = this->abid;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setAbid(const ::mlir::IntegerAttr &propValue) {
      this->abid = propValue;
    }
    using blgpTy = ::mlir::amdgpu::MFMAPermBAttr;
    blgpTy blgp;

    auto getBlgp() {
      auto &propStorage = this->blgp;
      return ::llvm::dyn_cast_or_null<::mlir::amdgpu::MFMAPermBAttr>(propStorage);
    }
    void setBlgp(const ::mlir::amdgpu::MFMAPermBAttr &propValue) {
      this->blgp = propValue;
    }
    using blocksTy = ::mlir::IntegerAttr;
    blocksTy blocks;

    auto getBlocks() {
      auto &propStorage = this->blocks;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setBlocks(const ::mlir::IntegerAttr &propValue) {
      this->blocks = propValue;
    }
    using cbszTy = ::mlir::IntegerAttr;
    cbszTy cbsz;

    auto getCbsz() {
      auto &propStorage = this->cbsz;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setCbsz(const ::mlir::IntegerAttr &propValue) {
      this->cbsz = propValue;
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
    using negateATy = ::mlir::UnitAttr;
    negateATy negateA;

    auto getNegateA() {
      auto &propStorage = this->negateA;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setNegateA(const ::mlir::UnitAttr &propValue) {
      this->negateA = propValue;
    }
    using negateBTy = ::mlir::UnitAttr;
    negateBTy negateB;

    auto getNegateB() {
      auto &propStorage = this->negateB;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setNegateB(const ::mlir::UnitAttr &propValue) {
      this->negateB = propValue;
    }
    using negateCTy = ::mlir::UnitAttr;
    negateCTy negateC;

    auto getNegateC() {
      auto &propStorage = this->negateC;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setNegateC(const ::mlir::UnitAttr &propValue) {
      this->negateC = propValue;
    }
    using reducePrecisionTy = ::mlir::UnitAttr;
    reducePrecisionTy reducePrecision;

    auto getReducePrecision() {
      auto &propStorage = this->reducePrecision;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setReducePrecision(const ::mlir::UnitAttr &propValue) {
      this->reducePrecision = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.abid == this->abid &&
        rhs.blgp == this->blgp &&
        rhs.blocks == this->blocks &&
        rhs.cbsz == this->cbsz &&
        rhs.k == this->k &&
        rhs.m == this->m &&
        rhs.n == this->n &&
        rhs.negateA == this->negateA &&
        rhs.negateB == this->negateB &&
        rhs.negateC == this->negateC &&
        rhs.reducePrecision == this->reducePrecision &&
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
  MFMAOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  MFMAOpGenericAdaptorBase(MFMAOp op);

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
  ::mlir::IntegerAttr getBlocksAttr();
  uint32_t getBlocks();
  ::mlir::IntegerAttr getCbszAttr();
  uint32_t getCbsz();
  ::mlir::IntegerAttr getAbidAttr();
  uint32_t getAbid();
  ::mlir::amdgpu::MFMAPermBAttr getBlgpAttr();
  ::mlir::amdgpu::MFMAPermB getBlgp();
  ::mlir::UnitAttr getReducePrecisionAttr();
  bool getReducePrecision();
  ::mlir::UnitAttr getNegateAAttr();
  bool getNegateA();
  ::mlir::UnitAttr getNegateBAttr();
  bool getNegateB();
  ::mlir::UnitAttr getNegateCAttr();
  bool getNegateC();
};
} // namespace detail
template <typename RangeT>
class MFMAOpGenericAdaptor : public detail::MFMAOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MFMAOpGenericAdaptorBase;
public:
  MFMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MFMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MFMAOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = MFMAOp, typename = std::enable_if_t<std::is_same_v<LateInst, MFMAOp>>>
  MFMAOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSourceA() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSourceB() {
    return (*getODSOperands(1).begin());
  }

  ValueT getDestC() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MFMAOpAdaptor : public MFMAOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MFMAOpGenericAdaptor::MFMAOpGenericAdaptor;
  MFMAOpAdaptor(MFMAOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MFMAOp : public ::mlir::Op<MFMAOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MFMAOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MFMAOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("abid"), ::llvm::StringRef("blgp"), ::llvm::StringRef("blocks"), ::llvm::StringRef("cbsz"), ::llvm::StringRef("k"), ::llvm::StringRef("m"), ::llvm::StringRef("n"), ::llvm::StringRef("negateA"), ::llvm::StringRef("negateB"), ::llvm::StringRef("negateC"), ::llvm::StringRef("reducePrecision")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAbidAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAbidAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getBlgpAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getBlgpAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getBlocksAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getBlocksAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getCbszAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getCbszAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getKAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getKAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getMAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getMAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getNAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getNAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  ::mlir::StringAttr getNegateAAttrName() {
    return getAttributeNameForIndex(7);
  }

  static ::mlir::StringAttr getNegateAAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 7);
  }

  ::mlir::StringAttr getNegateBAttrName() {
    return getAttributeNameForIndex(8);
  }

  static ::mlir::StringAttr getNegateBAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 8);
  }

  ::mlir::StringAttr getNegateCAttrName() {
    return getAttributeNameForIndex(9);
  }

  static ::mlir::StringAttr getNegateCAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 9);
  }

  ::mlir::StringAttr getReducePrecisionAttrName() {
    return getAttributeNameForIndex(10);
  }

  static ::mlir::StringAttr getReducePrecisionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 10);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("amdgpu.mfma");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getSourceA();
  ::mlir::Value getSourceB();
  ::mlir::Value getDestC();
  ::mlir::OpOperand &getSourceAMutable();
  ::mlir::OpOperand &getSourceBMutable();
  ::mlir::OpOperand &getDestCMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getDestD();
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
  ::mlir::IntegerAttr getBlocksAttr();
  uint32_t getBlocks();
  ::mlir::IntegerAttr getCbszAttr();
  uint32_t getCbsz();
  ::mlir::IntegerAttr getAbidAttr();
  uint32_t getAbid();
  ::mlir::amdgpu::MFMAPermBAttr getBlgpAttr();
  ::mlir::amdgpu::MFMAPermB getBlgp();
  ::mlir::UnitAttr getReducePrecisionAttr();
  bool getReducePrecision();
  ::mlir::UnitAttr getNegateAAttr();
  bool getNegateA();
  ::mlir::UnitAttr getNegateBAttr();
  bool getNegateB();
  ::mlir::UnitAttr getNegateCAttr();
  bool getNegateC();
  void setMAttr(::mlir::IntegerAttr attr);
  void setM(uint32_t attrValue);
  void setNAttr(::mlir::IntegerAttr attr);
  void setN(uint32_t attrValue);
  void setKAttr(::mlir::IntegerAttr attr);
  void setK(uint32_t attrValue);
  void setBlocksAttr(::mlir::IntegerAttr attr);
  void setBlocks(uint32_t attrValue);
  void setCbszAttr(::mlir::IntegerAttr attr);
  void setCbsz(uint32_t attrValue);
  void setAbidAttr(::mlir::IntegerAttr attr);
  void setAbid(uint32_t attrValue);
  void setBlgpAttr(::mlir::amdgpu::MFMAPermBAttr attr);
  void setBlgp(::mlir::amdgpu::MFMAPermB attrValue);
  void setReducePrecisionAttr(::mlir::UnitAttr attr);
  void setReducePrecision(bool attrValue);
  void setNegateAAttr(::mlir::UnitAttr attr);
  void setNegateA(bool attrValue);
  void setNegateBAttr(::mlir::UnitAttr attr);
  void setNegateB(bool attrValue);
  void setNegateCAttr(::mlir::UnitAttr attr);
  void setNegateC(bool attrValue);
  ::mlir::Attribute removeReducePrecisionAttr();
  ::mlir::Attribute removeNegateAAttr();
  ::mlir::Attribute removeNegateBAttr();
  ::mlir::Attribute removeNegateCAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type destD, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::IntegerAttr blocks, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, ::mlir::IntegerAttr cbsz, ::mlir::IntegerAttr abid = nullptr, ::mlir::amdgpu::MFMAPermBAttr blgp = nullptr, /*optional*/::mlir::UnitAttr reducePrecision = nullptr, /*optional*/::mlir::UnitAttr negateA = nullptr, /*optional*/::mlir::UnitAttr negateB = nullptr, /*optional*/::mlir::UnitAttr negateC = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr m, ::mlir::IntegerAttr n, ::mlir::IntegerAttr k, ::mlir::IntegerAttr blocks, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, ::mlir::IntegerAttr cbsz, ::mlir::IntegerAttr abid = nullptr, ::mlir::amdgpu::MFMAPermBAttr blgp = nullptr, /*optional*/::mlir::UnitAttr reducePrecision = nullptr, /*optional*/::mlir::UnitAttr negateA = nullptr, /*optional*/::mlir::UnitAttr negateB = nullptr, /*optional*/::mlir::UnitAttr negateC = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type destD, uint32_t m, uint32_t n, uint32_t k, uint32_t blocks, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, uint32_t cbsz = 0, uint32_t abid = 0, ::mlir::amdgpu::MFMAPermB blgp = ::mlir::amdgpu::MFMAPermB::none, /*optional*/bool reducePrecision = false, /*optional*/bool negateA = false, /*optional*/bool negateB = false, /*optional*/bool negateC = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t m, uint32_t n, uint32_t k, uint32_t blocks, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, uint32_t cbsz = 0, uint32_t abid = 0, ::mlir::amdgpu::MFMAPermB blgp = ::mlir::amdgpu::MFMAPermB::none, /*optional*/bool reducePrecision = false, /*optional*/bool negateA = false, /*optional*/bool negateB = false, /*optional*/bool negateC = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::MFMAOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::PackedStochRoundFp8Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PackedStochRoundFp8OpGenericAdaptorBase {
public:
  struct Properties {
    using storeIndexTy = ::mlir::IntegerAttr;
    storeIndexTy storeIndex;

    auto getStoreIndex() {
      auto &propStorage = this->storeIndex;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setStoreIndex(const ::mlir::IntegerAttr &propValue) {
      this->storeIndex = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.storeIndex == this->storeIndex &&
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
  PackedStochRoundFp8OpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  PackedStochRoundFp8OpGenericAdaptorBase(PackedStochRoundFp8Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getStoreIndexAttr();
  uint32_t getStoreIndex();
};
} // namespace detail
template <typename RangeT>
class PackedStochRoundFp8OpGenericAdaptor : public detail::PackedStochRoundFp8OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PackedStochRoundFp8OpGenericAdaptorBase;
public:
  PackedStochRoundFp8OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PackedStochRoundFp8OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PackedStochRoundFp8OpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = PackedStochRoundFp8Op, typename = std::enable_if_t<std::is_same_v<LateInst, PackedStochRoundFp8Op>>>
  PackedStochRoundFp8OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSource() {
    return (*getODSOperands(0).begin());
  }

  ValueT getStochiasticParam() {
    return (*getODSOperands(1).begin());
  }

  ValueT getExisting() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PackedStochRoundFp8OpAdaptor : public PackedStochRoundFp8OpGenericAdaptor<::mlir::ValueRange> {
public:
  using PackedStochRoundFp8OpGenericAdaptor::PackedStochRoundFp8OpGenericAdaptor;
  PackedStochRoundFp8OpAdaptor(PackedStochRoundFp8Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PackedStochRoundFp8Op : public ::mlir::Op<PackedStochRoundFp8Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PackedStochRoundFp8OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PackedStochRoundFp8OpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("storeIndex")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getStoreIndexAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getStoreIndexAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("amdgpu.packed_stoch_round_fp8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::FloatType> getSource();
  ::mlir::TypedValue<::mlir::IntegerType> getStochiasticParam();
  ::mlir::TypedValue<::mlir::VectorType> getExisting();
  ::mlir::OpOperand &getSourceMutable();
  ::mlir::OpOperand &getStochiasticParamMutable();
  ::mlir::MutableOperandRange getExistingMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getRes();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getStoreIndexAttr();
  uint32_t getStoreIndex();
  void setStoreIndexAttr(::mlir::IntegerAttr attr);
  void setStoreIndex(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, ::mlir::Value stochiasticParam, ::mlir::IntegerAttr storeIndex, /*optional*/::mlir::Value existing);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::Value stochiasticParam, ::mlir::IntegerAttr storeIndex, /*optional*/::mlir::Value existing);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value source, ::mlir::Value stochiasticParam, uint32_t storeIndex, /*optional*/::mlir::Value existing);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::Value stochiasticParam, uint32_t storeIndex, /*optional*/::mlir::Value existing);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::PackedStochRoundFp8Op)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::PackedTrunc2xFp8Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PackedTrunc2xFp8OpGenericAdaptorBase {
public:
  struct Properties {
    using wordIndexTy = ::mlir::IntegerAttr;
    wordIndexTy wordIndex;

    auto getWordIndex() {
      auto &propStorage = this->wordIndex;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setWordIndex(const ::mlir::IntegerAttr &propValue) {
      this->wordIndex = propValue;
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
        rhs.wordIndex == this->wordIndex &&
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
  PackedTrunc2xFp8OpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  PackedTrunc2xFp8OpGenericAdaptorBase(PackedTrunc2xFp8Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getWordIndexAttr();
  uint32_t getWordIndex();
};
} // namespace detail
template <typename RangeT>
class PackedTrunc2xFp8OpGenericAdaptor : public detail::PackedTrunc2xFp8OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PackedTrunc2xFp8OpGenericAdaptorBase;
public:
  PackedTrunc2xFp8OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PackedTrunc2xFp8OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PackedTrunc2xFp8OpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = PackedTrunc2xFp8Op, typename = std::enable_if_t<std::is_same_v<LateInst, PackedTrunc2xFp8Op>>>
  PackedTrunc2xFp8OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSourceA() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSourceB() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getExisting() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PackedTrunc2xFp8OpAdaptor : public PackedTrunc2xFp8OpGenericAdaptor<::mlir::ValueRange> {
public:
  using PackedTrunc2xFp8OpGenericAdaptor::PackedTrunc2xFp8OpGenericAdaptor;
  PackedTrunc2xFp8OpAdaptor(PackedTrunc2xFp8Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PackedTrunc2xFp8Op : public ::mlir::Op<PackedTrunc2xFp8Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PackedTrunc2xFp8OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PackedTrunc2xFp8OpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("wordIndex"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getWordIndexAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getWordIndexAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("amdgpu.packed_trunc_2xfp8");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::FloatType> getSourceA();
  ::mlir::TypedValue<::mlir::FloatType> getSourceB();
  ::mlir::TypedValue<::mlir::VectorType> getExisting();
  ::mlir::OpOperand &getSourceAMutable();
  ::mlir::MutableOperandRange getSourceBMutable();
  ::mlir::MutableOperandRange getExistingMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getRes();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getWordIndexAttr();
  uint32_t getWordIndex();
  void setWordIndexAttr(::mlir::IntegerAttr attr);
  void setWordIndex(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value sourceA, /*optional*/::mlir::Value sourceB, ::mlir::IntegerAttr wordIndex, /*optional*/::mlir::Value existing);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value sourceA, /*optional*/::mlir::Value sourceB, ::mlir::IntegerAttr wordIndex, /*optional*/::mlir::Value existing);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value sourceA, /*optional*/::mlir::Value sourceB, uint32_t wordIndex, /*optional*/::mlir::Value existing);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value sourceA, /*optional*/::mlir::Value sourceB, uint32_t wordIndex, /*optional*/::mlir::Value existing);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::PackedTrunc2xFp8Op)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferAtomicCmpswapOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferAtomicCmpswapOpGenericAdaptorBase {
public:
  struct Properties {
    using boundsCheckTy = ::mlir::BoolAttr;
    boundsCheckTy boundsCheck;

    auto getBoundsCheck() {
      auto &propStorage = this->boundsCheck;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setBoundsCheck(const ::mlir::BoolAttr &propValue) {
      this->boundsCheck = propValue;
    }
    using indexOffsetTy = ::mlir::IntegerAttr;
    indexOffsetTy indexOffset;

    auto getIndexOffset() {
      auto &propStorage = this->indexOffset;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setIndexOffset(const ::mlir::IntegerAttr &propValue) {
      this->indexOffset = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 5>;
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
        rhs.boundsCheck == this->boundsCheck &&
        rhs.indexOffset == this->indexOffset &&
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
  RawBufferAtomicCmpswapOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferAtomicCmpswapOpGenericAdaptorBase(RawBufferAtomicCmpswapOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
};
} // namespace detail
template <typename RangeT>
class RawBufferAtomicCmpswapOpGenericAdaptor : public detail::RawBufferAtomicCmpswapOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferAtomicCmpswapOpGenericAdaptorBase;
public:
  RawBufferAtomicCmpswapOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferAtomicCmpswapOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferAtomicCmpswapOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RawBufferAtomicCmpswapOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawBufferAtomicCmpswapOp>>>
  RawBufferAtomicCmpswapOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getMemref() {
    return (*getODSOperands(2).begin());
  }

  RangeT getIndices() {
    return getODSOperands(3);
  }

  ValueT getSgprOffset() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawBufferAtomicCmpswapOpAdaptor : public RawBufferAtomicCmpswapOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawBufferAtomicCmpswapOpGenericAdaptor::RawBufferAtomicCmpswapOpGenericAdaptor;
  RawBufferAtomicCmpswapOpAdaptor(RawBufferAtomicCmpswapOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawBufferAtomicCmpswapOp : public ::mlir::Op<RawBufferAtomicCmpswapOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<3>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferAtomicCmpswapOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferAtomicCmpswapOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("boundsCheck"), ::llvm::StringRef("indexOffset"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBoundsCheckAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBoundsCheckAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIndexOffsetAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIndexOffsetAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("amdgpu.raw_buffer_atomic_cmpswap");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getSrc();
  ::mlir::Value getCmp();
  ::mlir::TypedValue<::mlir::MemRefType> getMemref();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::TypedValue<::mlir::IntegerType> getSgprOffset();
  ::mlir::OpOperand &getSrcMutable();
  ::mlir::OpOperand &getCmpMutable();
  ::mlir::OpOperand &getMemrefMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
  ::mlir::MutableOperandRange getSgprOffsetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getValue();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
  void setBoundsCheckAttr(::mlir::BoolAttr attr);
  void setBoundsCheck(bool attrValue);
  void setIndexOffsetAttr(::mlir::IntegerAttr attr);
  void setIndexOffset(::std::optional<uint32_t> attrValue);
  ::mlir::Attribute removeIndexOffsetAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type value, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type value, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value cmp, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
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
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferAtomicCmpswapOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferAtomicFaddOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferAtomicFaddOpGenericAdaptorBase {
public:
  struct Properties {
    using boundsCheckTy = ::mlir::BoolAttr;
    boundsCheckTy boundsCheck;

    auto getBoundsCheck() {
      auto &propStorage = this->boundsCheck;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setBoundsCheck(const ::mlir::BoolAttr &propValue) {
      this->boundsCheck = propValue;
    }
    using indexOffsetTy = ::mlir::IntegerAttr;
    indexOffsetTy indexOffset;

    auto getIndexOffset() {
      auto &propStorage = this->indexOffset;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setIndexOffset(const ::mlir::IntegerAttr &propValue) {
      this->indexOffset = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 4>;
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
        rhs.boundsCheck == this->boundsCheck &&
        rhs.indexOffset == this->indexOffset &&
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
  RawBufferAtomicFaddOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferAtomicFaddOpGenericAdaptorBase(RawBufferAtomicFaddOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
};
} // namespace detail
template <typename RangeT>
class RawBufferAtomicFaddOpGenericAdaptor : public detail::RawBufferAtomicFaddOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferAtomicFaddOpGenericAdaptorBase;
public:
  RawBufferAtomicFaddOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferAtomicFaddOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferAtomicFaddOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RawBufferAtomicFaddOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawBufferAtomicFaddOp>>>
  RawBufferAtomicFaddOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getMemref() {
    return (*getODSOperands(1).begin());
  }

  RangeT getIndices() {
    return getODSOperands(2);
  }

  ValueT getSgprOffset() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawBufferAtomicFaddOpAdaptor : public RawBufferAtomicFaddOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawBufferAtomicFaddOpGenericAdaptor::RawBufferAtomicFaddOpGenericAdaptor;
  RawBufferAtomicFaddOpAdaptor(RawBufferAtomicFaddOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawBufferAtomicFaddOp : public ::mlir::Op<RawBufferAtomicFaddOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferAtomicFaddOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferAtomicFaddOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("boundsCheck"), ::llvm::StringRef("indexOffset"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBoundsCheckAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBoundsCheckAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIndexOffsetAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIndexOffsetAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("amdgpu.raw_buffer_atomic_fadd");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::FloatType> getValue();
  ::mlir::TypedValue<::mlir::MemRefType> getMemref();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::TypedValue<::mlir::IntegerType> getSgprOffset();
  ::mlir::OpOperand &getValueMutable();
  ::mlir::OpOperand &getMemrefMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
  ::mlir::MutableOperandRange getSgprOffsetMutable();
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
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
  void setBoundsCheckAttr(::mlir::BoolAttr attr);
  void setBoundsCheck(bool attrValue);
  void setIndexOffsetAttr(::mlir::IntegerAttr attr);
  void setIndexOffset(::std::optional<uint32_t> attrValue);
  ::mlir::Attribute removeIndexOffsetAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
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
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferAtomicFaddOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferAtomicFmaxOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferAtomicFmaxOpGenericAdaptorBase {
public:
  struct Properties {
    using boundsCheckTy = ::mlir::BoolAttr;
    boundsCheckTy boundsCheck;

    auto getBoundsCheck() {
      auto &propStorage = this->boundsCheck;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setBoundsCheck(const ::mlir::BoolAttr &propValue) {
      this->boundsCheck = propValue;
    }
    using indexOffsetTy = ::mlir::IntegerAttr;
    indexOffsetTy indexOffset;

    auto getIndexOffset() {
      auto &propStorage = this->indexOffset;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setIndexOffset(const ::mlir::IntegerAttr &propValue) {
      this->indexOffset = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 4>;
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
        rhs.boundsCheck == this->boundsCheck &&
        rhs.indexOffset == this->indexOffset &&
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
  RawBufferAtomicFmaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferAtomicFmaxOpGenericAdaptorBase(RawBufferAtomicFmaxOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
};
} // namespace detail
template <typename RangeT>
class RawBufferAtomicFmaxOpGenericAdaptor : public detail::RawBufferAtomicFmaxOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferAtomicFmaxOpGenericAdaptorBase;
public:
  RawBufferAtomicFmaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferAtomicFmaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferAtomicFmaxOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RawBufferAtomicFmaxOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawBufferAtomicFmaxOp>>>
  RawBufferAtomicFmaxOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getMemref() {
    return (*getODSOperands(1).begin());
  }

  RangeT getIndices() {
    return getODSOperands(2);
  }

  ValueT getSgprOffset() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawBufferAtomicFmaxOpAdaptor : public RawBufferAtomicFmaxOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawBufferAtomicFmaxOpGenericAdaptor::RawBufferAtomicFmaxOpGenericAdaptor;
  RawBufferAtomicFmaxOpAdaptor(RawBufferAtomicFmaxOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawBufferAtomicFmaxOp : public ::mlir::Op<RawBufferAtomicFmaxOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferAtomicFmaxOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferAtomicFmaxOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("boundsCheck"), ::llvm::StringRef("indexOffset"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBoundsCheckAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBoundsCheckAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIndexOffsetAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIndexOffsetAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("amdgpu.raw_buffer_atomic_fmax");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getValue();
  ::mlir::TypedValue<::mlir::MemRefType> getMemref();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::TypedValue<::mlir::IntegerType> getSgprOffset();
  ::mlir::OpOperand &getValueMutable();
  ::mlir::OpOperand &getMemrefMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
  ::mlir::MutableOperandRange getSgprOffsetMutable();
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
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
  void setBoundsCheckAttr(::mlir::BoolAttr attr);
  void setBoundsCheck(bool attrValue);
  void setIndexOffsetAttr(::mlir::IntegerAttr attr);
  void setIndexOffset(::std::optional<uint32_t> attrValue);
  ::mlir::Attribute removeIndexOffsetAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
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
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferAtomicFmaxOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferAtomicSmaxOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferAtomicSmaxOpGenericAdaptorBase {
public:
  struct Properties {
    using boundsCheckTy = ::mlir::BoolAttr;
    boundsCheckTy boundsCheck;

    auto getBoundsCheck() {
      auto &propStorage = this->boundsCheck;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setBoundsCheck(const ::mlir::BoolAttr &propValue) {
      this->boundsCheck = propValue;
    }
    using indexOffsetTy = ::mlir::IntegerAttr;
    indexOffsetTy indexOffset;

    auto getIndexOffset() {
      auto &propStorage = this->indexOffset;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setIndexOffset(const ::mlir::IntegerAttr &propValue) {
      this->indexOffset = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 4>;
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
        rhs.boundsCheck == this->boundsCheck &&
        rhs.indexOffset == this->indexOffset &&
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
  RawBufferAtomicSmaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferAtomicSmaxOpGenericAdaptorBase(RawBufferAtomicSmaxOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
};
} // namespace detail
template <typename RangeT>
class RawBufferAtomicSmaxOpGenericAdaptor : public detail::RawBufferAtomicSmaxOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferAtomicSmaxOpGenericAdaptorBase;
public:
  RawBufferAtomicSmaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferAtomicSmaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferAtomicSmaxOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RawBufferAtomicSmaxOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawBufferAtomicSmaxOp>>>
  RawBufferAtomicSmaxOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getMemref() {
    return (*getODSOperands(1).begin());
  }

  RangeT getIndices() {
    return getODSOperands(2);
  }

  ValueT getSgprOffset() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawBufferAtomicSmaxOpAdaptor : public RawBufferAtomicSmaxOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawBufferAtomicSmaxOpGenericAdaptor::RawBufferAtomicSmaxOpGenericAdaptor;
  RawBufferAtomicSmaxOpAdaptor(RawBufferAtomicSmaxOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawBufferAtomicSmaxOp : public ::mlir::Op<RawBufferAtomicSmaxOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferAtomicSmaxOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferAtomicSmaxOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("boundsCheck"), ::llvm::StringRef("indexOffset"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBoundsCheckAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBoundsCheckAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIndexOffsetAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIndexOffsetAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("amdgpu.raw_buffer_atomic_smax");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getValue();
  ::mlir::TypedValue<::mlir::MemRefType> getMemref();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::TypedValue<::mlir::IntegerType> getSgprOffset();
  ::mlir::OpOperand &getValueMutable();
  ::mlir::OpOperand &getMemrefMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
  ::mlir::MutableOperandRange getSgprOffsetMutable();
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
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
  void setBoundsCheckAttr(::mlir::BoolAttr attr);
  void setBoundsCheck(bool attrValue);
  void setIndexOffsetAttr(::mlir::IntegerAttr attr);
  void setIndexOffset(::std::optional<uint32_t> attrValue);
  ::mlir::Attribute removeIndexOffsetAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
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
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferAtomicSmaxOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferAtomicUminOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferAtomicUminOpGenericAdaptorBase {
public:
  struct Properties {
    using boundsCheckTy = ::mlir::BoolAttr;
    boundsCheckTy boundsCheck;

    auto getBoundsCheck() {
      auto &propStorage = this->boundsCheck;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setBoundsCheck(const ::mlir::BoolAttr &propValue) {
      this->boundsCheck = propValue;
    }
    using indexOffsetTy = ::mlir::IntegerAttr;
    indexOffsetTy indexOffset;

    auto getIndexOffset() {
      auto &propStorage = this->indexOffset;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setIndexOffset(const ::mlir::IntegerAttr &propValue) {
      this->indexOffset = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 4>;
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
        rhs.boundsCheck == this->boundsCheck &&
        rhs.indexOffset == this->indexOffset &&
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
  RawBufferAtomicUminOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferAtomicUminOpGenericAdaptorBase(RawBufferAtomicUminOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
};
} // namespace detail
template <typename RangeT>
class RawBufferAtomicUminOpGenericAdaptor : public detail::RawBufferAtomicUminOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferAtomicUminOpGenericAdaptorBase;
public:
  RawBufferAtomicUminOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferAtomicUminOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferAtomicUminOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RawBufferAtomicUminOp, typename = std::enable_if_t<std::is_same_v<LateInst, RawBufferAtomicUminOp>>>
  RawBufferAtomicUminOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getMemref() {
    return (*getODSOperands(1).begin());
  }

  RangeT getIndices() {
    return getODSOperands(2);
  }

  ValueT getSgprOffset() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RawBufferAtomicUminOpAdaptor : public RawBufferAtomicUminOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RawBufferAtomicUminOpGenericAdaptor::RawBufferAtomicUminOpGenericAdaptor;
  RawBufferAtomicUminOpAdaptor(RawBufferAtomicUminOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RawBufferAtomicUminOp : public ::mlir::Op<RawBufferAtomicUminOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferAtomicUminOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferAtomicUminOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("boundsCheck"), ::llvm::StringRef("indexOffset"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBoundsCheckAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBoundsCheckAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIndexOffsetAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIndexOffsetAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("amdgpu.raw_buffer_atomic_umin");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getValue();
  ::mlir::TypedValue<::mlir::MemRefType> getMemref();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::TypedValue<::mlir::IntegerType> getSgprOffset();
  ::mlir::OpOperand &getValueMutable();
  ::mlir::OpOperand &getMemrefMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
  ::mlir::MutableOperandRange getSgprOffsetMutable();
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
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
  void setBoundsCheckAttr(::mlir::BoolAttr attr);
  void setBoundsCheck(bool attrValue);
  void setIndexOffsetAttr(::mlir::IntegerAttr attr);
  void setIndexOffset(::std::optional<uint32_t> attrValue);
  ::mlir::Attribute removeIndexOffsetAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
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
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferAtomicUminOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferLoadOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferLoadOpGenericAdaptorBase {
public:
  struct Properties {
    using boundsCheckTy = ::mlir::BoolAttr;
    boundsCheckTy boundsCheck;

    auto getBoundsCheck() {
      auto &propStorage = this->boundsCheck;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setBoundsCheck(const ::mlir::BoolAttr &propValue) {
      this->boundsCheck = propValue;
    }
    using indexOffsetTy = ::mlir::IntegerAttr;
    indexOffsetTy indexOffset;

    auto getIndexOffset() {
      auto &propStorage = this->indexOffset;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setIndexOffset(const ::mlir::IntegerAttr &propValue) {
      this->indexOffset = propValue;
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
        rhs.boundsCheck == this->boundsCheck &&
        rhs.indexOffset == this->indexOffset &&
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
  RawBufferLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferLoadOpGenericAdaptorBase(RawBufferLoadOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
};
} // namespace detail
template <typename RangeT>
class RawBufferLoadOpGenericAdaptor : public detail::RawBufferLoadOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferLoadOpGenericAdaptorBase;
public:
  RawBufferLoadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferLoadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferLoadOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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

  ValueT getMemref() {
    return (*getODSOperands(0).begin());
  }

  RangeT getIndices() {
    return getODSOperands(1);
  }

  ValueT getSgprOffset() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
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
class RawBufferLoadOp : public ::mlir::Op<RawBufferLoadOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferLoadOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferLoadOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("boundsCheck"), ::llvm::StringRef("indexOffset"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBoundsCheckAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBoundsCheckAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIndexOffsetAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIndexOffsetAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("amdgpu.raw_buffer_load");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getMemref();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::TypedValue<::mlir::IntegerType> getSgprOffset();
  ::mlir::OpOperand &getMemrefMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
  ::mlir::MutableOperandRange getSgprOffsetMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getValue();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
  void setBoundsCheckAttr(::mlir::BoolAttr attr);
  void setBoundsCheck(bool attrValue);
  void setIndexOffsetAttr(::mlir::IntegerAttr attr);
  void setIndexOffset(::std::optional<uint32_t> attrValue);
  ::mlir::Attribute removeIndexOffsetAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
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
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferLoadOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::RawBufferStoreOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RawBufferStoreOpGenericAdaptorBase {
public:
  struct Properties {
    using boundsCheckTy = ::mlir::BoolAttr;
    boundsCheckTy boundsCheck;

    auto getBoundsCheck() {
      auto &propStorage = this->boundsCheck;
      return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(propStorage);
    }
    void setBoundsCheck(const ::mlir::BoolAttr &propValue) {
      this->boundsCheck = propValue;
    }
    using indexOffsetTy = ::mlir::IntegerAttr;
    indexOffsetTy indexOffset;

    auto getIndexOffset() {
      auto &propStorage = this->indexOffset;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setIndexOffset(const ::mlir::IntegerAttr &propValue) {
      this->indexOffset = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 4>;
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
        rhs.boundsCheck == this->boundsCheck &&
        rhs.indexOffset == this->indexOffset &&
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
  RawBufferStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RawBufferStoreOpGenericAdaptorBase(RawBufferStoreOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
};
} // namespace detail
template <typename RangeT>
class RawBufferStoreOpGenericAdaptor : public detail::RawBufferStoreOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RawBufferStoreOpGenericAdaptorBase;
public:
  RawBufferStoreOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RawBufferStoreOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RawBufferStoreOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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

  ValueT getValue() {
    return (*getODSOperands(0).begin());
  }

  ValueT getMemref() {
    return (*getODSOperands(1).begin());
  }

  RangeT getIndices() {
    return getODSOperands(2);
  }

  ValueT getSgprOffset() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
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
class RawBufferStoreOp : public ::mlir::Op<RawBufferStoreOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RawBufferStoreOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RawBufferStoreOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("boundsCheck"), ::llvm::StringRef("indexOffset"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBoundsCheckAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBoundsCheckAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIndexOffsetAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIndexOffsetAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("amdgpu.raw_buffer_store");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getValue();
  ::mlir::TypedValue<::mlir::MemRefType> getMemref();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::TypedValue<::mlir::IntegerType> getSgprOffset();
  ::mlir::OpOperand &getValueMutable();
  ::mlir::OpOperand &getMemrefMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
  ::mlir::MutableOperandRange getSgprOffsetMutable();
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
  ::mlir::BoolAttr getBoundsCheckAttr();
  bool getBoundsCheck();
  ::mlir::IntegerAttr getIndexOffsetAttr();
  ::std::optional<uint32_t> getIndexOffset();
  void setBoundsCheckAttr(::mlir::BoolAttr attr);
  void setBoundsCheck(bool attrValue);
  void setIndexOffsetAttr(::mlir::IntegerAttr attr);
  void setIndexOffset(::std::optional<uint32_t> attrValue);
  ::mlir::Attribute removeIndexOffsetAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, ::mlir::BoolAttr boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value memref, ::mlir::ValueRange indices, bool boundsCheck, /*optional*/::mlir::IntegerAttr indexOffset, /*optional*/::mlir::Value sgprOffset);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
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
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::RawBufferStoreOp)

namespace mlir {
namespace amdgpu {

//===----------------------------------------------------------------------===//
// ::mlir::amdgpu::WMMAOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class WMMAOpGenericAdaptorBase {
public:
  struct Properties {
    using clampTy = ::mlir::UnitAttr;
    clampTy clamp;

    auto getClamp() {
      auto &propStorage = this->clamp;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setClamp(const ::mlir::UnitAttr &propValue) {
      this->clamp = propValue;
    }
    using subwordOffsetTy = ::mlir::IntegerAttr;
    subwordOffsetTy subwordOffset;

    auto getSubwordOffset() {
      auto &propStorage = this->subwordOffset;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setSubwordOffset(const ::mlir::IntegerAttr &propValue) {
      this->subwordOffset = propValue;
    }
    using unsignedATy = ::mlir::UnitAttr;
    unsignedATy unsignedA;

    auto getUnsignedA() {
      auto &propStorage = this->unsignedA;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setUnsignedA(const ::mlir::UnitAttr &propValue) {
      this->unsignedA = propValue;
    }
    using unsignedBTy = ::mlir::UnitAttr;
    unsignedBTy unsignedB;

    auto getUnsignedB() {
      auto &propStorage = this->unsignedB;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setUnsignedB(const ::mlir::UnitAttr &propValue) {
      this->unsignedB = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.clamp == this->clamp &&
        rhs.subwordOffset == this->subwordOffset &&
        rhs.unsignedA == this->unsignedA &&
        rhs.unsignedB == this->unsignedB &&
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
  WMMAOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  WMMAOpGenericAdaptorBase(WMMAOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getSubwordOffsetAttr();
  uint32_t getSubwordOffset();
  ::mlir::UnitAttr getUnsignedAAttr();
  bool getUnsignedA();
  ::mlir::UnitAttr getUnsignedBAttr();
  bool getUnsignedB();
  ::mlir::UnitAttr getClampAttr();
  bool getClamp();
};
} // namespace detail
template <typename RangeT>
class WMMAOpGenericAdaptor : public detail::WMMAOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::WMMAOpGenericAdaptorBase;
public:
  WMMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  WMMAOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : WMMAOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = WMMAOp, typename = std::enable_if_t<std::is_same_v<LateInst, WMMAOp>>>
  WMMAOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSourceA() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSourceB() {
    return (*getODSOperands(1).begin());
  }

  ValueT getDestC() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class WMMAOpAdaptor : public WMMAOpGenericAdaptor<::mlir::ValueRange> {
public:
  using WMMAOpGenericAdaptor::WMMAOpGenericAdaptor;
  WMMAOpAdaptor(WMMAOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class WMMAOp : public ::mlir::Op<WMMAOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = WMMAOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = WMMAOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("clamp"), ::llvm::StringRef("subwordOffset"), ::llvm::StringRef("unsignedA"), ::llvm::StringRef("unsignedB")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getClampAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getClampAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getSubwordOffsetAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getSubwordOffsetAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getUnsignedAAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getUnsignedAAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getUnsignedBAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getUnsignedBAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("amdgpu.wmma");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getSourceA();
  ::mlir::Value getSourceB();
  ::mlir::Value getDestC();
  ::mlir::OpOperand &getSourceAMutable();
  ::mlir::OpOperand &getSourceBMutable();
  ::mlir::OpOperand &getDestCMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getDestD();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getSubwordOffsetAttr();
  uint32_t getSubwordOffset();
  ::mlir::UnitAttr getUnsignedAAttr();
  bool getUnsignedA();
  ::mlir::UnitAttr getUnsignedBAttr();
  bool getUnsignedB();
  ::mlir::UnitAttr getClampAttr();
  bool getClamp();
  void setSubwordOffsetAttr(::mlir::IntegerAttr attr);
  void setSubwordOffset(uint32_t attrValue);
  void setUnsignedAAttr(::mlir::UnitAttr attr);
  void setUnsignedA(bool attrValue);
  void setUnsignedBAttr(::mlir::UnitAttr attr);
  void setUnsignedB(bool attrValue);
  void setClampAttr(::mlir::UnitAttr attr);
  void setClamp(bool attrValue);
  ::mlir::Attribute removeUnsignedAAttr();
  ::mlir::Attribute removeUnsignedBAttr();
  ::mlir::Attribute removeClampAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type destD, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, ::mlir::IntegerAttr subwordOffset, /*optional*/::mlir::UnitAttr unsignedA = nullptr, /*optional*/::mlir::UnitAttr unsignedB = nullptr, /*optional*/::mlir::UnitAttr clamp = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, ::mlir::IntegerAttr subwordOffset, /*optional*/::mlir::UnitAttr unsignedA = nullptr, /*optional*/::mlir::UnitAttr unsignedB = nullptr, /*optional*/::mlir::UnitAttr clamp = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type destD, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, uint32_t subwordOffset = 0, /*optional*/bool unsignedA = false, /*optional*/bool unsignedB = false, /*optional*/bool clamp = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value sourceA, ::mlir::Value sourceB, ::mlir::Value destC, uint32_t subwordOffset = 0, /*optional*/bool unsignedA = false, /*optional*/bool unsignedB = false, /*optional*/bool clamp = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::WMMAOp)


#endif  // GET_OP_CLASSES

