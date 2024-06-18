/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: QuantOps.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace quantfork {
class ConstFakeQuant;
} // namespace quantfork
} // namespace mlir
namespace mlir {
namespace quantfork {
class ConstFakeQuantPerAxis;
} // namespace quantfork
} // namespace mlir
namespace mlir {
namespace quantfork {
class CoupledRefOp;
} // namespace quantfork
} // namespace mlir
namespace mlir {
namespace quantfork {
class DequantizeCastOp;
} // namespace quantfork
} // namespace mlir
namespace mlir {
namespace quantfork {
class QuantizeCastOp;
} // namespace quantfork
} // namespace mlir
namespace mlir {
namespace quantfork {
class QuantizeRegionOp;
} // namespace quantfork
} // namespace mlir
namespace mlir {
namespace quantfork {
class ReturnOp;
} // namespace quantfork
} // namespace mlir
namespace mlir {
namespace quantfork {
class StatisticsOp;
} // namespace quantfork
} // namespace mlir
namespace mlir {
namespace quantfork {
class StatisticsRefOp;
} // namespace quantfork
} // namespace mlir
namespace mlir {
namespace quantfork {
class StorageCastOp;
} // namespace quantfork
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace quantfork {

//===----------------------------------------------------------------------===//
// ::mlir::quantfork::ConstFakeQuant declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConstFakeQuantGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConstFakeQuantGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConstFakeQuantGenericAdaptorBase(ConstFakeQuant op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FloatAttr getMinAttr();
  ::llvm::APFloat getMin();
  ::mlir::FloatAttr getMaxAttr();
  ::llvm::APFloat getMax();
  ::mlir::IntegerAttr getNumBitsAttr();
  uint64_t getNumBits();
  ::mlir::BoolAttr getNarrowRangeAttr();
  bool getNarrowRange();
  ::mlir::BoolAttr getIsSignedAttr();
  bool getIsSigned();
};
} // namespace detail
template <typename RangeT>
class ConstFakeQuantGenericAdaptor : public detail::ConstFakeQuantGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConstFakeQuantGenericAdaptorBase;
public:
  ConstFakeQuantGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConstFakeQuantGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConstFakeQuantGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConstFakeQuant, typename = std::enable_if_t<std::is_same_v<LateInst, ConstFakeQuant>>>
  ConstFakeQuantGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInputs() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConstFakeQuantAdaptor : public ConstFakeQuantGenericAdaptor<::mlir::ValueRange> {
public:
  using ConstFakeQuantGenericAdaptor::ConstFakeQuantGenericAdaptor;
  ConstFakeQuantAdaptor(ConstFakeQuant op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConstFakeQuant : public ::mlir::Op<ConstFakeQuant, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::SameOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConstFakeQuantAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConstFakeQuantGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("is_signed"), ::llvm::StringRef("max"), ::llvm::StringRef("min"), ::llvm::StringRef("narrow_range"), ::llvm::StringRef("num_bits")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getIsSignedAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getIsSignedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMaxAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMaxAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getMinAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getMinAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getNarrowRangeAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getNarrowRangeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getNumBitsAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getNumBitsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("quantfork.const_fake_quant");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getInputs();
  ::mlir::OpOperand &getInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOutputs();
  ::mlir::FloatAttr getMinAttr();
  ::llvm::APFloat getMin();
  ::mlir::FloatAttr getMaxAttr();
  ::llvm::APFloat getMax();
  ::mlir::IntegerAttr getNumBitsAttr();
  uint64_t getNumBits();
  ::mlir::BoolAttr getNarrowRangeAttr();
  bool getNarrowRange();
  ::mlir::BoolAttr getIsSignedAttr();
  bool getIsSigned();
  void setMinAttr(::mlir::FloatAttr attr);
  void setMin(::llvm::APFloat attrValue);
  void setMaxAttr(::mlir::FloatAttr attr);
  void setMax(::llvm::APFloat attrValue);
  void setNumBitsAttr(::mlir::IntegerAttr attr);
  void setNumBits(uint64_t attrValue);
  void setNarrowRangeAttr(::mlir::BoolAttr attr);
  void setNarrowRange(::std::optional<bool> attrValue);
  void setIsSignedAttr(::mlir::BoolAttr attr);
  void setIsSigned(::std::optional<bool> attrValue);
  ::mlir::Attribute removeNarrowRangeAttr();
  ::mlir::Attribute removeIsSignedAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type outputs, ::mlir::Value inputs, ::mlir::FloatAttr min, ::mlir::FloatAttr max, ::mlir::IntegerAttr num_bits, /*optional*/::mlir::BoolAttr narrow_range, /*optional*/::mlir::BoolAttr is_signed = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value inputs, ::mlir::FloatAttr min, ::mlir::FloatAttr max, ::mlir::IntegerAttr num_bits, /*optional*/::mlir::BoolAttr narrow_range, /*optional*/::mlir::BoolAttr is_signed = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value inputs, ::mlir::FloatAttr min, ::mlir::FloatAttr max, ::mlir::IntegerAttr num_bits, /*optional*/::mlir::BoolAttr narrow_range, /*optional*/::mlir::BoolAttr is_signed = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type outputs, ::mlir::Value inputs, ::llvm::APFloat min, ::llvm::APFloat max, uint64_t num_bits, /*optional*/bool narrow_range = false, /*optional*/bool is_signed = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value inputs, ::llvm::APFloat min, ::llvm::APFloat max, uint64_t num_bits, /*optional*/bool narrow_range = false, /*optional*/bool is_signed = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value inputs, ::llvm::APFloat min, ::llvm::APFloat max, uint64_t num_bits, /*optional*/bool narrow_range = false, /*optional*/bool is_signed = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
} // namespace quantfork
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::quantfork::ConstFakeQuant)

