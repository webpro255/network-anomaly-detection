/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ChloOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace chlo {
class AcosOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class AcoshOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class AsinOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class AsinhOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class AtanOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class AtanhOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BesselI1eOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastAddOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastAndOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastAtan2Op;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastCompareOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastComplexOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastDivOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastMaxOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastMinOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastMulOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastNextAfterOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastOrOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastPolygammaOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastPowOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastRemOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastSelectOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastShiftLeftOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastShiftRightArithmeticOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastShiftRightLogicalOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastSubOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastXorOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class BroadcastZetaOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class ConjOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class ConstantLikeOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class ConstantOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class CoshOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class DigammaOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class DynamicReshapeOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class ErfInvOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class ErfOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class ErfcOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class IsInfOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class IsNegInfOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class IsPosInfOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class LgammaOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class MinimumBroadcastShapesOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class NextAfterOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class PolygammaOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class RankSpecializationClusterOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class RankSpecializationClusterYieldOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class SinhOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class TanOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class TopKOp;
} // namespace chlo
} // namespace mlir
namespace mlir {
namespace chlo {
class ZetaOp;
} // namespace chlo
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AcosOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AcosOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AcosOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AcosOpGenericAdaptorBase(AcosOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AcosOpGenericAdaptor : public detail::AcosOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AcosOpGenericAdaptorBase;
public:
  AcosOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AcosOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AcosOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AcosOp, typename = std::enable_if_t<std::is_same_v<LateInst, AcosOp>>>
  AcosOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AcosOpAdaptor : public AcosOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AcosOpGenericAdaptor::AcosOpGenericAdaptor;
  AcosOpAdaptor(AcosOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AcosOp : public ::mlir::Op<AcosOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AcosOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AcosOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.acos");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::AcosOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AcoshOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AcoshOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AcoshOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AcoshOpGenericAdaptorBase(AcoshOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AcoshOpGenericAdaptor : public detail::AcoshOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AcoshOpGenericAdaptorBase;
public:
  AcoshOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AcoshOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AcoshOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AcoshOp, typename = std::enable_if_t<std::is_same_v<LateInst, AcoshOp>>>
  AcoshOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AcoshOpAdaptor : public AcoshOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AcoshOpGenericAdaptor::AcoshOpGenericAdaptor;
  AcoshOpAdaptor(AcoshOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AcoshOp : public ::mlir::Op<AcoshOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AcoshOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AcoshOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.acosh");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::AcoshOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AsinOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AsinOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AsinOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AsinOpGenericAdaptorBase(AsinOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AsinOpGenericAdaptor : public detail::AsinOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AsinOpGenericAdaptorBase;
public:
  AsinOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AsinOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AsinOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AsinOp, typename = std::enable_if_t<std::is_same_v<LateInst, AsinOp>>>
  AsinOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AsinOpAdaptor : public AsinOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AsinOpGenericAdaptor::AsinOpGenericAdaptor;
  AsinOpAdaptor(AsinOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AsinOp : public ::mlir::Op<AsinOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AsinOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AsinOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.asin");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::AsinOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AsinhOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AsinhOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AsinhOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AsinhOpGenericAdaptorBase(AsinhOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AsinhOpGenericAdaptor : public detail::AsinhOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AsinhOpGenericAdaptorBase;
public:
  AsinhOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AsinhOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AsinhOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AsinhOp, typename = std::enable_if_t<std::is_same_v<LateInst, AsinhOp>>>
  AsinhOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AsinhOpAdaptor : public AsinhOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AsinhOpGenericAdaptor::AsinhOpGenericAdaptor;
  AsinhOpAdaptor(AsinhOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AsinhOp : public ::mlir::Op<AsinhOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AsinhOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AsinhOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.asinh");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::AsinhOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AtanOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AtanOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AtanOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AtanOpGenericAdaptorBase(AtanOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AtanOpGenericAdaptor : public detail::AtanOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AtanOpGenericAdaptorBase;
public:
  AtanOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AtanOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AtanOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AtanOp, typename = std::enable_if_t<std::is_same_v<LateInst, AtanOp>>>
  AtanOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AtanOpAdaptor : public AtanOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AtanOpGenericAdaptor::AtanOpGenericAdaptor;
  AtanOpAdaptor(AtanOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AtanOp : public ::mlir::Op<AtanOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AtanOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AtanOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.atan");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::AtanOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::AtanhOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AtanhOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AtanhOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AtanhOpGenericAdaptorBase(AtanhOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AtanhOpGenericAdaptor : public detail::AtanhOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AtanhOpGenericAdaptorBase;
public:
  AtanhOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AtanhOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AtanhOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AtanhOp, typename = std::enable_if_t<std::is_same_v<LateInst, AtanhOp>>>
  AtanhOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AtanhOpAdaptor : public AtanhOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AtanhOpGenericAdaptor::AtanhOpGenericAdaptor;
  AtanhOpAdaptor(AtanhOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AtanhOp : public ::mlir::Op<AtanhOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AtanhOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AtanhOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.atanh");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::AtanhOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BesselI1eOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BesselI1eOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BesselI1eOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BesselI1eOpGenericAdaptorBase(BesselI1eOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class BesselI1eOpGenericAdaptor : public detail::BesselI1eOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BesselI1eOpGenericAdaptorBase;
public:
  BesselI1eOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BesselI1eOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BesselI1eOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BesselI1eOp, typename = std::enable_if_t<std::is_same_v<LateInst, BesselI1eOp>>>
  BesselI1eOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BesselI1eOpAdaptor : public BesselI1eOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BesselI1eOpGenericAdaptor::BesselI1eOpGenericAdaptor;
  BesselI1eOpAdaptor(BesselI1eOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BesselI1eOp : public ::mlir::Op<BesselI1eOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BesselI1eOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BesselI1eOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.bessel_i1e");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BesselI1eOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastAddOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastAddOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastAddOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastAddOpGenericAdaptorBase(BroadcastAddOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastAddOpGenericAdaptor : public detail::BroadcastAddOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastAddOpGenericAdaptorBase;
public:
  BroadcastAddOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastAddOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastAddOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastAddOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastAddOp>>>
  BroadcastAddOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastAddOpAdaptor : public BroadcastAddOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastAddOpGenericAdaptor::BroadcastAddOpGenericAdaptor;
  BroadcastAddOpAdaptor(BroadcastAddOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastAddOp : public ::mlir::Op<BroadcastAddOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsCommutative, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastAddOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastAddOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_add");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastAddOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastAndOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastAndOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastAndOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastAndOpGenericAdaptorBase(BroadcastAndOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastAndOpGenericAdaptor : public detail::BroadcastAndOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastAndOpGenericAdaptorBase;
public:
  BroadcastAndOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastAndOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastAndOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastAndOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastAndOp>>>
  BroadcastAndOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastAndOpAdaptor : public BroadcastAndOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastAndOpGenericAdaptor::BroadcastAndOpGenericAdaptor;
  BroadcastAndOpAdaptor(BroadcastAndOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastAndOp : public ::mlir::Op<BroadcastAndOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsCommutative, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastAndOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastAndOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_and");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastAndOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastAtan2Op declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastAtan2OpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastAtan2OpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastAtan2OpGenericAdaptorBase(BroadcastAtan2Op op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastAtan2OpGenericAdaptor : public detail::BroadcastAtan2OpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastAtan2OpGenericAdaptorBase;
public:
  BroadcastAtan2OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastAtan2OpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastAtan2OpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastAtan2Op, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastAtan2Op>>>
  BroadcastAtan2OpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastAtan2OpAdaptor : public BroadcastAtan2OpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastAtan2OpGenericAdaptor::BroadcastAtan2OpGenericAdaptor;
  BroadcastAtan2OpAdaptor(BroadcastAtan2Op op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastAtan2Op : public ::mlir::Op<BroadcastAtan2Op, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastAtan2OpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastAtan2OpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_atan2");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastAtan2Op)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastCompareOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastCompareOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastCompareOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastCompareOpGenericAdaptorBase(BroadcastCompareOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  ::mlir::chlo::ComparisonDirectionAttr getComparisonDirectionAttr();
  ::mlir::chlo::ComparisonDirection getComparisonDirection();
  ::mlir::chlo::ComparisonTypeAttr getCompareTypeAttr();
  ::std::optional<::mlir::chlo::ComparisonType> getCompareType();
};
} // namespace detail
template <typename RangeT>
class BroadcastCompareOpGenericAdaptor : public detail::BroadcastCompareOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastCompareOpGenericAdaptorBase;
public:
  BroadcastCompareOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastCompareOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastCompareOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastCompareOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastCompareOp>>>
  BroadcastCompareOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastCompareOpAdaptor : public BroadcastCompareOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastCompareOpGenericAdaptor::BroadcastCompareOpGenericAdaptor;
  BroadcastCompareOpAdaptor(BroadcastCompareOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastCompareOp : public ::mlir::Op<BroadcastCompareOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastCompareOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastCompareOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions"), ::llvm::StringRef("compare_type"), ::llvm::StringRef("comparison_direction")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getCompareTypeAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getCompareTypeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getComparisonDirectionAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getComparisonDirectionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_compare");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  ::mlir::chlo::ComparisonDirectionAttr getComparisonDirectionAttr();
  ::mlir::chlo::ComparisonDirection getComparisonDirection();
  ::mlir::chlo::ComparisonTypeAttr getCompareTypeAttr();
  ::std::optional<::mlir::chlo::ComparisonType> getCompareType();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  void setComparisonDirectionAttr(::mlir::chlo::ComparisonDirectionAttr attr);
  void setComparisonDirection(::mlir::chlo::ComparisonDirection attrValue);
  void setCompareTypeAttr(::mlir::chlo::ComparisonTypeAttr attr);
  void setCompareType(::std::optional<::mlir::chlo::ComparisonType> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  ::mlir::Attribute removeCompareTypeAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value lhs, Value rhs, DenseI64ArrayAttr broadcast_dimensions, ::mlir::chlo::ComparisonDirection comparison_direction, ::mlir::chlo::ComparisonType compare_type = ::mlir::chlo::ComparisonType::NOTYPE);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions, ::mlir::chlo::ComparisonDirectionAttr comparison_direction, /*optional*/::mlir::chlo::ComparisonTypeAttr compare_type);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions, ::mlir::chlo::ComparisonDirectionAttr comparison_direction, /*optional*/::mlir::chlo::ComparisonTypeAttr compare_type);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions, ::mlir::chlo::ComparisonDirectionAttr comparison_direction, /*optional*/::mlir::chlo::ComparisonTypeAttr compare_type);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions, ::mlir::chlo::ComparisonDirection comparison_direction, /*optional*/::mlir::chlo::ComparisonTypeAttr compare_type);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions, ::mlir::chlo::ComparisonDirection comparison_direction, /*optional*/::mlir::chlo::ComparisonTypeAttr compare_type);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions, ::mlir::chlo::ComparisonDirection comparison_direction, /*optional*/::mlir::chlo::ComparisonTypeAttr compare_type);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastCompareOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastComplexOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastComplexOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastComplexOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastComplexOpGenericAdaptorBase(BroadcastComplexOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastComplexOpGenericAdaptor : public detail::BroadcastComplexOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastComplexOpGenericAdaptorBase;
public:
  BroadcastComplexOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastComplexOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastComplexOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastComplexOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastComplexOp>>>
  BroadcastComplexOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastComplexOpAdaptor : public BroadcastComplexOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastComplexOpGenericAdaptor::BroadcastComplexOpGenericAdaptor;
  BroadcastComplexOpAdaptor(BroadcastComplexOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastComplexOp : public ::mlir::Op<BroadcastComplexOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastComplexOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastComplexOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_complex");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastComplexOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastDivOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastDivOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastDivOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastDivOpGenericAdaptorBase(BroadcastDivOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastDivOpGenericAdaptor : public detail::BroadcastDivOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastDivOpGenericAdaptorBase;
public:
  BroadcastDivOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastDivOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastDivOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastDivOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastDivOp>>>
  BroadcastDivOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastDivOpAdaptor : public BroadcastDivOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastDivOpGenericAdaptor::BroadcastDivOpGenericAdaptor;
  BroadcastDivOpAdaptor(BroadcastDivOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastDivOp : public ::mlir::Op<BroadcastDivOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastDivOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastDivOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_divide");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastDivOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastMaxOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastMaxOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastMaxOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastMaxOpGenericAdaptorBase(BroadcastMaxOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastMaxOpGenericAdaptor : public detail::BroadcastMaxOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastMaxOpGenericAdaptorBase;
public:
  BroadcastMaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastMaxOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastMaxOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastMaxOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastMaxOp>>>
  BroadcastMaxOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastMaxOpAdaptor : public BroadcastMaxOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastMaxOpGenericAdaptor::BroadcastMaxOpGenericAdaptor;
  BroadcastMaxOpAdaptor(BroadcastMaxOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastMaxOp : public ::mlir::Op<BroadcastMaxOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsCommutative, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastMaxOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastMaxOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_maximum");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastMaxOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastMinOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastMinOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastMinOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastMinOpGenericAdaptorBase(BroadcastMinOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastMinOpGenericAdaptor : public detail::BroadcastMinOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastMinOpGenericAdaptorBase;
public:
  BroadcastMinOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastMinOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastMinOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastMinOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastMinOp>>>
  BroadcastMinOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastMinOpAdaptor : public BroadcastMinOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastMinOpGenericAdaptor::BroadcastMinOpGenericAdaptor;
  BroadcastMinOpAdaptor(BroadcastMinOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastMinOp : public ::mlir::Op<BroadcastMinOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsCommutative, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastMinOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastMinOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_minimum");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastMinOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastMulOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastMulOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastMulOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastMulOpGenericAdaptorBase(BroadcastMulOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastMulOpGenericAdaptor : public detail::BroadcastMulOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastMulOpGenericAdaptorBase;
public:
  BroadcastMulOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastMulOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastMulOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastMulOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastMulOp>>>
  BroadcastMulOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastMulOpAdaptor : public BroadcastMulOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastMulOpGenericAdaptor::BroadcastMulOpGenericAdaptor;
  BroadcastMulOpAdaptor(BroadcastMulOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastMulOp : public ::mlir::Op<BroadcastMulOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsCommutative, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastMulOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastMulOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_multiply");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastMulOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastNextAfterOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastNextAfterOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastNextAfterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastNextAfterOpGenericAdaptorBase(BroadcastNextAfterOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastNextAfterOpGenericAdaptor : public detail::BroadcastNextAfterOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastNextAfterOpGenericAdaptorBase;
public:
  BroadcastNextAfterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastNextAfterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastNextAfterOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastNextAfterOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastNextAfterOp>>>
  BroadcastNextAfterOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastNextAfterOpAdaptor : public BroadcastNextAfterOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastNextAfterOpGenericAdaptor::BroadcastNextAfterOpGenericAdaptor;
  BroadcastNextAfterOpAdaptor(BroadcastNextAfterOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastNextAfterOp : public ::mlir::Op<BroadcastNextAfterOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastNextAfterOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastNextAfterOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_next_after");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastNextAfterOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastOrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastOrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastOrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastOrOpGenericAdaptorBase(BroadcastOrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastOrOpGenericAdaptor : public detail::BroadcastOrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastOrOpGenericAdaptorBase;
public:
  BroadcastOrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastOrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastOrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastOrOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastOrOp>>>
  BroadcastOrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastOrOpAdaptor : public BroadcastOrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastOrOpGenericAdaptor::BroadcastOrOpGenericAdaptor;
  BroadcastOrOpAdaptor(BroadcastOrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastOrOp : public ::mlir::Op<BroadcastOrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsCommutative, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastOrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastOrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_or");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastOrOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastPolygammaOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastPolygammaOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastPolygammaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastPolygammaOpGenericAdaptorBase(BroadcastPolygammaOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastPolygammaOpGenericAdaptor : public detail::BroadcastPolygammaOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastPolygammaOpGenericAdaptorBase;
public:
  BroadcastPolygammaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastPolygammaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastPolygammaOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastPolygammaOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastPolygammaOp>>>
  BroadcastPolygammaOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastPolygammaOpAdaptor : public BroadcastPolygammaOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastPolygammaOpGenericAdaptor::BroadcastPolygammaOpGenericAdaptor;
  BroadcastPolygammaOpAdaptor(BroadcastPolygammaOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastPolygammaOp : public ::mlir::Op<BroadcastPolygammaOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastPolygammaOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastPolygammaOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_polygamma");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastPolygammaOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastPowOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastPowOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastPowOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastPowOpGenericAdaptorBase(BroadcastPowOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastPowOpGenericAdaptor : public detail::BroadcastPowOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastPowOpGenericAdaptorBase;
public:
  BroadcastPowOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastPowOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastPowOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastPowOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastPowOp>>>
  BroadcastPowOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastPowOpAdaptor : public BroadcastPowOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastPowOpGenericAdaptor::BroadcastPowOpGenericAdaptor;
  BroadcastPowOpAdaptor(BroadcastPowOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastPowOp : public ::mlir::Op<BroadcastPowOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastPowOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastPowOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_power");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastPowOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastRemOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastRemOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastRemOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastRemOpGenericAdaptorBase(BroadcastRemOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastRemOpGenericAdaptor : public detail::BroadcastRemOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastRemOpGenericAdaptorBase;
public:
  BroadcastRemOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastRemOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastRemOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastRemOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastRemOp>>>
  BroadcastRemOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastRemOpAdaptor : public BroadcastRemOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastRemOpGenericAdaptor::BroadcastRemOpGenericAdaptor;
  BroadcastRemOpAdaptor(BroadcastRemOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastRemOp : public ::mlir::Op<BroadcastRemOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastRemOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastRemOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_remainder");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastRemOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastSelectOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastSelectOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastSelectOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastSelectOpGenericAdaptorBase(BroadcastSelectOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class BroadcastSelectOpGenericAdaptor : public detail::BroadcastSelectOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastSelectOpGenericAdaptorBase;
public:
  BroadcastSelectOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastSelectOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastSelectOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastSelectOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastSelectOp>>>
  BroadcastSelectOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getPred() {
    return (*getODSOperands(0).begin());
  }

  ValueT getOnTrue() {
    return (*getODSOperands(1).begin());
  }

  ValueT getOnFalse() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastSelectOpAdaptor : public BroadcastSelectOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastSelectOpGenericAdaptor::BroadcastSelectOpGenericAdaptor;
  BroadcastSelectOpAdaptor(BroadcastSelectOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastSelectOp : public ::mlir::Op<BroadcastSelectOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastSelectOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastSelectOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_select");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getPred();
  ::mlir::TypedValue<::mlir::TensorType> getOnTrue();
  ::mlir::TypedValue<::mlir::TensorType> getOnFalse();
  ::mlir::OpOperand &getPredMutable();
  ::mlir::OpOperand &getOnTrueMutable();
  ::mlir::OpOperand &getOnFalseMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value pred, ::mlir::Value on_true, ::mlir::Value on_false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return succeeded(mlir::verifyCompatibleShapes(l, r));
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastSelectOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastShiftLeftOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastShiftLeftOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastShiftLeftOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastShiftLeftOpGenericAdaptorBase(BroadcastShiftLeftOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastShiftLeftOpGenericAdaptor : public detail::BroadcastShiftLeftOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastShiftLeftOpGenericAdaptorBase;
public:
  BroadcastShiftLeftOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastShiftLeftOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastShiftLeftOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastShiftLeftOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastShiftLeftOp>>>
  BroadcastShiftLeftOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastShiftLeftOpAdaptor : public BroadcastShiftLeftOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastShiftLeftOpGenericAdaptor::BroadcastShiftLeftOpGenericAdaptor;
  BroadcastShiftLeftOpAdaptor(BroadcastShiftLeftOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastShiftLeftOp : public ::mlir::Op<BroadcastShiftLeftOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastShiftLeftOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastShiftLeftOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_shift_left");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastShiftLeftOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastShiftRightArithmeticOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastShiftRightArithmeticOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastShiftRightArithmeticOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastShiftRightArithmeticOpGenericAdaptorBase(BroadcastShiftRightArithmeticOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastShiftRightArithmeticOpGenericAdaptor : public detail::BroadcastShiftRightArithmeticOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastShiftRightArithmeticOpGenericAdaptorBase;
public:
  BroadcastShiftRightArithmeticOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastShiftRightArithmeticOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastShiftRightArithmeticOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastShiftRightArithmeticOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastShiftRightArithmeticOp>>>
  BroadcastShiftRightArithmeticOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastShiftRightArithmeticOpAdaptor : public BroadcastShiftRightArithmeticOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastShiftRightArithmeticOpGenericAdaptor::BroadcastShiftRightArithmeticOpGenericAdaptor;
  BroadcastShiftRightArithmeticOpAdaptor(BroadcastShiftRightArithmeticOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastShiftRightArithmeticOp : public ::mlir::Op<BroadcastShiftRightArithmeticOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastShiftRightArithmeticOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastShiftRightArithmeticOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_shift_right_arithmetic");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastShiftRightArithmeticOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastShiftRightLogicalOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastShiftRightLogicalOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastShiftRightLogicalOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastShiftRightLogicalOpGenericAdaptorBase(BroadcastShiftRightLogicalOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastShiftRightLogicalOpGenericAdaptor : public detail::BroadcastShiftRightLogicalOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastShiftRightLogicalOpGenericAdaptorBase;
public:
  BroadcastShiftRightLogicalOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastShiftRightLogicalOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastShiftRightLogicalOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastShiftRightLogicalOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastShiftRightLogicalOp>>>
  BroadcastShiftRightLogicalOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastShiftRightLogicalOpAdaptor : public BroadcastShiftRightLogicalOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastShiftRightLogicalOpGenericAdaptor::BroadcastShiftRightLogicalOpGenericAdaptor;
  BroadcastShiftRightLogicalOpAdaptor(BroadcastShiftRightLogicalOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastShiftRightLogicalOp : public ::mlir::Op<BroadcastShiftRightLogicalOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastShiftRightLogicalOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastShiftRightLogicalOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_shift_right_logical");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastShiftRightLogicalOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastSubOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastSubOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastSubOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastSubOpGenericAdaptorBase(BroadcastSubOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastSubOpGenericAdaptor : public detail::BroadcastSubOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastSubOpGenericAdaptorBase;
public:
  BroadcastSubOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastSubOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastSubOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastSubOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastSubOp>>>
  BroadcastSubOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastSubOpAdaptor : public BroadcastSubOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastSubOpGenericAdaptor::BroadcastSubOpGenericAdaptor;
  BroadcastSubOpAdaptor(BroadcastSubOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastSubOp : public ::mlir::Op<BroadcastSubOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastSubOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastSubOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_subtract");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastSubOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastXorOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastXorOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastXorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastXorOpGenericAdaptorBase(BroadcastXorOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastXorOpGenericAdaptor : public detail::BroadcastXorOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastXorOpGenericAdaptorBase;
public:
  BroadcastXorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastXorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastXorOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastXorOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastXorOp>>>
  BroadcastXorOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastXorOpAdaptor : public BroadcastXorOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastXorOpGenericAdaptor::BroadcastXorOpGenericAdaptor;
  BroadcastXorOpAdaptor(BroadcastXorOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastXorOp : public ::mlir::Op<BroadcastXorOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsCommutative, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastXorOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastXorOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_xor");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastXorOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::BroadcastZetaOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastZetaOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  BroadcastZetaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastZetaOpGenericAdaptorBase(BroadcastZetaOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
};
} // namespace detail
template <typename RangeT>
class BroadcastZetaOpGenericAdaptor : public detail::BroadcastZetaOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastZetaOpGenericAdaptorBase;
public:
  BroadcastZetaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastZetaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastZetaOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = BroadcastZetaOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastZetaOp>>>
  BroadcastZetaOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastZetaOpAdaptor : public BroadcastZetaOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastZetaOpGenericAdaptor::BroadcastZetaOpGenericAdaptor;
  BroadcastZetaOpAdaptor(BroadcastZetaOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastZetaOp : public ::mlir::Op<BroadcastZetaOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastZetaOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastZetaOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("broadcast_dimensions")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getBroadcastDimensionsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getBroadcastDimensionsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.broadcast_zeta");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getLhs();
  ::mlir::TypedValue<::mlir::TensorType> getRhs();
  ::mlir::OpOperand &getLhsMutable();
  ::mlir::OpOperand &getRhsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::DenseI64ArrayAttr getBroadcastDimensionsAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getBroadcastDimensions();
  void setBroadcastDimensionsAttr(::mlir::DenseI64ArrayAttr attr);
  void setBroadcastDimensions(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeBroadcastDimensionsAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value lhs, ::mlir::Value rhs, /*optional*/::mlir::DenseI64ArrayAttr broadcast_dimensions);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::BroadcastZetaOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ConjOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConjOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConjOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConjOpGenericAdaptorBase(ConjOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ConjOpGenericAdaptor : public detail::ConjOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConjOpGenericAdaptorBase;
public:
  ConjOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConjOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConjOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConjOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConjOp>>>
  ConjOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConjOpAdaptor : public ConjOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConjOpGenericAdaptor::ConjOpGenericAdaptor;
  ConjOpAdaptor(ConjOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConjOp : public ::mlir::Op<ConjOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConjOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConjOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.conj");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::ConjOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ConstantLikeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConstantLikeOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConstantLikeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConstantLikeOpGenericAdaptorBase(ConstantLikeOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::TypedAttr getValueAttr();
  ::mlir::TypedAttr getValue();
};
} // namespace detail
template <typename RangeT>
class ConstantLikeOpGenericAdaptor : public detail::ConstantLikeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConstantLikeOpGenericAdaptorBase;
public:
  ConstantLikeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConstantLikeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConstantLikeOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConstantLikeOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConstantLikeOp>>>
  ConstantLikeOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConstantLikeOpAdaptor : public ConstantLikeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConstantLikeOpGenericAdaptor::ConstantLikeOpGenericAdaptor;
  ConstantLikeOpAdaptor(ConstantLikeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConstantLikeOp : public ::mlir::Op<ConstantLikeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::chlo::OpTrait::Broadcasting, ::mlir::hlo::OpTrait::BroadcastingElementwise, ::mlir::OpTrait::SameOperandsAndResultShape, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConstantLikeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConstantLikeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
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
    return ::llvm::StringLiteral("chlo.constant_like");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedAttr getValueAttr();
  ::mlir::TypedAttr getValue();
  void setValueAttr(::mlir::TypedAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type resultType0, ::mlir::TypedAttr value, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypedAttr value, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::TypedAttr value, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  ::mlir::OpFoldResult fold(FoldAdaptor adaptor);
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  ::mlir::LogicalResult reifyReturnTypeShapes(::mlir::OpBuilder&builder, ::mlir::ValueRange operands, ::llvm::SmallVectorImpl<::mlir::Value> &reifiedReturnShapes);
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
  // Relax the strict default implementation with one that allows
  // for StableHLO-specific differences.
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::ConstantLikeOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ConstantOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConstantOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConstantOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConstantOpGenericAdaptorBase(ConstantOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ElementsAttr getValueAttr();
  ::mlir::ElementsAttr getValue();
};
} // namespace detail
template <typename RangeT>
class ConstantOpGenericAdaptor : public detail::ConstantOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConstantOpGenericAdaptorBase;
public:
  ConstantOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConstantOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConstantOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConstantOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConstantOp>>>
  ConstantOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ConstantOpAdaptor : public ConstantOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConstantOpGenericAdaptor::ConstantOpGenericAdaptor;
  ConstantOpAdaptor(ConstantOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConstantOp : public ::mlir::Op<ConstantOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::RankedTensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::ConstantLike, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConstantOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConstantOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
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
    return ::llvm::StringLiteral("chlo.constant");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::RankedTensorType> getOutput();
  ::mlir::ElementsAttr getValueAttr();
  ::mlir::ElementsAttr getValue();
  void setValueAttr(::mlir::ElementsAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::ElementsAttr value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ElementsAttr value);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ElementsAttr value);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  // Relax the strict default implementation with one that allows
  // for StableHLO-specific differences.
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::ConstantOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::CoshOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class CoshOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  CoshOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  CoshOpGenericAdaptorBase(CoshOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class CoshOpGenericAdaptor : public detail::CoshOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::CoshOpGenericAdaptorBase;
public:
  CoshOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  CoshOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : CoshOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = CoshOp, typename = std::enable_if_t<std::is_same_v<LateInst, CoshOp>>>
  CoshOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class CoshOpAdaptor : public CoshOpGenericAdaptor<::mlir::ValueRange> {
public:
  using CoshOpGenericAdaptor::CoshOpGenericAdaptor;
  CoshOpAdaptor(CoshOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class CoshOp : public ::mlir::Op<CoshOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = CoshOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = CoshOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.cosh");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::CoshOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::DigammaOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DigammaOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DigammaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  DigammaOpGenericAdaptorBase(DigammaOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class DigammaOpGenericAdaptor : public detail::DigammaOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DigammaOpGenericAdaptorBase;
public:
  DigammaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DigammaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DigammaOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = DigammaOp, typename = std::enable_if_t<std::is_same_v<LateInst, DigammaOp>>>
  DigammaOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DigammaOpAdaptor : public DigammaOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DigammaOpGenericAdaptor::DigammaOpGenericAdaptor;
  DigammaOpAdaptor(DigammaOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DigammaOp : public ::mlir::Op<DigammaOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DigammaOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DigammaOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.digamma");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::DigammaOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::DynamicReshapeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DynamicReshapeOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DynamicReshapeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  DynamicReshapeOpGenericAdaptorBase(DynamicReshapeOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class DynamicReshapeOpGenericAdaptor : public detail::DynamicReshapeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DynamicReshapeOpGenericAdaptorBase;
public:
  DynamicReshapeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DynamicReshapeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DynamicReshapeOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = DynamicReshapeOp, typename = std::enable_if_t<std::is_same_v<LateInst, DynamicReshapeOp>>>
  DynamicReshapeOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getOutputShape() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DynamicReshapeOpAdaptor : public DynamicReshapeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DynamicReshapeOpGenericAdaptor::DynamicReshapeOpGenericAdaptor;
  DynamicReshapeOpAdaptor(DynamicReshapeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DynamicReshapeOp : public ::mlir::Op<DynamicReshapeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DynamicReshapeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DynamicReshapeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.dynamic_reshape");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::TypedValue<::mlir::RankedTensorType> getOutputShape();
  ::mlir::OpOperand &getOperandMutable();
  ::mlir::OpOperand &getOutputShapeMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand, ::mlir::Value output_shape);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value output_shape);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  // Relax the strict default implementation with one that allows
  // for StableHLO-specific differences.
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::DynamicReshapeOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ErfInvOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ErfInvOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ErfInvOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ErfInvOpGenericAdaptorBase(ErfInvOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ErfInvOpGenericAdaptor : public detail::ErfInvOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ErfInvOpGenericAdaptorBase;
public:
  ErfInvOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ErfInvOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ErfInvOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ErfInvOp, typename = std::enable_if_t<std::is_same_v<LateInst, ErfInvOp>>>
  ErfInvOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ErfInvOpAdaptor : public ErfInvOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ErfInvOpGenericAdaptor::ErfInvOpGenericAdaptor;
  ErfInvOpAdaptor(ErfInvOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ErfInvOp : public ::mlir::Op<ErfInvOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ErfInvOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ErfInvOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.erf_inv");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::ErfInvOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ErfOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ErfOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ErfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ErfOpGenericAdaptorBase(ErfOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ErfOpGenericAdaptor : public detail::ErfOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ErfOpGenericAdaptorBase;
public:
  ErfOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ErfOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ErfOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ErfOp, typename = std::enable_if_t<std::is_same_v<LateInst, ErfOp>>>
  ErfOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ErfOpAdaptor : public ErfOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ErfOpGenericAdaptor::ErfOpGenericAdaptor;
  ErfOpAdaptor(ErfOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ErfOp : public ::mlir::Op<ErfOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ErfOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ErfOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.erf");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::ErfOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ErfcOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ErfcOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ErfcOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ErfcOpGenericAdaptorBase(ErfcOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ErfcOpGenericAdaptor : public detail::ErfcOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ErfcOpGenericAdaptorBase;
public:
  ErfcOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ErfcOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ErfcOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ErfcOp, typename = std::enable_if_t<std::is_same_v<LateInst, ErfcOp>>>
  ErfcOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ErfcOpAdaptor : public ErfcOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ErfcOpGenericAdaptor::ErfcOpGenericAdaptor;
  ErfcOpAdaptor(ErfcOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ErfcOp : public ::mlir::Op<ErfcOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ErfcOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ErfcOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.erfc");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::ErfcOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::IsInfOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class IsInfOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  IsInfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  IsInfOpGenericAdaptorBase(IsInfOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class IsInfOpGenericAdaptor : public detail::IsInfOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::IsInfOpGenericAdaptorBase;
public:
  IsInfOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  IsInfOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : IsInfOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = IsInfOp, typename = std::enable_if_t<std::is_same_v<LateInst, IsInfOp>>>
  IsInfOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class IsInfOpAdaptor : public IsInfOpGenericAdaptor<::mlir::ValueRange> {
public:
  using IsInfOpGenericAdaptor::IsInfOpGenericAdaptor;
  IsInfOpAdaptor(IsInfOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class IsInfOp : public ::mlir::Op<IsInfOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape, ::mlir::InferShapedTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = IsInfOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = IsInfOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.is_inf");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::IsInfOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::IsNegInfOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class IsNegInfOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  IsNegInfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  IsNegInfOpGenericAdaptorBase(IsNegInfOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class IsNegInfOpGenericAdaptor : public detail::IsNegInfOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::IsNegInfOpGenericAdaptorBase;
public:
  IsNegInfOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  IsNegInfOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : IsNegInfOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = IsNegInfOp, typename = std::enable_if_t<std::is_same_v<LateInst, IsNegInfOp>>>
  IsNegInfOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class IsNegInfOpAdaptor : public IsNegInfOpGenericAdaptor<::mlir::ValueRange> {
public:
  using IsNegInfOpGenericAdaptor::IsNegInfOpGenericAdaptor;
  IsNegInfOpAdaptor(IsNegInfOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class IsNegInfOp : public ::mlir::Op<IsNegInfOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape, ::mlir::InferShapedTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = IsNegInfOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = IsNegInfOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.is_neg_inf");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::IsNegInfOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::IsPosInfOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class IsPosInfOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  IsPosInfOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  IsPosInfOpGenericAdaptorBase(IsPosInfOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class IsPosInfOpGenericAdaptor : public detail::IsPosInfOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::IsPosInfOpGenericAdaptorBase;
public:
  IsPosInfOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  IsPosInfOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : IsPosInfOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = IsPosInfOp, typename = std::enable_if_t<std::is_same_v<LateInst, IsPosInfOp>>>
  IsPosInfOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class IsPosInfOpAdaptor : public IsPosInfOpGenericAdaptor<::mlir::ValueRange> {
public:
  using IsPosInfOpGenericAdaptor::IsPosInfOpGenericAdaptor;
  IsPosInfOpAdaptor(IsPosInfOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class IsPosInfOp : public ::mlir::Op<IsPosInfOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape, ::mlir::InferShapedTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = IsPosInfOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = IsPosInfOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.is_pos_inf");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::IsPosInfOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::LgammaOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LgammaOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  LgammaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  LgammaOpGenericAdaptorBase(LgammaOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class LgammaOpGenericAdaptor : public detail::LgammaOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LgammaOpGenericAdaptorBase;
public:
  LgammaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  LgammaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : LgammaOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = LgammaOp, typename = std::enable_if_t<std::is_same_v<LateInst, LgammaOp>>>
  LgammaOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class LgammaOpAdaptor : public LgammaOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LgammaOpGenericAdaptor::LgammaOpGenericAdaptor;
  LgammaOpAdaptor(LgammaOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LgammaOp : public ::mlir::Op<LgammaOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LgammaOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LgammaOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.lgamma");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::LgammaOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::MinimumBroadcastShapesOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MinimumBroadcastShapesOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  MinimumBroadcastShapesOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  MinimumBroadcastShapesOpGenericAdaptorBase(MinimumBroadcastShapesOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class MinimumBroadcastShapesOpGenericAdaptor : public detail::MinimumBroadcastShapesOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MinimumBroadcastShapesOpGenericAdaptorBase;
public:
  MinimumBroadcastShapesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MinimumBroadcastShapesOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MinimumBroadcastShapesOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = MinimumBroadcastShapesOp, typename = std::enable_if_t<std::is_same_v<LateInst, MinimumBroadcastShapesOp>>>
  MinimumBroadcastShapesOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getShapes() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class MinimumBroadcastShapesOpAdaptor : public MinimumBroadcastShapesOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MinimumBroadcastShapesOpGenericAdaptor::MinimumBroadcastShapesOpGenericAdaptor;
  MinimumBroadcastShapesOpAdaptor(MinimumBroadcastShapesOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MinimumBroadcastShapesOp : public ::mlir::Op<MinimumBroadcastShapesOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MinimumBroadcastShapesOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MinimumBroadcastShapesOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.minimum_broadcast_shapes");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getShapes();
  ::mlir::MutableOperandRange getShapesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResults();
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  // Relax the strict default implementation with one that allows
  // for StableHLO-specific differences.
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::MinimumBroadcastShapesOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::NextAfterOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class NextAfterOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  NextAfterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  NextAfterOpGenericAdaptorBase(NextAfterOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class NextAfterOpGenericAdaptor : public detail::NextAfterOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::NextAfterOpGenericAdaptorBase;
public:
  NextAfterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  NextAfterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : NextAfterOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = NextAfterOp, typename = std::enable_if_t<std::is_same_v<LateInst, NextAfterOp>>>
  NextAfterOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class NextAfterOpAdaptor : public NextAfterOpGenericAdaptor<::mlir::ValueRange> {
public:
  using NextAfterOpGenericAdaptor::NextAfterOpGenericAdaptor;
  NextAfterOpAdaptor(NextAfterOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class NextAfterOp : public ::mlir::Op<NextAfterOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = NextAfterOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = NextAfterOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.next_after");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getX();
  ::mlir::TypedValue<::mlir::TensorType> getY();
  ::mlir::OpOperand &getXMutable();
  ::mlir::OpOperand &getYMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value x, ::mlir::Value y);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, ::mlir::Value y);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value y);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  // Relax the strict default implementation with one that allows
  // for StableHLO-specific differences.
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::NextAfterOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::PolygammaOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PolygammaOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  PolygammaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  PolygammaOpGenericAdaptorBase(PolygammaOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class PolygammaOpGenericAdaptor : public detail::PolygammaOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PolygammaOpGenericAdaptorBase;
public:
  PolygammaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PolygammaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PolygammaOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = PolygammaOp, typename = std::enable_if_t<std::is_same_v<LateInst, PolygammaOp>>>
  PolygammaOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getX() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PolygammaOpAdaptor : public PolygammaOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PolygammaOpGenericAdaptor::PolygammaOpGenericAdaptor;
  PolygammaOpAdaptor(PolygammaOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PolygammaOp : public ::mlir::Op<PolygammaOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PolygammaOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PolygammaOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.polygamma");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getN();
  ::mlir::TypedValue<::mlir::TensorType> getX();
  ::mlir::OpOperand &getNMutable();
  ::mlir::OpOperand &getXMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value n, ::mlir::Value x);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value n, ::mlir::Value x);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value n, ::mlir::Value x);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  // Relax the strict default implementation with one that allows
  // for StableHLO-specific differences.
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::PolygammaOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::RankSpecializationClusterOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RankSpecializationClusterOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RankSpecializationClusterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  RankSpecializationClusterOpGenericAdaptorBase(RankSpecializationClusterOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getBody();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class RankSpecializationClusterOpGenericAdaptor : public detail::RankSpecializationClusterOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RankSpecializationClusterOpGenericAdaptorBase;
public:
  RankSpecializationClusterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RankSpecializationClusterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RankSpecializationClusterOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = RankSpecializationClusterOp, typename = std::enable_if_t<std::is_same_v<LateInst, RankSpecializationClusterOp>>>
  RankSpecializationClusterOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class RankSpecializationClusterOpAdaptor : public RankSpecializationClusterOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RankSpecializationClusterOpGenericAdaptor::RankSpecializationClusterOpGenericAdaptor;
  RankSpecializationClusterOpAdaptor(RankSpecializationClusterOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RankSpecializationClusterOp : public ::mlir::Op<RankSpecializationClusterOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::SingleBlockImplicitTerminator<RankSpecializationClusterYieldOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::RegionBranchOpInterface::Trait, ::mlir::OpTrait::HasRecursiveMemoryEffects> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RankSpecializationClusterOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RankSpecializationClusterOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.rank_specialization_cluster");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getBody();
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  void getSuccessorRegions(::mlir::RegionBranchPoint point, ::llvm::SmallVectorImpl<::mlir::RegionSuccessor> &regions);
public:
  // Relax the strict default implementation with one that allows
  // for StableHLO-specific differences.
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::RankSpecializationClusterOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::RankSpecializationClusterYieldOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RankSpecializationClusterYieldOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  RankSpecializationClusterYieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  RankSpecializationClusterYieldOpGenericAdaptorBase(RankSpecializationClusterYieldOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class RankSpecializationClusterYieldOpGenericAdaptor : public detail::RankSpecializationClusterYieldOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RankSpecializationClusterYieldOpGenericAdaptorBase;
public:
  RankSpecializationClusterYieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RankSpecializationClusterYieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RankSpecializationClusterYieldOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = RankSpecializationClusterYieldOp, typename = std::enable_if_t<std::is_same_v<LateInst, RankSpecializationClusterYieldOp>>>
  RankSpecializationClusterYieldOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class RankSpecializationClusterYieldOpAdaptor : public RankSpecializationClusterYieldOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RankSpecializationClusterYieldOpGenericAdaptor::RankSpecializationClusterYieldOpGenericAdaptor;
  RankSpecializationClusterYieldOpAdaptor(RankSpecializationClusterYieldOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RankSpecializationClusterYieldOp : public ::mlir::Op<RankSpecializationClusterYieldOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::HasParent<RankSpecializationClusterOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::RegionBranchTerminatorOpInterface::Trait, ::mlir::OpTrait::ReturnLike, ::mlir::OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RankSpecializationClusterYieldOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RankSpecializationClusterYieldOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.rank_specialization_cluster_yield");
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
  ::mlir::MutableOperandRange getMutableSuccessorOperands(::mlir::RegionBranchPoint point);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  // Relax the strict default implementation with one that allows
  // for StableHLO-specific differences.
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::RankSpecializationClusterYieldOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::SinhOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SinhOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  SinhOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  SinhOpGenericAdaptorBase(SinhOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class SinhOpGenericAdaptor : public detail::SinhOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SinhOpGenericAdaptorBase;
public:
  SinhOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SinhOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SinhOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = SinhOp, typename = std::enable_if_t<std::is_same_v<LateInst, SinhOp>>>
  SinhOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SinhOpAdaptor : public SinhOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SinhOpGenericAdaptor::SinhOpGenericAdaptor;
  SinhOpAdaptor(SinhOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SinhOp : public ::mlir::Op<SinhOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SinhOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SinhOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.sinh");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::SinhOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::TanOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TanOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  TanOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  TanOpGenericAdaptorBase(TanOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class TanOpGenericAdaptor : public detail::TanOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TanOpGenericAdaptorBase;
public:
  TanOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TanOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TanOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = TanOp, typename = std::enable_if_t<std::is_same_v<LateInst, TanOp>>>
  TanOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TanOpAdaptor : public TanOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TanOpGenericAdaptor::TanOpGenericAdaptor;
  TanOpAdaptor(TanOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TanOp : public ::mlir::Op<TanOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::Elementwise, ::mlir::OpTrait::SameOperandsAndResultShape> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TanOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TanOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.tan");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  LogicalResult reifyReturnTypeShapes(OpBuilder& builder, ValueRange operands,
      SmallVectorImpl<Value>& reifiedReturnShapes) {
    return ::mlir::hlo::deriveShapeFromOperand(&builder, getOperation(),
        operands.front(), &reifiedReturnShapes);
  }
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::TanOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::TopKOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TopKOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  TopKOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  TopKOpGenericAdaptorBase(TopKOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getKAttr();
  uint64_t getK();
};
} // namespace detail
template <typename RangeT>
class TopKOpGenericAdaptor : public detail::TopKOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TopKOpGenericAdaptorBase;
public:
  TopKOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  TopKOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : TopKOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = TopKOp, typename = std::enable_if_t<std::is_same_v<LateInst, TopKOp>>>
  TopKOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TopKOpAdaptor : public TopKOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TopKOpGenericAdaptor::TopKOpGenericAdaptor;
  TopKOpAdaptor(TopKOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TopKOp : public ::mlir::Op<TopKOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::NResults<2>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::OpTrait::InferTensorType, ::mlir::OpAsmOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TopKOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TopKOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("k")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getKAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getKAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  void getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn);
  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.top_k");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getOperand();
  ::mlir::OpOperand &getOperandMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getValues();
  ::mlir::TypedValue<::mlir::TensorType> getIndices();
  ::mlir::IntegerAttr getKAttr();
  uint64_t getK();
  void setKAttr(::mlir::IntegerAttr attr);
  void setK(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type values, ::mlir::Type indices, ::mlir::Value operand, ::mlir::IntegerAttr k);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::IntegerAttr k);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::IntegerAttr k);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type values, ::mlir::Type indices, ::mlir::Value operand, uint64_t k);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, uint64_t k);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, uint64_t k);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
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
  // Relax the strict default implementation with one that allows
  // for StableHLO-specific differences.
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::TopKOp)

namespace mlir {
namespace chlo {

//===----------------------------------------------------------------------===//
// ::mlir::chlo::ZetaOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ZetaOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ZetaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ZetaOpGenericAdaptorBase(ZetaOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ZetaOpGenericAdaptor : public detail::ZetaOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ZetaOpGenericAdaptorBase;
public:
  ZetaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ZetaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ZetaOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ZetaOp, typename = std::enable_if_t<std::is_same_v<LateInst, ZetaOp>>>
  ZetaOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  ValueT getQ() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ZetaOpAdaptor : public ZetaOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ZetaOpGenericAdaptor::ZetaOpGenericAdaptor;
  ZetaOpAdaptor(ZetaOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ZetaOp : public ::mlir::Op<ZetaOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait, ::mlir::InferShapedTypeOpInterface::Trait, ::mlir::hlo::OpTrait::CompatibleOperandsAndResultType> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ZetaOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ZetaOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("chlo.zeta");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getX();
  ::mlir::TypedValue<::mlir::TensorType> getQ();
  ::mlir::OpOperand &getXMutable();
  ::mlir::OpOperand &getQMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value x, ::mlir::Value q);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, ::mlir::Value q);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value q);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypeComponents(::mlir::MLIRContext*context, ::std::optional<::mlir::Location> location, ::mlir::ValueShapeRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::ShapedTypeComponents>&inferredReturnShapes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
  // Relax the strict default implementation with one that allows
  // for StableHLO-specific differences.
  static bool isCompatibleReturnTypes(TypeRange l, TypeRange r) {
    return mlir::hlo::isCompatibleForHloTypeInference(l, r);
  }
};
} // namespace chlo
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::chlo::ZetaOp)


#endif  // GET_OP_CLASSES

