/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ArmSVE.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace arm_sve {
class ConvertFromSvboolIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ConvertFromSvboolOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ConvertToSvboolIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ConvertToSvboolOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedAddFIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedAddFOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedAddIIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedAddIOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedDivFIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedDivFOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedMulFIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedMulFOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedMulIIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedMulIOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedSDivIIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedSDivIOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedSubFIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedSubFOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedSubIIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedSubIOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedUDivIIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class ScalableMaskedUDivIOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class SdotIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class SdotOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class SmmlaIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class SmmlaOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class UdotIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class UdotOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class UmmlaIntrOp;
} // namespace arm_sve
} // namespace mlir
namespace mlir {
namespace arm_sve {
class UmmlaOp;
} // namespace arm_sve
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ConvertFromSvboolIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvertFromSvboolIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConvertFromSvboolIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConvertFromSvboolIntrOpGenericAdaptorBase(ConvertFromSvboolIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ConvertFromSvboolIntrOpGenericAdaptor : public detail::ConvertFromSvboolIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvertFromSvboolIntrOpGenericAdaptorBase;
public:
  ConvertFromSvboolIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvertFromSvboolIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvertFromSvboolIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConvertFromSvboolIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvertFromSvboolIntrOp>>>
  ConvertFromSvboolIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSvbool() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConvertFromSvboolIntrOpAdaptor : public ConvertFromSvboolIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvertFromSvboolIntrOpGenericAdaptor::ConvertFromSvboolIntrOpGenericAdaptor;
  ConvertFromSvboolIntrOpAdaptor(ConvertFromSvboolIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvertFromSvboolIntrOp : public ::mlir::Op<ConvertFromSvboolIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvertFromSvboolIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvertFromSvboolIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.convert.from.svbool");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getSvbool();
  ::mlir::OpOperand &getSvboolMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value svbool);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value svbool);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ConvertFromSvboolIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ConvertFromSvboolOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvertFromSvboolOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConvertFromSvboolOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConvertFromSvboolOpGenericAdaptorBase(ConvertFromSvboolOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ConvertFromSvboolOpGenericAdaptor : public detail::ConvertFromSvboolOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvertFromSvboolOpGenericAdaptorBase;
public:
  ConvertFromSvboolOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvertFromSvboolOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvertFromSvboolOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConvertFromSvboolOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvertFromSvboolOp>>>
  ConvertFromSvboolOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ConvertFromSvboolOpAdaptor : public ConvertFromSvboolOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvertFromSvboolOpGenericAdaptor::ConvertFromSvboolOpGenericAdaptor;
  ConvertFromSvboolOpAdaptor(ConvertFromSvboolOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvertFromSvboolOp : public ::mlir::Op<ConvertFromSvboolOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvertFromSvboolOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvertFromSvboolOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.convert_from_svbool");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getSource();
  ::mlir::OpOperand &getSourceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getResult();
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
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ConvertFromSvboolOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ConvertToSvboolIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvertToSvboolIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConvertToSvboolIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConvertToSvboolIntrOpGenericAdaptorBase(ConvertToSvboolIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ConvertToSvboolIntrOpGenericAdaptor : public detail::ConvertToSvboolIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvertToSvboolIntrOpGenericAdaptorBase;
public:
  ConvertToSvboolIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvertToSvboolIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvertToSvboolIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConvertToSvboolIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvertToSvboolIntrOp>>>
  ConvertToSvboolIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMask() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConvertToSvboolIntrOpAdaptor : public ConvertToSvboolIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvertToSvboolIntrOpGenericAdaptor::ConvertToSvboolIntrOpGenericAdaptor;
  ConvertToSvboolIntrOpAdaptor(ConvertToSvboolIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvertToSvboolIntrOp : public ::mlir::Op<ConvertToSvboolIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvertToSvboolIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvertToSvboolIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.convert.to.svbool");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::OpOperand &getMaskMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ConvertToSvboolIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ConvertToSvboolOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvertToSvboolOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConvertToSvboolOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConvertToSvboolOpGenericAdaptorBase(ConvertToSvboolOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ConvertToSvboolOpGenericAdaptor : public detail::ConvertToSvboolOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvertToSvboolOpGenericAdaptorBase;
public:
  ConvertToSvboolOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvertToSvboolOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvertToSvboolOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConvertToSvboolOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvertToSvboolOp>>>
  ConvertToSvboolOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ConvertToSvboolOpAdaptor : public ConvertToSvboolOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvertToSvboolOpGenericAdaptor::ConvertToSvboolOpGenericAdaptor;
  ConvertToSvboolOpAdaptor(ConvertToSvboolOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvertToSvboolOp : public ::mlir::Op<ConvertToSvboolOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvertToSvboolOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvertToSvboolOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.convert_to_svbool");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getSource();
  ::mlir::OpOperand &getSourceMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getResult();
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
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ConvertToSvboolOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedAddFIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedAddFIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedAddFIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedAddFIntrOpGenericAdaptorBase(ScalableMaskedAddFIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedAddFIntrOpGenericAdaptor : public detail::ScalableMaskedAddFIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedAddFIntrOpGenericAdaptorBase;
public:
  ScalableMaskedAddFIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedAddFIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedAddFIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedAddFIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedAddFIntrOp>>>
  ScalableMaskedAddFIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ScalableMaskedAddFIntrOpAdaptor : public ScalableMaskedAddFIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedAddFIntrOpGenericAdaptor::ScalableMaskedAddFIntrOpGenericAdaptor;
  ScalableMaskedAddFIntrOpAdaptor(ScalableMaskedAddFIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedAddFIntrOp : public ::mlir::Op<ScalableMaskedAddFIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedAddFIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedAddFIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.fadd");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedAddFIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedAddFOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedAddFOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedAddFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedAddFOpGenericAdaptorBase(ScalableMaskedAddFOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedAddFOpGenericAdaptor : public detail::ScalableMaskedAddFOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedAddFOpGenericAdaptorBase;
public:
  ScalableMaskedAddFOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedAddFOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedAddFOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedAddFOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedAddFOp>>>
  ScalableMaskedAddFOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMask() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSrc2() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ScalableMaskedAddFOpAdaptor : public ScalableMaskedAddFOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedAddFOpGenericAdaptor::ScalableMaskedAddFOpGenericAdaptor;
  ScalableMaskedAddFOpAdaptor(ScalableMaskedAddFOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedAddFOp : public ::mlir::Op<ScalableMaskedAddFOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsCommutative> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedAddFOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedAddFOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.masked.addf");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::TypedValue<::mlir::VectorType> getSrc1();
  ::mlir::TypedValue<::mlir::VectorType> getSrc2();
  ::mlir::OpOperand &getMaskMutable();
  ::mlir::OpOperand &getSrc1Mutable();
  ::mlir::OpOperand &getSrc2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedAddFOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedAddIIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedAddIIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedAddIIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedAddIIntrOpGenericAdaptorBase(ScalableMaskedAddIIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedAddIIntrOpGenericAdaptor : public detail::ScalableMaskedAddIIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedAddIIntrOpGenericAdaptorBase;
public:
  ScalableMaskedAddIIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedAddIIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedAddIIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedAddIIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedAddIIntrOp>>>
  ScalableMaskedAddIIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ScalableMaskedAddIIntrOpAdaptor : public ScalableMaskedAddIIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedAddIIntrOpGenericAdaptor::ScalableMaskedAddIIntrOpGenericAdaptor;
  ScalableMaskedAddIIntrOpAdaptor(ScalableMaskedAddIIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedAddIIntrOp : public ::mlir::Op<ScalableMaskedAddIIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedAddIIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedAddIIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.add");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedAddIIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedAddIOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedAddIOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedAddIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedAddIOpGenericAdaptorBase(ScalableMaskedAddIOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedAddIOpGenericAdaptor : public detail::ScalableMaskedAddIOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedAddIOpGenericAdaptorBase;
public:
  ScalableMaskedAddIOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedAddIOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedAddIOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedAddIOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedAddIOp>>>
  ScalableMaskedAddIOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMask() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSrc2() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ScalableMaskedAddIOpAdaptor : public ScalableMaskedAddIOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedAddIOpGenericAdaptor::ScalableMaskedAddIOpGenericAdaptor;
  ScalableMaskedAddIOpAdaptor(ScalableMaskedAddIOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedAddIOp : public ::mlir::Op<ScalableMaskedAddIOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsCommutative> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedAddIOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedAddIOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.masked.addi");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::TypedValue<::mlir::VectorType> getSrc1();
  ::mlir::TypedValue<::mlir::VectorType> getSrc2();
  ::mlir::OpOperand &getMaskMutable();
  ::mlir::OpOperand &getSrc1Mutable();
  ::mlir::OpOperand &getSrc2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedAddIOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedDivFIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedDivFIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedDivFIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedDivFIntrOpGenericAdaptorBase(ScalableMaskedDivFIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedDivFIntrOpGenericAdaptor : public detail::ScalableMaskedDivFIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedDivFIntrOpGenericAdaptorBase;
public:
  ScalableMaskedDivFIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedDivFIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedDivFIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedDivFIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedDivFIntrOp>>>
  ScalableMaskedDivFIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ScalableMaskedDivFIntrOpAdaptor : public ScalableMaskedDivFIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedDivFIntrOpGenericAdaptor::ScalableMaskedDivFIntrOpGenericAdaptor;
  ScalableMaskedDivFIntrOpAdaptor(ScalableMaskedDivFIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedDivFIntrOp : public ::mlir::Op<ScalableMaskedDivFIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedDivFIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedDivFIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.fdiv");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedDivFIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedDivFOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedDivFOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedDivFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedDivFOpGenericAdaptorBase(ScalableMaskedDivFOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedDivFOpGenericAdaptor : public detail::ScalableMaskedDivFOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedDivFOpGenericAdaptorBase;
public:
  ScalableMaskedDivFOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedDivFOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedDivFOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedDivFOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedDivFOp>>>
  ScalableMaskedDivFOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMask() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSrc2() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ScalableMaskedDivFOpAdaptor : public ScalableMaskedDivFOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedDivFOpGenericAdaptor::ScalableMaskedDivFOpGenericAdaptor;
  ScalableMaskedDivFOpAdaptor(ScalableMaskedDivFOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedDivFOp : public ::mlir::Op<ScalableMaskedDivFOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedDivFOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedDivFOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.masked.divf");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::TypedValue<::mlir::VectorType> getSrc1();
  ::mlir::TypedValue<::mlir::VectorType> getSrc2();
  ::mlir::OpOperand &getMaskMutable();
  ::mlir::OpOperand &getSrc1Mutable();
  ::mlir::OpOperand &getSrc2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedDivFOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedMulFIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedMulFIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedMulFIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedMulFIntrOpGenericAdaptorBase(ScalableMaskedMulFIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedMulFIntrOpGenericAdaptor : public detail::ScalableMaskedMulFIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedMulFIntrOpGenericAdaptorBase;
public:
  ScalableMaskedMulFIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedMulFIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedMulFIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedMulFIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedMulFIntrOp>>>
  ScalableMaskedMulFIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ScalableMaskedMulFIntrOpAdaptor : public ScalableMaskedMulFIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedMulFIntrOpGenericAdaptor::ScalableMaskedMulFIntrOpGenericAdaptor;
  ScalableMaskedMulFIntrOpAdaptor(ScalableMaskedMulFIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedMulFIntrOp : public ::mlir::Op<ScalableMaskedMulFIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedMulFIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedMulFIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.fmul");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedMulFIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedMulFOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedMulFOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedMulFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedMulFOpGenericAdaptorBase(ScalableMaskedMulFOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedMulFOpGenericAdaptor : public detail::ScalableMaskedMulFOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedMulFOpGenericAdaptorBase;
public:
  ScalableMaskedMulFOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedMulFOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedMulFOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedMulFOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedMulFOp>>>
  ScalableMaskedMulFOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMask() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSrc2() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ScalableMaskedMulFOpAdaptor : public ScalableMaskedMulFOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedMulFOpGenericAdaptor::ScalableMaskedMulFOpGenericAdaptor;
  ScalableMaskedMulFOpAdaptor(ScalableMaskedMulFOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedMulFOp : public ::mlir::Op<ScalableMaskedMulFOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsCommutative> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedMulFOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedMulFOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.masked.mulf");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::TypedValue<::mlir::VectorType> getSrc1();
  ::mlir::TypedValue<::mlir::VectorType> getSrc2();
  ::mlir::OpOperand &getMaskMutable();
  ::mlir::OpOperand &getSrc1Mutable();
  ::mlir::OpOperand &getSrc2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedMulFOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedMulIIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedMulIIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedMulIIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedMulIIntrOpGenericAdaptorBase(ScalableMaskedMulIIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedMulIIntrOpGenericAdaptor : public detail::ScalableMaskedMulIIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedMulIIntrOpGenericAdaptorBase;
public:
  ScalableMaskedMulIIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedMulIIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedMulIIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedMulIIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedMulIIntrOp>>>
  ScalableMaskedMulIIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ScalableMaskedMulIIntrOpAdaptor : public ScalableMaskedMulIIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedMulIIntrOpGenericAdaptor::ScalableMaskedMulIIntrOpGenericAdaptor;
  ScalableMaskedMulIIntrOpAdaptor(ScalableMaskedMulIIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedMulIIntrOp : public ::mlir::Op<ScalableMaskedMulIIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedMulIIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedMulIIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.mul");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedMulIIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedMulIOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedMulIOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedMulIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedMulIOpGenericAdaptorBase(ScalableMaskedMulIOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedMulIOpGenericAdaptor : public detail::ScalableMaskedMulIOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedMulIOpGenericAdaptorBase;
public:
  ScalableMaskedMulIOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedMulIOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedMulIOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedMulIOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedMulIOp>>>
  ScalableMaskedMulIOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMask() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSrc2() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ScalableMaskedMulIOpAdaptor : public ScalableMaskedMulIOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedMulIOpGenericAdaptor::ScalableMaskedMulIOpGenericAdaptor;
  ScalableMaskedMulIOpAdaptor(ScalableMaskedMulIOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedMulIOp : public ::mlir::Op<ScalableMaskedMulIOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsCommutative> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedMulIOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedMulIOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.masked.muli");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::TypedValue<::mlir::VectorType> getSrc1();
  ::mlir::TypedValue<::mlir::VectorType> getSrc2();
  ::mlir::OpOperand &getMaskMutable();
  ::mlir::OpOperand &getSrc1Mutable();
  ::mlir::OpOperand &getSrc2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedMulIOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedSDivIIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedSDivIIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedSDivIIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedSDivIIntrOpGenericAdaptorBase(ScalableMaskedSDivIIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedSDivIIntrOpGenericAdaptor : public detail::ScalableMaskedSDivIIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedSDivIIntrOpGenericAdaptorBase;
public:
  ScalableMaskedSDivIIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedSDivIIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedSDivIIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedSDivIIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedSDivIIntrOp>>>
  ScalableMaskedSDivIIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ScalableMaskedSDivIIntrOpAdaptor : public ScalableMaskedSDivIIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedSDivIIntrOpGenericAdaptor::ScalableMaskedSDivIIntrOpGenericAdaptor;
  ScalableMaskedSDivIIntrOpAdaptor(ScalableMaskedSDivIIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedSDivIIntrOp : public ::mlir::Op<ScalableMaskedSDivIIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedSDivIIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedSDivIIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.sdiv");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedSDivIIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedSDivIOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedSDivIOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedSDivIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedSDivIOpGenericAdaptorBase(ScalableMaskedSDivIOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedSDivIOpGenericAdaptor : public detail::ScalableMaskedSDivIOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedSDivIOpGenericAdaptorBase;
public:
  ScalableMaskedSDivIOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedSDivIOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedSDivIOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedSDivIOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedSDivIOp>>>
  ScalableMaskedSDivIOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMask() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSrc2() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ScalableMaskedSDivIOpAdaptor : public ScalableMaskedSDivIOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedSDivIOpGenericAdaptor::ScalableMaskedSDivIOpGenericAdaptor;
  ScalableMaskedSDivIOpAdaptor(ScalableMaskedSDivIOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedSDivIOp : public ::mlir::Op<ScalableMaskedSDivIOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedSDivIOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedSDivIOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.masked.divi_signed");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::TypedValue<::mlir::VectorType> getSrc1();
  ::mlir::TypedValue<::mlir::VectorType> getSrc2();
  ::mlir::OpOperand &getMaskMutable();
  ::mlir::OpOperand &getSrc1Mutable();
  ::mlir::OpOperand &getSrc2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedSDivIOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedSubFIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedSubFIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedSubFIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedSubFIntrOpGenericAdaptorBase(ScalableMaskedSubFIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedSubFIntrOpGenericAdaptor : public detail::ScalableMaskedSubFIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedSubFIntrOpGenericAdaptorBase;
public:
  ScalableMaskedSubFIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedSubFIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedSubFIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedSubFIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedSubFIntrOp>>>
  ScalableMaskedSubFIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ScalableMaskedSubFIntrOpAdaptor : public ScalableMaskedSubFIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedSubFIntrOpGenericAdaptor::ScalableMaskedSubFIntrOpGenericAdaptor;
  ScalableMaskedSubFIntrOpAdaptor(ScalableMaskedSubFIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedSubFIntrOp : public ::mlir::Op<ScalableMaskedSubFIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedSubFIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedSubFIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.fsub");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedSubFIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedSubFOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedSubFOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedSubFOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedSubFOpGenericAdaptorBase(ScalableMaskedSubFOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedSubFOpGenericAdaptor : public detail::ScalableMaskedSubFOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedSubFOpGenericAdaptorBase;
public:
  ScalableMaskedSubFOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedSubFOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedSubFOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedSubFOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedSubFOp>>>
  ScalableMaskedSubFOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMask() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSrc2() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ScalableMaskedSubFOpAdaptor : public ScalableMaskedSubFOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedSubFOpGenericAdaptor::ScalableMaskedSubFOpGenericAdaptor;
  ScalableMaskedSubFOpAdaptor(ScalableMaskedSubFOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedSubFOp : public ::mlir::Op<ScalableMaskedSubFOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedSubFOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedSubFOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.masked.subf");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::TypedValue<::mlir::VectorType> getSrc1();
  ::mlir::TypedValue<::mlir::VectorType> getSrc2();
  ::mlir::OpOperand &getMaskMutable();
  ::mlir::OpOperand &getSrc1Mutable();
  ::mlir::OpOperand &getSrc2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedSubFOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedSubIIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedSubIIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedSubIIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedSubIIntrOpGenericAdaptorBase(ScalableMaskedSubIIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedSubIIntrOpGenericAdaptor : public detail::ScalableMaskedSubIIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedSubIIntrOpGenericAdaptorBase;
public:
  ScalableMaskedSubIIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedSubIIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedSubIIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedSubIIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedSubIIntrOp>>>
  ScalableMaskedSubIIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ScalableMaskedSubIIntrOpAdaptor : public ScalableMaskedSubIIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedSubIIntrOpGenericAdaptor::ScalableMaskedSubIIntrOpGenericAdaptor;
  ScalableMaskedSubIIntrOpAdaptor(ScalableMaskedSubIIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedSubIIntrOp : public ::mlir::Op<ScalableMaskedSubIIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedSubIIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedSubIIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.sub");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedSubIIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedSubIOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedSubIOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedSubIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedSubIOpGenericAdaptorBase(ScalableMaskedSubIOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedSubIOpGenericAdaptor : public detail::ScalableMaskedSubIOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedSubIOpGenericAdaptorBase;
public:
  ScalableMaskedSubIOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedSubIOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedSubIOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedSubIOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedSubIOp>>>
  ScalableMaskedSubIOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMask() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSrc2() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ScalableMaskedSubIOpAdaptor : public ScalableMaskedSubIOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedSubIOpGenericAdaptor::ScalableMaskedSubIOpGenericAdaptor;
  ScalableMaskedSubIOpAdaptor(ScalableMaskedSubIOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedSubIOp : public ::mlir::Op<ScalableMaskedSubIOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedSubIOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedSubIOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.masked.subi");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::TypedValue<::mlir::VectorType> getSrc1();
  ::mlir::TypedValue<::mlir::VectorType> getSrc2();
  ::mlir::OpOperand &getMaskMutable();
  ::mlir::OpOperand &getSrc1Mutable();
  ::mlir::OpOperand &getSrc2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedSubIOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedUDivIIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedUDivIIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedUDivIIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedUDivIIntrOpGenericAdaptorBase(ScalableMaskedUDivIIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedUDivIIntrOpGenericAdaptor : public detail::ScalableMaskedUDivIIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedUDivIIntrOpGenericAdaptorBase;
public:
  ScalableMaskedUDivIIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedUDivIIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedUDivIIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedUDivIIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedUDivIIntrOp>>>
  ScalableMaskedUDivIIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ScalableMaskedUDivIIntrOpAdaptor : public ScalableMaskedUDivIIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedUDivIIntrOpGenericAdaptor::ScalableMaskedUDivIIntrOpGenericAdaptor;
  ScalableMaskedUDivIIntrOpAdaptor(ScalableMaskedUDivIIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedUDivIIntrOp : public ::mlir::Op<ScalableMaskedUDivIIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedUDivIIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedUDivIIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.udiv");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedUDivIIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::ScalableMaskedUDivIOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScalableMaskedUDivIOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ScalableMaskedUDivIOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ScalableMaskedUDivIOpGenericAdaptorBase(ScalableMaskedUDivIOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ScalableMaskedUDivIOpGenericAdaptor : public detail::ScalableMaskedUDivIOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScalableMaskedUDivIOpGenericAdaptorBase;
public:
  ScalableMaskedUDivIOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScalableMaskedUDivIOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScalableMaskedUDivIOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ScalableMaskedUDivIOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScalableMaskedUDivIOp>>>
  ScalableMaskedUDivIOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getMask() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSrc2() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ScalableMaskedUDivIOpAdaptor : public ScalableMaskedUDivIOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScalableMaskedUDivIOpGenericAdaptor::ScalableMaskedUDivIOpGenericAdaptor;
  ScalableMaskedUDivIOpAdaptor(ScalableMaskedUDivIOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScalableMaskedUDivIOp : public ::mlir::Op<ScalableMaskedUDivIOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScalableMaskedUDivIOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScalableMaskedUDivIOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.masked.divi_unsigned");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getMask();
  ::mlir::TypedValue<::mlir::VectorType> getSrc1();
  ::mlir::TypedValue<::mlir::VectorType> getSrc2();
  ::mlir::OpOperand &getMaskMutable();
  ::mlir::OpOperand &getSrc1Mutable();
  ::mlir::OpOperand &getSrc2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value mask, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::ScalableMaskedUDivIOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::SdotIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SdotIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  SdotIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  SdotIntrOpGenericAdaptorBase(SdotIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class SdotIntrOpGenericAdaptor : public detail::SdotIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SdotIntrOpGenericAdaptorBase;
public:
  SdotIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SdotIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SdotIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = SdotIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, SdotIntrOp>>>
  SdotIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class SdotIntrOpAdaptor : public SdotIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SdotIntrOpGenericAdaptor::SdotIntrOpGenericAdaptor;
  SdotIntrOpAdaptor(SdotIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SdotIntrOp : public ::mlir::Op<SdotIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SdotIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SdotIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.sdot");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::SdotIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::SdotOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SdotOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  SdotOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  SdotOpGenericAdaptorBase(SdotOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class SdotOpGenericAdaptor : public detail::SdotOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SdotOpGenericAdaptorBase;
public:
  SdotOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SdotOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SdotOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = SdotOp, typename = std::enable_if_t<std::is_same_v<LateInst, SdotOp>>>
  SdotOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getAcc() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSrc2() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SdotOpAdaptor : public SdotOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SdotOpGenericAdaptor::SdotOpGenericAdaptor;
  SdotOpAdaptor(SdotOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SdotOp : public ::mlir::Op<SdotOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SdotOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SdotOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.sdot");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::TypedValue<::mlir::VectorType> getSrc1();
  ::mlir::TypedValue<::mlir::VectorType> getSrc2();
  ::mlir::OpOperand &getAccMutable();
  ::mlir::OpOperand &getSrc1Mutable();
  ::mlir::OpOperand &getSrc2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getDst();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::SdotOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::SmmlaIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SmmlaIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  SmmlaIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  SmmlaIntrOpGenericAdaptorBase(SmmlaIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class SmmlaIntrOpGenericAdaptor : public detail::SmmlaIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SmmlaIntrOpGenericAdaptorBase;
public:
  SmmlaIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SmmlaIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SmmlaIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = SmmlaIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, SmmlaIntrOp>>>
  SmmlaIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class SmmlaIntrOpAdaptor : public SmmlaIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SmmlaIntrOpGenericAdaptor::SmmlaIntrOpGenericAdaptor;
  SmmlaIntrOpAdaptor(SmmlaIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SmmlaIntrOp : public ::mlir::Op<SmmlaIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SmmlaIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SmmlaIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.smmla");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::SmmlaIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::SmmlaOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SmmlaOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  SmmlaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  SmmlaOpGenericAdaptorBase(SmmlaOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class SmmlaOpGenericAdaptor : public detail::SmmlaOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SmmlaOpGenericAdaptorBase;
public:
  SmmlaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SmmlaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SmmlaOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = SmmlaOp, typename = std::enable_if_t<std::is_same_v<LateInst, SmmlaOp>>>
  SmmlaOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getAcc() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSrc2() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SmmlaOpAdaptor : public SmmlaOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SmmlaOpGenericAdaptor::SmmlaOpGenericAdaptor;
  SmmlaOpAdaptor(SmmlaOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SmmlaOp : public ::mlir::Op<SmmlaOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SmmlaOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SmmlaOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.smmla");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::TypedValue<::mlir::VectorType> getSrc1();
  ::mlir::TypedValue<::mlir::VectorType> getSrc2();
  ::mlir::OpOperand &getAccMutable();
  ::mlir::OpOperand &getSrc1Mutable();
  ::mlir::OpOperand &getSrc2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getDst();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::SmmlaOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::UdotIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UdotIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  UdotIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  UdotIntrOpGenericAdaptorBase(UdotIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class UdotIntrOpGenericAdaptor : public detail::UdotIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UdotIntrOpGenericAdaptorBase;
public:
  UdotIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  UdotIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : UdotIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = UdotIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, UdotIntrOp>>>
  UdotIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class UdotIntrOpAdaptor : public UdotIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UdotIntrOpGenericAdaptor::UdotIntrOpGenericAdaptor;
  UdotIntrOpAdaptor(UdotIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UdotIntrOp : public ::mlir::Op<UdotIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UdotIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UdotIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.udot");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::UdotIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::UdotOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UdotOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  UdotOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  UdotOpGenericAdaptorBase(UdotOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class UdotOpGenericAdaptor : public detail::UdotOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UdotOpGenericAdaptorBase;
public:
  UdotOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  UdotOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : UdotOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = UdotOp, typename = std::enable_if_t<std::is_same_v<LateInst, UdotOp>>>
  UdotOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getAcc() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSrc2() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class UdotOpAdaptor : public UdotOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UdotOpGenericAdaptor::UdotOpGenericAdaptor;
  UdotOpAdaptor(UdotOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UdotOp : public ::mlir::Op<UdotOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UdotOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UdotOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.udot");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::TypedValue<::mlir::VectorType> getSrc1();
  ::mlir::TypedValue<::mlir::VectorType> getSrc2();
  ::mlir::OpOperand &getAccMutable();
  ::mlir::OpOperand &getSrc1Mutable();
  ::mlir::OpOperand &getSrc2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getDst();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::UdotOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::UmmlaIntrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UmmlaIntrOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  UmmlaIntrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  UmmlaIntrOpGenericAdaptorBase(UmmlaIntrOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class UmmlaIntrOpGenericAdaptor : public detail::UmmlaIntrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UmmlaIntrOpGenericAdaptorBase;
public:
  UmmlaIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  UmmlaIntrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : UmmlaIntrOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = UmmlaIntrOp, typename = std::enable_if_t<std::is_same_v<LateInst, UmmlaIntrOp>>>
  UmmlaIntrOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class UmmlaIntrOpAdaptor : public UmmlaIntrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UmmlaIntrOpGenericAdaptor::UmmlaIntrOpGenericAdaptor;
  UmmlaIntrOpAdaptor(UmmlaIntrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UmmlaIntrOp : public ::mlir::Op<UmmlaIntrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UmmlaIntrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UmmlaIntrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.intr.ummla");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value odsArg_0, ::mlir::Value odsArg_1, ::mlir::Value odsArg_2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::UmmlaIntrOp)

namespace mlir {
namespace arm_sve {

//===----------------------------------------------------------------------===//
// ::mlir::arm_sve::UmmlaOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UmmlaOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  UmmlaOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  UmmlaOpGenericAdaptorBase(UmmlaOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class UmmlaOpGenericAdaptor : public detail::UmmlaOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UmmlaOpGenericAdaptorBase;
public:
  UmmlaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  UmmlaOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : UmmlaOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = UmmlaOp, typename = std::enable_if_t<std::is_same_v<LateInst, UmmlaOp>>>
  UmmlaOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getAcc() {
    return (*getODSOperands(0).begin());
  }

  ValueT getSrc1() {
    return (*getODSOperands(1).begin());
  }

  ValueT getSrc2() {
    return (*getODSOperands(2).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class UmmlaOpAdaptor : public UmmlaOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UmmlaOpGenericAdaptor::UmmlaOpGenericAdaptor;
  UmmlaOpAdaptor(UmmlaOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UmmlaOp : public ::mlir::Op<UmmlaOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::VectorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<3>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UmmlaOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UmmlaOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("arm_sve.ummla");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getAcc();
  ::mlir::TypedValue<::mlir::VectorType> getSrc1();
  ::mlir::TypedValue<::mlir::VectorType> getSrc2();
  ::mlir::OpOperand &getAccMutable();
  ::mlir::OpOperand &getSrc1Mutable();
  ::mlir::OpOperand &getSrc2Mutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::VectorType> getDst();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type dst, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value acc, ::mlir::Value src1, ::mlir::Value src2);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace arm_sve
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sve::UmmlaOp)


#endif  // GET_OP_CLASSES

