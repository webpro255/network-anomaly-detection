/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ArmSMEOps.td                                                         *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace arm_sme {
class FMopa2WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class FMops2WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class GetTileOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class LoadTileSliceOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class MaterializeSSATileOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class MoveTileSliceToVectorOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class MoveVectorToTileSliceOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class OuterProductOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class SMopa2WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class SMopa4WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class SMops2WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class SMops4WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class StoreTileSliceOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class StreamingVLOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class SuMopa4WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class SuMops4WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class TileLoadOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class TileStoreOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class UMopa2WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class UMopa4WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class UMops2WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class UMops4WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class UsMopa4WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class UsMops4WayOp;
} // namespace arm_sme
} // namespace mlir
namespace mlir {
namespace arm_sme {
class ZeroOp;
} // namespace arm_sme
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::FMopa2WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class FMopa2WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  FMopa2WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  FMopa2WayOpGenericAdaptorBase(FMopa2WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class FMopa2WayOpGenericAdaptor : public detail::FMopa2WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::FMopa2WayOpGenericAdaptorBase;
public:
  FMopa2WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  FMopa2WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : FMopa2WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = FMopa2WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, FMopa2WayOp>>>
  FMopa2WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class FMopa2WayOpAdaptor : public FMopa2WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using FMopa2WayOpGenericAdaptor::FMopa2WayOpGenericAdaptor;
  FMopa2WayOpAdaptor(FMopa2WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class FMopa2WayOp : public ::mlir::Op<FMopa2WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = FMopa2WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = FMopa2WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.fmopa_2way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::FMopa2WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::FMops2WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class FMops2WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  FMops2WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  FMops2WayOpGenericAdaptorBase(FMops2WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class FMops2WayOpGenericAdaptor : public detail::FMops2WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::FMops2WayOpGenericAdaptorBase;
public:
  FMops2WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  FMops2WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : FMops2WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = FMops2WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, FMops2WayOp>>>
  FMops2WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class FMops2WayOpAdaptor : public FMops2WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using FMops2WayOpGenericAdaptor::FMops2WayOpGenericAdaptor;
  FMops2WayOpAdaptor(FMops2WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class FMops2WayOp : public ::mlir::Op<FMops2WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = FMops2WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = FMops2WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.fmops_2way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::FMops2WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::GetTileOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetTileOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  GetTileOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  GetTileOpGenericAdaptorBase(GetTileOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class GetTileOpGenericAdaptor : public detail::GetTileOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetTileOpGenericAdaptorBase;
public:
  GetTileOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetTileOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetTileOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = GetTileOp, typename = std::enable_if_t<std::is_same_v<LateInst, GetTileOp>>>
  GetTileOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class GetTileOpAdaptor : public GetTileOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetTileOpGenericAdaptor::GetTileOpGenericAdaptor;
  GetTileOpAdaptor(GetTileOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetTileOp : public ::mlir::Op<GetTileOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetTileOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetTileOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sme.get_tile");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getTile();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tile);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  VectorType getTileType() {
    return ::llvm::cast<VectorType>(getTile().getType());
  }

  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    return arm_sme::getSMETileType(getTileType());
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::GetTileOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::LoadTileSliceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LoadTileSliceOpGenericAdaptorBase {
public:
  struct Properties {
    using layoutTy = ::mlir::arm_sme::TileSliceLayoutAttr;
    layoutTy layout;

    auto getLayout() {
      auto &propStorage = this->layout;
      return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(propStorage);
    }
    void setLayout(const ::mlir::arm_sme::TileSliceLayoutAttr &propValue) {
      this->layout = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.layout == this->layout &&
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
  LoadTileSliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  LoadTileSliceOpGenericAdaptorBase(LoadTileSliceOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::arm_sme::TileSliceLayoutAttr getLayoutAttr();
  ::mlir::arm_sme::TileSliceLayout getLayout();
};
} // namespace detail
template <typename RangeT>
class LoadTileSliceOpGenericAdaptor : public detail::LoadTileSliceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LoadTileSliceOpGenericAdaptorBase;
public:
  LoadTileSliceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LoadTileSliceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LoadTileSliceOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = LoadTileSliceOp, typename = std::enable_if_t<std::is_same_v<LateInst, LoadTileSliceOp>>>
  LoadTileSliceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getBase() {
    return (*getODSOperands(0).begin());
  }

  ValueT getMask() {
    return (*getODSOperands(1).begin());
  }

  ValueT getTile() {
    return (*getODSOperands(2).begin());
  }

  RangeT getIndices() {
    return getODSOperands(3);
  }

  ValueT getTileSliceIndex() {
    return (*getODSOperands(4).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class LoadTileSliceOpAdaptor : public LoadTileSliceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LoadTileSliceOpGenericAdaptor::LoadTileSliceOpGenericAdaptor;
  LoadTileSliceOpAdaptor(LoadTileSliceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LoadTileSliceOp : public ::mlir::Op<LoadTileSliceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LoadTileSliceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LoadTileSliceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("layout")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLayoutAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sme.load_tile_slice");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getBase();
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::Value getTile();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::TypedValue<::mlir::IndexType> getTileSliceIndex();
  ::mlir::OpOperand &getBaseMutable();
  ::mlir::OpOperand &getMaskMutable();
  ::mlir::OpOperand &getTileMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
  ::mlir::OpOperand &getTileSliceIndexMutable();
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
  ::mlir::arm_sme::TileSliceLayoutAttr getLayoutAttr();
  ::mlir::arm_sme::TileSliceLayout getLayout();
  void setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr);
  void setLayout(::mlir::arm_sme::TileSliceLayout attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::Value mask, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value base, ::mlir::Value mask, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::Value mask, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::Value mask, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value base, ::mlir::Value mask, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::Value mask, ::mlir::Value tile, ::mlir::ValueRange indices, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
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
  MemRefType getMemRefType() {
    return ::llvm::cast<MemRefType>(getBase().getType());
  }
  VectorType getVectorType() {
    return ::llvm::cast<VectorType>(getResult().getType());
  }
  VectorType getTileType() {
    return getVectorType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::LoadTileSliceOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::MaterializeSSATileOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MaterializeSSATileOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MaterializeSSATileOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  MaterializeSSATileOpGenericAdaptorBase(MaterializeSSATileOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class MaterializeSSATileOpGenericAdaptor : public detail::MaterializeSSATileOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MaterializeSSATileOpGenericAdaptorBase;
public:
  MaterializeSSATileOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MaterializeSSATileOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MaterializeSSATileOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MaterializeSSATileOp, typename = std::enable_if_t<std::is_same_v<LateInst, MaterializeSSATileOp>>>
  MaterializeSSATileOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class MaterializeSSATileOpAdaptor : public MaterializeSSATileOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MaterializeSSATileOpGenericAdaptor::MaterializeSSATileOpGenericAdaptor;
  MaterializeSSATileOpAdaptor(MaterializeSSATileOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MaterializeSSATileOp : public ::mlir::Op<MaterializeSSATileOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MaterializeSSATileOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MaterializeSSATileOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sme.materialize_ssa_tile");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getTile();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tile);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::MaterializeSSATileOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::MoveTileSliceToVectorOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MoveTileSliceToVectorOpGenericAdaptorBase {
public:
  struct Properties {
    using layoutTy = ::mlir::arm_sme::TileSliceLayoutAttr;
    layoutTy layout;

    auto getLayout() {
      auto &propStorage = this->layout;
      return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(propStorage);
    }
    void setLayout(const ::mlir::arm_sme::TileSliceLayoutAttr &propValue) {
      this->layout = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.layout == this->layout &&
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
  MoveTileSliceToVectorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  MoveTileSliceToVectorOpGenericAdaptorBase(MoveTileSliceToVectorOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::arm_sme::TileSliceLayoutAttr getLayoutAttr();
  ::mlir::arm_sme::TileSliceLayout getLayout();
};
} // namespace detail
template <typename RangeT>
class MoveTileSliceToVectorOpGenericAdaptor : public detail::MoveTileSliceToVectorOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MoveTileSliceToVectorOpGenericAdaptorBase;
public:
  MoveTileSliceToVectorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MoveTileSliceToVectorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MoveTileSliceToVectorOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = MoveTileSliceToVectorOp, typename = std::enable_if_t<std::is_same_v<LateInst, MoveTileSliceToVectorOp>>>
  MoveTileSliceToVectorOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTile() {
    return (*getODSOperands(0).begin());
  }

  ValueT getTileSliceIndex() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MoveTileSliceToVectorOpAdaptor : public MoveTileSliceToVectorOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MoveTileSliceToVectorOpGenericAdaptor::MoveTileSliceToVectorOpGenericAdaptor;
  MoveTileSliceToVectorOpAdaptor(MoveTileSliceToVectorOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MoveTileSliceToVectorOp : public ::mlir::Op<MoveTileSliceToVectorOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MoveTileSliceToVectorOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MoveTileSliceToVectorOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("layout")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLayoutAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sme.move_tile_slice_to_vector");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getTile();
  ::mlir::TypedValue<::mlir::IndexType> getTileSliceIndex();
  ::mlir::OpOperand &getTileMutable();
  ::mlir::OpOperand &getTileSliceIndexMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::arm_sme::TileSliceLayoutAttr getLayoutAttr();
  ::mlir::arm_sme::TileSliceLayout getLayout();
  void setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr);
  void setLayout(::mlir::arm_sme::TileSliceLayout attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
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
  VectorType getSliceType() { return getResult().getType(); }
  VectorType getTileType() {
    return ::llvm::cast<VectorType>(getTile().getType());
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::MoveTileSliceToVectorOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::MoveVectorToTileSliceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MoveVectorToTileSliceOpGenericAdaptorBase {
public:
  struct Properties {
    using layoutTy = ::mlir::arm_sme::TileSliceLayoutAttr;
    layoutTy layout;

    auto getLayout() {
      auto &propStorage = this->layout;
      return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(propStorage);
    }
    void setLayout(const ::mlir::arm_sme::TileSliceLayoutAttr &propValue) {
      this->layout = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.layout == this->layout &&
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
  MoveVectorToTileSliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  MoveVectorToTileSliceOpGenericAdaptorBase(MoveVectorToTileSliceOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::arm_sme::TileSliceLayoutAttr getLayoutAttr();
  ::mlir::arm_sme::TileSliceLayout getLayout();
};
} // namespace detail
template <typename RangeT>
class MoveVectorToTileSliceOpGenericAdaptor : public detail::MoveVectorToTileSliceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MoveVectorToTileSliceOpGenericAdaptorBase;
public:
  MoveVectorToTileSliceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MoveVectorToTileSliceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MoveVectorToTileSliceOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = MoveVectorToTileSliceOp, typename = std::enable_if_t<std::is_same_v<LateInst, MoveVectorToTileSliceOp>>>
  MoveVectorToTileSliceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVector() {
    return (*getODSOperands(0).begin());
  }

  ValueT getTile() {
    return (*getODSOperands(1).begin());
  }

  ValueT getTileSliceIndex() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MoveVectorToTileSliceOpAdaptor : public MoveVectorToTileSliceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MoveVectorToTileSliceOpGenericAdaptor::MoveVectorToTileSliceOpGenericAdaptor;
  MoveVectorToTileSliceOpAdaptor(MoveVectorToTileSliceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MoveVectorToTileSliceOp : public ::mlir::Op<MoveVectorToTileSliceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MoveVectorToTileSliceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MoveVectorToTileSliceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("layout")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLayoutAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sme.move_vector_to_tile_slice");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getVector();
  ::mlir::Value getTile();
  ::mlir::TypedValue<::mlir::IndexType> getTileSliceIndex();
  ::mlir::OpOperand &getVectorMutable();
  ::mlir::OpOperand &getTileMutable();
  ::mlir::OpOperand &getTileSliceIndexMutable();
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
  ::mlir::arm_sme::TileSliceLayoutAttr getLayoutAttr();
  ::mlir::arm_sme::TileSliceLayout getLayout();
  void setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr);
  void setLayout(::mlir::arm_sme::TileSliceLayout attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value vector, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
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
  VectorType getTileType() {
    return ::llvm::cast<VectorType>(getTile().getType());
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::MoveVectorToTileSliceOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::OuterProductOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class OuterProductOpGenericAdaptorBase {
public:
  struct Properties {
    using kindTy = ::mlir::arm_sme::CombiningKindAttr;
    kindTy kind;

    auto getKind() {
      auto &propStorage = this->kind;
      return ::llvm::dyn_cast_or_null<::mlir::arm_sme::CombiningKindAttr>(propStorage);
    }
    void setKind(const ::mlir::arm_sme::CombiningKindAttr &propValue) {
      this->kind = propValue;
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
        rhs.kind == this->kind &&
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
  OuterProductOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  OuterProductOpGenericAdaptorBase(OuterProductOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::arm_sme::CombiningKindAttr getKindAttr();
  ::mlir::arm_sme::CombiningKind getKind();
};
} // namespace detail
template <typename RangeT>
class OuterProductOpGenericAdaptor : public detail::OuterProductOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::OuterProductOpGenericAdaptorBase;
public:
  OuterProductOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  OuterProductOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : OuterProductOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = OuterProductOp, typename = std::enable_if_t<std::is_same_v<LateInst, OuterProductOp>>>
  OuterProductOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class OuterProductOpAdaptor : public OuterProductOpGenericAdaptor<::mlir::ValueRange> {
public:
  using OuterProductOpGenericAdaptor::OuterProductOpGenericAdaptor;
  OuterProductOpAdaptor(OuterProductOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class OuterProductOp : public ::mlir::Op<OuterProductOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = OuterProductOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = OuterProductOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("kind"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getKindAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getKindAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sme.outerproduct");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::Value getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  ::mlir::arm_sme::CombiningKindAttr getKindAttr();
  ::mlir::arm_sme::CombiningKind getKind();
  void setKindAttr(::mlir::arm_sme::CombiningKindAttr attr);
  void setKind(::mlir::arm_sme::CombiningKind attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc, ::mlir::arm_sme::CombiningKindAttr kind);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc, ::mlir::arm_sme::CombiningKindAttr kind);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc, ::mlir::arm_sme::CombiningKindAttr kind);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc, ::mlir::arm_sme::CombiningKind kind = CombiningKind::Add);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc, ::mlir::arm_sme::CombiningKind kind = CombiningKind::Add);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc, ::mlir::arm_sme::CombiningKind kind = CombiningKind::Add);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::OuterProductOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::SMopa2WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SMopa2WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  SMopa2WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SMopa2WayOpGenericAdaptorBase(SMopa2WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class SMopa2WayOpGenericAdaptor : public detail::SMopa2WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SMopa2WayOpGenericAdaptorBase;
public:
  SMopa2WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SMopa2WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SMopa2WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SMopa2WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, SMopa2WayOp>>>
  SMopa2WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SMopa2WayOpAdaptor : public SMopa2WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SMopa2WayOpGenericAdaptor::SMopa2WayOpGenericAdaptor;
  SMopa2WayOpAdaptor(SMopa2WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SMopa2WayOp : public ::mlir::Op<SMopa2WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SMopa2WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SMopa2WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.smopa_2way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::SMopa2WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::SMopa4WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SMopa4WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  SMopa4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SMopa4WayOpGenericAdaptorBase(SMopa4WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class SMopa4WayOpGenericAdaptor : public detail::SMopa4WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SMopa4WayOpGenericAdaptorBase;
public:
  SMopa4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SMopa4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SMopa4WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SMopa4WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, SMopa4WayOp>>>
  SMopa4WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SMopa4WayOpAdaptor : public SMopa4WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SMopa4WayOpGenericAdaptor::SMopa4WayOpGenericAdaptor;
  SMopa4WayOpAdaptor(SMopa4WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SMopa4WayOp : public ::mlir::Op<SMopa4WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SMopa4WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SMopa4WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.smopa_4way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::SMopa4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::SMops2WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SMops2WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  SMops2WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SMops2WayOpGenericAdaptorBase(SMops2WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class SMops2WayOpGenericAdaptor : public detail::SMops2WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SMops2WayOpGenericAdaptorBase;
public:
  SMops2WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SMops2WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SMops2WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SMops2WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, SMops2WayOp>>>
  SMops2WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SMops2WayOpAdaptor : public SMops2WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SMops2WayOpGenericAdaptor::SMops2WayOpGenericAdaptor;
  SMops2WayOpAdaptor(SMops2WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SMops2WayOp : public ::mlir::Op<SMops2WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SMops2WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SMops2WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.smops_2way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::SMops2WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::SMops4WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SMops4WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  SMops4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SMops4WayOpGenericAdaptorBase(SMops4WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class SMops4WayOpGenericAdaptor : public detail::SMops4WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SMops4WayOpGenericAdaptorBase;
public:
  SMops4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SMops4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SMops4WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SMops4WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, SMops4WayOp>>>
  SMops4WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SMops4WayOpAdaptor : public SMops4WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SMops4WayOpGenericAdaptor::SMops4WayOpGenericAdaptor;
  SMops4WayOpAdaptor(SMops4WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SMops4WayOp : public ::mlir::Op<SMops4WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SMops4WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SMops4WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.smops_4way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::SMops4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::StoreTileSliceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class StoreTileSliceOpGenericAdaptorBase {
public:
  struct Properties {
    using layoutTy = ::mlir::arm_sme::TileSliceLayoutAttr;
    layoutTy layout;

    auto getLayout() {
      auto &propStorage = this->layout;
      return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(propStorage);
    }
    void setLayout(const ::mlir::arm_sme::TileSliceLayoutAttr &propValue) {
      this->layout = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.layout == this->layout &&
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
  StoreTileSliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  StoreTileSliceOpGenericAdaptorBase(StoreTileSliceOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::arm_sme::TileSliceLayoutAttr getLayoutAttr();
  ::mlir::arm_sme::TileSliceLayout getLayout();
};
} // namespace detail
template <typename RangeT>
class StoreTileSliceOpGenericAdaptor : public detail::StoreTileSliceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::StoreTileSliceOpGenericAdaptorBase;
public:
  StoreTileSliceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  StoreTileSliceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : StoreTileSliceOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = StoreTileSliceOp, typename = std::enable_if_t<std::is_same_v<LateInst, StoreTileSliceOp>>>
  StoreTileSliceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getTile() {
    return (*getODSOperands(0).begin());
  }

  ValueT getTileSliceIndex() {
    return (*getODSOperands(1).begin());
  }

  ValueT getMask() {
    return (*getODSOperands(2).begin());
  }

  ValueT getBase() {
    return (*getODSOperands(3).begin());
  }

  RangeT getIndices() {
    return getODSOperands(4);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class StoreTileSliceOpAdaptor : public StoreTileSliceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using StoreTileSliceOpGenericAdaptor::StoreTileSliceOpGenericAdaptor;
  StoreTileSliceOpAdaptor(StoreTileSliceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class StoreTileSliceOp : public ::mlir::Op<StoreTileSliceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<4>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = StoreTileSliceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = StoreTileSliceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("layout")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLayoutAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sme.store_tile_slice");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getTile();
  ::mlir::TypedValue<::mlir::IndexType> getTileSliceIndex();
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::TypedValue<::mlir::MemRefType> getBase();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::OpOperand &getTileMutable();
  ::mlir::OpOperand &getTileSliceIndexMutable();
  ::mlir::OpOperand &getMaskMutable();
  ::mlir::OpOperand &getBaseMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
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
  ::mlir::arm_sme::TileSliceLayoutAttr getLayoutAttr();
  ::mlir::arm_sme::TileSliceLayout getLayout();
  void setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr);
  void setLayout(::mlir::arm_sme::TileSliceLayout attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::Value mask, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::Value mask, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::Value mask, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tile, ::mlir::Value tile_slice_index, ::mlir::Value mask, ::mlir::Value base, ::mlir::ValueRange indices, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
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
  MemRefType getMemRefType() {
    return ::llvm::cast<MemRefType>(getBase().getType());
  }
  VectorType getVectorType() {
    return ::llvm::cast<VectorType>(getTile().getType());
  }
  VectorType getTileType() {
    return getVectorType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::StoreTileSliceOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::StreamingVLOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class StreamingVLOpGenericAdaptorBase {
public:
  struct Properties {
    using type_sizeTy = ::mlir::arm_sme::TypeSizeAttr;
    type_sizeTy type_size;

    auto getTypeSize() {
      auto &propStorage = this->type_size;
      return ::llvm::cast<::mlir::arm_sme::TypeSizeAttr>(propStorage);
    }
    void setTypeSize(const ::mlir::arm_sme::TypeSizeAttr &propValue) {
      this->type_size = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.type_size == this->type_size &&
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
  StreamingVLOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  StreamingVLOpGenericAdaptorBase(StreamingVLOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::arm_sme::TypeSizeAttr getTypeSizeAttr();
  ::mlir::arm_sme::TypeSize getTypeSize();
};
} // namespace detail
template <typename RangeT>
class StreamingVLOpGenericAdaptor : public detail::StreamingVLOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::StreamingVLOpGenericAdaptorBase;
public:
  StreamingVLOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  StreamingVLOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : StreamingVLOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = StreamingVLOp, typename = std::enable_if_t<std::is_same_v<LateInst, StreamingVLOp>>>
  StreamingVLOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class StreamingVLOpAdaptor : public StreamingVLOpGenericAdaptor<::mlir::ValueRange> {
public:
  using StreamingVLOpGenericAdaptor::StreamingVLOpGenericAdaptor;
  StreamingVLOpAdaptor(StreamingVLOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class StreamingVLOp : public ::mlir::Op<StreamingVLOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IndexType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = StreamingVLOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = StreamingVLOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("type_size")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTypeSizeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTypeSizeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sme.streaming_vl");
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
  ::mlir::arm_sme::TypeSizeAttr getTypeSizeAttr();
  ::mlir::arm_sme::TypeSize getTypeSize();
  void setTypeSizeAttr(::mlir::arm_sme::TypeSizeAttr attr);
  void setTypeSize(::mlir::arm_sme::TypeSize attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::arm_sme::TypeSizeAttr type_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::arm_sme::TypeSizeAttr type_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::arm_sme::TypeSizeAttr type_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::arm_sme::TypeSize type_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::arm_sme::TypeSize type_size);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::arm_sme::TypeSize type_size);
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
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::StreamingVLOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::SuMopa4WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SuMopa4WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  SuMopa4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SuMopa4WayOpGenericAdaptorBase(SuMopa4WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class SuMopa4WayOpGenericAdaptor : public detail::SuMopa4WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SuMopa4WayOpGenericAdaptorBase;
public:
  SuMopa4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SuMopa4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SuMopa4WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SuMopa4WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, SuMopa4WayOp>>>
  SuMopa4WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SuMopa4WayOpAdaptor : public SuMopa4WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SuMopa4WayOpGenericAdaptor::SuMopa4WayOpGenericAdaptor;
  SuMopa4WayOpAdaptor(SuMopa4WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SuMopa4WayOp : public ::mlir::Op<SuMopa4WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SuMopa4WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SuMopa4WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.sumopa_4way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::SuMopa4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::SuMops4WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SuMops4WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  SuMops4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SuMops4WayOpGenericAdaptorBase(SuMops4WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class SuMops4WayOpGenericAdaptor : public detail::SuMops4WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SuMops4WayOpGenericAdaptorBase;
public:
  SuMops4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SuMops4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SuMops4WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SuMops4WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, SuMops4WayOp>>>
  SuMops4WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SuMops4WayOpAdaptor : public SuMops4WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SuMops4WayOpGenericAdaptor::SuMops4WayOpGenericAdaptor;
  SuMops4WayOpAdaptor(SuMops4WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SuMops4WayOp : public ::mlir::Op<SuMops4WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SuMops4WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SuMops4WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.sumops_4way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::SuMops4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::TileLoadOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileLoadOpGenericAdaptorBase {
public:
  struct Properties {
    using layoutTy = ::mlir::arm_sme::TileSliceLayoutAttr;
    layoutTy layout;

    auto getLayout() {
      auto &propStorage = this->layout;
      return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(propStorage);
    }
    void setLayout(const ::mlir::arm_sme::TileSliceLayoutAttr &propValue) {
      this->layout = propValue;
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
        rhs.layout == this->layout &&
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
  TileLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  TileLoadOpGenericAdaptorBase(TileLoadOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::arm_sme::TileSliceLayoutAttr getLayoutAttr();
  ::mlir::arm_sme::TileSliceLayout getLayout();
};
} // namespace detail
template <typename RangeT>
class TileLoadOpGenericAdaptor : public detail::TileLoadOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileLoadOpGenericAdaptorBase;
public:
  TileLoadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TileLoadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TileLoadOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = TileLoadOp, typename = std::enable_if_t<std::is_same_v<LateInst, TileLoadOp>>>
  TileLoadOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getBase() {
    return (*getODSOperands(0).begin());
  }

  RangeT getIndices() {
    return getODSOperands(1);
  }

  ValueT getPadding() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileLoadOpAdaptor : public TileLoadOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileLoadOpGenericAdaptor::TileLoadOpGenericAdaptor;
  TileLoadOpAdaptor(TileLoadOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TileLoadOp : public ::mlir::Op<TileLoadOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileLoadOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileLoadOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("layout"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLayoutAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sme.tile_load");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getBase();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::Value getPadding();
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::OpOperand &getBaseMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
  ::mlir::MutableOperandRange getPaddingMutable();
  ::mlir::MutableOperandRange getMaskMutable();
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
  ::mlir::arm_sme::TileSliceLayoutAttr getLayoutAttr();
  ::mlir::arm_sme::TileSliceLayout getLayout();
  void setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr);
  void setLayout(::mlir::arm_sme::TileSliceLayout attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, VectorType resultType, Value base, ValueRange indices, TileSliceLayout layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, VectorType resultType, Value base, ValueRange indices);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value padding, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value padding, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value padding, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value padding, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
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
  MemRefType getMemRefType() {
    return ::llvm::cast<MemRefType>(getBase().getType());
  }
  VectorType getVectorType() {
    return ::llvm::cast<VectorType>(getResult().getType());
  }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    return arm_sme::getSMETileType(getVectorType());
  }
  VectorType getTileType() {
    return getVectorType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::TileLoadOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::TileStoreOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TileStoreOpGenericAdaptorBase {
public:
  struct Properties {
    using layoutTy = ::mlir::arm_sme::TileSliceLayoutAttr;
    layoutTy layout;

    auto getLayout() {
      auto &propStorage = this->layout;
      return ::llvm::dyn_cast_or_null<::mlir::arm_sme::TileSliceLayoutAttr>(propStorage);
    }
    void setLayout(const ::mlir::arm_sme::TileSliceLayoutAttr &propValue) {
      this->layout = propValue;
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
        rhs.layout == this->layout &&
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
  TileStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  TileStoreOpGenericAdaptorBase(TileStoreOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::arm_sme::TileSliceLayoutAttr getLayoutAttr();
  ::mlir::arm_sme::TileSliceLayout getLayout();
};
} // namespace detail
template <typename RangeT>
class TileStoreOpGenericAdaptor : public detail::TileStoreOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TileStoreOpGenericAdaptorBase;
public:
  TileStoreOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TileStoreOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TileStoreOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = TileStoreOp, typename = std::enable_if_t<std::is_same_v<LateInst, TileStoreOp>>>
  TileStoreOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getValueToStore() {
    return (*getODSOperands(0).begin());
  }

  ValueT getBase() {
    return (*getODSOperands(1).begin());
  }

  RangeT getIndices() {
    return getODSOperands(2);
  }

  ValueT getMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TileStoreOpAdaptor : public TileStoreOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TileStoreOpGenericAdaptor::TileStoreOpGenericAdaptor;
  TileStoreOpAdaptor(TileStoreOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TileStoreOp : public ::mlir::Op<TileStoreOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TileStoreOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TileStoreOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("layout"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLayoutAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLayoutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sme.tile_store");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getValueToStore();
  ::mlir::TypedValue<::mlir::MemRefType> getBase();
  ::mlir::Operation::operand_range getIndices();
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::OpOperand &getValueToStoreMutable();
  ::mlir::OpOperand &getBaseMutable();
  ::mlir::MutableOperandRange getIndicesMutable();
  ::mlir::MutableOperandRange getMaskMutable();
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
  ::mlir::arm_sme::TileSliceLayoutAttr getLayoutAttr();
  ::mlir::arm_sme::TileSliceLayout getLayout();
  void setLayoutAttr(::mlir::arm_sme::TileSliceLayoutAttr attr);
  void setLayout(::mlir::arm_sme::TileSliceLayout attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value valueToStore, Value base, ValueRange indices);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayoutAttr layout);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value valueToStore, ::mlir::Value base, ::mlir::ValueRange indices, /*optional*/::mlir::Value mask, ::mlir::arm_sme::TileSliceLayout layout = TileSliceLayout::Horizontal);
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
  MemRefType getMemRefType() {
    return ::llvm::cast<MemRefType>(getBase().getType());
  }
  VectorType getVectorType() {
    return ::llvm::cast<VectorType>(getValueToStore().getType());
  }
  VectorType getTileType() {
    return getVectorType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::TileStoreOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::UMopa2WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UMopa2WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  UMopa2WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  UMopa2WayOpGenericAdaptorBase(UMopa2WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class UMopa2WayOpGenericAdaptor : public detail::UMopa2WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UMopa2WayOpGenericAdaptorBase;
public:
  UMopa2WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  UMopa2WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : UMopa2WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = UMopa2WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, UMopa2WayOp>>>
  UMopa2WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class UMopa2WayOpAdaptor : public UMopa2WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UMopa2WayOpGenericAdaptor::UMopa2WayOpGenericAdaptor;
  UMopa2WayOpAdaptor(UMopa2WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UMopa2WayOp : public ::mlir::Op<UMopa2WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UMopa2WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UMopa2WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.umopa_2way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::UMopa2WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::UMopa4WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UMopa4WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  UMopa4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  UMopa4WayOpGenericAdaptorBase(UMopa4WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class UMopa4WayOpGenericAdaptor : public detail::UMopa4WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UMopa4WayOpGenericAdaptorBase;
public:
  UMopa4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  UMopa4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : UMopa4WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = UMopa4WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, UMopa4WayOp>>>
  UMopa4WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class UMopa4WayOpAdaptor : public UMopa4WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UMopa4WayOpGenericAdaptor::UMopa4WayOpGenericAdaptor;
  UMopa4WayOpAdaptor(UMopa4WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UMopa4WayOp : public ::mlir::Op<UMopa4WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UMopa4WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UMopa4WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.umopa_4way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::UMopa4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::UMops2WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UMops2WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  UMops2WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  UMops2WayOpGenericAdaptorBase(UMops2WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class UMops2WayOpGenericAdaptor : public detail::UMops2WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UMops2WayOpGenericAdaptorBase;
public:
  UMops2WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  UMops2WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : UMops2WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = UMops2WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, UMops2WayOp>>>
  UMops2WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class UMops2WayOpAdaptor : public UMops2WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UMops2WayOpGenericAdaptor::UMops2WayOpGenericAdaptor;
  UMops2WayOpAdaptor(UMops2WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UMops2WayOp : public ::mlir::Op<UMops2WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UMops2WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UMops2WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.umops_2way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::UMops2WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::UMops4WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UMops4WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  UMops4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  UMops4WayOpGenericAdaptorBase(UMops4WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class UMops4WayOpGenericAdaptor : public detail::UMops4WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UMops4WayOpGenericAdaptorBase;
public:
  UMops4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  UMops4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : UMops4WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = UMops4WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, UMops4WayOp>>>
  UMops4WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class UMops4WayOpAdaptor : public UMops4WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UMops4WayOpGenericAdaptor::UMops4WayOpGenericAdaptor;
  UMops4WayOpAdaptor(UMops4WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UMops4WayOp : public ::mlir::Op<UMops4WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UMops4WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UMops4WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.umops_4way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::UMops4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::UsMopa4WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UsMopa4WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  UsMopa4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  UsMopa4WayOpGenericAdaptorBase(UsMopa4WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class UsMopa4WayOpGenericAdaptor : public detail::UsMopa4WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UsMopa4WayOpGenericAdaptorBase;
public:
  UsMopa4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  UsMopa4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : UsMopa4WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = UsMopa4WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, UsMopa4WayOp>>>
  UsMopa4WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class UsMopa4WayOpAdaptor : public UsMopa4WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UsMopa4WayOpGenericAdaptor::UsMopa4WayOpGenericAdaptor;
  UsMopa4WayOpAdaptor(UsMopa4WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UsMopa4WayOp : public ::mlir::Op<UsMopa4WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UsMopa4WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UsMopa4WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.usmopa_4way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::UsMopa4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::UsMops4WayOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UsMops4WayOpGenericAdaptorBase {
public:
  struct Properties {
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
  UsMops4WayOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  UsMops4WayOpGenericAdaptorBase(UsMops4WayOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class UsMops4WayOpGenericAdaptor : public detail::UsMops4WayOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UsMops4WayOpGenericAdaptorBase;
public:
  UsMops4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  UsMops4WayOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : UsMops4WayOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = UsMops4WayOp, typename = std::enable_if_t<std::is_same_v<LateInst, UsMops4WayOp>>>
  UsMops4WayOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getLhs() {
    return (*getODSOperands(0).begin());
  }

  ValueT getRhs() {
    return (*getODSOperands(1).begin());
  }

  ValueT getLhsMask() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getRhsMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAcc() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class UsMops4WayOpAdaptor : public UsMops4WayOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UsMops4WayOpGenericAdaptor::UsMops4WayOpGenericAdaptor;
  UsMops4WayOpAdaptor(UsMops4WayOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UsMops4WayOp : public ::mlir::Op<UsMops4WayOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UsMops4WayOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UsMops4WayOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("arm_sme.usmops_4way");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getLhs();
  ::mlir::TypedValue<::mlir::VectorType> getRhs();
  ::mlir::TypedValue<::mlir::VectorType> getLhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getRhsMask();
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  ::mlir::MutableOperandRange getLhsMaskMutable();
  ::mlir::MutableOperandRange getRhsMaskMutable();
  ::mlir::MutableOperandRange getAccMutable();
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
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::Value lhsMask, /*optional*/::mlir::Value rhsMask, /*optional*/::mlir::Value acc);
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
  VectorType getLhsType() { return llvm::cast<VectorType>(getLhs().getType()); }
  VectorType getRhsType() { return llvm::cast<VectorType>(getRhs().getType()); }
  VectorType getResultType() { return llvm::cast<VectorType>(getResult().getType()); }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    // The outerproduct op allocates a new tile if no accumulator is passed.
    if (!getAcc())
      return arm_sme::getSMETileType(getResultType());
    return std::nullopt;
  }
  VectorType getTileType() {
    return getResultType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::UsMops4WayOp)

namespace mlir {
namespace arm_sme {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sme::ZeroOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ZeroOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ZeroOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ZeroOpGenericAdaptorBase(ZeroOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ZeroOpGenericAdaptor : public detail::ZeroOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ZeroOpGenericAdaptorBase;
public:
  ZeroOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ZeroOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ZeroOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ZeroOp, typename = std::enable_if_t<std::is_same_v<LateInst, ZeroOp>>>
  ZeroOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ZeroOpAdaptor : public ZeroOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ZeroOpGenericAdaptor::ZeroOpGenericAdaptor;
  ZeroOpAdaptor(ZeroOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ZeroOp : public ::mlir::Op<ZeroOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ArmSMETileOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ZeroOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ZeroOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sme.zero");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  VectorType getVectorType() {
    return ::llvm::cast<VectorType>(getRes().getType());
  }
  std::optional<arm_sme::ArmSMETileType> getAllocatedTileType() {
    return arm_sme::getSMETileType(getVectorType());
  }
  VectorType getTileType() {
    return getVectorType();
  }
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::ZeroOp)


#endif  // GET_OP_CLASSES

