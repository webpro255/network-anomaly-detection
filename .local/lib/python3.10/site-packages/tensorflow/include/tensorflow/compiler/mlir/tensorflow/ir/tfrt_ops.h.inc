/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: tfrt_ops.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace TF {
class IfrtCallOp;
} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {
class IfrtLoadVariableOp;
} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {
class PwStreamResultsOp;
} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {
class _TfrtGetResourceOp;
} // namespace TF
} // namespace mlir
namespace mlir {
namespace TF {
class _TfrtSetResourceOp;
} // namespace TF
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::IfrtCallOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class IfrtCallOpGenericAdaptorBase {
public:
  struct Properties {
    using program_idTy = ::mlir::IntegerAttr;
    program_idTy program_id;

    auto getProgramId() {
      auto &propStorage = this->program_id;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setProgramId(const ::mlir::IntegerAttr &propValue) {
      this->program_id = propValue;
    }
    using variable_arg_indicesTy = ::mlir::ArrayAttr;
    variable_arg_indicesTy variable_arg_indices;

    auto getVariableArgIndices() {
      auto &propStorage = this->variable_arg_indices;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setVariableArgIndices(const ::mlir::ArrayAttr &propValue) {
      this->variable_arg_indices = propValue;
    }
    using variable_namesTy = ::mlir::ArrayAttr;
    variable_namesTy variable_names;

    auto getVariableNames() {
      auto &propStorage = this->variable_names;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setVariableNames(const ::mlir::ArrayAttr &propValue) {
      this->variable_names = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.program_id == this->program_id &&
        rhs.variable_arg_indices == this->variable_arg_indices &&
        rhs.variable_names == this->variable_names &&
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
  IfrtCallOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  IfrtCallOpGenericAdaptorBase(IfrtCallOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getProgramIdAttr();
  uint64_t getProgramId();
  ::mlir::ArrayAttr getVariableNamesAttr();
  ::mlir::ArrayAttr getVariableNames();
  ::mlir::ArrayAttr getVariableArgIndicesAttr();
  ::mlir::ArrayAttr getVariableArgIndices();
};
} // namespace detail
template <typename RangeT>
class IfrtCallOpGenericAdaptor : public detail::IfrtCallOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::IfrtCallOpGenericAdaptorBase;
public:
  IfrtCallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  IfrtCallOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : IfrtCallOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = IfrtCallOp, typename = std::enable_if_t<std::is_same_v<LateInst, IfrtCallOp>>>
  IfrtCallOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class IfrtCallOpAdaptor : public IfrtCallOpGenericAdaptor<::mlir::ValueRange> {
public:
  using IfrtCallOpGenericAdaptor::IfrtCallOpGenericAdaptor;
  IfrtCallOpAdaptor(IfrtCallOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class IfrtCallOp : public ::mlir::Op<IfrtCallOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = IfrtCallOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = IfrtCallOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("Tin"), ::llvm::StringRef("Tout"), ::llvm::StringRef("program_id"), ::llvm::StringRef("variable_arg_indices"), ::llvm::StringRef("variable_names")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTinAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTinAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getToutAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getToutAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getProgramIdAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getProgramIdAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getVariableArgIndicesAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getVariableArgIndicesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getVariableNamesAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getVariableNamesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf.IfrtCall");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
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
  ::mlir::IntegerAttr getProgramIdAttr();
  uint64_t getProgramId();
  ::mlir::ArrayAttr getVariableNamesAttr();
  ::mlir::ArrayAttr getVariableNames();
  ::mlir::ArrayAttr getVariableArgIndicesAttr();
  ::mlir::ArrayAttr getVariableArgIndices();
  mlir::OperandElementTypeRange getTin();
  mlir::ResultElementTypeRange getTout();
  static bool isDerivedAttribute(::llvm::StringRef name);
  ::mlir::DictionaryAttr materializeDerivedAttributes();
  void setProgramIdAttr(::mlir::IntegerAttr attr);
  void setProgramId(uint64_t attrValue);
  void setVariableNamesAttr(::mlir::ArrayAttr attr);
  void setVariableArgIndicesAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::ValueRange args, ::mlir::IntegerAttr program_id, ::mlir::ArrayAttr variable_names, ::mlir::ArrayAttr variable_arg_indices);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::ValueRange args, uint64_t program_id, ::mlir::ArrayAttr variable_names, ::mlir::ArrayAttr variable_arg_indices);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace TF
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::TF::IfrtCallOp)

namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::IfrtLoadVariableOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class IfrtLoadVariableOpGenericAdaptorBase {
public:
  struct Properties {
    using device_sharding_config_proto_textTy = ::mlir::StringAttr;
    device_sharding_config_proto_textTy device_sharding_config_proto_text;

    auto getDeviceShardingConfigProtoText() {
      auto &propStorage = this->device_sharding_config_proto_text;
      return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(propStorage);
    }
    void setDeviceShardingConfigProtoText(const ::mlir::StringAttr &propValue) {
      this->device_sharding_config_proto_text = propValue;
    }
    using nameTy = ::mlir::StringAttr;
    nameTy name;

    auto getName() {
      auto &propStorage = this->name;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setName(const ::mlir::StringAttr &propValue) {
      this->name = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.device_sharding_config_proto_text == this->device_sharding_config_proto_text &&
        rhs.name == this->name &&
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
  IfrtLoadVariableOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  IfrtLoadVariableOpGenericAdaptorBase(IfrtLoadVariableOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getDeviceShardingConfigProtoTextAttr();
  ::llvm::StringRef getDeviceShardingConfigProtoText();
  ::mlir::StringAttr getNameAttr();
  ::llvm::StringRef getName();
};
} // namespace detail
template <typename RangeT>
class IfrtLoadVariableOpGenericAdaptor : public detail::IfrtLoadVariableOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::IfrtLoadVariableOpGenericAdaptorBase;
public:
  IfrtLoadVariableOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  IfrtLoadVariableOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : IfrtLoadVariableOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = IfrtLoadVariableOp, typename = std::enable_if_t<std::is_same_v<LateInst, IfrtLoadVariableOp>>>
  IfrtLoadVariableOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getVariable() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class IfrtLoadVariableOpAdaptor : public IfrtLoadVariableOpGenericAdaptor<::mlir::ValueRange> {
public:
  using IfrtLoadVariableOpGenericAdaptor::IfrtLoadVariableOpGenericAdaptor;
  IfrtLoadVariableOpAdaptor(IfrtLoadVariableOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class IfrtLoadVariableOp : public ::mlir::Op<IfrtLoadVariableOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = IfrtLoadVariableOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = IfrtLoadVariableOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("Tin"), ::llvm::StringRef("device_sharding_config_proto_text"), ::llvm::StringRef("name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTinAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTinAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getDeviceShardingConfigProtoTextAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getDeviceShardingConfigProtoTextAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getNameAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf.IfrtLoadVariable");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getVariable();
  ::mlir::OpOperand &getVariableMutable();
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
  ::mlir::StringAttr getDeviceShardingConfigProtoTextAttr();
  ::llvm::StringRef getDeviceShardingConfigProtoText();
  ::mlir::StringAttr getNameAttr();
  ::llvm::StringRef getName();
  mlir::OperandElementTypeRange getTin();
  static bool isDerivedAttribute(::llvm::StringRef name);
  ::mlir::DictionaryAttr materializeDerivedAttributes();
  void setDeviceShardingConfigProtoTextAttr(::mlir::StringAttr attr);
  void setDeviceShardingConfigProtoText(::llvm::StringRef attrValue);
  void setNameAttr(::mlir::StringAttr attr);
  void setName(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value variable, ::mlir::StringAttr device_sharding_config_proto_text, ::mlir::StringAttr name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value variable, ::mlir::StringAttr device_sharding_config_proto_text, ::mlir::StringAttr name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value variable, ::llvm::StringRef device_sharding_config_proto_text, ::llvm::StringRef name);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value variable, ::llvm::StringRef device_sharding_config_proto_text, ::llvm::StringRef name);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
} // namespace TF
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::TF::IfrtLoadVariableOp)

namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::PwStreamResultsOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class PwStreamResultsOpGenericAdaptorBase {
public:
  struct Properties {
    using namesTy = ::mlir::ArrayAttr;
    namesTy names;

    auto getNames() {
      auto &propStorage = this->names;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setNames(const ::mlir::ArrayAttr &propValue) {
      this->names = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.names == this->names &&
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
  PwStreamResultsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  PwStreamResultsOpGenericAdaptorBase(PwStreamResultsOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getNamesAttr();
  ::mlir::ArrayAttr getNames();
};
} // namespace detail
template <typename RangeT>
class PwStreamResultsOpGenericAdaptor : public detail::PwStreamResultsOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::PwStreamResultsOpGenericAdaptorBase;
public:
  PwStreamResultsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  PwStreamResultsOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : PwStreamResultsOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = PwStreamResultsOp, typename = std::enable_if_t<std::is_same_v<LateInst, PwStreamResultsOp>>>
  PwStreamResultsOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getArgs() {
    return getODSOperands(0);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class PwStreamResultsOpAdaptor : public PwStreamResultsOpGenericAdaptor<::mlir::ValueRange> {
public:
  using PwStreamResultsOpGenericAdaptor::PwStreamResultsOpGenericAdaptor;
  PwStreamResultsOpAdaptor(PwStreamResultsOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class PwStreamResultsOp : public ::mlir::Op<PwStreamResultsOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::DerivedAttributeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = PwStreamResultsOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = PwStreamResultsOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("T"), ::llvm::StringRef("names")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getTAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getTAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getNamesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getNamesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf.PwStreamResults");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getArgs();
  ::mlir::MutableOperandRange getArgsMutable();
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
  ::mlir::ArrayAttr getNamesAttr();
  ::mlir::ArrayAttr getNames();
  mlir::OperandElementTypeRange getT();
  static bool isDerivedAttribute(::llvm::StringRef name);
  ::mlir::DictionaryAttr materializeDerivedAttributes();
  void setNamesAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange args, ::mlir::ArrayAttr names);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange args, ::mlir::ArrayAttr names);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
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
} // namespace TF
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::TF::PwStreamResultsOp)

namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_TfrtGetResourceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class _TfrtGetResourceOpGenericAdaptorBase {
public:
  struct Properties {
    using containerTy = ::mlir::ArrayAttr;
    containerTy container;

    auto getContainer() {
      auto &propStorage = this->container;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setContainer(const ::mlir::ArrayAttr &propValue) {
      this->container = propValue;
    }
    using indicesTy = ::mlir::ArrayAttr;
    indicesTy indices;

    auto getIndices() {
      auto &propStorage = this->indices;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setIndices(const ::mlir::ArrayAttr &propValue) {
      this->indices = propValue;
    }
    using shared_nameTy = ::mlir::ArrayAttr;
    shared_nameTy shared_name;

    auto getSharedName() {
      auto &propStorage = this->shared_name;
      return ::llvm::cast<::mlir::ArrayAttr>(propStorage);
    }
    void setSharedName(const ::mlir::ArrayAttr &propValue) {
      this->shared_name = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.container == this->container &&
        rhs.indices == this->indices &&
        rhs.shared_name == this->shared_name &&
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
  _TfrtGetResourceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  _TfrtGetResourceOpGenericAdaptorBase(_TfrtGetResourceOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getIndicesAttr();
  ::mlir::ArrayAttr getIndices();
  ::mlir::ArrayAttr getSharedNameAttr();
  ::mlir::ArrayAttr getSharedName();
  ::mlir::ArrayAttr getContainerAttr();
  ::mlir::ArrayAttr getContainer();
};
} // namespace detail
template <typename RangeT>
class _TfrtGetResourceOpGenericAdaptor : public detail::_TfrtGetResourceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::_TfrtGetResourceOpGenericAdaptorBase;
public:
  _TfrtGetResourceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  _TfrtGetResourceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : _TfrtGetResourceOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = _TfrtGetResourceOp, typename = std::enable_if_t<std::is_same_v<LateInst, _TfrtGetResourceOp>>>
  _TfrtGetResourceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class _TfrtGetResourceOpAdaptor : public _TfrtGetResourceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using _TfrtGetResourceOpGenericAdaptor::_TfrtGetResourceOpGenericAdaptor;
  _TfrtGetResourceOpAdaptor(_TfrtGetResourceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class _TfrtGetResourceOp : public ::mlir::Op<_TfrtGetResourceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::TF::NoConstantFold, ResourceHandleAllocatorInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = _TfrtGetResourceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = _TfrtGetResourceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("container"), ::llvm::StringRef("indices"), ::llvm::StringRef("shared_name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getContainerAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getContainerAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIndicesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIndicesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getSharedNameAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getSharedNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf._TfrtGetResource");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
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
  ::mlir::ArrayAttr getIndicesAttr();
  ::mlir::ArrayAttr getIndices();
  ::mlir::ArrayAttr getSharedNameAttr();
  ::mlir::ArrayAttr getSharedName();
  ::mlir::ArrayAttr getContainerAttr();
  ::mlir::ArrayAttr getContainer();
  void setIndicesAttr(::mlir::ArrayAttr attr);
  void setSharedNameAttr(::mlir::ArrayAttr attr);
  void setContainerAttr(::mlir::ArrayAttr attr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, ::mlir::ArrayAttr indices, ::mlir::ArrayAttr shared_name, ::mlir::ArrayAttr container);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  llvm::SmallVector<ResourceHandleValueAndId, 4> GetResourceHandleValueAndIdList(llvm::SmallDenseMap<ResourceHandle, int64_t>&resource_handle_id_map, int64_t&next_id);
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
} // namespace TF
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::TF::_TfrtGetResourceOp)

namespace mlir {
namespace TF {

//===----------------------------------------------------------------------===//
// ::mlir::TF::_TfrtSetResourceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class _TfrtSetResourceOpGenericAdaptorBase {
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
  _TfrtSetResourceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  _TfrtSetResourceOpGenericAdaptorBase(_TfrtSetResourceOp op);

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
class _TfrtSetResourceOpGenericAdaptor : public detail::_TfrtSetResourceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::_TfrtSetResourceOpGenericAdaptorBase;
public:
  _TfrtSetResourceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  _TfrtSetResourceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : _TfrtSetResourceOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = _TfrtSetResourceOp, typename = std::enable_if_t<std::is_same_v<LateInst, _TfrtSetResourceOp>>>
  _TfrtSetResourceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class _TfrtSetResourceOpAdaptor : public _TfrtSetResourceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using _TfrtSetResourceOpGenericAdaptor::_TfrtSetResourceOpGenericAdaptor;
  _TfrtSetResourceOpAdaptor(_TfrtSetResourceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class _TfrtSetResourceOp : public ::mlir::Op<_TfrtSetResourceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = _TfrtSetResourceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = _TfrtSetResourceOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("tf._TfrtSetResource");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getArg();
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
  ::mlir::IntegerAttr getIndexAttr();
  uint64_t getIndex();
  void setIndexAttr(::mlir::IntegerAttr attr);
  void setIndex(uint64_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg, ::mlir::IntegerAttr index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg, ::mlir::IntegerAttr index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value arg, uint64_t index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg, uint64_t index);
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
} // namespace TF
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::TF::_TfrtSetResourceOp)


#endif  // GET_OP_CLASSES

