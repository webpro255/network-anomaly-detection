/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: VCIXOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace vcix {
class BinaryImmOp;
} // namespace vcix
} // namespace mlir
namespace mlir {
namespace vcix {
class BinaryOp;
} // namespace vcix
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace vcix {

//===----------------------------------------------------------------------===//
// ::mlir::vcix::BinaryImmOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BinaryImmOpGenericAdaptorBase {
public:
  struct Properties {
    using immTy = ::mlir::Attribute;
    immTy imm;

    auto getImm() {
      auto &propStorage = this->imm;
      return ::llvm::cast<::mlir::Attribute>(propStorage);
    }
    void setImm(const ::mlir::Attribute &propValue) {
      this->imm = propValue;
    }
    using opcodeTy = ::mlir::Attribute;
    opcodeTy opcode;

    auto getOpcode() {
      auto &propStorage = this->opcode;
      return ::llvm::cast<::mlir::Attribute>(propStorage);
    }
    void setOpcode(const ::mlir::Attribute &propValue) {
      this->opcode = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.imm == this->imm &&
        rhs.opcode == this->opcode &&
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
  BinaryImmOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  BinaryImmOpGenericAdaptorBase(BinaryImmOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Attribute getOpcodeAttr();
  ::mlir::Attribute getOpcode();
  ::mlir::Attribute getImmAttr();
  ::mlir::Attribute getImm();
};
} // namespace detail
template <typename RangeT>
class BinaryImmOpGenericAdaptor : public detail::BinaryImmOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BinaryImmOpGenericAdaptorBase;
public:
  BinaryImmOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BinaryImmOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BinaryImmOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = BinaryImmOp, typename = std::enable_if_t<std::is_same_v<LateInst, BinaryImmOp>>>
  BinaryImmOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVs2() {
    return (*getODSOperands(0).begin());
  }

  ValueT getVl() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BinaryImmOpAdaptor : public BinaryImmOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BinaryImmOpGenericAdaptor::BinaryImmOpGenericAdaptor;
  BinaryImmOpAdaptor(BinaryImmOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BinaryImmOp : public ::mlir::Op<BinaryImmOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BinaryImmOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BinaryImmOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("imm"), ::llvm::StringRef("opcode")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getImmAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getImmAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOpcodeAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOpcodeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("vcix.v.iv");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVs2();
  ::mlir::Value getVl();
  ::mlir::OpOperand &getVs2Mutable();
  ::mlir::MutableOperandRange getVlMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::Attribute getOpcodeAttr();
  ::mlir::Attribute getOpcode();
  ::mlir::Attribute getImmAttr();
  ::mlir::Attribute getImm();
  void setOpcodeAttr(::mlir::Attribute attr);
  void setImmAttr(::mlir::Attribute attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Attribute opcode, ::mlir::Value vs2, ::mlir::Attribute imm, /*optional*/::mlir::Value vl);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Attribute opcode, ::mlir::Value vs2, ::mlir::Attribute imm, /*optional*/::mlir::Value vl);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
} // namespace vcix
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::vcix::BinaryImmOp)

namespace mlir {
namespace vcix {

//===----------------------------------------------------------------------===//
// ::mlir::vcix::BinaryOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BinaryOpGenericAdaptorBase {
public:
  struct Properties {
    using opcodeTy = ::mlir::Attribute;
    opcodeTy opcode;

    auto getOpcode() {
      auto &propStorage = this->opcode;
      return ::llvm::cast<::mlir::Attribute>(propStorage);
    }
    void setOpcode(const ::mlir::Attribute &propValue) {
      this->opcode = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.opcode == this->opcode &&
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
  ::mlir::Attribute getOpcodeAttr();
  ::mlir::Attribute getOpcode();
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

  ValueT getVs2() {
    return (*getODSOperands(0).begin());
  }

  ValueT getOp() {
    return (*getODSOperands(1).begin());
  }

  ValueT getVl() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
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
class BinaryOp : public ::mlir::Op<BinaryOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BinaryOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BinaryOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("opcode")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getOpcodeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getOpcodeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("vcix.v.sv");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getVs2();
  ::mlir::Value getOp();
  ::mlir::Value getVl();
  ::mlir::OpOperand &getVs2Mutable();
  ::mlir::OpOperand &getOpMutable();
  ::mlir::MutableOperandRange getVlMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getRes();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::Attribute getOpcodeAttr();
  ::mlir::Attribute getOpcode();
  void setOpcodeAttr(::mlir::Attribute attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type res, ::mlir::Attribute opcode, ::mlir::Value vs2, ::mlir::Value op, /*optional*/::mlir::Value vl);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Attribute opcode, ::mlir::Value vs2, ::mlir::Value op, /*optional*/::mlir::Value vl);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
} // namespace vcix
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::vcix::BinaryOp)


#endif  // GET_OP_CLASSES