namespace mlir {
namespace quantfork {

//===----------------------------------------------------------------------===//
// ::mlir::quantfork::ConstFakeQuantPerAxis declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConstFakeQuantPerAxisGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConstFakeQuantPerAxisGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConstFakeQuantPerAxisGenericAdaptorBase(ConstFakeQuantPerAxis op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getMinAttr();
  ::mlir::ArrayAttr getMin();
  ::mlir::ArrayAttr getMaxAttr();
  ::mlir::ArrayAttr getMax();
  ::mlir::IntegerAttr getAxisAttr();
  uint64_t getAxis();
  ::mlir::IntegerAttr getNumBitsAttr();
  uint64_t getNumBits();
  ::mlir::BoolAttr getNarrowRangeAttr();
  bool getNarrowRange();
  ::mlir::BoolAttr getIsSignedAttr();
  bool getIsSigned();
};
} // namespace detail
template <typename RangeT>
class ConstFakeQuantPerAxisGenericAdaptor : public detail::ConstFakeQuantPerAxisGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConstFakeQuantPerAxisGenericAdaptorBase;
public:
  ConstFakeQuantPerAxisGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConstFakeQuantPerAxisGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConstFakeQuantPerAxisGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConstFakeQuantPerAxis, typename = std::enable_if_t<std::is_same_v<LateInst, ConstFakeQuantPerAxis>>>
  ConstFakeQuantPerAxisGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInputs() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConstFakeQuantPerAxisAdaptor : public ConstFakeQuantPerAxisGenericAdaptor<::mlir::ValueRange> {
public:
  using ConstFakeQuantPerAxisGenericAdaptor::ConstFakeQuantPerAxisGenericAdaptor;
  ConstFakeQuantPerAxisAdaptor(ConstFakeQuantPerAxis op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConstFakeQuantPerAxis : public ::mlir::Op<ConstFakeQuantPerAxis, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::SameOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConstFakeQuantPerAxisAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConstFakeQuantPerAxisGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("axis"), ::llvm::StringRef("is_signed"), ::llvm::StringRef("max"), ::llvm::StringRef("min"), ::llvm::StringRef("narrow_range"), ::llvm::StringRef("num_bits")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAxisAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAxisAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIsSignedAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIsSignedAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getMaxAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getMaxAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getMinAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getMinAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getNarrowRangeAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getNarrowRangeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getNumBitsAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getNumBitsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("quantfork.const_fake_quant_per_axis");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getInputs();
  ::mlir::OpOperand &getInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOutputs();
  ::mlir::ArrayAttr getMinAttr();
  ::mlir::ArrayAttr getMin();
  ::mlir::ArrayAttr getMaxAttr();
  ::mlir::ArrayAttr getMax();
  ::mlir::IntegerAttr getAxisAttr();
  uint64_t getAxis();
  ::mlir::IntegerAttr getNumBitsAttr();
  uint64_t getNumBits();
  ::mlir::BoolAttr getNarrowRangeAttr();
  bool getNarrowRange();
  ::mlir::BoolAttr getIsSignedAttr();
  bool getIsSigned();
  void setMinAttr(::mlir::ArrayAttr attr);
  void setMaxAttr(::mlir::ArrayAttr attr);
  void setAxisAttr(::mlir::IntegerAttr attr);
  void setAxis(uint64_t attrValue);
  void setNumBitsAttr(::mlir::IntegerAttr attr);
  void setNumBits(uint64_t attrValue);
  void setNarrowRangeAttr(::mlir::BoolAttr attr);
  void setNarrowRange(::std::optional<bool> attrValue);
  void setIsSignedAttr(::mlir::BoolAttr attr);
  void setIsSigned(::std::optional<bool> attrValue);
  ::mlir::Attribute removeNarrowRangeAttr();
  ::mlir::Attribute removeIsSignedAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type outputs, ::mlir::Value inputs, ::mlir::ArrayAttr min, ::mlir::ArrayAttr max, ::mlir::IntegerAttr axis, ::mlir::IntegerAttr num_bits, /*optional*/::mlir::BoolAttr narrow_range, /*optional*/::mlir::BoolAttr is_signed = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value inputs, ::mlir::ArrayAttr min, ::mlir::ArrayAttr max, ::mlir::IntegerAttr axis, ::mlir::IntegerAttr num_bits, /*optional*/::mlir::BoolAttr narrow_range, /*optional*/::mlir::BoolAttr is_signed = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value inputs, ::mlir::ArrayAttr min, ::mlir::ArrayAttr max, ::mlir::IntegerAttr axis, ::mlir::IntegerAttr num_bits, /*optional*/::mlir::BoolAttr narrow_range, /*optional*/::mlir::BoolAttr is_signed = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type outputs, ::mlir::Value inputs, ::mlir::ArrayAttr min, ::mlir::ArrayAttr max, uint64_t axis, uint64_t num_bits, /*optional*/bool narrow_range = false, /*optional*/bool is_signed = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value inputs, ::mlir::ArrayAttr min, ::mlir::ArrayAttr max, uint64_t axis, uint64_t num_bits, /*optional*/bool narrow_range = false, /*optional*/bool is_signed = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value inputs, ::mlir::ArrayAttr min, ::mlir::ArrayAttr max, uint64_t axis, uint64_t num_bits, /*optional*/bool narrow_range = false, /*optional*/bool is_signed = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
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
} // namespace quantfork
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::quantfork::ConstFakeQuantPerAxis)

