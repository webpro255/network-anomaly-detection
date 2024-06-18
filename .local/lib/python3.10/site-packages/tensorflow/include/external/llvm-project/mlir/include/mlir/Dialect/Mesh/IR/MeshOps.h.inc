/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: MeshOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace mesh {
class AllGatherOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class AllReduceOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class AllToAllOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class BroadcastOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class GatherOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class MeshOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class MeshShapeOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class ProcessLinearIndexOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class ProcessMultiIndexOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class RecvOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class ReduceOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class ReduceScatterOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class ScatterOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class SendOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class ShardOp;
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {
class ShiftOp;
} // namespace mesh
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::AllGatherOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllGatherOpGenericAdaptorBase {
public:
  struct Properties {
    using gather_axisTy = ::mlir::IntegerAttr;
    gather_axisTy gather_axis;

    auto getGatherAxis() {
      auto &propStorage = this->gather_axis;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setGatherAxis(const ::mlir::IntegerAttr &propValue) {
      this->gather_axis = propValue;
    }
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    using mesh_axesTy = ::mlir::DenseI16ArrayAttr;
    mesh_axesTy mesh_axes;

    auto getMeshAxes() {
      auto &propStorage = this->mesh_axes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(propStorage);
    }
    void setMeshAxes(const ::mlir::DenseI16ArrayAttr &propValue) {
      this->mesh_axes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.gather_axis == this->gather_axis &&
        rhs.mesh == this->mesh &&
        rhs.mesh_axes == this->mesh_axes &&
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
  AllGatherOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  AllGatherOpGenericAdaptorBase(AllGatherOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::IntegerAttr getGatherAxisAttr();
  ::llvm::APInt getGatherAxis();
};
} // namespace detail
template <typename RangeT>
class AllGatherOpGenericAdaptor : public detail::AllGatherOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllGatherOpGenericAdaptorBase;
public:
  AllGatherOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllGatherOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllGatherOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = AllGatherOp, typename = std::enable_if_t<std::is_same_v<LateInst, AllGatherOp>>>
  AllGatherOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AllGatherOpAdaptor : public AllGatherOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllGatherOpGenericAdaptor::AllGatherOpGenericAdaptor;
  AllGatherOpAdaptor(AllGatherOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllGatherOp : public ::mlir::Op<AllGatherOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::OpTrait::SameOperandsAndResultRank, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllGatherOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllGatherOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("gather_axis"), ::llvm::StringRef("mesh"), ::llvm::StringRef("mesh_axes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getGatherAxisAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getGatherAxisAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getMeshAxesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getMeshAxesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.all_gather");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getInput();
  ::mlir::OpOperand &getInputMutable();
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
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::IntegerAttr getGatherAxisAttr();
  ::llvm::APInt getGatherAxis();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  void setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr);
  void setMeshAxes(::llvm::ArrayRef<int16_t> attrValue);
  void setGatherAxisAttr(::mlir::IntegerAttr attr);
  void setGatherAxis(::llvm::APInt attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr gather_axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr gather_axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt gather_axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt gather_axis);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
};
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::AllGatherOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::AllReduceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllReduceOpGenericAdaptorBase {
public:
  struct Properties {
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    using mesh_axesTy = ::mlir::DenseI16ArrayAttr;
    mesh_axesTy mesh_axes;

    auto getMeshAxes() {
      auto &propStorage = this->mesh_axes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(propStorage);
    }
    void setMeshAxes(const ::mlir::DenseI16ArrayAttr &propValue) {
      this->mesh_axes = propValue;
    }
    using reductionTy = ::mlir::mesh::PartialAttr;
    reductionTy reduction;

    auto getReduction() {
      auto &propStorage = this->reduction;
      return ::llvm::dyn_cast_or_null<::mlir::mesh::PartialAttr>(propStorage);
    }
    void setReduction(const ::mlir::mesh::PartialAttr &propValue) {
      this->reduction = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.mesh == this->mesh &&
        rhs.mesh_axes == this->mesh_axes &&
        rhs.reduction == this->reduction &&
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
  AllReduceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  AllReduceOpGenericAdaptorBase(AllReduceOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::mesh::PartialAttr getReductionAttr();
  ::mlir::mesh::Partial getReduction();
};
} // namespace detail
template <typename RangeT>
class AllReduceOpGenericAdaptor : public detail::AllReduceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllReduceOpGenericAdaptorBase;
public:
  AllReduceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllReduceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllReduceOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = AllReduceOp, typename = std::enable_if_t<std::is_same_v<LateInst, AllReduceOp>>>
  AllReduceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AllReduceOpAdaptor : public AllReduceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllReduceOpGenericAdaptor::AllReduceOpGenericAdaptor;
  AllReduceOpAdaptor(AllReduceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllReduceOp : public ::mlir::Op<AllReduceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::RankedTensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultShape, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllReduceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllReduceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mesh"), ::llvm::StringRef("mesh_axes"), ::llvm::StringRef("reduction")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMeshAxesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMeshAxesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getReductionAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getReductionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.all_reduce");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::RankedTensorType> getInput();
  ::mlir::OpOperand &getInputMutable();
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
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::mesh::PartialAttr getReductionAttr();
  ::mlir::mesh::Partial getReduction();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  void setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr);
  void setMeshAxes(::llvm::ArrayRef<int16_t> attrValue);
  void setReductionAttr(::mlir::mesh::PartialAttr attr);
  void setReduction(::mlir::mesh::Partial attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::mesh::PartialAttr reduction);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::mesh::PartialAttr reduction);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::mlir::mesh::Partial reduction = ::mlir::mesh::Partial::Sum);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::mlir::mesh::Partial reduction = ::mlir::mesh::Partial::Sum);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
};
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::AllReduceOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::AllToAllOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllToAllOpGenericAdaptorBase {
public:
  struct Properties {
    using concat_axisTy = ::mlir::IntegerAttr;
    concat_axisTy concat_axis;

    auto getConcatAxis() {
      auto &propStorage = this->concat_axis;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setConcatAxis(const ::mlir::IntegerAttr &propValue) {
      this->concat_axis = propValue;
    }
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    using mesh_axesTy = ::mlir::DenseI16ArrayAttr;
    mesh_axesTy mesh_axes;

    auto getMeshAxes() {
      auto &propStorage = this->mesh_axes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(propStorage);
    }
    void setMeshAxes(const ::mlir::DenseI16ArrayAttr &propValue) {
      this->mesh_axes = propValue;
    }
    using split_axisTy = ::mlir::IntegerAttr;
    split_axisTy split_axis;

    auto getSplitAxis() {
      auto &propStorage = this->split_axis;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setSplitAxis(const ::mlir::IntegerAttr &propValue) {
      this->split_axis = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.concat_axis == this->concat_axis &&
        rhs.mesh == this->mesh &&
        rhs.mesh_axes == this->mesh_axes &&
        rhs.split_axis == this->split_axis &&
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
  AllToAllOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  AllToAllOpGenericAdaptorBase(AllToAllOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::IntegerAttr getSplitAxisAttr();
  ::llvm::APInt getSplitAxis();
  ::mlir::IntegerAttr getConcatAxisAttr();
  ::llvm::APInt getConcatAxis();
};
} // namespace detail
template <typename RangeT>
class AllToAllOpGenericAdaptor : public detail::AllToAllOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllToAllOpGenericAdaptorBase;
public:
  AllToAllOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllToAllOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllToAllOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = AllToAllOp, typename = std::enable_if_t<std::is_same_v<LateInst, AllToAllOp>>>
  AllToAllOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AllToAllOpAdaptor : public AllToAllOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllToAllOpGenericAdaptor::AllToAllOpGenericAdaptor;
  AllToAllOpAdaptor(AllToAllOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllToAllOp : public ::mlir::Op<AllToAllOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::OpTrait::SameOperandsAndResultRank, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllToAllOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllToAllOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("concat_axis"), ::llvm::StringRef("mesh"), ::llvm::StringRef("mesh_axes"), ::llvm::StringRef("split_axis")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getConcatAxisAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getConcatAxisAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getMeshAxesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getMeshAxesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getSplitAxisAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getSplitAxisAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.all_to_all");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getInput();
  ::mlir::OpOperand &getInputMutable();
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
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::IntegerAttr getSplitAxisAttr();
  ::llvm::APInt getSplitAxis();
  ::mlir::IntegerAttr getConcatAxisAttr();
  ::llvm::APInt getConcatAxis();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  void setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr);
  void setMeshAxes(::llvm::ArrayRef<int16_t> attrValue);
  void setSplitAxisAttr(::mlir::IntegerAttr attr);
  void setSplitAxis(::llvm::APInt attrValue);
  void setConcatAxisAttr(::mlir::IntegerAttr attr);
  void setConcatAxis(::llvm::APInt attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr split_axis, ::mlir::IntegerAttr concat_axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr split_axis, ::mlir::IntegerAttr concat_axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt split_axis, ::llvm::APInt concat_axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt split_axis, ::llvm::APInt concat_axis);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::AllToAllOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::BroadcastOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class BroadcastOpGenericAdaptorBase {
public:
  struct Properties {
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    using mesh_axesTy = ::mlir::DenseI16ArrayAttr;
    mesh_axesTy mesh_axes;

    auto getMeshAxes() {
      auto &propStorage = this->mesh_axes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(propStorage);
    }
    void setMeshAxes(const ::mlir::DenseI16ArrayAttr &propValue) {
      this->mesh_axes = propValue;
    }
    using rootTy = ::mlir::DenseI64ArrayAttr;
    rootTy root;

    auto getRoot() {
      auto &propStorage = this->root;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setRoot(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->root = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.mesh == this->mesh &&
        rhs.mesh_axes == this->mesh_axes &&
        rhs.root == this->root &&
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
  BroadcastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  BroadcastOpGenericAdaptorBase(BroadcastOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::DenseI64ArrayAttr getRootAttr();
  ::llvm::ArrayRef<int64_t> getRoot();
};
} // namespace detail
template <typename RangeT>
class BroadcastOpGenericAdaptor : public detail::BroadcastOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::BroadcastOpGenericAdaptorBase;
public:
  BroadcastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  BroadcastOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : BroadcastOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = BroadcastOp, typename = std::enable_if_t<std::is_same_v<LateInst, BroadcastOp>>>
  BroadcastOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  RangeT getRootDynamic() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class BroadcastOpAdaptor : public BroadcastOpGenericAdaptor<::mlir::ValueRange> {
public:
  using BroadcastOpGenericAdaptor::BroadcastOpGenericAdaptor;
  BroadcastOpAdaptor(BroadcastOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class BroadcastOp : public ::mlir::Op<BroadcastOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::RankedTensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = BroadcastOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = BroadcastOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mesh"), ::llvm::StringRef("mesh_axes"), ::llvm::StringRef("root")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMeshAxesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMeshAxesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getRootAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getRootAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.broadcast");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::RankedTensorType> getInput();
  ::mlir::Operation::operand_range getRootDynamic();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::MutableOperandRange getRootDynamicMutable();
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
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::DenseI64ArrayAttr getRootAttr();
  ::llvm::ArrayRef<int64_t> getRoot();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  void setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr);
  void setMeshAxes(::llvm::ArrayRef<int16_t> attrValue);
  void setRootAttr(::mlir::DenseI64ArrayAttr attr);
  void setRoot(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
};
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::BroadcastOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::GatherOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class GatherOpGenericAdaptorBase {
public:
  struct Properties {
    using gather_axisTy = ::mlir::IntegerAttr;
    gather_axisTy gather_axis;

    auto getGatherAxis() {
      auto &propStorage = this->gather_axis;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setGatherAxis(const ::mlir::IntegerAttr &propValue) {
      this->gather_axis = propValue;
    }
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    using mesh_axesTy = ::mlir::DenseI16ArrayAttr;
    mesh_axesTy mesh_axes;

    auto getMeshAxes() {
      auto &propStorage = this->mesh_axes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(propStorage);
    }
    void setMeshAxes(const ::mlir::DenseI16ArrayAttr &propValue) {
      this->mesh_axes = propValue;
    }
    using rootTy = ::mlir::DenseI64ArrayAttr;
    rootTy root;

    auto getRoot() {
      auto &propStorage = this->root;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setRoot(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->root = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.gather_axis == this->gather_axis &&
        rhs.mesh == this->mesh &&
        rhs.mesh_axes == this->mesh_axes &&
        rhs.root == this->root &&
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
  GatherOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  GatherOpGenericAdaptorBase(GatherOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::IntegerAttr getGatherAxisAttr();
  ::llvm::APInt getGatherAxis();
  ::mlir::DenseI64ArrayAttr getRootAttr();
  ::llvm::ArrayRef<int64_t> getRoot();
};
} // namespace detail
template <typename RangeT>
class GatherOpGenericAdaptor : public detail::GatherOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::GatherOpGenericAdaptorBase;
public:
  GatherOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  GatherOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : GatherOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = GatherOp, typename = std::enable_if_t<std::is_same_v<LateInst, GatherOp>>>
  GatherOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  RangeT getRootDynamic() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class GatherOpAdaptor : public GatherOpGenericAdaptor<::mlir::ValueRange> {
public:
  using GatherOpGenericAdaptor::GatherOpGenericAdaptor;
  GatherOpAdaptor(GatherOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class GatherOp : public ::mlir::Op<GatherOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::TensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = GatherOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = GatherOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("gather_axis"), ::llvm::StringRef("mesh"), ::llvm::StringRef("mesh_axes"), ::llvm::StringRef("root")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getGatherAxisAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getGatherAxisAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getMeshAxesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getMeshAxesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getRootAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getRootAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.gather");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getInput();
  ::mlir::Operation::operand_range getRootDynamic();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::MutableOperandRange getRootDynamicMutable();
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
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::IntegerAttr getGatherAxisAttr();
  ::llvm::APInt getGatherAxis();
  ::mlir::DenseI64ArrayAttr getRootAttr();
  ::llvm::ArrayRef<int64_t> getRoot();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  void setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr);
  void setMeshAxes(::llvm::ArrayRef<int16_t> attrValue);
  void setGatherAxisAttr(::mlir::IntegerAttr attr);
  void setGatherAxis(::llvm::APInt attrValue);
  void setRootAttr(::mlir::DenseI64ArrayAttr attr);
  void setRoot(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr gather_axis, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr gather_axis, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt gather_axis, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt gather_axis, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::GatherOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::MeshOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MeshOpGenericAdaptorBase {
public:
  struct Properties {
    using shapeTy = ::mlir::DenseI64ArrayAttr;
    shapeTy shape;

    auto getShape() {
      auto &propStorage = this->shape;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setShape(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->shape = propValue;
    }
    using sym_nameTy = ::mlir::StringAttr;
    sym_nameTy sym_name;

    auto getSymName() {
      auto &propStorage = this->sym_name;
      return ::llvm::cast<::mlir::StringAttr>(propStorage);
    }
    void setSymName(const ::mlir::StringAttr &propValue) {
      this->sym_name = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.shape == this->shape &&
        rhs.sym_name == this->sym_name &&
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
  MeshOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  MeshOpGenericAdaptorBase(MeshOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getSymNameAttr();
  ::llvm::StringRef getSymName();
  ::mlir::DenseI64ArrayAttr getShapeAttr();
  ::llvm::ArrayRef<int64_t> getShape();
};
} // namespace detail
template <typename RangeT>
class MeshOpGenericAdaptor : public detail::MeshOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MeshOpGenericAdaptorBase;
public:
  MeshOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MeshOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MeshOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = MeshOp, typename = std::enable_if_t<std::is_same_v<LateInst, MeshOp>>>
  MeshOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class MeshOpAdaptor : public MeshOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MeshOpGenericAdaptor::MeshOpGenericAdaptor;
  MeshOpAdaptor(MeshOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MeshOp : public ::mlir::Op<MeshOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::SymbolOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MeshOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MeshOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("shape"), ::llvm::StringRef("sym_name")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getShapeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getShapeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getSymNameAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getSymNameAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.mesh");
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
  ::mlir::StringAttr getSymNameAttr();
  ::llvm::StringRef getSymName();
  ::mlir::DenseI64ArrayAttr getShapeAttr();
  ::llvm::ArrayRef<int64_t> getShape();
  void setSymNameAttr(::mlir::StringAttr attr);
  void setSymName(::llvm::StringRef attrValue);
  void setShapeAttr(::mlir::DenseI64ArrayAttr attr);
  void setShape(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::DenseI64ArrayAttr shape);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::DenseI64ArrayAttr shape);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, ::llvm::ArrayRef<int64_t> shape);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, ::llvm::ArrayRef<int64_t> shape);
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
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  int64_t getRank() { return getShape().size(); }
};
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::MeshOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::MeshShapeOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class MeshShapeOpGenericAdaptorBase {
public:
  struct Properties {
    using axesTy = ::mlir::DenseI16ArrayAttr;
    axesTy axes;

    auto getAxes() {
      auto &propStorage = this->axes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(propStorage);
    }
    void setAxes(const ::mlir::DenseI16ArrayAttr &propValue) {
      this->axes = propValue;
    }
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.axes == this->axes &&
        rhs.mesh == this->mesh &&
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
  MeshShapeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  MeshShapeOpGenericAdaptorBase(MeshShapeOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getAxesAttr();
  ::llvm::ArrayRef<int16_t> getAxes();
};
} // namespace detail
template <typename RangeT>
class MeshShapeOpGenericAdaptor : public detail::MeshShapeOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::MeshShapeOpGenericAdaptorBase;
public:
  MeshShapeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  MeshShapeOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : MeshShapeOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = MeshShapeOp, typename = std::enable_if_t<std::is_same_v<LateInst, MeshShapeOp>>>
  MeshShapeOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class MeshShapeOpAdaptor : public MeshShapeOpGenericAdaptor<::mlir::ValueRange> {
public:
  using MeshShapeOpGenericAdaptor::MeshShapeOpGenericAdaptor;
  MeshShapeOpAdaptor(MeshShapeOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class MeshShapeOp : public ::mlir::Op<MeshShapeOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = MeshShapeOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = MeshShapeOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("axes"), ::llvm::StringRef("mesh")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAxesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAxesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.mesh_shape");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getAxesAttr();
  ::llvm::ArrayRef<int16_t> getAxes();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  void setAxesAttr(::mlir::DenseI16ArrayAttr attr);
  void setAxes(::llvm::ArrayRef<int16_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::mesh::MeshOp mesh);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, StringRef mesh, ArrayRef<MeshAxis> axes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr axes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> axes = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::MeshShapeOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ProcessLinearIndexOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ProcessLinearIndexOpGenericAdaptorBase {
public:
  struct Properties {
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.mesh == this->mesh &&
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
  ProcessLinearIndexOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ProcessLinearIndexOpGenericAdaptorBase(ProcessLinearIndexOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
};
} // namespace detail
template <typename RangeT>
class ProcessLinearIndexOpGenericAdaptor : public detail::ProcessLinearIndexOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ProcessLinearIndexOpGenericAdaptorBase;
public:
  ProcessLinearIndexOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ProcessLinearIndexOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ProcessLinearIndexOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ProcessLinearIndexOp, typename = std::enable_if_t<std::is_same_v<LateInst, ProcessLinearIndexOp>>>
  ProcessLinearIndexOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ProcessLinearIndexOpAdaptor : public ProcessLinearIndexOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ProcessLinearIndexOpGenericAdaptor::ProcessLinearIndexOpGenericAdaptor;
  ProcessLinearIndexOpAdaptor(ProcessLinearIndexOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ProcessLinearIndexOp : public ::mlir::Op<ProcessLinearIndexOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IndexType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::SymbolUserOpInterface::Trait, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ProcessLinearIndexOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ProcessLinearIndexOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mesh")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.process_linear_index");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
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
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::mesh::MeshOp mesh);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::FlatSymbolRefAttr mesh);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef mesh);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::LogicalResult inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::ProcessLinearIndexOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ProcessMultiIndexOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ProcessMultiIndexOpGenericAdaptorBase {
public:
  struct Properties {
    using axesTy = ::mlir::DenseI16ArrayAttr;
    axesTy axes;

    auto getAxes() {
      auto &propStorage = this->axes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(propStorage);
    }
    void setAxes(const ::mlir::DenseI16ArrayAttr &propValue) {
      this->axes = propValue;
    }
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.axes == this->axes &&
        rhs.mesh == this->mesh &&
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
  ProcessMultiIndexOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ProcessMultiIndexOpGenericAdaptorBase(ProcessMultiIndexOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getAxesAttr();
  ::llvm::ArrayRef<int16_t> getAxes();
};
} // namespace detail
template <typename RangeT>
class ProcessMultiIndexOpGenericAdaptor : public detail::ProcessMultiIndexOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ProcessMultiIndexOpGenericAdaptorBase;
public:
  ProcessMultiIndexOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ProcessMultiIndexOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ProcessMultiIndexOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ProcessMultiIndexOp, typename = std::enable_if_t<std::is_same_v<LateInst, ProcessMultiIndexOp>>>
  ProcessMultiIndexOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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
class ProcessMultiIndexOpAdaptor : public ProcessMultiIndexOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ProcessMultiIndexOpGenericAdaptor::ProcessMultiIndexOpGenericAdaptor;
  ProcessMultiIndexOpAdaptor(ProcessMultiIndexOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ProcessMultiIndexOp : public ::mlir::Op<ProcessMultiIndexOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ProcessMultiIndexOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ProcessMultiIndexOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("axes"), ::llvm::StringRef("mesh")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAxesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAxesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.process_multi_index");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getAxesAttr();
  ::llvm::ArrayRef<int16_t> getAxes();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  void setAxesAttr(::mlir::DenseI16ArrayAttr attr);
  void setAxes(::llvm::ArrayRef<int16_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::mesh::MeshOp mesh);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, StringRef mesh, ArrayRef<MeshAxis> axes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr axes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> axes = {});
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::ProcessMultiIndexOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::RecvOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class RecvOpGenericAdaptorBase {
public:
  struct Properties {
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    using mesh_axesTy = ::mlir::DenseI16ArrayAttr;
    mesh_axesTy mesh_axes;

    auto getMeshAxes() {
      auto &propStorage = this->mesh_axes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(propStorage);
    }
    void setMeshAxes(const ::mlir::DenseI16ArrayAttr &propValue) {
      this->mesh_axes = propValue;
    }
    using sourceTy = ::mlir::DenseI64ArrayAttr;
    sourceTy source;

    auto getSource() {
      auto &propStorage = this->source;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setSource(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->source = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.mesh == this->mesh &&
        rhs.mesh_axes == this->mesh_axes &&
        rhs.source == this->source &&
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
  RecvOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  RecvOpGenericAdaptorBase(RecvOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::DenseI64ArrayAttr getSourceAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getSource();
};
} // namespace detail
template <typename RangeT>
class RecvOpGenericAdaptor : public detail::RecvOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::RecvOpGenericAdaptorBase;
public:
  RecvOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  RecvOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : RecvOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = RecvOp, typename = std::enable_if_t<std::is_same_v<LateInst, RecvOp>>>
  RecvOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  RangeT getSourceDynamic() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class RecvOpAdaptor : public RecvOpGenericAdaptor<::mlir::ValueRange> {
public:
  using RecvOpGenericAdaptor::RecvOpGenericAdaptor;
  RecvOpAdaptor(RecvOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class RecvOp : public ::mlir::Op<RecvOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::RankedTensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = RecvOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = RecvOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mesh"), ::llvm::StringRef("mesh_axes"), ::llvm::StringRef("source")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMeshAxesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMeshAxesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getSourceAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getSourceAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.recv");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getInput();
  ::mlir::Operation::operand_range getSourceDynamic();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::MutableOperandRange getSourceDynamicMutable();
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
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::DenseI64ArrayAttr getSourceAttr();
  ::std::optional<::llvm::ArrayRef<int64_t>> getSource();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  void setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr);
  void setMeshAxes(::llvm::ArrayRef<int16_t> attrValue);
  void setSourceAttr(::mlir::DenseI64ArrayAttr attr);
  void setSource(::std::optional<::llvm::ArrayRef<int64_t>> attrValue);
  ::mlir::Attribute removeSourceAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, /*optional*/::mlir::DenseI64ArrayAttr source, ::mlir::ValueRange source_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, /*optional*/::mlir::DenseI64ArrayAttr source, ::mlir::ValueRange source_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, /*optional*/::mlir::DenseI64ArrayAttr source, ::mlir::ValueRange source_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, /*optional*/::mlir::DenseI64ArrayAttr source, ::mlir::ValueRange source_dynamic);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::RecvOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ReduceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReduceOpGenericAdaptorBase {
public:
  struct Properties {
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    using mesh_axesTy = ::mlir::DenseI16ArrayAttr;
    mesh_axesTy mesh_axes;

    auto getMeshAxes() {
      auto &propStorage = this->mesh_axes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(propStorage);
    }
    void setMeshAxes(const ::mlir::DenseI16ArrayAttr &propValue) {
      this->mesh_axes = propValue;
    }
    using reductionTy = ::mlir::mesh::PartialAttr;
    reductionTy reduction;

    auto getReduction() {
      auto &propStorage = this->reduction;
      return ::llvm::dyn_cast_or_null<::mlir::mesh::PartialAttr>(propStorage);
    }
    void setReduction(const ::mlir::mesh::PartialAttr &propValue) {
      this->reduction = propValue;
    }
    using rootTy = ::mlir::DenseI64ArrayAttr;
    rootTy root;

    auto getRoot() {
      auto &propStorage = this->root;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setRoot(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->root = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.mesh == this->mesh &&
        rhs.mesh_axes == this->mesh_axes &&
        rhs.reduction == this->reduction &&
        rhs.root == this->root &&
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
  ReduceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ReduceOpGenericAdaptorBase(ReduceOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::mesh::PartialAttr getReductionAttr();
  ::mlir::mesh::Partial getReduction();
  ::mlir::DenseI64ArrayAttr getRootAttr();
  ::llvm::ArrayRef<int64_t> getRoot();
};
} // namespace detail
template <typename RangeT>
class ReduceOpGenericAdaptor : public detail::ReduceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReduceOpGenericAdaptorBase;
public:
  ReduceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReduceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReduceOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

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

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  RangeT getRootDynamic() {
    return getODSOperands(1);
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
class ReduceOp : public ::mlir::Op<ReduceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::RankedTensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReduceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReduceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mesh"), ::llvm::StringRef("mesh_axes"), ::llvm::StringRef("reduction"), ::llvm::StringRef("root")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMeshAxesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMeshAxesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getReductionAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getReductionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getRootAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getRootAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.reduce");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::RankedTensorType> getInput();
  ::mlir::Operation::operand_range getRootDynamic();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::MutableOperandRange getRootDynamicMutable();
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
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::mesh::PartialAttr getReductionAttr();
  ::mlir::mesh::Partial getReduction();
  ::mlir::DenseI64ArrayAttr getRootAttr();
  ::llvm::ArrayRef<int64_t> getRoot();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  void setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr);
  void setMeshAxes(::llvm::ArrayRef<int16_t> attrValue);
  void setReductionAttr(::mlir::mesh::PartialAttr attr);
  void setReduction(::mlir::mesh::Partial attrValue);
  void setRootAttr(::mlir::DenseI64ArrayAttr attr);
  void setRoot(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::mesh::PartialAttr reduction, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::mesh::PartialAttr reduction, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::mlir::mesh::Partial reduction, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::mlir::mesh::Partial reduction, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::ReduceOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ReduceScatterOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReduceScatterOpGenericAdaptorBase {
public:
  struct Properties {
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    using mesh_axesTy = ::mlir::DenseI16ArrayAttr;
    mesh_axesTy mesh_axes;

    auto getMeshAxes() {
      auto &propStorage = this->mesh_axes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(propStorage);
    }
    void setMeshAxes(const ::mlir::DenseI16ArrayAttr &propValue) {
      this->mesh_axes = propValue;
    }
    using reductionTy = ::mlir::mesh::PartialAttr;
    reductionTy reduction;

    auto getReduction() {
      auto &propStorage = this->reduction;
      return ::llvm::dyn_cast_or_null<::mlir::mesh::PartialAttr>(propStorage);
    }
    void setReduction(const ::mlir::mesh::PartialAttr &propValue) {
      this->reduction = propValue;
    }
    using scatter_axisTy = ::mlir::IntegerAttr;
    scatter_axisTy scatter_axis;

    auto getScatterAxis() {
      auto &propStorage = this->scatter_axis;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setScatterAxis(const ::mlir::IntegerAttr &propValue) {
      this->scatter_axis = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.mesh == this->mesh &&
        rhs.mesh_axes == this->mesh_axes &&
        rhs.reduction == this->reduction &&
        rhs.scatter_axis == this->scatter_axis &&
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
  ReduceScatterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ReduceScatterOpGenericAdaptorBase(ReduceScatterOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::mesh::PartialAttr getReductionAttr();
  ::mlir::mesh::Partial getReduction();
  ::mlir::IntegerAttr getScatterAxisAttr();
  ::llvm::APInt getScatterAxis();
};
} // namespace detail
template <typename RangeT>
class ReduceScatterOpGenericAdaptor : public detail::ReduceScatterOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReduceScatterOpGenericAdaptorBase;
public:
  ReduceScatterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ReduceScatterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ReduceScatterOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ReduceScatterOp, typename = std::enable_if_t<std::is_same_v<LateInst, ReduceScatterOp>>>
  ReduceScatterOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ReduceScatterOpAdaptor : public ReduceScatterOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReduceScatterOpGenericAdaptor::ReduceScatterOpGenericAdaptor;
  ReduceScatterOpAdaptor(ReduceScatterOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReduceScatterOp : public ::mlir::Op<ReduceScatterOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::RankedTensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultRank, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReduceScatterOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReduceScatterOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mesh"), ::llvm::StringRef("mesh_axes"), ::llvm::StringRef("reduction"), ::llvm::StringRef("scatter_axis")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMeshAxesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMeshAxesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getReductionAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getReductionAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getScatterAxisAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getScatterAxisAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.reduce_scatter");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getInput();
  ::mlir::OpOperand &getInputMutable();
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
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::mesh::PartialAttr getReductionAttr();
  ::mlir::mesh::Partial getReduction();
  ::mlir::IntegerAttr getScatterAxisAttr();
  ::llvm::APInt getScatterAxis();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  void setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr);
  void setMeshAxes(::llvm::ArrayRef<int16_t> attrValue);
  void setReductionAttr(::mlir::mesh::PartialAttr attr);
  void setReduction(::mlir::mesh::Partial attrValue);
  void setScatterAxisAttr(::mlir::IntegerAttr attr);
  void setScatterAxis(::llvm::APInt attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::mesh::PartialAttr reduction, ::mlir::IntegerAttr scatter_axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::mesh::PartialAttr reduction, ::mlir::IntegerAttr scatter_axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::mlir::mesh::Partial reduction, ::llvm::APInt scatter_axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::mlir::mesh::Partial reduction, ::llvm::APInt scatter_axis);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::ReduceScatterOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ScatterOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ScatterOpGenericAdaptorBase {
public:
  struct Properties {
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    using mesh_axesTy = ::mlir::DenseI16ArrayAttr;
    mesh_axesTy mesh_axes;

    auto getMeshAxes() {
      auto &propStorage = this->mesh_axes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(propStorage);
    }
    void setMeshAxes(const ::mlir::DenseI16ArrayAttr &propValue) {
      this->mesh_axes = propValue;
    }
    using rootTy = ::mlir::DenseI64ArrayAttr;
    rootTy root;

    auto getRoot() {
      auto &propStorage = this->root;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setRoot(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->root = propValue;
    }
    using scatter_axisTy = ::mlir::IntegerAttr;
    scatter_axisTy scatter_axis;

    auto getScatterAxis() {
      auto &propStorage = this->scatter_axis;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setScatterAxis(const ::mlir::IntegerAttr &propValue) {
      this->scatter_axis = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.mesh == this->mesh &&
        rhs.mesh_axes == this->mesh_axes &&
        rhs.root == this->root &&
        rhs.scatter_axis == this->scatter_axis &&
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
  ScatterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ScatterOpGenericAdaptorBase(ScatterOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::IntegerAttr getScatterAxisAttr();
  ::llvm::APInt getScatterAxis();
  ::mlir::DenseI64ArrayAttr getRootAttr();
  ::llvm::ArrayRef<int64_t> getRoot();
};
} // namespace detail
template <typename RangeT>
class ScatterOpGenericAdaptor : public detail::ScatterOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ScatterOpGenericAdaptorBase;
public:
  ScatterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ScatterOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ScatterOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ScatterOp, typename = std::enable_if_t<std::is_same_v<LateInst, ScatterOp>>>
  ScatterOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  RangeT getRootDynamic() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ScatterOpAdaptor : public ScatterOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ScatterOpGenericAdaptor::ScatterOpGenericAdaptor;
  ScatterOpAdaptor(ScatterOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ScatterOp : public ::mlir::Op<ScatterOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::RankedTensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ScatterOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ScatterOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mesh"), ::llvm::StringRef("mesh_axes"), ::llvm::StringRef("root"), ::llvm::StringRef("scatter_axis")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMeshAxesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMeshAxesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getRootAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getRootAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getScatterAxisAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getScatterAxisAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.scatter");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getInput();
  ::mlir::Operation::operand_range getRootDynamic();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::MutableOperandRange getRootDynamicMutable();
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
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::IntegerAttr getScatterAxisAttr();
  ::llvm::APInt getScatterAxis();
  ::mlir::DenseI64ArrayAttr getRootAttr();
  ::llvm::ArrayRef<int64_t> getRoot();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  void setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr);
  void setMeshAxes(::llvm::ArrayRef<int16_t> attrValue);
  void setScatterAxisAttr(::mlir::IntegerAttr attr);
  void setScatterAxis(::llvm::APInt attrValue);
  void setRootAttr(::mlir::DenseI64ArrayAttr attr);
  void setRoot(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr scatter_axis, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr scatter_axis, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt scatter_axis, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt scatter_axis, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::ScatterOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::SendOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class SendOpGenericAdaptorBase {
public:
  struct Properties {
    using destinationTy = ::mlir::DenseI64ArrayAttr;
    destinationTy destination;

    auto getDestination() {
      auto &propStorage = this->destination;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setDestination(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->destination = propValue;
    }
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    using mesh_axesTy = ::mlir::DenseI16ArrayAttr;
    mesh_axesTy mesh_axes;

    auto getMeshAxes() {
      auto &propStorage = this->mesh_axes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(propStorage);
    }
    void setMeshAxes(const ::mlir::DenseI16ArrayAttr &propValue) {
      this->mesh_axes = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.destination == this->destination &&
        rhs.mesh == this->mesh &&
        rhs.mesh_axes == this->mesh_axes &&
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
  SendOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  SendOpGenericAdaptorBase(SendOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::DenseI64ArrayAttr getDestinationAttr();
  ::llvm::ArrayRef<int64_t> getDestination();
};
} // namespace detail
template <typename RangeT>
class SendOpGenericAdaptor : public detail::SendOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::SendOpGenericAdaptorBase;
public:
  SendOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  SendOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : SendOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = SendOp, typename = std::enable_if_t<std::is_same_v<LateInst, SendOp>>>
  SendOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  RangeT getDestinationDynamic() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class SendOpAdaptor : public SendOpGenericAdaptor<::mlir::ValueRange> {
public:
  using SendOpGenericAdaptor::SendOpGenericAdaptor;
  SendOpAdaptor(SendOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class SendOp : public ::mlir::Op<SendOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::RankedTensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = SendOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = SendOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("destination"), ::llvm::StringRef("mesh"), ::llvm::StringRef("mesh_axes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDestinationAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDestinationAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getMeshAxesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getMeshAxesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.send");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getInput();
  ::mlir::Operation::operand_range getDestinationDynamic();
  ::mlir::OpOperand &getInputMutable();
  ::mlir::MutableOperandRange getDestinationDynamicMutable();
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
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::DenseI64ArrayAttr getDestinationAttr();
  ::llvm::ArrayRef<int64_t> getDestination();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  void setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr);
  void setMeshAxes(::llvm::ArrayRef<int16_t> attrValue);
  void setDestinationAttr(::mlir::DenseI64ArrayAttr attr);
  void setDestination(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::DenseI64ArrayAttr destination, ::mlir::ValueRange destination_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::DenseI64ArrayAttr destination, ::mlir::ValueRange destination_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::ArrayRef<int64_t> destination, ::mlir::ValueRange destination_dynamic);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::ArrayRef<int64_t> destination, ::mlir::ValueRange destination_dynamic);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
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
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::SendOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ShardOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ShardOpGenericAdaptorBase {
public:
  struct Properties {
    using annotate_for_usersTy = ::mlir::UnitAttr;
    annotate_for_usersTy annotate_for_users;

    auto getAnnotateForUsers() {
      auto &propStorage = this->annotate_for_users;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setAnnotateForUsers(const ::mlir::UnitAttr &propValue) {
      this->annotate_for_users = propValue;
    }
    using shardTy = ::mlir::mesh::MeshShardingAttr;
    shardTy shard;

    auto getShard() {
      auto &propStorage = this->shard;
      return ::llvm::cast<::mlir::mesh::MeshShardingAttr>(propStorage);
    }
    void setShard(const ::mlir::mesh::MeshShardingAttr &propValue) {
      this->shard = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.annotate_for_users == this->annotate_for_users &&
        rhs.shard == this->shard &&
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
  ShardOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ShardOpGenericAdaptorBase(ShardOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::mesh::MeshShardingAttr getShardAttr();
  ::mlir::mesh::MeshShardingAttr getShard();
  ::mlir::UnitAttr getAnnotateForUsersAttr();
  bool getAnnotateForUsers();
};
} // namespace detail
template <typename RangeT>
class ShardOpGenericAdaptor : public detail::ShardOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ShardOpGenericAdaptorBase;
public:
  ShardOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ShardOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ShardOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ShardOp, typename = std::enable_if_t<std::is_same_v<LateInst, ShardOp>>>
  ShardOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

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

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ShardOpAdaptor : public ShardOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ShardOpGenericAdaptor::ShardOpGenericAdaptor;
  ShardOpAdaptor(ShardOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ShardOp : public ::mlir::Op<ShardOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::RankedTensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultType, ::mlir::InferTypeOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ShardOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ShardOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("annotate_for_users"), ::llvm::StringRef("shard")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAnnotateForUsersAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAnnotateForUsersAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getShardAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getShardAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.shard");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::RankedTensorType> getSrc();
  ::mlir::OpOperand &getSrcMutable();
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
  ::mlir::mesh::MeshShardingAttr getShardAttr();
  ::mlir::mesh::MeshShardingAttr getShard();
  ::mlir::UnitAttr getAnnotateForUsersAttr();
  bool getAnnotateForUsers();
  void setShardAttr(::mlir::mesh::MeshShardingAttr attr);
  void setAnnotateForUsersAttr(::mlir::UnitAttr attr);
  void setAnnotateForUsers(bool attrValue);
  ::mlir::Attribute removeAnnotateForUsersAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src, ::mlir::mesh::MeshShardingAttr shard, /*optional*/::mlir::UnitAttr annotate_for_users);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src, ::mlir::mesh::MeshShardingAttr shard, /*optional*/::mlir::UnitAttr annotate_for_users);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::mesh::MeshShardingAttr shard, /*optional*/::mlir::UnitAttr annotate_for_users);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src, ::mlir::mesh::MeshShardingAttr shard, /*optional*/bool annotate_for_users = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src, ::mlir::mesh::MeshShardingAttr shard, /*optional*/bool annotate_for_users = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::mesh::MeshShardingAttr shard, /*optional*/bool annotate_for_users = false);
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
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::ShardOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ShiftOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ShiftOpGenericAdaptorBase {
public:
  struct Properties {
    using meshTy = ::mlir::FlatSymbolRefAttr;
    meshTy mesh;

    auto getMesh() {
      auto &propStorage = this->mesh;
      return ::llvm::cast<::mlir::FlatSymbolRefAttr>(propStorage);
    }
    void setMesh(const ::mlir::FlatSymbolRefAttr &propValue) {
      this->mesh = propValue;
    }
    using mesh_axesTy = ::mlir::DenseI16ArrayAttr;
    mesh_axesTy mesh_axes;

    auto getMeshAxes() {
      auto &propStorage = this->mesh_axes;
      return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(propStorage);
    }
    void setMeshAxes(const ::mlir::DenseI16ArrayAttr &propValue) {
      this->mesh_axes = propValue;
    }
    using offsetTy = ::mlir::IntegerAttr;
    offsetTy offset;

    auto getOffset() {
      auto &propStorage = this->offset;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setOffset(const ::mlir::IntegerAttr &propValue) {
      this->offset = propValue;
    }
    using rotateTy = ::mlir::UnitAttr;
    rotateTy rotate;

    auto getRotate() {
      auto &propStorage = this->rotate;
      return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(propStorage);
    }
    void setRotate(const ::mlir::UnitAttr &propValue) {
      this->rotate = propValue;
    }
    using shift_axisTy = ::mlir::IntegerAttr;
    shift_axisTy shift_axis;

    auto getShiftAxis() {
      auto &propStorage = this->shift_axis;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setShiftAxis(const ::mlir::IntegerAttr &propValue) {
      this->shift_axis = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.mesh == this->mesh &&
        rhs.mesh_axes == this->mesh_axes &&
        rhs.offset == this->offset &&
        rhs.rotate == this->rotate &&
        rhs.shift_axis == this->shift_axis &&
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
  ShiftOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ShiftOpGenericAdaptorBase(ShiftOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::IntegerAttr getShiftAxisAttr();
  ::llvm::APInt getShiftAxis();
  ::mlir::IntegerAttr getOffsetAttr();
  uint64_t getOffset();
  ::mlir::UnitAttr getRotateAttr();
  bool getRotate();
};
} // namespace detail
template <typename RangeT>
class ShiftOpGenericAdaptor : public detail::ShiftOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ShiftOpGenericAdaptorBase;
public:
  ShiftOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ShiftOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ShiftOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ShiftOp, typename = std::enable_if_t<std::is_same_v<LateInst, ShiftOp>>>
  ShiftOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getInput() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ShiftOpAdaptor : public ShiftOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ShiftOpGenericAdaptor::ShiftOpGenericAdaptor;
  ShiftOpAdaptor(ShiftOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ShiftOp : public ::mlir::Op<ShiftOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::RankedTensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::OpTrait::SameOperandsAndResultShape, ::mlir::SymbolUserOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ShiftOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ShiftOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("mesh"), ::llvm::StringRef("mesh_axes"), ::llvm::StringRef("offset"), ::llvm::StringRef("rotate"), ::llvm::StringRef("shift_axis")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getMeshAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getMeshAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMeshAxesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMeshAxesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOffsetAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getOffsetAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getRotateAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getRotateAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getShiftAxisAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getShiftAxisAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("mesh.shift");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::TensorType> getInput();
  ::mlir::OpOperand &getInputMutable();
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
  ::mlir::FlatSymbolRefAttr getMeshAttr();
  ::llvm::StringRef getMesh();
  ::mlir::DenseI16ArrayAttr getMeshAxesAttr();
  ::llvm::ArrayRef<int16_t> getMeshAxes();
  ::mlir::IntegerAttr getShiftAxisAttr();
  ::llvm::APInt getShiftAxis();
  ::mlir::IntegerAttr getOffsetAttr();
  uint64_t getOffset();
  ::mlir::UnitAttr getRotateAttr();
  bool getRotate();
  void setMeshAttr(::mlir::FlatSymbolRefAttr attr);
  void setMesh(::llvm::StringRef attrValue);
  void setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr);
  void setMeshAxes(::llvm::ArrayRef<int16_t> attrValue);
  void setShiftAxisAttr(::mlir::IntegerAttr attr);
  void setShiftAxis(::llvm::APInt attrValue);
  void setOffsetAttr(::mlir::IntegerAttr attr);
  void setOffset(uint64_t attrValue);
  void setRotateAttr(::mlir::UnitAttr attr);
  void setRotate(bool attrValue);
  ::mlir::Attribute removeRotateAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr shift_axis, ::mlir::IntegerAttr offset, /*optional*/::mlir::UnitAttr rotate);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr shift_axis, ::mlir::IntegerAttr offset, /*optional*/::mlir::UnitAttr rotate);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt shift_axis, uint64_t offset, /*optional*/bool rotate = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt shift_axis, uint64_t offset, /*optional*/bool rotate = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultProperties(::mlir::OperationName opName, Properties &properties);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  ::mlir::LogicalResult verifySymbolUses(::mlir::SymbolTableCollection &symbolTable);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
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
} // namespace mesh
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::mesh::ShiftOp)


#endif  // GET_OP_CLASSES

