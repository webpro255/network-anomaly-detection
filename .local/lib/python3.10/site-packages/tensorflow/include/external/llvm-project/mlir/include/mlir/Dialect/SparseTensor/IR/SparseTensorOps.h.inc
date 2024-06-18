/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: SparseTensorOps.td                                                   *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace sparse_tensor {
class AssembleOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class BinaryOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class CompressOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class ConcatenateOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class ConvertOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class CrdTranslateOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class DisassembleOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class ExpandOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class ForeachOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class GetStorageSpecifierOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class InsertOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class LoadOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class LvlOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class NewOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class NumberOfEntriesOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class OutOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class PushBackOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class ReduceOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class ReinterpretMapOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class ReorderCOOOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class SelectOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class SetStorageSpecifierOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class SortOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class StorageSpecifierInitOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class ToCoordinatesBufferOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class ToCoordinatesOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class ToPositionsOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class ToSliceOffsetOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class ToSliceStrideOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class ToValuesOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class UnaryOp;
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
class YieldOp;
} // namespace sparse_tensor
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::AssembleOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AssembleOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AssembleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AssembleOpGenericAdaptorBase(AssembleOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AssembleOpGenericAdaptor : public detail::AssembleOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AssembleOpGenericAdaptorBase;
public:
  AssembleOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AssembleOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AssembleOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AssembleOp, typename = std::enable_if_t<std::is_same_v<LateInst, AssembleOp>>>
  AssembleOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getValues() {
    return (*getODSOperands(0).begin());
  }

  RangeT getLevels() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AssembleOpAdaptor : public AssembleOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AssembleOpGenericAdaptor::AssembleOpGenericAdaptor;
  AssembleOpAdaptor(AssembleOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AssembleOp : public ::mlir::Op<AssembleOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AssembleOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AssembleOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.assemble");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getValues();
  ::mlir::Operation::operand_range getLevels();
  ::mlir::OpOperand &getValuesMutable();
  ::mlir::MutableOperandRange getLevelsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value values, ::mlir::ValueRange levels);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value values, ::mlir::ValueRange levels);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::AssembleOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::BinaryOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BinaryOpGenericAdaptorBase {
public:
  struct Properties {
    using left_identityTy = ::mlir::UnitAttr;
    left_identityTy left_identity;

    auto getLeftIdentity() {
      auto &propStorage = this->left_identity;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setLeftIdentity(const ::mlir::UnitAttr &propValue) {
      this->left_identity = propValue;
    }
    using right_identityTy = ::mlir::UnitAttr;
    right_identityTy right_identity;

    auto getRightIdentity() {
      auto &propStorage = this->right_identity;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setRightIdentity(const ::mlir::UnitAttr &propValue) {
      this->right_identity = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.left_identity == this->left_identity &&
        rhs.right_identity == this->right_identity &&
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
  BinaryOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  BinaryOpGenericAdaptorBase(BinaryOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getLeftIdentityAttr();
  bool getLeftIdentity();
  ::mlir::UnitAttr getRightIdentityAttr();
  bool getRightIdentity();
  ::mlir::Region &getOverlapRegion();
  ::mlir::Region &getLeftRegion();
  ::mlir::Region &getRightRegion();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class BinaryOpGenericAdaptor : public detail::BinaryOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BinaryOpGenericAdaptorBase;
public:
  BinaryOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BinaryOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BinaryOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = BinaryOp, typename = std::enable_if_t<std::is_same_v<LateInst, BinaryOp>>>
  BinaryOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getX() {
    return (*getODSOperands(0).begin());
  }

  ValueT getY() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BinaryOpAdaptor : public BinaryOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BinaryOpGenericAdaptor::BinaryOpGenericAdaptor;
  BinaryOpAdaptor(BinaryOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BinaryOp : public ::mlir::Op<BinaryOp, ::mlir::OpTrait::NRegions<3>::Impl, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BinaryOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BinaryOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("left_identity"), ::llvm::StringRef("right_identity")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLeftIdentityAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLeftIdentityAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getRightIdentityAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getRightIdentityAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.binary");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getX();
  ::mlir::Value getY();
  ::mlir::OpOperand &getXMutable();
  ::mlir::OpOperand &getYMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getOutput();
  ::mlir::Region &getOverlapRegion();
  ::mlir::Region &getLeftRegion();
  ::mlir::Region &getRightRegion();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::UnitAttr getLeftIdentityAttr();
  bool getLeftIdentity();
  ::mlir::UnitAttr getRightIdentityAttr();
  bool getRightIdentity();
  void setLeftIdentityAttr(::mlir::UnitAttr attr);
  void setLeftIdentity(bool attrValue);
  void setRightIdentityAttr(::mlir::UnitAttr attr);
  void setRightIdentity(bool attrValue);
  ::mlir::Attribute removeLeftIdentityAttr();
  ::mlir::Attribute removeRightIdentityAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value x, ::mlir::Value y, /*optional*/::mlir::UnitAttr left_identity, /*optional*/::mlir::UnitAttr right_identity = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value y, /*optional*/::mlir::UnitAttr left_identity, /*optional*/::mlir::UnitAttr right_identity = nullptr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value x, ::mlir::Value y, /*optional*/bool left_identity = false, /*optional*/bool right_identity = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value y, /*optional*/bool left_identity = false, /*optional*/bool right_identity = false);
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
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::BinaryOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::CompressOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CompressOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CompressOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CompressOpGenericAdaptorBase(CompressOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CompressOpGenericAdaptor : public detail::CompressOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CompressOpGenericAdaptorBase;
public:
  CompressOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CompressOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CompressOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CompressOp, typename = std::enable_if_t<std::is_same_v<LateInst, CompressOp>>>
  CompressOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getValues() {
    return (*getODSOperands(0).begin());
  }

  ValueT getFilled() {
    return (*getODSOperands(1).begin());
  }

  ValueT getAdded() {
    return (*getODSOperands(2).begin());
  }

  ValueT getCount() {
    return (*getODSOperands(3).begin());
  }

  ValueT getTensor() {
    return (*getODSOperands(4).begin());
  }

  RangeT getLvlCoords() {
    return getODSOperands(5);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CompressOpAdaptor : public CompressOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CompressOpGenericAdaptor::CompressOpGenericAdaptor;
  CompressOpAdaptor(CompressOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CompressOp : public ::mlir::Op<CompressOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<5>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CompressOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CompressOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.compress");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getValues();
  ::mlir::TypedValue<::mlir::MemRefType> getFilled();
  ::mlir::TypedValue<::mlir::MemRefType> getAdded();
  ::mlir::TypedValue<::mlir::IndexType> getCount();
  ::mlir::TypedValue<::mlir::TensorType> getTensor();
  ::mlir::Operation::operand_range getLvlCoords();
  ::mlir::OpOperand &getValuesMutable();
  ::mlir::OpOperand &getFilledMutable();
  ::mlir::OpOperand &getAddedMutable();
  ::mlir::OpOperand &getCountMutable();
  ::mlir::OpOperand &getTensorMutable();
  ::mlir::MutableOperandRange getLvlCoordsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value values, ::mlir::Value filled, ::mlir::Value added, ::mlir::Value count, ::mlir::Value tensor, ::mlir::ValueRange lvlCoords);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value values, ::mlir::Value filled, ::mlir::Value added, ::mlir::Value count, ::mlir::Value tensor, ::mlir::ValueRange lvlCoords);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value values, ::mlir::Value filled, ::mlir::Value added, ::mlir::Value count, ::mlir::Value tensor, ::mlir::ValueRange lvlCoords);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::CompressOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ConcatenateOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConcatenateOpGenericAdaptorBase {
public:
  struct Properties {
    using dimensionTy = ::mlir::IntegerAttr;
    dimensionTy dimension;

    auto getDimension() {
      auto &propStorage = this->dimension;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setDimension(const ::mlir::IntegerAttr &propValue) {
      this->dimension = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.dimension == this->dimension &&
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
  ConcatenateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ConcatenateOpGenericAdaptorBase(ConcatenateOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getDimensionAttr();
  ::mlir::sparse_tensor::Dimension getDimension();
};
} // namespace detail
template <typename RangeT>
class ConcatenateOpGenericAdaptor : public detail::ConcatenateOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConcatenateOpGenericAdaptorBase;
public:
  ConcatenateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConcatenateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConcatenateOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ConcatenateOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConcatenateOp>>>
  ConcatenateOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ConcatenateOpAdaptor : public ConcatenateOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConcatenateOpGenericAdaptor::ConcatenateOpGenericAdaptor;
  ConcatenateOpAdaptor(ConcatenateOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConcatenateOp : public ::mlir::Op<ConcatenateOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::RankedTensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::sparse_tensor::StageWithSortSparseOp::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConcatenateOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConcatenateOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dimension")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDimensionAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDimensionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.concatenate");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getInputs();
  ::mlir::MutableOperandRange getInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::RankedTensorType> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getDimensionAttr();
  ::mlir::sparse_tensor::Dimension getDimension();
  void setDimensionAttr(::mlir::IntegerAttr attr);
  void setDimension(::mlir::sparse_tensor::Dimension attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange inputs, ::mlir::IntegerAttr dimension);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::IntegerAttr dimension);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::ValueRange inputs, ::mlir::sparse_tensor::Dimension dimension);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange inputs, ::mlir::sparse_tensor::Dimension dimension);
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
  // Whether the concatenate can be done by a single step or it would require
  // an extra sort. Inherited from StageWithSortSparseOpInterface.
  bool needsExtraSort();
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ConcatenateOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ConvertOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvertOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConvertOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConvertOpGenericAdaptorBase(ConvertOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ConvertOpGenericAdaptor : public detail::ConvertOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvertOpGenericAdaptorBase;
public:
  ConvertOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvertOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvertOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConvertOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvertOp>>>
  ConvertOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ConvertOpAdaptor : public ConvertOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvertOpGenericAdaptor::ConvertOpGenericAdaptor;
  ConvertOpAdaptor(ConvertOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvertOp : public ::mlir::Op<ConvertOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::sparse_tensor::StageWithSortSparseOp::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvertOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvertOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.convert");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getSource();
  ::mlir::OpOperand &getSourceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getDest();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dest, ::mlir::Value source);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(FoldAdaptor adaptor);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  // Whether the convert can be done by a single step or it would require
  // an extra sort. Inherited from StageWithSortSparseOpInterface.
  bool needsExtraSort();
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ConvertOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::CrdTranslateOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CrdTranslateOpGenericAdaptorBase {
public:
  struct Properties {
    using directionTy = ::mlir::sparse_tensor::CrdTransDirectionKindAttr;
    directionTy direction;

    auto getDirection() {
      auto &propStorage = this->direction;
      return ::llvm::cast<::mlir::sparse_tensor::CrdTransDirectionKindAttr>(propStorage);
    }
    void setDirection(const ::mlir::sparse_tensor::CrdTransDirectionKindAttr &propValue) {
      this->direction = propValue;
    }
    using encoderTy = ::mlir::sparse_tensor::SparseTensorEncodingAttr;
    encoderTy encoder;

    auto getEncoder() {
      auto &propStorage = this->encoder;
      return ::llvm::cast<::mlir::sparse_tensor::SparseTensorEncodingAttr>(propStorage);
    }
    void setEncoder(const ::mlir::sparse_tensor::SparseTensorEncodingAttr &propValue) {
      this->encoder = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.direction == this->direction &&
        rhs.encoder == this->encoder &&
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
  CrdTranslateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  CrdTranslateOpGenericAdaptorBase(CrdTranslateOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::sparse_tensor::CrdTransDirectionKindAttr getDirectionAttr();
  ::mlir::sparse_tensor::CrdTransDirectionKind getDirection();
  ::mlir::sparse_tensor::SparseTensorEncodingAttr getEncoderAttr();
  ::mlir::sparse_tensor::SparseTensorEncodingAttr getEncoder();
};
} // namespace detail
template <typename RangeT>
class CrdTranslateOpGenericAdaptor : public detail::CrdTranslateOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CrdTranslateOpGenericAdaptorBase;
public:
  CrdTranslateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CrdTranslateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CrdTranslateOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = CrdTranslateOp, typename = std::enable_if_t<std::is_same_v<LateInst, CrdTranslateOp>>>
  CrdTranslateOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getInCrds() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CrdTranslateOpAdaptor : public CrdTranslateOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CrdTranslateOpGenericAdaptor::CrdTranslateOpGenericAdaptor;
  CrdTranslateOpAdaptor(CrdTranslateOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CrdTranslateOp : public ::mlir::Op<CrdTranslateOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CrdTranslateOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CrdTranslateOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("direction"), ::llvm::StringRef("encoder")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDirectionAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDirectionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getEncoderAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getEncoderAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.crd_translate");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getInCrds();
  ::mlir::MutableOperandRange getInCrdsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getOutCrds();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::sparse_tensor::CrdTransDirectionKindAttr getDirectionAttr();
  ::mlir::sparse_tensor::CrdTransDirectionKind getDirection();
  ::mlir::sparse_tensor::SparseTensorEncodingAttr getEncoderAttr();
  ::mlir::sparse_tensor::SparseTensorEncodingAttr getEncoder();
  void setDirectionAttr(::mlir::sparse_tensor::CrdTransDirectionKindAttr attr);
  void setDirection(::mlir::sparse_tensor::CrdTransDirectionKind attrValue);
  void setEncoderAttr(::mlir::sparse_tensor::SparseTensorEncodingAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange out_crds, ::mlir::ValueRange in_crds, ::mlir::sparse_tensor::CrdTransDirectionKindAttr direction, ::mlir::sparse_tensor::SparseTensorEncodingAttr encoder);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange out_crds, ::mlir::ValueRange in_crds, ::mlir::sparse_tensor::CrdTransDirectionKind direction, ::mlir::sparse_tensor::SparseTensorEncodingAttr encoder);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::LogicalResult fold(FoldAdaptor adaptor, ::llvm::SmallVectorImpl<::mlir::OpFoldResult> &results);
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
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::CrdTranslateOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::DisassembleOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DisassembleOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DisassembleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  DisassembleOpGenericAdaptorBase(DisassembleOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class DisassembleOpGenericAdaptor : public detail::DisassembleOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DisassembleOpGenericAdaptorBase;
public:
  DisassembleOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DisassembleOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DisassembleOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = DisassembleOp, typename = std::enable_if_t<std::is_same_v<LateInst, DisassembleOp>>>
  DisassembleOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getOutValues() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOutLevels() {
    return getODSOperands(2);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DisassembleOpAdaptor : public DisassembleOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DisassembleOpGenericAdaptor::DisassembleOpGenericAdaptor;
  DisassembleOpAdaptor(DisassembleOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DisassembleOp : public ::mlir::Op<DisassembleOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::AtLeastNResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DisassembleOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DisassembleOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.disassemble");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getTensor();
  ::mlir::TypedValue<::mlir::TensorType> getOutValues();
  ::mlir::Operation::operand_range getOutLevels();
  ::mlir::OpOperand &getTensorMutable();
  ::mlir::OpOperand &getOutValuesMutable();
  ::mlir::MutableOperandRange getOutLevelsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getRetValues();
  ::mlir::Operation::result_range getRetLevels();
  ::mlir::Value getValLen();
  ::mlir::Operation::result_range getLvlLens();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type ret_values, ::mlir::TypeRange ret_levels, ::mlir::Type val_len, ::mlir::TypeRange lvl_lens, ::mlir::Value tensor, ::mlir::Value out_values, ::mlir::ValueRange out_levels);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::Value out_values, ::mlir::ValueRange out_levels);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::DisassembleOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ExpandOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ExpandOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ExpandOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ExpandOpGenericAdaptorBase(ExpandOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ExpandOpGenericAdaptor : public detail::ExpandOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ExpandOpGenericAdaptorBase;
public:
  ExpandOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ExpandOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ExpandOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ExpandOp, typename = std::enable_if_t<std::is_same_v<LateInst, ExpandOp>>>
  ExpandOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ExpandOpAdaptor : public ExpandOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ExpandOpGenericAdaptor::ExpandOpGenericAdaptor;
  ExpandOpAdaptor(ExpandOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ExpandOp : public ::mlir::Op<ExpandOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<4>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ExpandOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ExpandOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.expand");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getTensor();
  ::mlir::OpOperand &getTensorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getValues();
  ::mlir::TypedValue<::mlir::MemRefType> getFilled();
  ::mlir::TypedValue<::mlir::MemRefType> getAdded();
  ::mlir::TypedValue<::mlir::IndexType> getCount();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type values, ::mlir::Type filled, ::mlir::Type added, ::mlir::Type count, ::mlir::Value tensor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ExpandOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ForeachOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ForeachOpGenericAdaptorBase {
public:
  struct Properties {
    using orderTy = ::mlir::AffineMapAttr;
    orderTy order;

    auto getOrder() {
      auto &propStorage = this->order;
      return ::llvm::dyn_cast_or_null<::mlir::AffineMapAttr>(propStorage);
    }
    void setOrder(const ::mlir::AffineMapAttr &propValue) {
      this->order = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.order == this->order &&
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
  ForeachOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ForeachOpGenericAdaptorBase(ForeachOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::AffineMapAttr getOrderAttr();
  ::std::optional< ::mlir::AffineMap > getOrder();
  ::mlir::Region &getRegion();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ForeachOpGenericAdaptor : public detail::ForeachOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ForeachOpGenericAdaptorBase;
public:
  ForeachOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ForeachOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ForeachOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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

  ValueT getTensor() {
    return (*getODSOperands(0).begin());
  }

  RangeT getInitArgs() {
    return getODSOperands(1);
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
class ForeachOp : public ::mlir::Op<ForeachOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::SingleBlockImplicitTerminator<YieldOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ForeachOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ForeachOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("order")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getOrderAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getOrderAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.foreach");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getTensor();
  ::mlir::Operation::operand_range getInitArgs();
  ::mlir::OpOperand &getTensorMutable();
  ::mlir::MutableOperandRange getInitArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResults();
  ::mlir::Region &getRegion();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::AffineMapAttr getOrderAttr();
  ::std::optional< ::mlir::AffineMap > getOrder();
  void setOrderAttr(::mlir::AffineMapAttr attr);
  void setOrder(::std::optional<::mlir::AffineMap> attrValue);
  ::mlir::Attribute removeOrderAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value tensor, ValueRange iterArgs, AffineMapAttr order, function_ref<void(OpBuilder &, Location, ValueRange, Value, ValueRange)> odsArg3);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value tensor, AffineMapAttr order, function_ref<void(OpBuilder &, Location, ValueRange, Value, ValueRange)> bodyBuilder);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value tensor, function_ref<void(OpBuilder &, Location, ValueRange, Value, ValueRange)> bodyBuilder);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value tensor, ValueRange iterArgs, function_ref<void(OpBuilder &, Location, ValueRange, Value, ValueRange)> bodyBuilder);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::Value tensor, ::mlir::ValueRange initArgs, /*optional*/::mlir::AffineMapAttr order);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ForeachOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::GetStorageSpecifierOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GetStorageSpecifierOpGenericAdaptorBase {
public:
  struct Properties {
    using levelTy = ::mlir::IntegerAttr;
    levelTy level;

    auto getLevel() {
      auto &propStorage = this->level;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setLevel(const ::mlir::IntegerAttr &propValue) {
      this->level = propValue;
    }
    using specifierKindTy = ::mlir::sparse_tensor::StorageSpecifierKindAttr;
    specifierKindTy specifierKind;

    auto getSpecifierKind() {
      auto &propStorage = this->specifierKind;
      return ::llvm::cast<::mlir::sparse_tensor::StorageSpecifierKindAttr>(propStorage);
    }
    void setSpecifierKind(const ::mlir::sparse_tensor::StorageSpecifierKindAttr &propValue) {
      this->specifierKind = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.level == this->level &&
        rhs.specifierKind == this->specifierKind &&
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
  GetStorageSpecifierOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  GetStorageSpecifierOpGenericAdaptorBase(GetStorageSpecifierOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::sparse_tensor::StorageSpecifierKindAttr getSpecifierKindAttr();
  ::mlir::sparse_tensor::StorageSpecifierKind getSpecifierKind();
  ::mlir::IntegerAttr getLevelAttr();
  ::std::optional<::mlir::sparse_tensor::Level> getLevel();
};
} // namespace detail
template <typename RangeT>
class GetStorageSpecifierOpGenericAdaptor : public detail::GetStorageSpecifierOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GetStorageSpecifierOpGenericAdaptorBase;
public:
  GetStorageSpecifierOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GetStorageSpecifierOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GetStorageSpecifierOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = GetStorageSpecifierOp, typename = std::enable_if_t<std::is_same_v<LateInst, GetStorageSpecifierOp>>>
  GetStorageSpecifierOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSpecifier() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GetStorageSpecifierOpAdaptor : public GetStorageSpecifierOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GetStorageSpecifierOpGenericAdaptor::GetStorageSpecifierOpGenericAdaptor;
  GetStorageSpecifierOpAdaptor(GetStorageSpecifierOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GetStorageSpecifierOp : public ::mlir::Op<GetStorageSpecifierOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IndexType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GetStorageSpecifierOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GetStorageSpecifierOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("level"), ::llvm::StringRef("specifierKind")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLevelAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLevelAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getSpecifierKindAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getSpecifierKindAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.storage_specifier.get");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType> getSpecifier();
  ::mlir::OpOperand &getSpecifierMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IndexType> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::sparse_tensor::StorageSpecifierKindAttr getSpecifierKindAttr();
  ::mlir::sparse_tensor::StorageSpecifierKind getSpecifierKind();
  ::mlir::IntegerAttr getLevelAttr();
  ::std::optional<::mlir::sparse_tensor::Level> getLevel();
  void setSpecifierKindAttr(::mlir::sparse_tensor::StorageSpecifierKindAttr attr);
  void setSpecifierKind(::mlir::sparse_tensor::StorageSpecifierKind attrValue);
  void setLevelAttr(::mlir::IntegerAttr attr);
  void setLevel(::std::optional<::mlir::sparse_tensor::Level> attrValue);
  ::mlir::Attribute removeLevelAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKind, /*optional*/::mlir::IntegerAttr level);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKind, /*optional*/::mlir::IntegerAttr level);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKind, /*optional*/::mlir::IntegerAttr level);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKind specifierKind, /*optional*/::mlir::IntegerAttr level);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKind specifierKind, /*optional*/::mlir::IntegerAttr level);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKind specifierKind, /*optional*/::mlir::IntegerAttr level);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(FoldAdaptor adaptor);
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
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::GetStorageSpecifierOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::InsertOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class InsertOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  InsertOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  InsertOpGenericAdaptorBase(InsertOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class InsertOpGenericAdaptor : public detail::InsertOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::InsertOpGenericAdaptorBase;
public:
  InsertOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  InsertOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : InsertOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = InsertOp, typename = std::enable_if_t<std::is_same_v<LateInst, InsertOp>>>
  InsertOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getTensor() {
    return (*getODSOperands(1).begin());
  }

  RangeT getLvlCoords() {
    return getODSOperands(2);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class InsertOpAdaptor : public InsertOpGenericAdaptor<::mlir::ValueRange> {
public:
  using InsertOpGenericAdaptor::InsertOpGenericAdaptor;
  InsertOpAdaptor(InsertOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class InsertOp : public ::mlir::Op<InsertOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = InsertOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = InsertOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.insert");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getValue();
  ::mlir::TypedValue<::mlir::TensorType> getTensor();
  ::mlir::Operation::operand_range getLvlCoords();
  ::mlir::OpOperand &getValueMutable();
  ::mlir::OpOperand &getTensorMutable();
  ::mlir::MutableOperandRange getLvlCoordsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value value, ::mlir::Value tensor, ::mlir::ValueRange lvlCoords);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value value, ::mlir::Value tensor, ::mlir::ValueRange lvlCoords);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value value, ::mlir::Value tensor, ::mlir::ValueRange lvlCoords);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::InsertOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::LoadOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LoadOpGenericAdaptorBase {
public:
  struct Properties {
    using hasInsertsTy = ::mlir::UnitAttr;
    hasInsertsTy hasInserts;

    auto getHasInserts() {
      auto &propStorage = this->hasInserts;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setHasInserts(const ::mlir::UnitAttr &propValue) {
      this->hasInserts = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.hasInserts == this->hasInserts &&
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
  LoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  LoadOpGenericAdaptorBase(LoadOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getHasInsertsAttr();
  bool getHasInserts();
};
} // namespace detail
template <typename RangeT>
class LoadOpGenericAdaptor : public detail::LoadOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LoadOpGenericAdaptorBase;
public:
  LoadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LoadOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LoadOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = LoadOp, typename = std::enable_if_t<std::is_same_v<LateInst, LoadOp>>>
  LoadOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class LoadOpAdaptor : public LoadOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LoadOpGenericAdaptor::LoadOpGenericAdaptor;
  LoadOpAdaptor(LoadOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LoadOp : public ::mlir::Op<LoadOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultType, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LoadOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LoadOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("hasInserts")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getHasInsertsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getHasInsertsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.load");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getTensor();
  ::mlir::OpOperand &getTensorMutable();
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
  ::mlir::UnitAttr getHasInsertsAttr();
  bool getHasInserts();
  void setHasInsertsAttr(::mlir::UnitAttr attr);
  void setHasInserts(bool attrValue);
  ::mlir::Attribute removeHasInsertsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor, /*optional*/::mlir::UnitAttr hasInserts);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tensor, /*optional*/::mlir::UnitAttr hasInserts);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, /*optional*/::mlir::UnitAttr hasInserts);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor, /*optional*/bool hasInserts = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tensor, /*optional*/bool hasInserts = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, /*optional*/bool hasInserts = false);
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
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::LoadOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::LvlOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LvlOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  LvlOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  LvlOpGenericAdaptorBase(LvlOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class LvlOpGenericAdaptor : public detail::LvlOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LvlOpGenericAdaptorBase;
public:
  LvlOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LvlOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LvlOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = LvlOp, typename = std::enable_if_t<std::is_same_v<LateInst, LvlOp>>>
  LvlOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getIndex() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class LvlOpAdaptor : public LvlOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LvlOpGenericAdaptor::LvlOpGenericAdaptor;
  LvlOpAdaptor(LvlOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LvlOp : public ::mlir::Op<LvlOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IndexType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LvlOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LvlOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.lvl");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getSource();
  ::mlir::TypedValue<::mlir::IndexType> getIndex();
  ::mlir::OpOperand &getSourceMutable();
  ::mlir::OpOperand &getIndexMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IndexType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value source, int64_t index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source, ::mlir::Value index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value source, ::mlir::Value index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::Value index);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(FoldAdaptor adaptor);
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  /// Helper function to get the index as a simple integer if it is constant.
  std::optional<uint64_t> getConstantLvlIndex();

  /// Interface method for ConditionallySpeculatable.
  Speculation::Speculatability getSpeculatability();
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::LvlOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::NewOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class NewOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  NewOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  NewOpGenericAdaptorBase(NewOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class NewOpGenericAdaptor : public detail::NewOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::NewOpGenericAdaptorBase;
public:
  NewOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  NewOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : NewOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = NewOp, typename = std::enable_if_t<std::is_same_v<LateInst, NewOp>>>
  NewOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class NewOpAdaptor : public NewOpGenericAdaptor<::mlir::ValueRange> {
public:
  using NewOpGenericAdaptor::NewOpGenericAdaptor;
  NewOpAdaptor(NewOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class NewOp : public ::mlir::Op<NewOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = NewOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = NewOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.new");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getSource();
  ::mlir::OpOperand &getSourceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::NewOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::NumberOfEntriesOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class NumberOfEntriesOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  NumberOfEntriesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  NumberOfEntriesOpGenericAdaptorBase(NumberOfEntriesOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class NumberOfEntriesOpGenericAdaptor : public detail::NumberOfEntriesOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::NumberOfEntriesOpGenericAdaptorBase;
public:
  NumberOfEntriesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  NumberOfEntriesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : NumberOfEntriesOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = NumberOfEntriesOp, typename = std::enable_if_t<std::is_same_v<LateInst, NumberOfEntriesOp>>>
  NumberOfEntriesOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class NumberOfEntriesOpAdaptor : public NumberOfEntriesOpGenericAdaptor<::mlir::ValueRange> {
public:
  using NumberOfEntriesOpGenericAdaptor::NumberOfEntriesOpGenericAdaptor;
  NumberOfEntriesOpAdaptor(NumberOfEntriesOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class NumberOfEntriesOp : public ::mlir::Op<NumberOfEntriesOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IndexType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = NumberOfEntriesOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = NumberOfEntriesOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.number_of_entries");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getTensor();
  ::mlir::OpOperand &getTensorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IndexType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tensor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor);
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
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::NumberOfEntriesOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::OutOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class OutOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  OutOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  OutOpGenericAdaptorBase(OutOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class OutOpGenericAdaptor : public detail::OutOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::OutOpGenericAdaptorBase;
public:
  OutOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  OutOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : OutOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = OutOp, typename = std::enable_if_t<std::is_same_v<LateInst, OutOp>>>
  OutOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getDest() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class OutOpAdaptor : public OutOpGenericAdaptor<::mlir::ValueRange> {
public:
  using OutOpGenericAdaptor::OutOpGenericAdaptor;
  OutOpAdaptor(OutOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class OutOp : public ::mlir::Op<OutOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = OutOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = OutOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.out");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getTensor();
  ::mlir::Value getDest();
  ::mlir::OpOperand &getTensorMutable();
  ::mlir::OpOperand &getDestMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value tensor, ::mlir::Value dest);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::Value dest);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::OutOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::PushBackOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PushBackOpGenericAdaptorBase {
public:
  struct Properties {
    using inboundsTy = ::mlir::UnitAttr;
    inboundsTy inbounds;

    auto getInbounds() {
      auto &propStorage = this->inbounds;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setInbounds(const ::mlir::UnitAttr &propValue) {
      this->inbounds = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.inbounds == this->inbounds &&
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
  PushBackOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  PushBackOpGenericAdaptorBase(PushBackOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getInboundsAttr();
  bool getInbounds();
};
} // namespace detail
template <typename RangeT>
class PushBackOpGenericAdaptor : public detail::PushBackOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PushBackOpGenericAdaptorBase;
public:
  PushBackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PushBackOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PushBackOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = PushBackOp, typename = std::enable_if_t<std::is_same_v<LateInst, PushBackOp>>>
  PushBackOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCurSize() {
    return (*getODSOperands(0).begin());
  }

  ValueT getInBuffer() {
    return (*getODSOperands(1).begin());
  }

  ValueT getValue() {
    return (*getODSOperands(2).begin());
  }

  ValueT getN() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PushBackOpAdaptor : public PushBackOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PushBackOpGenericAdaptor::PushBackOpGenericAdaptor;
  PushBackOpAdaptor(PushBackOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PushBackOp : public ::mlir::Op<PushBackOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PushBackOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PushBackOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("inbounds")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInboundsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInboundsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.push_back");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IndexType> getCurSize();
  ::mlir::TypedValue<::mlir::MemRefType> getInBuffer();
  ::mlir::Value getValue();
  ::mlir::TypedValue<::mlir::IndexType> getN();
  ::mlir::OpOperand &getCurSizeMutable();
  ::mlir::OpOperand &getInBufferMutable();
  ::mlir::OpOperand &getValueMutable();
  ::mlir::MutableOperandRange getNMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getOutBuffer();
  ::mlir::TypedValue<::mlir::IndexType> getNewSize();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::UnitAttr getInboundsAttr();
  bool getInbounds();
  void setInboundsAttr(::mlir::UnitAttr attr);
  void setInbounds(bool attrValue);
  ::mlir::Attribute removeInboundsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value curSize, Value inBuffer, Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type outBuffer, ::mlir::Type newSize, ::mlir::Value curSize, ::mlir::Value inBuffer, ::mlir::Value value, /*optional*/::mlir::Value n, /*optional*/::mlir::UnitAttr inbounds);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value curSize, ::mlir::Value inBuffer, ::mlir::Value value, /*optional*/::mlir::Value n, /*optional*/::mlir::UnitAttr inbounds);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value curSize, ::mlir::Value inBuffer, ::mlir::Value value, /*optional*/::mlir::Value n, /*optional*/::mlir::UnitAttr inbounds);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type outBuffer, ::mlir::Type newSize, ::mlir::Value curSize, ::mlir::Value inBuffer, ::mlir::Value value, /*optional*/::mlir::Value n, /*optional*/bool inbounds = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value curSize, ::mlir::Value inBuffer, ::mlir::Value value, /*optional*/::mlir::Value n, /*optional*/bool inbounds = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value curSize, ::mlir::Value inBuffer, ::mlir::Value value, /*optional*/::mlir::Value n, /*optional*/bool inbounds = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::PushBackOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ReduceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReduceOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ReduceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ReduceOpGenericAdaptorBase(ReduceOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getRegion();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ReduceOpGenericAdaptor : public detail::ReduceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReduceOpGenericAdaptorBase;
public:
  ReduceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReduceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReduceOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ReduceOp, typename = std::enable_if_t<std::is_same_v<LateInst, ReduceOp>>>
  ReduceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getX() {
    return (*getODSOperands(0).begin());
  }

  ValueT getY() {
    return (*getODSOperands(1).begin());
  }

  ValueT getIdentity() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ReduceOpAdaptor : public ReduceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReduceOpGenericAdaptor::ReduceOpGenericAdaptor;
  ReduceOpAdaptor(ReduceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReduceOp : public ::mlir::Op<ReduceOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultType, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReduceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReduceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.reduce");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getX();
  ::mlir::Value getY();
  ::mlir::Value getIdentity();
  ::mlir::OpOperand &getXMutable();
  ::mlir::OpOperand &getYMutable();
  ::mlir::OpOperand &getIdentityMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getOutput();
  ::mlir::Region &getRegion();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value x, ::mlir::Value y, ::mlir::Value identity);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, ::mlir::Value y, ::mlir::Value identity);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value y, ::mlir::Value identity);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ReduceOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ReinterpretMapOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReinterpretMapOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ReinterpretMapOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ReinterpretMapOpGenericAdaptorBase(ReinterpretMapOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ReinterpretMapOpGenericAdaptor : public detail::ReinterpretMapOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReinterpretMapOpGenericAdaptorBase;
public:
  ReinterpretMapOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReinterpretMapOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReinterpretMapOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ReinterpretMapOp, typename = std::enable_if_t<std::is_same_v<LateInst, ReinterpretMapOp>>>
  ReinterpretMapOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ReinterpretMapOpAdaptor : public ReinterpretMapOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReinterpretMapOpGenericAdaptor::ReinterpretMapOpGenericAdaptor;
  ReinterpretMapOpAdaptor(ReinterpretMapOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReinterpretMapOp : public ::mlir::Op<ReinterpretMapOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReinterpretMapOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReinterpretMapOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.reinterpret_map");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getSource();
  ::mlir::OpOperand &getSourceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getDest();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, SparseTensorEncodingAttr dstEnc, Value source);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dest, ::mlir::Value source);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(FoldAdaptor adaptor);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ReinterpretMapOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ReorderCOOOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReorderCOOOpGenericAdaptorBase {
public:
  struct Properties {
    using algorithmTy = ::mlir::sparse_tensor::SparseTensorSortKindAttr;
    algorithmTy algorithm;

    auto getAlgorithm() {
      auto &propStorage = this->algorithm;
      return ::llvm::cast<::mlir::sparse_tensor::SparseTensorSortKindAttr>(propStorage);
    }
    void setAlgorithm(const ::mlir::sparse_tensor::SparseTensorSortKindAttr &propValue) {
      this->algorithm = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.algorithm == this->algorithm &&
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
  ReorderCOOOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ReorderCOOOpGenericAdaptorBase(ReorderCOOOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::sparse_tensor::SparseTensorSortKindAttr getAlgorithmAttr();
  ::mlir::sparse_tensor::SparseTensorSortKind getAlgorithm();
};
} // namespace detail
template <typename RangeT>
class ReorderCOOOpGenericAdaptor : public detail::ReorderCOOOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReorderCOOOpGenericAdaptorBase;
public:
  ReorderCOOOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReorderCOOOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReorderCOOOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ReorderCOOOp, typename = std::enable_if_t<std::is_same_v<LateInst, ReorderCOOOp>>>
  ReorderCOOOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInputCoo() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ReorderCOOOpAdaptor : public ReorderCOOOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReorderCOOOpGenericAdaptor::ReorderCOOOpGenericAdaptor;
  ReorderCOOOpAdaptor(ReorderCOOOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReorderCOOOp : public ::mlir::Op<ReorderCOOOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReorderCOOOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReorderCOOOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("algorithm")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAlgorithmAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAlgorithmAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.reorder_coo");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getInputCoo();
  ::mlir::OpOperand &getInputCooMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResultCoo();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::sparse_tensor::SparseTensorSortKindAttr getAlgorithmAttr();
  ::mlir::sparse_tensor::SparseTensorSortKind getAlgorithm();
  void setAlgorithmAttr(::mlir::sparse_tensor::SparseTensorSortKindAttr attr);
  void setAlgorithm(::mlir::sparse_tensor::SparseTensorSortKind attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result_coo, ::mlir::Value input_coo, ::mlir::sparse_tensor::SparseTensorSortKindAttr algorithm);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input_coo, ::mlir::sparse_tensor::SparseTensorSortKindAttr algorithm);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result_coo, ::mlir::Value input_coo, ::mlir::sparse_tensor::SparseTensorSortKind algorithm);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value input_coo, ::mlir::sparse_tensor::SparseTensorSortKind algorithm);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(FoldAdaptor adaptor);
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
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ReorderCOOOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::SelectOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SelectOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  SelectOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  SelectOpGenericAdaptorBase(SelectOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getRegion();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class SelectOpGenericAdaptor : public detail::SelectOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SelectOpGenericAdaptorBase;
public:
  SelectOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SelectOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SelectOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

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

  ValueT getX() {
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
class SelectOp : public ::mlir::Op<SelectOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultType, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SelectOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SelectOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.select");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getX();
  ::mlir::OpOperand &getXMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getOutput();
  ::mlir::Region &getRegion();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value x);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::SelectOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::SetStorageSpecifierOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SetStorageSpecifierOpGenericAdaptorBase {
public:
  struct Properties {
    using levelTy = ::mlir::IntegerAttr;
    levelTy level;

    auto getLevel() {
      auto &propStorage = this->level;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setLevel(const ::mlir::IntegerAttr &propValue) {
      this->level = propValue;
    }
    using specifierKindTy = ::mlir::sparse_tensor::StorageSpecifierKindAttr;
    specifierKindTy specifierKind;

    auto getSpecifierKind() {
      auto &propStorage = this->specifierKind;
      return ::llvm::cast<::mlir::sparse_tensor::StorageSpecifierKindAttr>(propStorage);
    }
    void setSpecifierKind(const ::mlir::sparse_tensor::StorageSpecifierKindAttr &propValue) {
      this->specifierKind = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.level == this->level &&
        rhs.specifierKind == this->specifierKind &&
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
  SetStorageSpecifierOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SetStorageSpecifierOpGenericAdaptorBase(SetStorageSpecifierOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::sparse_tensor::StorageSpecifierKindAttr getSpecifierKindAttr();
  ::mlir::sparse_tensor::StorageSpecifierKind getSpecifierKind();
  ::mlir::IntegerAttr getLevelAttr();
  ::std::optional<::mlir::sparse_tensor::Level> getLevel();
};
} // namespace detail
template <typename RangeT>
class SetStorageSpecifierOpGenericAdaptor : public detail::SetStorageSpecifierOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SetStorageSpecifierOpGenericAdaptorBase;
public:
  SetStorageSpecifierOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SetStorageSpecifierOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SetStorageSpecifierOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SetStorageSpecifierOp, typename = std::enable_if_t<std::is_same_v<LateInst, SetStorageSpecifierOp>>>
  SetStorageSpecifierOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSpecifier() {
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
class SetStorageSpecifierOpAdaptor : public SetStorageSpecifierOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SetStorageSpecifierOpGenericAdaptor::SetStorageSpecifierOpGenericAdaptor;
  SetStorageSpecifierOpAdaptor(SetStorageSpecifierOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SetStorageSpecifierOp : public ::mlir::Op<SetStorageSpecifierOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::sparse_tensor::StorageSpecifierType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SetStorageSpecifierOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SetStorageSpecifierOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("level"), ::llvm::StringRef("specifierKind")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLevelAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLevelAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getSpecifierKindAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getSpecifierKindAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.storage_specifier.set");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType> getSpecifier();
  ::mlir::TypedValue<::mlir::IndexType> getValue();
  ::mlir::OpOperand &getSpecifierMutable();
  ::mlir::OpOperand &getValueMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::sparse_tensor::StorageSpecifierKindAttr getSpecifierKindAttr();
  ::mlir::sparse_tensor::StorageSpecifierKind getSpecifierKind();
  ::mlir::IntegerAttr getLevelAttr();
  ::std::optional<::mlir::sparse_tensor::Level> getLevel();
  void setSpecifierKindAttr(::mlir::sparse_tensor::StorageSpecifierKindAttr attr);
  void setSpecifierKind(::mlir::sparse_tensor::StorageSpecifierKind attrValue);
  void setLevelAttr(::mlir::IntegerAttr attr);
  void setLevel(::std::optional<::mlir::sparse_tensor::Level> attrValue);
  ::mlir::Attribute removeLevelAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKind, /*optional*/::mlir::IntegerAttr level, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKind, /*optional*/::mlir::IntegerAttr level, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKindAttr specifierKind, /*optional*/::mlir::IntegerAttr level, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKind specifierKind, /*optional*/::mlir::IntegerAttr level, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKind specifierKind, /*optional*/::mlir::IntegerAttr level, ::mlir::Value value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value specifier, ::mlir::sparse_tensor::StorageSpecifierKind specifierKind, /*optional*/::mlir::IntegerAttr level, ::mlir::Value value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::SetStorageSpecifierOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::SortOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SortOpGenericAdaptorBase {
public:
  struct Properties {
    using algorithmTy = ::mlir::sparse_tensor::SparseTensorSortKindAttr;
    algorithmTy algorithm;

    auto getAlgorithm() {
      auto &propStorage = this->algorithm;
      return ::llvm::cast<::mlir::sparse_tensor::SparseTensorSortKindAttr>(propStorage);
    }
    void setAlgorithm(const ::mlir::sparse_tensor::SparseTensorSortKindAttr &propValue) {
      this->algorithm = propValue;
    }
    using nyTy = ::mlir::IntegerAttr;
    nyTy ny;

    auto getNy() {
      auto &propStorage = this->ny;
      return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(propStorage);
    }
    void setNy(const ::mlir::IntegerAttr &propValue) {
      this->ny = propValue;
    }
    using perm_mapTy = ::mlir::AffineMapAttr;
    perm_mapTy perm_map;

    auto getPermMap() {
      auto &propStorage = this->perm_map;
      return ::llvm::cast<::mlir::AffineMapAttr>(propStorage);
    }
    void setPermMap(const ::mlir::AffineMapAttr &propValue) {
      this->perm_map = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.algorithm == this->algorithm &&
        rhs.ny == this->ny &&
        rhs.perm_map == this->perm_map &&
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
  SortOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SortOpGenericAdaptorBase(SortOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::AffineMapAttr getPermMapAttr();
  ::mlir::AffineMap getPermMap();
  ::mlir::IntegerAttr getNyAttr();
  ::std::optional< ::llvm::APInt > getNy();
  ::mlir::sparse_tensor::SparseTensorSortKindAttr getAlgorithmAttr();
  ::mlir::sparse_tensor::SparseTensorSortKind getAlgorithm();
};
} // namespace detail
template <typename RangeT>
class SortOpGenericAdaptor : public detail::SortOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SortOpGenericAdaptorBase;
public:
  SortOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SortOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SortOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SortOp, typename = std::enable_if_t<std::is_same_v<LateInst, SortOp>>>
  SortOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getN() {
    return (*getODSOperands(0).begin());
  }

  ValueT getXy() {
    return (*getODSOperands(1).begin());
  }

  RangeT getYs() {
    return getODSOperands(2);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SortOpAdaptor : public SortOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SortOpGenericAdaptor::SortOpGenericAdaptor;
  SortOpAdaptor(SortOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SortOp : public ::mlir::Op<SortOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SortOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SortOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("algorithm"), ::llvm::StringRef("ny"), ::llvm::StringRef("perm_map")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAlgorithmAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAlgorithmAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getNyAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getNyAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getPermMapAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getPermMapAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.sort");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IndexType> getN();
  ::mlir::TypedValue<::mlir::MemRefType> getXy();
  ::mlir::Operation::operand_range getYs();
  ::mlir::OpOperand &getNMutable();
  ::mlir::OpOperand &getXyMutable();
  ::mlir::MutableOperandRange getYsMutable();
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
  ::mlir::AffineMapAttr getPermMapAttr();
  ::mlir::AffineMap getPermMap();
  ::mlir::IntegerAttr getNyAttr();
  ::std::optional< ::llvm::APInt > getNy();
  ::mlir::sparse_tensor::SparseTensorSortKindAttr getAlgorithmAttr();
  ::mlir::sparse_tensor::SparseTensorSortKind getAlgorithm();
  void setPermMapAttr(::mlir::AffineMapAttr attr);
  void setPermMap(::mlir::AffineMap attrValue);
  void setNyAttr(::mlir::IntegerAttr attr);
  void setNy(::std::optional<::llvm::APInt> attrValue);
  void setAlgorithmAttr(::mlir::sparse_tensor::SparseTensorSortKindAttr attr);
  void setAlgorithm(::mlir::sparse_tensor::SparseTensorSortKind attrValue);
  ::mlir::Attribute removeNyAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value n, ::mlir::Value xy, ::mlir::ValueRange ys, ::mlir::AffineMapAttr perm_map, /*optional*/::mlir::IntegerAttr ny, ::mlir::sparse_tensor::SparseTensorSortKindAttr algorithm);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value n, ::mlir::Value xy, ::mlir::ValueRange ys, ::mlir::AffineMapAttr perm_map, /*optional*/::mlir::IntegerAttr ny, ::mlir::sparse_tensor::SparseTensorSortKindAttr algorithm);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value n, ::mlir::Value xy, ::mlir::ValueRange ys, ::mlir::AffineMap perm_map, /*optional*/::mlir::IntegerAttr ny, ::mlir::sparse_tensor::SparseTensorSortKind algorithm);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value n, ::mlir::Value xy, ::mlir::ValueRange ys, ::mlir::AffineMap perm_map, /*optional*/::mlir::IntegerAttr ny, ::mlir::sparse_tensor::SparseTensorSortKind algorithm);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::SortOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::StorageSpecifierInitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class StorageSpecifierInitOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  StorageSpecifierInitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  StorageSpecifierInitOpGenericAdaptorBase(StorageSpecifierInitOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class StorageSpecifierInitOpGenericAdaptor : public detail::StorageSpecifierInitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::StorageSpecifierInitOpGenericAdaptorBase;
public:
  StorageSpecifierInitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  StorageSpecifierInitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : StorageSpecifierInitOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = StorageSpecifierInitOp, typename = std::enable_if_t<std::is_same_v<LateInst, StorageSpecifierInitOp>>>
  StorageSpecifierInitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSource() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class StorageSpecifierInitOpAdaptor : public StorageSpecifierInitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using StorageSpecifierInitOpGenericAdaptor::StorageSpecifierInitOpGenericAdaptor;
  StorageSpecifierInitOpAdaptor(StorageSpecifierInitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class StorageSpecifierInitOp : public ::mlir::Op<StorageSpecifierInitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::sparse_tensor::StorageSpecifierType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = StorageSpecifierInitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = StorageSpecifierInitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.storage_specifier.init");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType> getSource();
  ::mlir::MutableOperandRange getSourceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::sparse_tensor::StorageSpecifierType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Type result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, /*optional*/::mlir::Value source);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value source);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::StorageSpecifierInitOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ToCoordinatesBufferOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ToCoordinatesBufferOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ToCoordinatesBufferOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ToCoordinatesBufferOpGenericAdaptorBase(ToCoordinatesBufferOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ToCoordinatesBufferOpGenericAdaptor : public detail::ToCoordinatesBufferOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ToCoordinatesBufferOpGenericAdaptorBase;
public:
  ToCoordinatesBufferOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ToCoordinatesBufferOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ToCoordinatesBufferOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ToCoordinatesBufferOp, typename = std::enable_if_t<std::is_same_v<LateInst, ToCoordinatesBufferOp>>>
  ToCoordinatesBufferOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ToCoordinatesBufferOpAdaptor : public ToCoordinatesBufferOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ToCoordinatesBufferOpGenericAdaptor::ToCoordinatesBufferOpGenericAdaptor;
  ToCoordinatesBufferOpAdaptor(ToCoordinatesBufferOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ToCoordinatesBufferOp : public ::mlir::Op<ToCoordinatesBufferOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ToCoordinatesBufferOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ToCoordinatesBufferOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.coordinates_buffer");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getTensor();
  ::mlir::OpOperand &getTensorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ToCoordinatesBufferOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ToCoordinatesOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ToCoordinatesOpGenericAdaptorBase {
public:
  struct Properties {
    using levelTy = ::mlir::IntegerAttr;
    levelTy level;

    auto getLevel() {
      auto &propStorage = this->level;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setLevel(const ::mlir::IntegerAttr &propValue) {
      this->level = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.level == this->level &&
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
  ToCoordinatesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ToCoordinatesOpGenericAdaptorBase(ToCoordinatesOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getLevelAttr();
  ::mlir::sparse_tensor::Level getLevel();
};
} // namespace detail
template <typename RangeT>
class ToCoordinatesOpGenericAdaptor : public detail::ToCoordinatesOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ToCoordinatesOpGenericAdaptorBase;
public:
  ToCoordinatesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ToCoordinatesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ToCoordinatesOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ToCoordinatesOp, typename = std::enable_if_t<std::is_same_v<LateInst, ToCoordinatesOp>>>
  ToCoordinatesOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ToCoordinatesOpAdaptor : public ToCoordinatesOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ToCoordinatesOpGenericAdaptor::ToCoordinatesOpGenericAdaptor;
  ToCoordinatesOpAdaptor(ToCoordinatesOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ToCoordinatesOp : public ::mlir::Op<ToCoordinatesOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ToCoordinatesOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ToCoordinatesOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("level")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLevelAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLevelAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.coordinates");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getTensor();
  ::mlir::OpOperand &getTensorMutable();
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
  ::mlir::IntegerAttr getLevelAttr();
  ::mlir::sparse_tensor::Level getLevel();
  void setLevelAttr(::mlir::IntegerAttr attr);
  void setLevel(::mlir::sparse_tensor::Level attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor, ::mlir::IntegerAttr level);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::IntegerAttr level);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor, ::mlir::sparse_tensor::Level level);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::sparse_tensor::Level level);
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
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ToCoordinatesOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ToPositionsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ToPositionsOpGenericAdaptorBase {
public:
  struct Properties {
    using levelTy = ::mlir::IntegerAttr;
    levelTy level;

    auto getLevel() {
      auto &propStorage = this->level;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setLevel(const ::mlir::IntegerAttr &propValue) {
      this->level = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.level == this->level &&
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
  ToPositionsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ToPositionsOpGenericAdaptorBase(ToPositionsOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getLevelAttr();
  ::mlir::sparse_tensor::Level getLevel();
};
} // namespace detail
template <typename RangeT>
class ToPositionsOpGenericAdaptor : public detail::ToPositionsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ToPositionsOpGenericAdaptorBase;
public:
  ToPositionsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ToPositionsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ToPositionsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ToPositionsOp, typename = std::enable_if_t<std::is_same_v<LateInst, ToPositionsOp>>>
  ToPositionsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ToPositionsOpAdaptor : public ToPositionsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ToPositionsOpGenericAdaptor::ToPositionsOpGenericAdaptor;
  ToPositionsOpAdaptor(ToPositionsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ToPositionsOp : public ::mlir::Op<ToPositionsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ToPositionsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ToPositionsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("level")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getLevelAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getLevelAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.positions");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getTensor();
  ::mlir::OpOperand &getTensorMutable();
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
  ::mlir::IntegerAttr getLevelAttr();
  ::mlir::sparse_tensor::Level getLevel();
  void setLevelAttr(::mlir::IntegerAttr attr);
  void setLevel(::mlir::sparse_tensor::Level attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor, ::mlir::IntegerAttr level);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::IntegerAttr level);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor, ::mlir::sparse_tensor::Level level);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor, ::mlir::sparse_tensor::Level level);
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
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ToPositionsOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ToSliceOffsetOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ToSliceOffsetOpGenericAdaptorBase {
public:
  struct Properties {
    using dimTy = ::mlir::IntegerAttr;
    dimTy dim;

    auto getDim() {
      auto &propStorage = this->dim;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setDim(const ::mlir::IntegerAttr &propValue) {
      this->dim = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.dim == this->dim &&
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
  ToSliceOffsetOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ToSliceOffsetOpGenericAdaptorBase(ToSliceOffsetOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getDimAttr();
  ::llvm::APInt getDim();
};
} // namespace detail
template <typename RangeT>
class ToSliceOffsetOpGenericAdaptor : public detail::ToSliceOffsetOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ToSliceOffsetOpGenericAdaptorBase;
public:
  ToSliceOffsetOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ToSliceOffsetOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ToSliceOffsetOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ToSliceOffsetOp, typename = std::enable_if_t<std::is_same_v<LateInst, ToSliceOffsetOp>>>
  ToSliceOffsetOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSlice() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ToSliceOffsetOpAdaptor : public ToSliceOffsetOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ToSliceOffsetOpGenericAdaptor::ToSliceOffsetOpGenericAdaptor;
  ToSliceOffsetOpAdaptor(ToSliceOffsetOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ToSliceOffsetOp : public ::mlir::Op<ToSliceOffsetOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IndexType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ToSliceOffsetOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ToSliceOffsetOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dim")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDimAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDimAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.slice.offset");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getSlice();
  ::mlir::OpOperand &getSliceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IndexType> getOffset();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getDimAttr();
  ::llvm::APInt getDim();
  void setDimAttr(::mlir::IntegerAttr attr);
  void setDim(::llvm::APInt attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type offset, ::mlir::Value slice, ::mlir::IntegerAttr dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value slice, ::mlir::IntegerAttr dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value slice, ::mlir::IntegerAttr dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type offset, ::mlir::Value slice, ::llvm::APInt dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value slice, ::llvm::APInt dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value slice, ::llvm::APInt dim);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ToSliceOffsetOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ToSliceStrideOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ToSliceStrideOpGenericAdaptorBase {
public:
  struct Properties {
    using dimTy = ::mlir::IntegerAttr;
    dimTy dim;

    auto getDim() {
      auto &propStorage = this->dim;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setDim(const ::mlir::IntegerAttr &propValue) {
      this->dim = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.dim == this->dim &&
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
  ToSliceStrideOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ToSliceStrideOpGenericAdaptorBase(ToSliceStrideOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getDimAttr();
  ::llvm::APInt getDim();
};
} // namespace detail
template <typename RangeT>
class ToSliceStrideOpGenericAdaptor : public detail::ToSliceStrideOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ToSliceStrideOpGenericAdaptorBase;
public:
  ToSliceStrideOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ToSliceStrideOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ToSliceStrideOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ToSliceStrideOp, typename = std::enable_if_t<std::is_same_v<LateInst, ToSliceStrideOp>>>
  ToSliceStrideOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSlice() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ToSliceStrideOpAdaptor : public ToSliceStrideOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ToSliceStrideOpGenericAdaptor::ToSliceStrideOpGenericAdaptor;
  ToSliceStrideOpAdaptor(ToSliceStrideOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ToSliceStrideOp : public ::mlir::Op<ToSliceStrideOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IndexType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ToSliceStrideOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ToSliceStrideOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("dim")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDimAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDimAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.slice.stride");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getSlice();
  ::mlir::OpOperand &getSliceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IndexType> getStride();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getDimAttr();
  ::llvm::APInt getDim();
  void setDimAttr(::mlir::IntegerAttr attr);
  void setDim(::llvm::APInt attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type stride, ::mlir::Value slice, ::mlir::IntegerAttr dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value slice, ::mlir::IntegerAttr dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value slice, ::mlir::IntegerAttr dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type stride, ::mlir::Value slice, ::llvm::APInt dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value slice, ::llvm::APInt dim);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value slice, ::llvm::APInt dim);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ToSliceStrideOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::ToValuesOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ToValuesOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ToValuesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ToValuesOpGenericAdaptorBase(ToValuesOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ToValuesOpGenericAdaptor : public detail::ToValuesOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ToValuesOpGenericAdaptorBase;
public:
  ToValuesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ToValuesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ToValuesOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ToValuesOp, typename = std::enable_if_t<std::is_same_v<LateInst, ToValuesOp>>>
  ToValuesOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ToValuesOpAdaptor : public ToValuesOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ToValuesOpGenericAdaptor::ToValuesOpGenericAdaptor;
  ToValuesOpAdaptor(ToValuesOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ToValuesOp : public ::mlir::Op<ToValuesOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ToValuesOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ToValuesOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.values");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getTensor();
  ::mlir::OpOperand &getTensorMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value tensor);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value tensor);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::ToValuesOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::UnaryOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UnaryOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  UnaryOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  UnaryOpGenericAdaptorBase(UnaryOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getPresentRegion();
  ::mlir::Region &getAbsentRegion();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class UnaryOpGenericAdaptor : public detail::UnaryOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UnaryOpGenericAdaptorBase;
public:
  UnaryOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  UnaryOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : UnaryOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = UnaryOp, typename = std::enable_if_t<std::is_same_v<LateInst, UnaryOp>>>
  UnaryOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getX() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class UnaryOpAdaptor : public UnaryOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UnaryOpGenericAdaptor::UnaryOpGenericAdaptor;
  UnaryOpAdaptor(UnaryOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UnaryOp : public ::mlir::Op<UnaryOp, ::mlir::OpTrait::NRegions<2>::Impl, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UnaryOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UnaryOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("sparse_tensor.unary");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getX();
  ::mlir::OpOperand &getXMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getOutput();
  ::mlir::Region &getPresentRegion();
  ::mlir::Region &getAbsentRegion();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value x);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::UnaryOp)

namespace mlir {
namespace sparse_tensor {

//===----------------------------------------------------------------------===//
// ::mlir::sparse_tensor::YieldOp declarations
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

  ValueT getResult() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
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
class YieldOp : public ::mlir::Op<YieldOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::IsTerminator> {
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
    return ::llvm::StringLiteral("sparse_tensor.yield");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getResult();
  ::mlir::MutableOperandRange getResultMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value result);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace sparse_tensor
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::sparse_tensor::YieldOp)


#endif  // GET_OP_CLASSES