namespace mlir {
namespace quantfork {

//===----------------------------------------------------------------------===//
// ::mlir::quantfork::CoupledRefOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CoupledRefOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CoupledRefOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CoupledRefOpGenericAdaptorBase(CoupledRefOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getCoupledKeyAttr();
  ::llvm::StringRef getCoupledKey();
};
} // namespace detail
template <typename RangeT>
class CoupledRefOpGenericAdaptor : public detail::CoupledRefOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CoupledRefOpGenericAdaptorBase;
public:
  CoupledRefOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CoupledRefOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CoupledRefOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CoupledRefOp, typename = std::enable_if_t<std::is_same_v<LateInst, CoupledRefOp>>>
  CoupledRefOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class CoupledRefOpAdaptor : public CoupledRefOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CoupledRefOpGenericAdaptor::CoupledRefOpGenericAdaptor;
  CoupledRefOpAdaptor(CoupledRefOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CoupledRefOp : public ::mlir::Op<CoupledRefOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::SameOperandsAndResultType, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CoupledRefOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CoupledRefOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("coupledKey")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getCoupledKeyAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getCoupledKeyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("quantfork.coupled_ref");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getArg();
  ::mlir::OpOperand &getArgMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::StringAttr getCoupledKeyAttr();
  ::llvm::StringRef getCoupledKey();
  void setCoupledKeyAttr(::mlir::StringAttr attr);
  void setCoupledKey(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value arg, ::mlir::StringAttr coupledKey);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg, ::mlir::StringAttr coupledKey);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg, ::mlir::StringAttr coupledKey);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value arg, ::llvm::StringRef coupledKey);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg, ::llvm::StringRef coupledKey);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg, ::llvm::StringRef coupledKey);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
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
} // namespace quantfork
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::quantfork::CoupledRefOp)

namespace mlir {
namespace quantfork {

//===----------------------------------------------------------------------===//
// ::mlir::quantfork::DequantizeCastOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DequantizeCastOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DequantizeCastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  DequantizeCastOpGenericAdaptorBase(DequantizeCastOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class DequantizeCastOpGenericAdaptor : public detail::DequantizeCastOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DequantizeCastOpGenericAdaptorBase;
public:
  DequantizeCastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DequantizeCastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DequantizeCastOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = DequantizeCastOp, typename = std::enable_if_t<std::is_same_v<LateInst, DequantizeCastOp>>>
  DequantizeCastOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class DequantizeCastOpAdaptor : public DequantizeCastOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DequantizeCastOpGenericAdaptor::DequantizeCastOpGenericAdaptor;
  DequantizeCastOpAdaptor(DequantizeCastOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DequantizeCastOp : public ::mlir::Op<DequantizeCastOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DequantizeCastOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DequantizeCastOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("quantfork.dcast");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getArg();
  ::mlir::OpOperand &getArgMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace quantfork
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::quantfork::DequantizeCastOp)

namespace mlir {
namespace quantfork {

//===----------------------------------------------------------------------===//
// ::mlir::quantfork::QuantizeCastOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class QuantizeCastOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  QuantizeCastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  QuantizeCastOpGenericAdaptorBase(QuantizeCastOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class QuantizeCastOpGenericAdaptor : public detail::QuantizeCastOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::QuantizeCastOpGenericAdaptorBase;
public:
  QuantizeCastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  QuantizeCastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : QuantizeCastOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = QuantizeCastOp, typename = std::enable_if_t<std::is_same_v<LateInst, QuantizeCastOp>>>
  QuantizeCastOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class QuantizeCastOpAdaptor : public QuantizeCastOpGenericAdaptor<::mlir::ValueRange> {
public:
  using QuantizeCastOpGenericAdaptor::QuantizeCastOpGenericAdaptor;
  QuantizeCastOpAdaptor(QuantizeCastOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class QuantizeCastOp : public ::mlir::Op<QuantizeCastOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = QuantizeCastOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = QuantizeCastOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("quantfork.qcast");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getArg();
  ::mlir::OpOperand &getArgMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace quantfork
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::quantfork::QuantizeCastOp)

namespace mlir {
namespace quantfork {

//===----------------------------------------------------------------------===//
// ::mlir::quantfork::QuantizeRegionOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class QuantizeRegionOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  QuantizeRegionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  QuantizeRegionOpGenericAdaptorBase(QuantizeRegionOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getInputSpecsAttr();
  ::mlir::ArrayAttr getInputSpecs();
  ::mlir::ArrayAttr getOutputSpecsAttr();
  ::mlir::ArrayAttr getOutputSpecs();
  ::mlir::StringAttr getLogicalKernelAttr();
  ::llvm::StringRef getLogicalKernel();
  ::mlir::Region &getBody();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class QuantizeRegionOpGenericAdaptor : public detail::QuantizeRegionOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::QuantizeRegionOpGenericAdaptorBase;
public:
  QuantizeRegionOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  QuantizeRegionOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : QuantizeRegionOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = QuantizeRegionOp, typename = std::enable_if_t<std::is_same_v<LateInst, QuantizeRegionOp>>>
  QuantizeRegionOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class QuantizeRegionOpAdaptor : public QuantizeRegionOpGenericAdaptor<::mlir::ValueRange> {
public:
  using QuantizeRegionOpGenericAdaptor::QuantizeRegionOpGenericAdaptor;
  QuantizeRegionOpAdaptor(QuantizeRegionOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class QuantizeRegionOp : public ::mlir::Op<QuantizeRegionOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::SingleBlockImplicitTerminator<ReturnOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::IsIsolatedFromAbove> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = QuantizeRegionOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = QuantizeRegionOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("input_specs"), ::llvm::StringRef("logical_kernel"), ::llvm::StringRef("output_specs")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInputSpecsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInputSpecsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getLogicalKernelAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getLogicalKernelAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOutputSpecsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getOutputSpecsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("quantfork.region");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getInputs();
  ::mlir::MutableOperandRange getInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getOutputs();
  ::mlir::Region &getBody();
  ::mlir::ArrayAttr getInputSpecsAttr();
  ::mlir::ArrayAttr getInputSpecs();
  ::mlir::ArrayAttr getOutputSpecsAttr();
  ::mlir::ArrayAttr getOutputSpecs();
  ::mlir::StringAttr getLogicalKernelAttr();
  ::llvm::StringRef getLogicalKernel();
  void setInputSpecsAttr(::mlir::ArrayAttr attr);
  void setOutputSpecsAttr(::mlir::ArrayAttr attr);
  void setLogicalKernelAttr(::mlir::StringAttr attr);
  void setLogicalKernel(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::ValueRange inputs, ::mlir::ArrayAttr input_specs, ::mlir::ArrayAttr output_specs, ::mlir::StringAttr logical_kernel);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange outputs, ::mlir::ValueRange inputs, ::mlir::ArrayAttr input_specs, ::mlir::ArrayAttr output_specs, ::llvm::StringRef logical_kernel);
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
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace quantfork
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::quantfork::QuantizeRegionOp)

namespace mlir {
namespace quantfork {

//===----------------------------------------------------------------------===//
// ::mlir::quantfork::ReturnOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReturnOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ReturnOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ReturnOpGenericAdaptorBase(ReturnOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ReturnOpGenericAdaptor : public detail::ReturnOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReturnOpGenericAdaptorBase;
public:
  ReturnOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReturnOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReturnOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ReturnOp, typename = std::enable_if_t<std::is_same_v<LateInst, ReturnOp>>>
  ReturnOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getResults() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ReturnOpAdaptor : public ReturnOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReturnOpGenericAdaptor::ReturnOpGenericAdaptor;
  ReturnOpAdaptor(ReturnOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReturnOp : public ::mlir::Op<ReturnOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReturnOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReturnOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("quantfork.return");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getResults();
  ::mlir::MutableOperandRange getResultsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange results);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace quantfork
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::quantfork::ReturnOp)

namespace mlir {
namespace quantfork {

//===----------------------------------------------------------------------===//
// ::mlir::quantfork::StatisticsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class StatisticsOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  StatisticsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  StatisticsOpGenericAdaptorBase(StatisticsOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ElementsAttr getLayerStatsAttr();
  ::mlir::ElementsAttr getLayerStats();
  ::mlir::ElementsAttr getAxisStatsAttr();
  ::std::optional< ::mlir::ElementsAttr > getAxisStats();
  ::mlir::IntegerAttr getAxisAttr();
  ::std::optional<uint64_t> getAxis();
};
} // namespace detail
template <typename RangeT>
class StatisticsOpGenericAdaptor : public detail::StatisticsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::StatisticsOpGenericAdaptorBase;
public:
  StatisticsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  StatisticsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : StatisticsOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = StatisticsOp, typename = std::enable_if_t<std::is_same_v<LateInst, StatisticsOp>>>
  StatisticsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class StatisticsOpAdaptor : public StatisticsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using StatisticsOpGenericAdaptor::StatisticsOpGenericAdaptor;
  StatisticsOpAdaptor(StatisticsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class StatisticsOp : public ::mlir::Op<StatisticsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::SameOperandsAndResultType, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = StatisticsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = StatisticsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("axis"), ::llvm::StringRef("axisStats"), ::llvm::StringRef("layerStats")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAxisAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAxisAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getAxisStatsAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getAxisStatsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getLayerStatsAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getLayerStatsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("quantfork.stats");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getArg();
  ::mlir::OpOperand &getArgMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::ElementsAttr getLayerStatsAttr();
  ::mlir::ElementsAttr getLayerStats();
  ::mlir::ElementsAttr getAxisStatsAttr();
  ::std::optional< ::mlir::ElementsAttr > getAxisStats();
  ::mlir::IntegerAttr getAxisAttr();
  ::std::optional<uint64_t> getAxis();
  void setLayerStatsAttr(::mlir::ElementsAttr attr);
  void setAxisStatsAttr(::mlir::ElementsAttr attr);
  void setAxisAttr(::mlir::IntegerAttr attr);
  void setAxis(::std::optional<uint64_t> attrValue);
  ::mlir::Attribute removeAxisStatsAttr();
  ::mlir::Attribute removeAxisAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value arg, ::mlir::ElementsAttr layerStats, /*optional*/::mlir::ElementsAttr axisStats, /*optional*/::mlir::IntegerAttr axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg, ::mlir::ElementsAttr layerStats, /*optional*/::mlir::ElementsAttr axisStats, /*optional*/::mlir::IntegerAttr axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg, ::mlir::ElementsAttr layerStats, /*optional*/::mlir::ElementsAttr axisStats, /*optional*/::mlir::IntegerAttr axis);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
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
} // namespace quantfork
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::quantfork::StatisticsOp)

namespace mlir {
namespace quantfork {

//===----------------------------------------------------------------------===//
// ::mlir::quantfork::StatisticsRefOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class StatisticsRefOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  StatisticsRefOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  StatisticsRefOpGenericAdaptorBase(StatisticsRefOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getStatsKeyAttr();
  ::llvm::StringRef getStatsKey();
};
} // namespace detail
template <typename RangeT>
class StatisticsRefOpGenericAdaptor : public detail::StatisticsRefOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::StatisticsRefOpGenericAdaptorBase;
public:
  StatisticsRefOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  StatisticsRefOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : StatisticsRefOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = StatisticsRefOp, typename = std::enable_if_t<std::is_same_v<LateInst, StatisticsRefOp>>>
  StatisticsRefOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class StatisticsRefOpAdaptor : public StatisticsRefOpGenericAdaptor<::mlir::ValueRange> {
public:
  using StatisticsRefOpGenericAdaptor::StatisticsRefOpGenericAdaptor;
  StatisticsRefOpAdaptor(StatisticsRefOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class StatisticsRefOp : public ::mlir::Op<StatisticsRefOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::SameOperandsAndResultType, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = StatisticsRefOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = StatisticsRefOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("statsKey")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getStatsKeyAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getStatsKeyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("quantfork.stats_ref");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getArg();
  ::mlir::OpOperand &getArgMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::StringAttr getStatsKeyAttr();
  ::llvm::StringRef getStatsKey();
  void setStatsKeyAttr(::mlir::StringAttr attr);
  void setStatsKey(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value arg, ::mlir::StringAttr statsKey);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg, ::mlir::StringAttr statsKey);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg, ::mlir::StringAttr statsKey);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value arg, ::llvm::StringRef statsKey);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg, ::llvm::StringRef statsKey);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg, ::llvm::StringRef statsKey);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
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
} // namespace quantfork
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::quantfork::StatisticsRefOp)

namespace mlir {
namespace quantfork {

//===----------------------------------------------------------------------===//
// ::mlir::quantfork::StorageCastOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class StorageCastOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  StorageCastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  StorageCastOpGenericAdaptorBase(StorageCastOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class StorageCastOpGenericAdaptor : public detail::StorageCastOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::StorageCastOpGenericAdaptorBase;
public:
  StorageCastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  StorageCastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : StorageCastOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = StorageCastOp, typename = std::enable_if_t<std::is_same_v<LateInst, StorageCastOp>>>
  StorageCastOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class StorageCastOpAdaptor : public StorageCastOpGenericAdaptor<::mlir::ValueRange> {
public:
  using StorageCastOpGenericAdaptor::StorageCastOpGenericAdaptor;
  StorageCastOpAdaptor(StorageCastOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class StorageCastOp : public ::mlir::Op<StorageCastOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = StorageCastOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = StorageCastOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("quantfork.scast");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getArg();
  ::mlir::OpOperand &getArgMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::OpFoldResult fold(FoldAdaptor adaptor);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace quantfork
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::quantfork::StorageCastOp)


#endif  // GET_OP_CLASSES

