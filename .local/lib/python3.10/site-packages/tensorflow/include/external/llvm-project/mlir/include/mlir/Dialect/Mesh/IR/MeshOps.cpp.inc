/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: MeshOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::mesh::AllGatherOp,
::mlir::mesh::AllReduceOp,
::mlir::mesh::AllToAllOp,
::mlir::mesh::BroadcastOp,
::mlir::mesh::GatherOp,
::mlir::mesh::MeshOp,
::mlir::mesh::MeshShapeOp,
::mlir::mesh::ProcessLinearIndexOp,
::mlir::mesh::ProcessMultiIndexOp,
::mlir::mesh::RecvOp,
::mlir::mesh::ReduceOp,
::mlir::mesh::ReduceScatterOp,
::mlir::mesh::ScatterOp,
::mlir::mesh::SendOp,
::mlir::mesh::ShardOp,
::mlir::mesh::ShiftOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace mesh {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_MeshOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((::llvm::isa<::mlir::TensorType>(type))) && (((::llvm::cast<::mlir::ShapedType>(type).hasRank())) && ((::llvm::cast<::mlir::ShapedType>(type).getRank() >= 1)))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be non-0-ranked.tensor of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_MeshOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::RankedTensorType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be ranked tensor of any type values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_MeshOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_MeshOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IndexType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: flat symbol reference attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MeshOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i16 dense array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MeshOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(attr).getType())))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: index attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MeshOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::mesh::PartialAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: partial type of a distributed tensor";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MeshOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: i64 dense array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MeshOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MeshOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps6(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::mesh::MeshShardingAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Attribute that extends tensor type to distributed tensor type.";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MeshOps6(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps7(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps7(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MeshOps7(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps8(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MeshOps8(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MeshOps8(attr, attrName, [op]() {
    return op->emitOpError();
  });
}
} // namespace mesh
} // namespace mlir
namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::AllGatherOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AllGatherOpGenericAdaptorBase::AllGatherOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.all_gather", odsAttrs.getContext());
}

AllGatherOpGenericAdaptorBase::AllGatherOpGenericAdaptorBase(AllGatherOp op) : AllGatherOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AllGatherOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AllGatherOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr AllGatherOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef AllGatherOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr AllGatherOpGenericAdaptorBase::getMeshAxesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
  return attr;
}

::llvm::ArrayRef<int16_t> AllGatherOpGenericAdaptorBase::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::IntegerAttr AllGatherOpGenericAdaptorBase::getGatherAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().gather_axis);
  return attr;
}

::llvm::APInt AllGatherOpGenericAdaptorBase::getGatherAxis() {
  auto attr = getGatherAxisAttr();
  return attr.getValue();
}

} // namespace detail
AllGatherOpAdaptor::AllGatherOpAdaptor(AllGatherOp op) : AllGatherOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AllGatherOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_gather_axis = getProperties().gather_axis; (void)tblgen_gather_axis;
  if (!tblgen_gather_axis) return emitError(loc, "'mesh.all_gather' op ""requires attribute 'gather_axis'");
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.all_gather' op ""requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.all_gather' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");

  if (tblgen_mesh_axes && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(tblgen_mesh_axes))))
    return emitError(loc, "'mesh.all_gather' op ""attribute 'mesh_axes' failed to satisfy constraint: i16 dense array attribute");

  if (tblgen_gather_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_gather_axis))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_gather_axis).getType())))))
    return emitError(loc, "'mesh.all_gather' op ""attribute 'gather_axis' failed to satisfy constraint: index attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AllGatherOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AllGatherOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AllGatherOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AllGatherOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AllGatherOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AllGatherOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AllGatherOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult AllGatherOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.gather_axis;
       auto attr = dict.get("gather_axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for gather_axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `gather_axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh_axes;
       auto attr = dict.get("mesh_axes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for mesh_axes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh_axes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute AllGatherOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.gather_axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("gather_axis",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh_axes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh_axes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AllGatherOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.gather_axis.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh_axes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AllGatherOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "gather_axis")
      return prop.gather_axis;

    if (name == "mesh")
      return prop.mesh;

    if (name == "mesh_axes")
      return prop.mesh_axes;
  return std::nullopt;
}

void AllGatherOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "gather_axis") {
       prop.gather_axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.gather_axis)>>(value);
       return;
    }

    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }

    if (name == "mesh_axes") {
       prop.mesh_axes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh_axes)>>(value);
       return;
    }
}

void AllGatherOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.gather_axis) attrs.append("gather_axis", prop.gather_axis);

    if (prop.mesh) attrs.append("mesh", prop.mesh);

    if (prop.mesh_axes) attrs.append("mesh_axes", prop.mesh_axes);
}

::mlir::LogicalResult AllGatherOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getGatherAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(attr, "gather_axis", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAxesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(attr, "mesh_axes", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AllGatherOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.gather_axis)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mesh_axes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AllGatherOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.gather_axis);
  writer.writeAttribute(prop.mesh);

  writer.writeOptionalAttribute(prop.mesh_axes);
}

::mlir::FlatSymbolRefAttr AllGatherOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef AllGatherOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr AllGatherOp::getMeshAxesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
}

::llvm::ArrayRef<int16_t> AllGatherOp::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::IntegerAttr AllGatherOp::getGatherAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().gather_axis);
}

::llvm::APInt AllGatherOp::getGatherAxis() {
  auto attr = getGatherAxisAttr();
  return attr.getValue();
}

void AllGatherOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void AllGatherOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AllGatherOp::setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr) {
  (*this)->setAttr(getMeshAxesAttrName(), attr);
}

void AllGatherOp::setMeshAxes(::llvm::ArrayRef<int16_t> attrValue) {
  (*this)->setAttr(getMeshAxesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI16ArrayAttr(attrValue));
}

void AllGatherOp::setGatherAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getGatherAxisAttrName(), attr);
}

void AllGatherOp::setGatherAxis(::llvm::APInt attrValue) {
  (*this)->setAttr(getGatherAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void AllGatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr gather_axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().gather_axis = gather_axis;
  odsState.addTypes(result);
}

void AllGatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr gather_axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().gather_axis = gather_axis;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllGatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt gather_axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().gather_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), gather_axis);
  odsState.addTypes(result);
}

void AllGatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt gather_axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().gather_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), gather_axis);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllGatherOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AllGatherOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.mesh_axes)
    properties.mesh_axes = odsBuilder.getDenseI16ArrayAttr({});
}

::mlir::LogicalResult AllGatherOp::verifyInvariantsImpl() {
  auto tblgen_gather_axis = getProperties().gather_axis; (void)tblgen_gather_axis;
  if (!tblgen_gather_axis) return emitOpError("requires attribute 'gather_axis'");
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(*this, tblgen_mesh_axes, "mesh_axes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(*this, tblgen_gather_axis, "gather_axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AllGatherOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AllGatherOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::DenseI16ArrayAttr mesh_axesAttr;
  ::mlir::IntegerAttr gather_axisAttr;
  ::mlir::Type inputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inputTypes(inputRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("on"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<AllGatherOp::Properties>().mesh = meshAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("mesh_axes"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mesh_axesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (mesh_axesAttr) result.getOrAddProperties<AllGatherOp::Properties>().mesh_axes = mesh_axesAttr;
  }
  if (parser.parseKeyword("gather_axis"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(gather_axisAttr, parser.getBuilder().getIndexType())) {
    return ::mlir::failure();
  }
  if (gather_axisAttr) result.getOrAddProperties<AllGatherOp::Properties>().gather_axis = gather_axisAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    inputRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(inputOperands, inputTypes, inputOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AllGatherOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  _odsPrinter << ' ' << "on";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  if (getMeshAxesAttr() && getMeshAxesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI16ArrayAttr({})) {
    _odsPrinter << ' ' << "mesh_axes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getMeshAxesAttr());
  }
  _odsPrinter << ' ' << "gather_axis";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getGatherAxisAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  elidedAttrs.push_back("mesh_axes");
  elidedAttrs.push_back("gather_axis");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMeshAxesAttr();
     if(attr && (attr == odsBuilder.getDenseI16ArrayAttr({})))
       elidedAttrs.push_back("mesh_axes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getInput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AllGatherOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::AllGatherOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::AllReduceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AllReduceOpGenericAdaptorBase::AllReduceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.all_reduce", odsAttrs.getContext());
}

AllReduceOpGenericAdaptorBase::AllReduceOpGenericAdaptorBase(AllReduceOp op) : AllReduceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AllReduceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AllReduceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr AllReduceOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef AllReduceOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr AllReduceOpGenericAdaptorBase::getMeshAxesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
  return attr;
}

::llvm::ArrayRef<int16_t> AllReduceOpGenericAdaptorBase::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::mesh::PartialAttr AllReduceOpGenericAdaptorBase::getReductionAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::mesh::PartialAttr>(getProperties().reduction);
  return attr;
}

::mlir::mesh::Partial AllReduceOpGenericAdaptorBase::getReduction() {
  auto attr = getReductionAttr();
  return attr.getValue();
}

} // namespace detail
AllReduceOpAdaptor::AllReduceOpAdaptor(AllReduceOp op) : AllReduceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AllReduceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.all_reduce' op ""requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_reduction = getProperties().reduction; (void)tblgen_reduction;

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.all_reduce' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");

  if (tblgen_mesh_axes && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(tblgen_mesh_axes))))
    return emitError(loc, "'mesh.all_reduce' op ""attribute 'mesh_axes' failed to satisfy constraint: i16 dense array attribute");

  if (tblgen_reduction && !((::llvm::isa<::mlir::mesh::PartialAttr>(tblgen_reduction))))
    return emitError(loc, "'mesh.all_reduce' op ""attribute 'reduction' failed to satisfy constraint: partial type of a distributed tensor");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AllReduceOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AllReduceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> AllReduceOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AllReduceOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AllReduceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AllReduceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> AllReduceOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult AllReduceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh_axes;
       auto attr = dict.get("mesh_axes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for mesh_axes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh_axes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.reduction;
       auto attr = dict.get("reduction");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for reduction in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reduction` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute AllReduceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh_axes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh_axes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.reduction;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reduction",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AllReduceOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mesh.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh_axes.getAsOpaquePointer()), 
    llvm::hash_value(prop.reduction.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AllReduceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mesh")
      return prop.mesh;

    if (name == "mesh_axes")
      return prop.mesh_axes;

    if (name == "reduction")
      return prop.reduction;
  return std::nullopt;
}

void AllReduceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }

    if (name == "mesh_axes") {
       prop.mesh_axes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh_axes)>>(value);
       return;
    }

    if (name == "reduction") {
       prop.reduction = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reduction)>>(value);
       return;
    }
}

void AllReduceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mesh) attrs.append("mesh", prop.mesh);

    if (prop.mesh_axes) attrs.append("mesh_axes", prop.mesh_axes);

    if (prop.reduction) attrs.append("reduction", prop.reduction);
}

::mlir::LogicalResult AllReduceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAxesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(attr, "mesh_axes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReductionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps3(attr, "reduction", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AllReduceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mesh_axes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.reduction)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AllReduceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.mesh);

  writer.writeOptionalAttribute(prop.mesh_axes);

  writer.writeOptionalAttribute(prop.reduction);
}

::mlir::FlatSymbolRefAttr AllReduceOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef AllReduceOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr AllReduceOp::getMeshAxesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
}

::llvm::ArrayRef<int16_t> AllReduceOp::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::mesh::PartialAttr AllReduceOp::getReductionAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::mesh::PartialAttr>(getProperties().reduction);
}

::mlir::mesh::Partial AllReduceOp::getReduction() {
  auto attr = getReductionAttr();
  return attr.getValue();
}

void AllReduceOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void AllReduceOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AllReduceOp::setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr) {
  (*this)->setAttr(getMeshAxesAttrName(), attr);
}

void AllReduceOp::setMeshAxes(::llvm::ArrayRef<int16_t> attrValue) {
  (*this)->setAttr(getMeshAxesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI16ArrayAttr(attrValue));
}

void AllReduceOp::setReductionAttr(::mlir::mesh::PartialAttr attr) {
  (*this)->setAttr(getReductionAttrName(), attr);
}

void AllReduceOp::setReduction(::mlir::mesh::Partial attrValue) {
  (*this)->setAttr(getReductionAttrName(), ::mlir::mesh::PartialAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::mesh::PartialAttr reduction) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  if (reduction) {
    odsState.getOrAddProperties<Properties>().reduction = reduction;
  }
  odsState.addTypes(result);
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::mesh::PartialAttr reduction) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  if (reduction) {
    odsState.getOrAddProperties<Properties>().reduction = reduction;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::mlir::mesh::Partial reduction) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().reduction = ::mlir::mesh::PartialAttr::get(odsBuilder.getContext(), reduction);
  odsState.addTypes(result);
}

void AllReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::mlir::mesh::Partial reduction) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().reduction = ::mlir::mesh::PartialAttr::get(odsBuilder.getContext(), reduction);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllReduceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AllReduceOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.mesh_axes)
    properties.mesh_axes = odsBuilder.getDenseI16ArrayAttr({});
  if (!properties.reduction)
    properties.reduction = ::mlir::mesh::PartialAttr::get(odsBuilder.getContext(), ::mlir::mesh::Partial::Sum);
}

::mlir::LogicalResult AllReduceOp::verifyInvariantsImpl() {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_reduction = getProperties().reduction; (void)tblgen_reduction;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(*this, tblgen_mesh_axes, "mesh_axes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps3(*this, tblgen_reduction, "reduction")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AllReduceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AllReduceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::DenseI16ArrayAttr mesh_axesAttr;
  ::mlir::mesh::PartialAttr reductionAttr;
  ::mlir::Type inputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inputTypes(inputRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("on"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<AllReduceOp::Properties>().mesh = meshAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("mesh_axes"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mesh_axesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (mesh_axesAttr) result.getOrAddProperties<AllReduceOp::Properties>().mesh_axes = mesh_axesAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("reduction"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(reductionAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (reductionAttr) result.getOrAddProperties<AllReduceOp::Properties>().reduction = reductionAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::RankedTensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    inputRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::RankedTensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(inputOperands, inputTypes, inputOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AllReduceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  _odsPrinter << ' ' << "on";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  if (getMeshAxesAttr() && getMeshAxesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI16ArrayAttr({})) {
    _odsPrinter << ' ' << "mesh_axes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getMeshAxesAttr());
  }
  if (getReductionAttr() && getReductionAttr() != ::mlir::mesh::PartialAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::mesh::Partial::Sum)) {
    _odsPrinter << ' ' << "reduction";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getReductionAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  elidedAttrs.push_back("mesh_axes");
  elidedAttrs.push_back("reduction");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMeshAxesAttr();
     if(attr && (attr == odsBuilder.getDenseI16ArrayAttr({})))
       elidedAttrs.push_back("mesh_axes");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getReductionAttr();
     if(attr && (attr == ::mlir::mesh::PartialAttr::get(odsBuilder.getContext(), ::mlir::mesh::Partial::Sum)))
       elidedAttrs.push_back("reduction");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getInput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::RankedTensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::RankedTensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AllReduceOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::AllReduceOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::AllToAllOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AllToAllOpGenericAdaptorBase::AllToAllOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.all_to_all", odsAttrs.getContext());
}

AllToAllOpGenericAdaptorBase::AllToAllOpGenericAdaptorBase(AllToAllOp op) : AllToAllOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AllToAllOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AllToAllOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr AllToAllOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef AllToAllOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr AllToAllOpGenericAdaptorBase::getMeshAxesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
  return attr;
}

::llvm::ArrayRef<int16_t> AllToAllOpGenericAdaptorBase::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::IntegerAttr AllToAllOpGenericAdaptorBase::getSplitAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().split_axis);
  return attr;
}

::llvm::APInt AllToAllOpGenericAdaptorBase::getSplitAxis() {
  auto attr = getSplitAxisAttr();
  return attr.getValue();
}

::mlir::IntegerAttr AllToAllOpGenericAdaptorBase::getConcatAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().concat_axis);
  return attr;
}

::llvm::APInt AllToAllOpGenericAdaptorBase::getConcatAxis() {
  auto attr = getConcatAxisAttr();
  return attr.getValue();
}

} // namespace detail
AllToAllOpAdaptor::AllToAllOpAdaptor(AllToAllOp op) : AllToAllOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AllToAllOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_concat_axis = getProperties().concat_axis; (void)tblgen_concat_axis;
  if (!tblgen_concat_axis) return emitError(loc, "'mesh.all_to_all' op ""requires attribute 'concat_axis'");
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.all_to_all' op ""requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_split_axis = getProperties().split_axis; (void)tblgen_split_axis;
  if (!tblgen_split_axis) return emitError(loc, "'mesh.all_to_all' op ""requires attribute 'split_axis'");

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.all_to_all' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");

  if (tblgen_mesh_axes && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(tblgen_mesh_axes))))
    return emitError(loc, "'mesh.all_to_all' op ""attribute 'mesh_axes' failed to satisfy constraint: i16 dense array attribute");

  if (tblgen_split_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_split_axis))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_split_axis).getType())))))
    return emitError(loc, "'mesh.all_to_all' op ""attribute 'split_axis' failed to satisfy constraint: index attribute");

  if (tblgen_concat_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_concat_axis))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_concat_axis).getType())))))
    return emitError(loc, "'mesh.all_to_all' op ""attribute 'concat_axis' failed to satisfy constraint: index attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AllToAllOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AllToAllOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AllToAllOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AllToAllOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AllToAllOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AllToAllOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> AllToAllOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult AllToAllOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.concat_axis;
       auto attr = dict.get("concat_axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for concat_axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `concat_axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh_axes;
       auto attr = dict.get("mesh_axes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for mesh_axes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh_axes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.split_axis;
       auto attr = dict.get("split_axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for split_axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `split_axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute AllToAllOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.concat_axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("concat_axis",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh_axes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh_axes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.split_axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("split_axis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AllToAllOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.concat_axis.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh_axes.getAsOpaquePointer()), 
    llvm::hash_value(prop.split_axis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AllToAllOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "concat_axis")
      return prop.concat_axis;

    if (name == "mesh")
      return prop.mesh;

    if (name == "mesh_axes")
      return prop.mesh_axes;

    if (name == "split_axis")
      return prop.split_axis;
  return std::nullopt;
}

void AllToAllOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "concat_axis") {
       prop.concat_axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.concat_axis)>>(value);
       return;
    }

    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }

    if (name == "mesh_axes") {
       prop.mesh_axes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh_axes)>>(value);
       return;
    }

    if (name == "split_axis") {
       prop.split_axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.split_axis)>>(value);
       return;
    }
}

void AllToAllOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.concat_axis) attrs.append("concat_axis", prop.concat_axis);

    if (prop.mesh) attrs.append("mesh", prop.mesh);

    if (prop.mesh_axes) attrs.append("mesh_axes", prop.mesh_axes);

    if (prop.split_axis) attrs.append("split_axis", prop.split_axis);
}

::mlir::LogicalResult AllToAllOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getConcatAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(attr, "concat_axis", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAxesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(attr, "mesh_axes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSplitAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(attr, "split_axis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AllToAllOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.concat_axis)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mesh_axes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.split_axis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AllToAllOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.concat_axis);
  writer.writeAttribute(prop.mesh);

  writer.writeOptionalAttribute(prop.mesh_axes);
  writer.writeAttribute(prop.split_axis);
}

::mlir::FlatSymbolRefAttr AllToAllOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef AllToAllOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr AllToAllOp::getMeshAxesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
}

::llvm::ArrayRef<int16_t> AllToAllOp::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::IntegerAttr AllToAllOp::getSplitAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().split_axis);
}

::llvm::APInt AllToAllOp::getSplitAxis() {
  auto attr = getSplitAxisAttr();
  return attr.getValue();
}

::mlir::IntegerAttr AllToAllOp::getConcatAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().concat_axis);
}

::llvm::APInt AllToAllOp::getConcatAxis() {
  auto attr = getConcatAxisAttr();
  return attr.getValue();
}

void AllToAllOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void AllToAllOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void AllToAllOp::setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr) {
  (*this)->setAttr(getMeshAxesAttrName(), attr);
}

void AllToAllOp::setMeshAxes(::llvm::ArrayRef<int16_t> attrValue) {
  (*this)->setAttr(getMeshAxesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI16ArrayAttr(attrValue));
}

void AllToAllOp::setSplitAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getSplitAxisAttrName(), attr);
}

void AllToAllOp::setSplitAxis(::llvm::APInt attrValue) {
  (*this)->setAttr(getSplitAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void AllToAllOp::setConcatAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getConcatAxisAttrName(), attr);
}

void AllToAllOp::setConcatAxis(::llvm::APInt attrValue) {
  (*this)->setAttr(getConcatAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void AllToAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr split_axis, ::mlir::IntegerAttr concat_axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().split_axis = split_axis;
  odsState.getOrAddProperties<Properties>().concat_axis = concat_axis;
  odsState.addTypes(result);
}

void AllToAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr split_axis, ::mlir::IntegerAttr concat_axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().split_axis = split_axis;
  odsState.getOrAddProperties<Properties>().concat_axis = concat_axis;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllToAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt split_axis, ::llvm::APInt concat_axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().split_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), split_axis);
  odsState.getOrAddProperties<Properties>().concat_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), concat_axis);
  odsState.addTypes(result);
}

void AllToAllOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt split_axis, ::llvm::APInt concat_axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().split_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), split_axis);
  odsState.getOrAddProperties<Properties>().concat_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), concat_axis);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AllToAllOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void AllToAllOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.mesh_axes)
    properties.mesh_axes = odsBuilder.getDenseI16ArrayAttr({});
}

::mlir::LogicalResult AllToAllOp::verifyInvariantsImpl() {
  auto tblgen_concat_axis = getProperties().concat_axis; (void)tblgen_concat_axis;
  if (!tblgen_concat_axis) return emitOpError("requires attribute 'concat_axis'");
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_split_axis = getProperties().split_axis; (void)tblgen_split_axis;
  if (!tblgen_split_axis) return emitOpError("requires attribute 'split_axis'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(*this, tblgen_mesh_axes, "mesh_axes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(*this, tblgen_split_axis, "split_axis")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(*this, tblgen_concat_axis, "concat_axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AllToAllOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult AllToAllOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::DenseI16ArrayAttr mesh_axesAttr;
  ::mlir::IntegerAttr split_axisAttr;
  ::mlir::IntegerAttr concat_axisAttr;
  ::mlir::Type inputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inputTypes(inputRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("on"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<AllToAllOp::Properties>().mesh = meshAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("mesh_axes"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mesh_axesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (mesh_axesAttr) result.getOrAddProperties<AllToAllOp::Properties>().mesh_axes = mesh_axesAttr;
  }
  if (parser.parseKeyword("split_axis"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(split_axisAttr, parser.getBuilder().getIndexType())) {
    return ::mlir::failure();
  }
  if (split_axisAttr) result.getOrAddProperties<AllToAllOp::Properties>().split_axis = split_axisAttr;
  if (parser.parseKeyword("concat_axis"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(concat_axisAttr, parser.getBuilder().getIndexType())) {
    return ::mlir::failure();
  }
  if (concat_axisAttr) result.getOrAddProperties<AllToAllOp::Properties>().concat_axis = concat_axisAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    inputRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(inputOperands, inputTypes, inputOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AllToAllOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  _odsPrinter << ' ' << "on";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  if (getMeshAxesAttr() && getMeshAxesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI16ArrayAttr({})) {
    _odsPrinter << ' ' << "mesh_axes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getMeshAxesAttr());
  }
  _odsPrinter << ' ' << "split_axis";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getSplitAxisAttr());
  _odsPrinter << ' ' << "concat_axis";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getConcatAxisAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  elidedAttrs.push_back("mesh_axes");
  elidedAttrs.push_back("split_axis");
  elidedAttrs.push_back("concat_axis");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMeshAxesAttr();
     if(attr && (attr == odsBuilder.getDenseI16ArrayAttr({})))
       elidedAttrs.push_back("mesh_axes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getInput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void AllToAllOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::AllToAllOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::BroadcastOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BroadcastOpGenericAdaptorBase::BroadcastOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.broadcast", odsAttrs.getContext());
}

BroadcastOpGenericAdaptorBase::BroadcastOpGenericAdaptorBase(BroadcastOp op) : BroadcastOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BroadcastOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr BroadcastOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr BroadcastOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef BroadcastOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr BroadcastOpGenericAdaptorBase::getMeshAxesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
  return attr;
}

::llvm::ArrayRef<int16_t> BroadcastOpGenericAdaptorBase::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr BroadcastOpGenericAdaptorBase::getRootAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().root);
  return attr;
}

::llvm::ArrayRef<int64_t> BroadcastOpGenericAdaptorBase::getRoot() {
  auto attr = getRootAttr();
  return attr;
}

} // namespace detail
BroadcastOpAdaptor::BroadcastOpAdaptor(BroadcastOp op) : BroadcastOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BroadcastOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.broadcast' op ""requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_root = getProperties().root; (void)tblgen_root;
  if (!tblgen_root) return emitError(loc, "'mesh.broadcast' op ""requires attribute 'root'");

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.broadcast' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");

  if (tblgen_mesh_axes && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(tblgen_mesh_axes))))
    return emitError(loc, "'mesh.broadcast' op ""attribute 'mesh_axes' failed to satisfy constraint: i16 dense array attribute");

  if (tblgen_root && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_root))))
    return emitError(loc, "'mesh.broadcast' op ""attribute 'root' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BroadcastOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range BroadcastOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> BroadcastOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range BroadcastOp::getRootDynamic() {
  return getODSOperands(1);
}

::mlir::OpOperand &BroadcastOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange BroadcastOp::getRootDynamicMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> BroadcastOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BroadcastOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> BroadcastOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult BroadcastOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh_axes;
       auto attr = dict.get("mesh_axes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for mesh_axes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh_axes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.root;
       auto attr = dict.get("root");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for root in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `root` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute BroadcastOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh_axes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh_axes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.root;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("root",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code BroadcastOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mesh.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh_axes.getAsOpaquePointer()), 
    llvm::hash_value(prop.root.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> BroadcastOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mesh")
      return prop.mesh;

    if (name == "mesh_axes")
      return prop.mesh_axes;

    if (name == "root")
      return prop.root;
  return std::nullopt;
}

void BroadcastOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }

    if (name == "mesh_axes") {
       prop.mesh_axes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh_axes)>>(value);
       return;
    }

    if (name == "root") {
       prop.root = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.root)>>(value);
       return;
    }
}

void BroadcastOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mesh) attrs.append("mesh", prop.mesh);

    if (prop.mesh_axes) attrs.append("mesh_axes", prop.mesh_axes);

    if (prop.root) attrs.append("root", prop.root);
}

::mlir::LogicalResult BroadcastOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAxesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(attr, "mesh_axes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRootAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(attr, "root", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult BroadcastOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mesh_axes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.root)))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.mesh);

  writer.writeOptionalAttribute(prop.mesh_axes);
  writer.writeAttribute(prop.root);
}

::mlir::FlatSymbolRefAttr BroadcastOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef BroadcastOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr BroadcastOp::getMeshAxesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
}

::llvm::ArrayRef<int16_t> BroadcastOp::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr BroadcastOp::getRootAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().root);
}

::llvm::ArrayRef<int64_t> BroadcastOp::getRoot() {
  auto attr = getRootAttr();
  return attr;
}

void BroadcastOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void BroadcastOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void BroadcastOp::setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr) {
  (*this)->setAttr(getMeshAxesAttrName(), attr);
}

void BroadcastOp::setMeshAxes(::llvm::ArrayRef<int16_t> attrValue) {
  (*this)->setAttr(getMeshAxesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI16ArrayAttr(attrValue));
}

void BroadcastOp::setRootAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getRootAttrName(), attr);
}

void BroadcastOp::setRoot(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getRootAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().root = root;
  odsState.addTypes(result);
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().root = root;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().root = odsBuilder.getDenseI64ArrayAttr(root);
  odsState.addTypes(result);
}

void BroadcastOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().root = odsBuilder.getDenseI64ArrayAttr(root);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BroadcastOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void BroadcastOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.mesh_axes)
    properties.mesh_axes = odsBuilder.getDenseI16ArrayAttr({});
}

::mlir::LogicalResult BroadcastOp::verifyInvariantsImpl() {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_root = getProperties().root; (void)tblgen_root;
  if (!tblgen_root) return emitOpError("requires attribute 'root'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(*this, tblgen_mesh_axes, "mesh_axes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(*this, tblgen_root, "root")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape()))))
    return emitOpError("failed to verify that all of {input, result} have same shape");
  if (!(((getElementTypeOrSelf((*this->getODSOperands(0).begin()))) == (getElementTypeOrSelf((*this->getODSResults(0).begin()))) && (getElementTypeOrSelf((*this->getODSResults(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(0).begin()))))))
    return emitOpError("failed to verify that all of {input, result} have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult BroadcastOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BroadcastOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::DenseI16ArrayAttr mesh_axesAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> root_dynamicOperands;
  ::llvm::SMLoc root_dynamicOperandsLoc;
  (void)root_dynamicOperandsLoc;
  ::mlir::DenseI64ArrayAttr rootAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("on"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<BroadcastOp::Properties>().mesh = meshAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("mesh_axes"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mesh_axesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (mesh_axesAttr) result.getOrAddProperties<BroadcastOp::Properties>().mesh_axes = mesh_axesAttr;
  }
  if (parser.parseKeyword("root"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();
  {
    root_dynamicOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, root_dynamicOperands, rootAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<BroadcastOp::Properties>().root = rootAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(inputOperands, root_dynamicOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void BroadcastOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  _odsPrinter << ' ' << "on";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  if (getMeshAxesAttr() && getMeshAxesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI16ArrayAttr({})) {
    _odsPrinter << ' ' << "mesh_axes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getMeshAxesAttr());
  }
  _odsPrinter << ' ' << "root";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getRootDynamic(), getRootAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  elidedAttrs.push_back("mesh_axes");
  elidedAttrs.push_back("root");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMeshAxesAttr();
     if(attr && (attr == odsBuilder.getDenseI16ArrayAttr({})))
       elidedAttrs.push_back("mesh_axes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void BroadcastOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::BroadcastOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::GatherOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GatherOpGenericAdaptorBase::GatherOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.gather", odsAttrs.getContext());
}

GatherOpGenericAdaptorBase::GatherOpGenericAdaptorBase(GatherOp op) : GatherOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GatherOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr GatherOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr GatherOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef GatherOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr GatherOpGenericAdaptorBase::getMeshAxesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
  return attr;
}

::llvm::ArrayRef<int16_t> GatherOpGenericAdaptorBase::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::IntegerAttr GatherOpGenericAdaptorBase::getGatherAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().gather_axis);
  return attr;
}

::llvm::APInt GatherOpGenericAdaptorBase::getGatherAxis() {
  auto attr = getGatherAxisAttr();
  return attr.getValue();
}

::mlir::DenseI64ArrayAttr GatherOpGenericAdaptorBase::getRootAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().root);
  return attr;
}

::llvm::ArrayRef<int64_t> GatherOpGenericAdaptorBase::getRoot() {
  auto attr = getRootAttr();
  return attr;
}

} // namespace detail
GatherOpAdaptor::GatherOpAdaptor(GatherOp op) : GatherOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GatherOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_gather_axis = getProperties().gather_axis; (void)tblgen_gather_axis;
  if (!tblgen_gather_axis) return emitError(loc, "'mesh.gather' op ""requires attribute 'gather_axis'");
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.gather' op ""requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_root = getProperties().root; (void)tblgen_root;
  if (!tblgen_root) return emitError(loc, "'mesh.gather' op ""requires attribute 'root'");

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.gather' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");

  if (tblgen_mesh_axes && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(tblgen_mesh_axes))))
    return emitError(loc, "'mesh.gather' op ""attribute 'mesh_axes' failed to satisfy constraint: i16 dense array attribute");

  if (tblgen_gather_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_gather_axis))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_gather_axis).getType())))))
    return emitError(loc, "'mesh.gather' op ""attribute 'gather_axis' failed to satisfy constraint: index attribute");

  if (tblgen_root && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_root))))
    return emitError(loc, "'mesh.gather' op ""attribute 'root' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GatherOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range GatherOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> GatherOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range GatherOp::getRootDynamic() {
  return getODSOperands(1);
}

::mlir::OpOperand &GatherOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange GatherOp::getRootDynamicMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> GatherOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GatherOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> GatherOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult GatherOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.gather_axis;
       auto attr = dict.get("gather_axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for gather_axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `gather_axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh_axes;
       auto attr = dict.get("mesh_axes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for mesh_axes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh_axes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.root;
       auto attr = dict.get("root");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for root in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `root` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GatherOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.gather_axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("gather_axis",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh_axes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh_axes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.root;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("root",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GatherOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.gather_axis.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh_axes.getAsOpaquePointer()), 
    llvm::hash_value(prop.root.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GatherOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "gather_axis")
      return prop.gather_axis;

    if (name == "mesh")
      return prop.mesh;

    if (name == "mesh_axes")
      return prop.mesh_axes;

    if (name == "root")
      return prop.root;
  return std::nullopt;
}

void GatherOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "gather_axis") {
       prop.gather_axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.gather_axis)>>(value);
       return;
    }

    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }

    if (name == "mesh_axes") {
       prop.mesh_axes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh_axes)>>(value);
       return;
    }

    if (name == "root") {
       prop.root = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.root)>>(value);
       return;
    }
}

void GatherOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.gather_axis) attrs.append("gather_axis", prop.gather_axis);

    if (prop.mesh) attrs.append("mesh", prop.mesh);

    if (prop.mesh_axes) attrs.append("mesh_axes", prop.mesh_axes);

    if (prop.root) attrs.append("root", prop.root);
}

::mlir::LogicalResult GatherOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getGatherAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(attr, "gather_axis", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAxesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(attr, "mesh_axes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRootAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(attr, "root", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GatherOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.gather_axis)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mesh_axes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.root)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GatherOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.gather_axis);
  writer.writeAttribute(prop.mesh);

  writer.writeOptionalAttribute(prop.mesh_axes);
  writer.writeAttribute(prop.root);
}

::mlir::FlatSymbolRefAttr GatherOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef GatherOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr GatherOp::getMeshAxesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
}

::llvm::ArrayRef<int16_t> GatherOp::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::IntegerAttr GatherOp::getGatherAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().gather_axis);
}

::llvm::APInt GatherOp::getGatherAxis() {
  auto attr = getGatherAxisAttr();
  return attr.getValue();
}

::mlir::DenseI64ArrayAttr GatherOp::getRootAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().root);
}

::llvm::ArrayRef<int64_t> GatherOp::getRoot() {
  auto attr = getRootAttr();
  return attr;
}

void GatherOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void GatherOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void GatherOp::setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr) {
  (*this)->setAttr(getMeshAxesAttrName(), attr);
}

void GatherOp::setMeshAxes(::llvm::ArrayRef<int16_t> attrValue) {
  (*this)->setAttr(getMeshAxesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI16ArrayAttr(attrValue));
}

void GatherOp::setGatherAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getGatherAxisAttrName(), attr);
}

void GatherOp::setGatherAxis(::llvm::APInt attrValue) {
  (*this)->setAttr(getGatherAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void GatherOp::setRootAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getRootAttrName(), attr);
}

void GatherOp::setRoot(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getRootAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr gather_axis, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().gather_axis = gather_axis;
  odsState.getOrAddProperties<Properties>().root = root;
  odsState.addTypes(result);
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr gather_axis, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().gather_axis = gather_axis;
  odsState.getOrAddProperties<Properties>().root = root;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt gather_axis, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().gather_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), gather_axis);
  odsState.getOrAddProperties<Properties>().root = odsBuilder.getDenseI64ArrayAttr(root);
  odsState.addTypes(result);
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt gather_axis, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().gather_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), gather_axis);
  odsState.getOrAddProperties<Properties>().root = odsBuilder.getDenseI64ArrayAttr(root);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GatherOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void GatherOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.mesh_axes)
    properties.mesh_axes = odsBuilder.getDenseI16ArrayAttr({});
}

::mlir::LogicalResult GatherOp::verifyInvariantsImpl() {
  auto tblgen_gather_axis = getProperties().gather_axis; (void)tblgen_gather_axis;
  if (!tblgen_gather_axis) return emitOpError("requires attribute 'gather_axis'");
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_root = getProperties().root; (void)tblgen_root;
  if (!tblgen_root) return emitOpError("requires attribute 'root'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(*this, tblgen_mesh_axes, "mesh_axes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(*this, tblgen_gather_axis, "gather_axis")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(*this, tblgen_root, "root")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getRank()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getRank()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getRank()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getRank()))))
    return emitOpError("failed to verify that all of {input, result} have same rank");
  if (!(((getElementTypeOrSelf((*this->getODSOperands(0).begin()))) == (getElementTypeOrSelf((*this->getODSResults(0).begin()))) && (getElementTypeOrSelf((*this->getODSResults(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(0).begin()))))))
    return emitOpError("failed to verify that all of {input, result} have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult GatherOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GatherOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::DenseI16ArrayAttr mesh_axesAttr;
  ::mlir::IntegerAttr gather_axisAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> root_dynamicOperands;
  ::llvm::SMLoc root_dynamicOperandsLoc;
  (void)root_dynamicOperandsLoc;
  ::mlir::DenseI64ArrayAttr rootAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("on"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<GatherOp::Properties>().mesh = meshAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("mesh_axes"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mesh_axesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (mesh_axesAttr) result.getOrAddProperties<GatherOp::Properties>().mesh_axes = mesh_axesAttr;
  }
  if (parser.parseKeyword("gather_axis"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(gather_axisAttr, parser.getBuilder().getIndexType())) {
    return ::mlir::failure();
  }
  if (gather_axisAttr) result.getOrAddProperties<GatherOp::Properties>().gather_axis = gather_axisAttr;
  if (parser.parseKeyword("root"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();
  {
    root_dynamicOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, root_dynamicOperands, rootAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<GatherOp::Properties>().root = rootAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(inputOperands, root_dynamicOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GatherOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  _odsPrinter << ' ' << "on";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  if (getMeshAxesAttr() && getMeshAxesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI16ArrayAttr({})) {
    _odsPrinter << ' ' << "mesh_axes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getMeshAxesAttr());
  }
  _odsPrinter << ' ' << "gather_axis";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getGatherAxisAttr());
  _odsPrinter << ' ' << "root";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getRootDynamic(), getRootAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  elidedAttrs.push_back("mesh_axes");
  elidedAttrs.push_back("gather_axis");
  elidedAttrs.push_back("root");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMeshAxesAttr();
     if(attr && (attr == odsBuilder.getDenseI16ArrayAttr({})))
       elidedAttrs.push_back("mesh_axes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void GatherOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::GatherOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::MeshOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MeshOpGenericAdaptorBase::MeshOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.mesh", odsAttrs.getContext());
}

MeshOpGenericAdaptorBase::MeshOpGenericAdaptorBase(MeshOp op) : MeshOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MeshOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MeshOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr MeshOpGenericAdaptorBase::getSymNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
  return attr;
}

::llvm::StringRef MeshOpGenericAdaptorBase::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::DenseI64ArrayAttr MeshOpGenericAdaptorBase::getShapeAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().shape);
  return attr;
}

::llvm::ArrayRef<int64_t> MeshOpGenericAdaptorBase::getShape() {
  auto attr = getShapeAttr();
  return attr;
}

} // namespace detail
MeshOpAdaptor::MeshOpAdaptor(MeshOp op) : MeshOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MeshOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_shape = getProperties().shape; (void)tblgen_shape;
  if (!tblgen_shape) return emitError(loc, "'mesh.mesh' op ""requires attribute 'shape'");
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitError(loc, "'mesh.mesh' op ""requires attribute 'sym_name'");

  if (tblgen_sym_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_name))))
    return emitError(loc, "'mesh.mesh' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");

  if (tblgen_shape && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_shape))))
    return emitError(loc, "'mesh.mesh' op ""attribute 'shape' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MeshOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MeshOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> MeshOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MeshOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult MeshOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.shape;
       auto attr = dict.get("shape");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for shape in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `shape` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.sym_name;
       auto attr = dict.get("sym_name");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for sym_name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `sym_name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MeshOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.shape;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("shape",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sym_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sym_name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MeshOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.shape.getAsOpaquePointer()), 
    llvm::hash_value(prop.sym_name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MeshOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "shape")
      return prop.shape;

    if (name == "sym_name")
      return prop.sym_name;
  return std::nullopt;
}

void MeshOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "shape") {
       prop.shape = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.shape)>>(value);
       return;
    }

    if (name == "sym_name") {
       prop.sym_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sym_name)>>(value);
       return;
    }
}

void MeshOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.shape) attrs.append("shape", prop.shape);

    if (prop.sym_name) attrs.append("sym_name", prop.sym_name);
}

::mlir::LogicalResult MeshOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getShapeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(attr, "shape", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSymNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps5(attr, "sym_name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MeshOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.shape)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.sym_name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MeshOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.shape);
  writer.writeAttribute(prop.sym_name);
}

::mlir::StringAttr MeshOp::getSymNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
}

::llvm::StringRef MeshOp::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::DenseI64ArrayAttr MeshOp::getShapeAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().shape);
}

::llvm::ArrayRef<int64_t> MeshOp::getShape() {
  auto attr = getShapeAttr();
  return attr;
}

void MeshOp::setSymNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymNameAttrName(), attr);
}

void MeshOp::setSymName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getSymNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void MeshOp::setShapeAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getShapeAttrName(), attr);
}

void MeshOp::setShape(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getShapeAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void MeshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::DenseI64ArrayAttr shape) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  odsState.getOrAddProperties<Properties>().shape = shape;
}

void MeshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::DenseI64ArrayAttr shape) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  odsState.getOrAddProperties<Properties>().shape = shape;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MeshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, ::llvm::ArrayRef<int64_t> shape) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().shape = odsBuilder.getDenseI64ArrayAttr(shape);
}

void MeshOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, ::llvm::ArrayRef<int64_t> shape) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().shape = odsBuilder.getDenseI64ArrayAttr(shape);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MeshOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MeshOp::verifyInvariantsImpl() {
  auto tblgen_shape = getProperties().shape; (void)tblgen_shape;
  if (!tblgen_shape) return emitOpError("requires attribute 'shape'");
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitOpError("requires attribute 'sym_name'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps5(*this, tblgen_sym_name, "sym_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(*this, tblgen_shape, "shape")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult MeshOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult MeshOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr sym_nameAttr;
  ::mlir::DenseI64ArrayAttr shapeAttr;

  if (parser.parseSymbolName(sym_nameAttr))
    return ::mlir::failure();
  if (sym_nameAttr) result.getOrAddProperties<MeshOp::Properties>().sym_name = sym_nameAttr;
  if (parser.parseLParen())
    return ::mlir::failure();
  if (parser.parseKeyword("shape"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();
  {
    auto odsResult = parseDimensionList(parser, shapeAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<MeshOp::Properties>().shape = shapeAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void MeshOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printSymbolName(getSymNameAttr().getValue());
  _odsPrinter << "(";
  _odsPrinter << "shape";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  printDimensionList(_odsPrinter, *this, getShapeAttr());
  _odsPrinter << ")";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("sym_name");
  elidedAttrs.push_back("shape");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::MeshOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::MeshShapeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MeshShapeOpGenericAdaptorBase::MeshShapeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.mesh_shape", odsAttrs.getContext());
}

MeshShapeOpGenericAdaptorBase::MeshShapeOpGenericAdaptorBase(MeshShapeOp op) : MeshShapeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MeshShapeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MeshShapeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr MeshShapeOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef MeshShapeOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr MeshShapeOpGenericAdaptorBase::getAxesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().axes);
  return attr;
}

::llvm::ArrayRef<int16_t> MeshShapeOpGenericAdaptorBase::getAxes() {
  auto attr = getAxesAttr();
  return attr;
}

} // namespace detail
MeshShapeOpAdaptor::MeshShapeOpAdaptor(MeshShapeOp op) : MeshShapeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MeshShapeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_axes = getProperties().axes; (void)tblgen_axes;
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.mesh_shape' op ""requires attribute 'mesh'");

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.mesh_shape' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");

  if (tblgen_axes && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(tblgen_axes))))
    return emitError(loc, "'mesh.mesh_shape' op ""attribute 'axes' failed to satisfy constraint: i16 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MeshShapeOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MeshShapeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> MeshShapeOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range MeshShapeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range MeshShapeOp::getResult() {
  return getODSResults(0);
}

::mlir::LogicalResult MeshShapeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.axes;
       auto attr = dict.get("axes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for axes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `axes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute MeshShapeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.axes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("axes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MeshShapeOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.axes.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> MeshShapeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "axes")
      return prop.axes;

    if (name == "mesh")
      return prop.mesh;
  return std::nullopt;
}

void MeshShapeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "axes") {
       prop.axes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.axes)>>(value);
       return;
    }

    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }
}

void MeshShapeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.axes) attrs.append("axes", prop.axes);

    if (prop.mesh) attrs.append("mesh", prop.mesh);
}

::mlir::LogicalResult MeshShapeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAxesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(attr, "axes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MeshShapeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.axes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();
  return ::mlir::success();
}

void MeshShapeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.axes);
  writer.writeAttribute(prop.mesh);
}

::mlir::FlatSymbolRefAttr MeshShapeOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef MeshShapeOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr MeshShapeOp::getAxesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().axes);
}

::llvm::ArrayRef<int16_t> MeshShapeOp::getAxes() {
  auto attr = getAxesAttr();
  return attr;
}

void MeshShapeOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void MeshShapeOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void MeshShapeOp::setAxesAttr(::mlir::DenseI16ArrayAttr attr) {
  (*this)->setAttr(getAxesAttrName(), attr);
}

void MeshShapeOp::setAxes(::llvm::ArrayRef<int16_t> attrValue) {
  (*this)->setAttr(getAxesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI16ArrayAttr(attrValue));
}

void MeshShapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr axes) {
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (axes) {
    odsState.getOrAddProperties<Properties>().axes = axes;
  }
  odsState.addTypes(result);
}

void MeshShapeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> axes) {
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().axes = odsBuilder.getDenseI16ArrayAttr(axes);
  odsState.addTypes(result);
}

void MeshShapeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

void MeshShapeOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.axes)
    properties.axes = odsBuilder.getDenseI16ArrayAttr({});
}

::mlir::LogicalResult MeshShapeOp::verifyInvariantsImpl() {
  auto tblgen_axes = getProperties().axes; (void)tblgen_axes;
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(*this, tblgen_axes, "axes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MeshShapeOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MeshShapeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::DenseI16ArrayAttr axesAttr;
  ::llvm::SmallVector<::mlir::Type, 1> resultTypes;

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<MeshShapeOp::Properties>().mesh = meshAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("axes"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(axesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (axesAttr) result.getOrAddProperties<MeshShapeOp::Properties>().axes = axesAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(resultTypes))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  return ::mlir::success();
}

void MeshShapeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  if (getAxesAttr() && getAxesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI16ArrayAttr({})) {
    _odsPrinter << ' ' << "axes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getAxesAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  elidedAttrs.push_back("axes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAxesAttr();
     if(attr && (attr == odsBuilder.getDenseI16ArrayAttr({})))
       elidedAttrs.push_back("axes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getResult().getTypes();
}

void MeshShapeOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::MeshShapeOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ProcessLinearIndexOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ProcessLinearIndexOpGenericAdaptorBase::ProcessLinearIndexOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.process_linear_index", odsAttrs.getContext());
}

ProcessLinearIndexOpGenericAdaptorBase::ProcessLinearIndexOpGenericAdaptorBase(ProcessLinearIndexOp op) : ProcessLinearIndexOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ProcessLinearIndexOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ProcessLinearIndexOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr ProcessLinearIndexOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef ProcessLinearIndexOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

} // namespace detail
ProcessLinearIndexOpAdaptor::ProcessLinearIndexOpAdaptor(ProcessLinearIndexOp op) : ProcessLinearIndexOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ProcessLinearIndexOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.process_linear_index' op ""requires attribute 'mesh'");

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.process_linear_index' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ProcessLinearIndexOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ProcessLinearIndexOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ProcessLinearIndexOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ProcessLinearIndexOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IndexType> ProcessLinearIndexOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::IndexType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ProcessLinearIndexOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ProcessLinearIndexOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ProcessLinearIndexOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mesh.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ProcessLinearIndexOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mesh")
      return prop.mesh;
  return std::nullopt;
}

void ProcessLinearIndexOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }
}

void ProcessLinearIndexOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mesh) attrs.append("mesh", prop.mesh);
}

::mlir::LogicalResult ProcessLinearIndexOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ProcessLinearIndexOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ProcessLinearIndexOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.mesh);
}

::mlir::FlatSymbolRefAttr ProcessLinearIndexOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef ProcessLinearIndexOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

void ProcessLinearIndexOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void ProcessLinearIndexOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ProcessLinearIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh) {
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  odsState.addTypes(result);
}

void ProcessLinearIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::FlatSymbolRefAttr mesh) {
  odsState.getOrAddProperties<Properties>().mesh = mesh;

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ProcessLinearIndexOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ProcessLinearIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh) {
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ProcessLinearIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh) {
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.addTypes(result);
}

void ProcessLinearIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef mesh) {
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ProcessLinearIndexOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ProcessLinearIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh) {
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ProcessLinearIndexOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ProcessLinearIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ProcessLinearIndexOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

::mlir::LogicalResult ProcessLinearIndexOp::verifyInvariantsImpl() {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps3(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ProcessLinearIndexOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ProcessLinearIndexOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = odsBuilder.getIndexType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ProcessLinearIndexOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);
  if (parser.parseKeyword("on"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<ProcessLinearIndexOp::Properties>().mesh = meshAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::IndexType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  return ::mlir::success();
}

void ProcessLinearIndexOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << "on";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::IndexType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ProcessLinearIndexOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::ProcessLinearIndexOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ProcessMultiIndexOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ProcessMultiIndexOpGenericAdaptorBase::ProcessMultiIndexOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.process_multi_index", odsAttrs.getContext());
}

ProcessMultiIndexOpGenericAdaptorBase::ProcessMultiIndexOpGenericAdaptorBase(ProcessMultiIndexOp op) : ProcessMultiIndexOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ProcessMultiIndexOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ProcessMultiIndexOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr ProcessMultiIndexOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef ProcessMultiIndexOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr ProcessMultiIndexOpGenericAdaptorBase::getAxesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().axes);
  return attr;
}

::llvm::ArrayRef<int16_t> ProcessMultiIndexOpGenericAdaptorBase::getAxes() {
  auto attr = getAxesAttr();
  return attr;
}

} // namespace detail
ProcessMultiIndexOpAdaptor::ProcessMultiIndexOpAdaptor(ProcessMultiIndexOp op) : ProcessMultiIndexOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ProcessMultiIndexOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_axes = getProperties().axes; (void)tblgen_axes;
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.process_multi_index' op ""requires attribute 'mesh'");

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.process_multi_index' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");

  if (tblgen_axes && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(tblgen_axes))))
    return emitError(loc, "'mesh.process_multi_index' op ""attribute 'axes' failed to satisfy constraint: i16 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ProcessMultiIndexOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ProcessMultiIndexOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ProcessMultiIndexOp::getODSResultIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumResults() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::result_range ProcessMultiIndexOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::result_range ProcessMultiIndexOp::getResult() {
  return getODSResults(0);
}

::mlir::LogicalResult ProcessMultiIndexOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.axes;
       auto attr = dict.get("axes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for axes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `axes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ProcessMultiIndexOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.axes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("axes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ProcessMultiIndexOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.axes.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ProcessMultiIndexOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "axes")
      return prop.axes;

    if (name == "mesh")
      return prop.mesh;
  return std::nullopt;
}

void ProcessMultiIndexOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "axes") {
       prop.axes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.axes)>>(value);
       return;
    }

    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }
}

void ProcessMultiIndexOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.axes) attrs.append("axes", prop.axes);

    if (prop.mesh) attrs.append("mesh", prop.mesh);
}

::mlir::LogicalResult ProcessMultiIndexOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAxesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(attr, "axes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ProcessMultiIndexOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.axes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ProcessMultiIndexOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.axes);
  writer.writeAttribute(prop.mesh);
}

::mlir::FlatSymbolRefAttr ProcessMultiIndexOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef ProcessMultiIndexOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr ProcessMultiIndexOp::getAxesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().axes);
}

::llvm::ArrayRef<int16_t> ProcessMultiIndexOp::getAxes() {
  auto attr = getAxesAttr();
  return attr;
}

void ProcessMultiIndexOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void ProcessMultiIndexOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ProcessMultiIndexOp::setAxesAttr(::mlir::DenseI16ArrayAttr attr) {
  (*this)->setAttr(getAxesAttrName(), attr);
}

void ProcessMultiIndexOp::setAxes(::llvm::ArrayRef<int16_t> attrValue) {
  (*this)->setAttr(getAxesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI16ArrayAttr(attrValue));
}

void ProcessMultiIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr axes) {
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (axes) {
    odsState.getOrAddProperties<Properties>().axes = axes;
  }
  odsState.addTypes(result);
}

void ProcessMultiIndexOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> axes) {
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().axes = odsBuilder.getDenseI16ArrayAttr(axes);
  odsState.addTypes(result);
}

void ProcessMultiIndexOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  odsState.addTypes(resultTypes);
}

void ProcessMultiIndexOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.axes)
    properties.axes = odsBuilder.getDenseI16ArrayAttr({});
}

::mlir::LogicalResult ProcessMultiIndexOp::verifyInvariantsImpl() {
  auto tblgen_axes = getProperties().axes; (void)tblgen_axes;
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(*this, tblgen_axes, "axes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ProcessMultiIndexOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ProcessMultiIndexOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::DenseI16ArrayAttr axesAttr;
  ::llvm::SmallVector<::mlir::Type, 1> resultTypes;
  if (parser.parseKeyword("on"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<ProcessMultiIndexOp::Properties>().mesh = meshAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("axes"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(axesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (axesAttr) result.getOrAddProperties<ProcessMultiIndexOp::Properties>().axes = axesAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(resultTypes))
    return ::mlir::failure();
  result.addTypes(resultTypes);
  return ::mlir::success();
}

void ProcessMultiIndexOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << "on";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  if (getAxesAttr() && getAxesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI16ArrayAttr({})) {
    _odsPrinter << ' ' << "axes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getAxesAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  elidedAttrs.push_back("axes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAxesAttr();
     if(attr && (attr == odsBuilder.getDenseI16ArrayAttr({})))
       elidedAttrs.push_back("axes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getResult().getTypes();
}

void ProcessMultiIndexOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::ProcessMultiIndexOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::RecvOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
RecvOpGenericAdaptorBase::RecvOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.recv", odsAttrs.getContext());
}

RecvOpGenericAdaptorBase::RecvOpGenericAdaptorBase(RecvOp op) : RecvOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> RecvOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr RecvOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr RecvOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef RecvOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr RecvOpGenericAdaptorBase::getMeshAxesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
  return attr;
}

::llvm::ArrayRef<int16_t> RecvOpGenericAdaptorBase::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr RecvOpGenericAdaptorBase::getSourceAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().source);
  return attr;
}

::std::optional<::llvm::ArrayRef<int64_t>> RecvOpGenericAdaptorBase::getSource() {
  auto attr = getSourceAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

} // namespace detail
RecvOpAdaptor::RecvOpAdaptor(RecvOp op) : RecvOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult RecvOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.recv' op ""requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_source = getProperties().source; (void)tblgen_source;

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.recv' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");

  if (tblgen_mesh_axes && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(tblgen_mesh_axes))))
    return emitError(loc, "'mesh.recv' op ""attribute 'mesh_axes' failed to satisfy constraint: i16 dense array attribute");

  if (tblgen_source && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_source))))
    return emitError(loc, "'mesh.recv' op ""attribute 'source' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> RecvOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range RecvOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> RecvOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range RecvOp::getSourceDynamic() {
  return getODSOperands(1);
}

::mlir::OpOperand &RecvOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange RecvOp::getSourceDynamicMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> RecvOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range RecvOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> RecvOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult RecvOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh_axes;
       auto attr = dict.get("mesh_axes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for mesh_axes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh_axes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.source;
       auto attr = dict.get("source");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for source in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `source` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute RecvOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh_axes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh_axes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.source;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("source",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code RecvOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mesh.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh_axes.getAsOpaquePointer()), 
    llvm::hash_value(prop.source.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> RecvOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mesh")
      return prop.mesh;

    if (name == "mesh_axes")
      return prop.mesh_axes;

    if (name == "source")
      return prop.source;
  return std::nullopt;
}

void RecvOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }

    if (name == "mesh_axes") {
       prop.mesh_axes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh_axes)>>(value);
       return;
    }

    if (name == "source") {
       prop.source = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.source)>>(value);
       return;
    }
}

void RecvOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mesh) attrs.append("mesh", prop.mesh);

    if (prop.mesh_axes) attrs.append("mesh_axes", prop.mesh_axes);

    if (prop.source) attrs.append("source", prop.source);
}

::mlir::LogicalResult RecvOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAxesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(attr, "mesh_axes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSourceAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(attr, "source", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult RecvOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mesh_axes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.source)))
    return ::mlir::failure();
  return ::mlir::success();
}

void RecvOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.mesh);

  writer.writeOptionalAttribute(prop.mesh_axes);

  writer.writeOptionalAttribute(prop.source);
}

::mlir::FlatSymbolRefAttr RecvOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef RecvOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr RecvOp::getMeshAxesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
}

::llvm::ArrayRef<int16_t> RecvOp::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr RecvOp::getSourceAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI64ArrayAttr>(getProperties().source);
}

::std::optional<::llvm::ArrayRef<int64_t>> RecvOp::getSource() {
  auto attr = getSourceAttr();
  return attr ? ::std::optional<::llvm::ArrayRef<int64_t>>(attr) : (::std::nullopt);
}

void RecvOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void RecvOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void RecvOp::setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr) {
  (*this)->setAttr(getMeshAxesAttrName(), attr);
}

void RecvOp::setMeshAxes(::llvm::ArrayRef<int16_t> attrValue) {
  (*this)->setAttr(getMeshAxesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI16ArrayAttr(attrValue));
}

void RecvOp::setSourceAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getSourceAttrName(), attr);
}

void RecvOp::setSource(::std::optional<::llvm::ArrayRef<int64_t>> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getSourceAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(*attrValue));
    (*this)->removeAttr(getSourceAttrName());
}

::mlir::Attribute RecvOp::removeSourceAttr() {
    auto &attr = getProperties().source;
    attr = {};
    return attr;
}

void RecvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, /*optional*/::mlir::DenseI64ArrayAttr source, ::mlir::ValueRange source_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(source_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  if (source) {
    odsState.getOrAddProperties<Properties>().source = source;
  }
  odsState.addTypes(result);
}

void RecvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, /*optional*/::mlir::DenseI64ArrayAttr source, ::mlir::ValueRange source_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(source_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  if (source) {
    odsState.getOrAddProperties<Properties>().source = source;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RecvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, /*optional*/::mlir::DenseI64ArrayAttr source, ::mlir::ValueRange source_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(source_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  if (source) {
    odsState.getOrAddProperties<Properties>().source = source;
  }
  odsState.addTypes(result);
}

void RecvOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, /*optional*/::mlir::DenseI64ArrayAttr source, ::mlir::ValueRange source_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(source_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  if (source) {
    odsState.getOrAddProperties<Properties>().source = source;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void RecvOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void RecvOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.mesh_axes)
    properties.mesh_axes = odsBuilder.getDenseI16ArrayAttr({});
}

::mlir::LogicalResult RecvOp::verifyInvariantsImpl() {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_source = getProperties().source; (void)tblgen_source;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(*this, tblgen_mesh_axes, "mesh_axes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(*this, tblgen_source, "source")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape()))))
    return emitOpError("failed to verify that all of {input, result} have same shape");
  if (!(((getElementTypeOrSelf((*this->getODSOperands(0).begin()))) == (getElementTypeOrSelf((*this->getODSResults(0).begin()))) && (getElementTypeOrSelf((*this->getODSResults(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(0).begin()))))))
    return emitOpError("failed to verify that all of {input, result} have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult RecvOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult RecvOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::DenseI16ArrayAttr mesh_axesAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> source_dynamicOperands;
  ::llvm::SMLoc source_dynamicOperandsLoc;
  (void)source_dynamicOperandsLoc;
  ::mlir::DenseI64ArrayAttr sourceAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("on"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<RecvOp::Properties>().mesh = meshAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("mesh_axes"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mesh_axesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (mesh_axesAttr) result.getOrAddProperties<RecvOp::Properties>().mesh_axes = mesh_axesAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("source"))) {
  if (parser.parseEqual())
    return ::mlir::failure();
  {
    source_dynamicOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, source_dynamicOperands, sourceAttr);
    if (odsResult) return ::mlir::failure();
    if (sourceAttr)
      result.getOrAddProperties<RecvOp::Properties>().source = sourceAttr;
  }
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(inputOperands, source_dynamicOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void RecvOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  _odsPrinter << ' ' << "on";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  if (getMeshAxesAttr() && getMeshAxesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI16ArrayAttr({})) {
    _odsPrinter << ' ' << "mesh_axes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getMeshAxesAttr());
  }
  if (((!getSourceDynamic().empty()) || (getSourceAttr()))) {
    _odsPrinter << ' ' << "source";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
    printDynamicIndexList(_odsPrinter, *this, getSourceDynamic(), getSourceAttr());
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  elidedAttrs.push_back("mesh_axes");
  elidedAttrs.push_back("source");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMeshAxesAttr();
     if(attr && (attr == odsBuilder.getDenseI16ArrayAttr({})))
       elidedAttrs.push_back("mesh_axes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::RecvOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ReduceOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReduceOpGenericAdaptorBase::ReduceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.reduce", odsAttrs.getContext());
}

ReduceOpGenericAdaptorBase::ReduceOpGenericAdaptorBase(ReduceOp op) : ReduceOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReduceOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr ReduceOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr ReduceOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef ReduceOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr ReduceOpGenericAdaptorBase::getMeshAxesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
  return attr;
}

::llvm::ArrayRef<int16_t> ReduceOpGenericAdaptorBase::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::mesh::PartialAttr ReduceOpGenericAdaptorBase::getReductionAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::mesh::PartialAttr>(getProperties().reduction);
  return attr;
}

::mlir::mesh::Partial ReduceOpGenericAdaptorBase::getReduction() {
  auto attr = getReductionAttr();
  return attr.getValue();
}

::mlir::DenseI64ArrayAttr ReduceOpGenericAdaptorBase::getRootAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().root);
  return attr;
}

::llvm::ArrayRef<int64_t> ReduceOpGenericAdaptorBase::getRoot() {
  auto attr = getRootAttr();
  return attr;
}

} // namespace detail
ReduceOpAdaptor::ReduceOpAdaptor(ReduceOp op) : ReduceOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReduceOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.reduce' op ""requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_reduction = getProperties().reduction; (void)tblgen_reduction;
  auto tblgen_root = getProperties().root; (void)tblgen_root;
  if (!tblgen_root) return emitError(loc, "'mesh.reduce' op ""requires attribute 'root'");

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.reduce' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");

  if (tblgen_mesh_axes && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(tblgen_mesh_axes))))
    return emitError(loc, "'mesh.reduce' op ""attribute 'mesh_axes' failed to satisfy constraint: i16 dense array attribute");

  if (tblgen_reduction && !((::llvm::isa<::mlir::mesh::PartialAttr>(tblgen_reduction))))
    return emitError(loc, "'mesh.reduce' op ""attribute 'reduction' failed to satisfy constraint: partial type of a distributed tensor");

  if (tblgen_root && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_root))))
    return emitError(loc, "'mesh.reduce' op ""attribute 'root' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReduceOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range ReduceOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> ReduceOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range ReduceOp::getRootDynamic() {
  return getODSOperands(1);
}

::mlir::OpOperand &ReduceOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange ReduceOp::getRootDynamicMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ReduceOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReduceOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> ReduceOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReduceOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh_axes;
       auto attr = dict.get("mesh_axes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for mesh_axes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh_axes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.reduction;
       auto attr = dict.get("reduction");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for reduction in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reduction` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.root;
       auto attr = dict.get("root");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for root in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `root` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ReduceOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh_axes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh_axes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.reduction;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reduction",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.root;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("root",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReduceOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mesh.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh_axes.getAsOpaquePointer()), 
    llvm::hash_value(prop.reduction.getAsOpaquePointer()), 
    llvm::hash_value(prop.root.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReduceOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mesh")
      return prop.mesh;

    if (name == "mesh_axes")
      return prop.mesh_axes;

    if (name == "reduction")
      return prop.reduction;

    if (name == "root")
      return prop.root;
  return std::nullopt;
}

void ReduceOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }

    if (name == "mesh_axes") {
       prop.mesh_axes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh_axes)>>(value);
       return;
    }

    if (name == "reduction") {
       prop.reduction = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reduction)>>(value);
       return;
    }

    if (name == "root") {
       prop.root = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.root)>>(value);
       return;
    }
}

void ReduceOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mesh) attrs.append("mesh", prop.mesh);

    if (prop.mesh_axes) attrs.append("mesh_axes", prop.mesh_axes);

    if (prop.reduction) attrs.append("reduction", prop.reduction);

    if (prop.root) attrs.append("root", prop.root);
}

::mlir::LogicalResult ReduceOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAxesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(attr, "mesh_axes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReductionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps3(attr, "reduction", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRootAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(attr, "root", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReduceOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mesh_axes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.reduction)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.root)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.mesh);

  writer.writeOptionalAttribute(prop.mesh_axes);

  writer.writeOptionalAttribute(prop.reduction);
  writer.writeAttribute(prop.root);
}

::mlir::FlatSymbolRefAttr ReduceOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef ReduceOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr ReduceOp::getMeshAxesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
}

::llvm::ArrayRef<int16_t> ReduceOp::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::mesh::PartialAttr ReduceOp::getReductionAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::mesh::PartialAttr>(getProperties().reduction);
}

::mlir::mesh::Partial ReduceOp::getReduction() {
  auto attr = getReductionAttr();
  return attr.getValue();
}

::mlir::DenseI64ArrayAttr ReduceOp::getRootAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().root);
}

::llvm::ArrayRef<int64_t> ReduceOp::getRoot() {
  auto attr = getRootAttr();
  return attr;
}

void ReduceOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void ReduceOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ReduceOp::setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr) {
  (*this)->setAttr(getMeshAxesAttrName(), attr);
}

void ReduceOp::setMeshAxes(::llvm::ArrayRef<int16_t> attrValue) {
  (*this)->setAttr(getMeshAxesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI16ArrayAttr(attrValue));
}

void ReduceOp::setReductionAttr(::mlir::mesh::PartialAttr attr) {
  (*this)->setAttr(getReductionAttrName(), attr);
}

void ReduceOp::setReduction(::mlir::mesh::Partial attrValue) {
  (*this)->setAttr(getReductionAttrName(), ::mlir::mesh::PartialAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ReduceOp::setRootAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getRootAttrName(), attr);
}

void ReduceOp::setRoot(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getRootAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void ReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::mesh::PartialAttr reduction, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  if (reduction) {
    odsState.getOrAddProperties<Properties>().reduction = reduction;
  }
  odsState.getOrAddProperties<Properties>().root = root;
  odsState.addTypes(result);
}

void ReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::mesh::PartialAttr reduction, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  if (reduction) {
    odsState.getOrAddProperties<Properties>().reduction = reduction;
  }
  odsState.getOrAddProperties<Properties>().root = root;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::mlir::mesh::Partial reduction, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().reduction = ::mlir::mesh::PartialAttr::get(odsBuilder.getContext(), reduction);
  odsState.getOrAddProperties<Properties>().root = odsBuilder.getDenseI64ArrayAttr(root);
  odsState.addTypes(result);
}

void ReduceOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::mlir::mesh::Partial reduction, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().reduction = ::mlir::mesh::PartialAttr::get(odsBuilder.getContext(), reduction);
  odsState.getOrAddProperties<Properties>().root = odsBuilder.getDenseI64ArrayAttr(root);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ReduceOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.mesh_axes)
    properties.mesh_axes = odsBuilder.getDenseI16ArrayAttr({});
  if (!properties.reduction)
    properties.reduction = ::mlir::mesh::PartialAttr::get(odsBuilder.getContext(), ::mlir::mesh::Partial::Sum);
}

::mlir::LogicalResult ReduceOp::verifyInvariantsImpl() {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_reduction = getProperties().reduction; (void)tblgen_reduction;
  auto tblgen_root = getProperties().root; (void)tblgen_root;
  if (!tblgen_root) return emitOpError("requires attribute 'root'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(*this, tblgen_mesh_axes, "mesh_axes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps3(*this, tblgen_reduction, "reduction")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(*this, tblgen_root, "root")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape()))))
    return emitOpError("failed to verify that all of {input, result} have same shape");
  return ::mlir::success();
}

::mlir::LogicalResult ReduceOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ReduceOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::DenseI16ArrayAttr mesh_axesAttr;
  ::mlir::mesh::PartialAttr reductionAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> root_dynamicOperands;
  ::llvm::SMLoc root_dynamicOperandsLoc;
  (void)root_dynamicOperandsLoc;
  ::mlir::DenseI64ArrayAttr rootAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("on"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<ReduceOp::Properties>().mesh = meshAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("mesh_axes"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mesh_axesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (mesh_axesAttr) result.getOrAddProperties<ReduceOp::Properties>().mesh_axes = mesh_axesAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("reduction"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(reductionAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (reductionAttr) result.getOrAddProperties<ReduceOp::Properties>().reduction = reductionAttr;
  }
  if (parser.parseKeyword("root"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();
  {
    root_dynamicOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, root_dynamicOperands, rootAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<ReduceOp::Properties>().root = rootAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(inputOperands, root_dynamicOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  _odsPrinter << ' ' << "on";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  if (getMeshAxesAttr() && getMeshAxesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI16ArrayAttr({})) {
    _odsPrinter << ' ' << "mesh_axes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getMeshAxesAttr());
  }
  if (getReductionAttr() && getReductionAttr() != ::mlir::mesh::PartialAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::mesh::Partial::Sum)) {
    _odsPrinter << ' ' << "reduction";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getReductionAttr());
  }
  _odsPrinter << ' ' << "root";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getRootDynamic(), getRootAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  elidedAttrs.push_back("mesh_axes");
  elidedAttrs.push_back("reduction");
  elidedAttrs.push_back("root");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMeshAxesAttr();
     if(attr && (attr == odsBuilder.getDenseI16ArrayAttr({})))
       elidedAttrs.push_back("mesh_axes");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getReductionAttr();
     if(attr && (attr == ::mlir::mesh::PartialAttr::get(odsBuilder.getContext(), ::mlir::mesh::Partial::Sum)))
       elidedAttrs.push_back("reduction");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ReduceOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::ReduceOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ReduceScatterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReduceScatterOpGenericAdaptorBase::ReduceScatterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.reduce_scatter", odsAttrs.getContext());
}

ReduceScatterOpGenericAdaptorBase::ReduceScatterOpGenericAdaptorBase(ReduceScatterOp op) : ReduceScatterOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReduceScatterOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReduceScatterOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr ReduceScatterOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef ReduceScatterOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr ReduceScatterOpGenericAdaptorBase::getMeshAxesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
  return attr;
}

::llvm::ArrayRef<int16_t> ReduceScatterOpGenericAdaptorBase::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::mesh::PartialAttr ReduceScatterOpGenericAdaptorBase::getReductionAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::mesh::PartialAttr>(getProperties().reduction);
  return attr;
}

::mlir::mesh::Partial ReduceScatterOpGenericAdaptorBase::getReduction() {
  auto attr = getReductionAttr();
  return attr.getValue();
}

::mlir::IntegerAttr ReduceScatterOpGenericAdaptorBase::getScatterAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().scatter_axis);
  return attr;
}

::llvm::APInt ReduceScatterOpGenericAdaptorBase::getScatterAxis() {
  auto attr = getScatterAxisAttr();
  return attr.getValue();
}

} // namespace detail
ReduceScatterOpAdaptor::ReduceScatterOpAdaptor(ReduceScatterOp op) : ReduceScatterOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReduceScatterOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.reduce_scatter' op ""requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_reduction = getProperties().reduction; (void)tblgen_reduction;
  auto tblgen_scatter_axis = getProperties().scatter_axis; (void)tblgen_scatter_axis;
  if (!tblgen_scatter_axis) return emitError(loc, "'mesh.reduce_scatter' op ""requires attribute 'scatter_axis'");

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.reduce_scatter' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");

  if (tblgen_mesh_axes && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(tblgen_mesh_axes))))
    return emitError(loc, "'mesh.reduce_scatter' op ""attribute 'mesh_axes' failed to satisfy constraint: i16 dense array attribute");

  if (tblgen_reduction && !((::llvm::isa<::mlir::mesh::PartialAttr>(tblgen_reduction))))
    return emitError(loc, "'mesh.reduce_scatter' op ""attribute 'reduction' failed to satisfy constraint: partial type of a distributed tensor");

  if (tblgen_scatter_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_scatter_axis))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_scatter_axis).getType())))))
    return emitError(loc, "'mesh.reduce_scatter' op ""attribute 'scatter_axis' failed to satisfy constraint: index attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReduceScatterOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReduceScatterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ReduceScatterOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ReduceScatterOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReduceScatterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReduceScatterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> ReduceScatterOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ReduceScatterOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh_axes;
       auto attr = dict.get("mesh_axes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for mesh_axes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh_axes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.reduction;
       auto attr = dict.get("reduction");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for reduction in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reduction` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.scatter_axis;
       auto attr = dict.get("scatter_axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for scatter_axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `scatter_axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ReduceScatterOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh_axes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh_axes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.reduction;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reduction",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.scatter_axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("scatter_axis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReduceScatterOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mesh.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh_axes.getAsOpaquePointer()), 
    llvm::hash_value(prop.reduction.getAsOpaquePointer()), 
    llvm::hash_value(prop.scatter_axis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReduceScatterOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mesh")
      return prop.mesh;

    if (name == "mesh_axes")
      return prop.mesh_axes;

    if (name == "reduction")
      return prop.reduction;

    if (name == "scatter_axis")
      return prop.scatter_axis;
  return std::nullopt;
}

void ReduceScatterOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }

    if (name == "mesh_axes") {
       prop.mesh_axes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh_axes)>>(value);
       return;
    }

    if (name == "reduction") {
       prop.reduction = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reduction)>>(value);
       return;
    }

    if (name == "scatter_axis") {
       prop.scatter_axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.scatter_axis)>>(value);
       return;
    }
}

void ReduceScatterOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mesh) attrs.append("mesh", prop.mesh);

    if (prop.mesh_axes) attrs.append("mesh_axes", prop.mesh_axes);

    if (prop.reduction) attrs.append("reduction", prop.reduction);

    if (prop.scatter_axis) attrs.append("scatter_axis", prop.scatter_axis);
}

::mlir::LogicalResult ReduceScatterOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAxesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(attr, "mesh_axes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReductionAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps3(attr, "reduction", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getScatterAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(attr, "scatter_axis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReduceScatterOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mesh_axes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.reduction)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.scatter_axis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceScatterOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.mesh);

  writer.writeOptionalAttribute(prop.mesh_axes);

  writer.writeOptionalAttribute(prop.reduction);
  writer.writeAttribute(prop.scatter_axis);
}

::mlir::FlatSymbolRefAttr ReduceScatterOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef ReduceScatterOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr ReduceScatterOp::getMeshAxesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
}

::llvm::ArrayRef<int16_t> ReduceScatterOp::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::mesh::PartialAttr ReduceScatterOp::getReductionAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::mesh::PartialAttr>(getProperties().reduction);
}

::mlir::mesh::Partial ReduceScatterOp::getReduction() {
  auto attr = getReductionAttr();
  return attr.getValue();
}

::mlir::IntegerAttr ReduceScatterOp::getScatterAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().scatter_axis);
}

::llvm::APInt ReduceScatterOp::getScatterAxis() {
  auto attr = getScatterAxisAttr();
  return attr.getValue();
}

void ReduceScatterOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void ReduceScatterOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ReduceScatterOp::setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr) {
  (*this)->setAttr(getMeshAxesAttrName(), attr);
}

void ReduceScatterOp::setMeshAxes(::llvm::ArrayRef<int16_t> attrValue) {
  (*this)->setAttr(getMeshAxesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI16ArrayAttr(attrValue));
}

void ReduceScatterOp::setReductionAttr(::mlir::mesh::PartialAttr attr) {
  (*this)->setAttr(getReductionAttrName(), attr);
}

void ReduceScatterOp::setReduction(::mlir::mesh::Partial attrValue) {
  (*this)->setAttr(getReductionAttrName(), ::mlir::mesh::PartialAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ReduceScatterOp::setScatterAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getScatterAxisAttrName(), attr);
}

void ReduceScatterOp::setScatterAxis(::llvm::APInt attrValue) {
  (*this)->setAttr(getScatterAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void ReduceScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::mesh::PartialAttr reduction, ::mlir::IntegerAttr scatter_axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  if (reduction) {
    odsState.getOrAddProperties<Properties>().reduction = reduction;
  }
  odsState.getOrAddProperties<Properties>().scatter_axis = scatter_axis;
  odsState.addTypes(result);
}

void ReduceScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::mesh::PartialAttr reduction, ::mlir::IntegerAttr scatter_axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  if (reduction) {
    odsState.getOrAddProperties<Properties>().reduction = reduction;
  }
  odsState.getOrAddProperties<Properties>().scatter_axis = scatter_axis;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::mlir::mesh::Partial reduction, ::llvm::APInt scatter_axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().reduction = ::mlir::mesh::PartialAttr::get(odsBuilder.getContext(), reduction);
  odsState.getOrAddProperties<Properties>().scatter_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), scatter_axis);
  odsState.addTypes(result);
}

void ReduceScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::mlir::mesh::Partial reduction, ::llvm::APInt scatter_axis) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().reduction = ::mlir::mesh::PartialAttr::get(odsBuilder.getContext(), reduction);
  odsState.getOrAddProperties<Properties>().scatter_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), scatter_axis);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReduceScatterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ReduceScatterOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.mesh_axes)
    properties.mesh_axes = odsBuilder.getDenseI16ArrayAttr({});
  if (!properties.reduction)
    properties.reduction = ::mlir::mesh::PartialAttr::get(odsBuilder.getContext(), ::mlir::mesh::Partial::Sum);
}

::mlir::LogicalResult ReduceScatterOp::verifyInvariantsImpl() {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_reduction = getProperties().reduction; (void)tblgen_reduction;
  auto tblgen_scatter_axis = getProperties().scatter_axis; (void)tblgen_scatter_axis;
  if (!tblgen_scatter_axis) return emitOpError("requires attribute 'scatter_axis'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(*this, tblgen_mesh_axes, "mesh_axes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps3(*this, tblgen_reduction, "reduction")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(*this, tblgen_scatter_axis, "scatter_axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReduceScatterOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ReduceScatterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::DenseI16ArrayAttr mesh_axesAttr;
  ::mlir::mesh::PartialAttr reductionAttr;
  ::mlir::IntegerAttr scatter_axisAttr;
  ::mlir::Type inputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inputTypes(inputRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("on"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<ReduceScatterOp::Properties>().mesh = meshAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("mesh_axes"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mesh_axesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (mesh_axesAttr) result.getOrAddProperties<ReduceScatterOp::Properties>().mesh_axes = mesh_axesAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("reduction"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(reductionAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (reductionAttr) result.getOrAddProperties<ReduceScatterOp::Properties>().reduction = reductionAttr;
  }
  if (parser.parseKeyword("scatter_axis"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(scatter_axisAttr, parser.getBuilder().getIndexType())) {
    return ::mlir::failure();
  }
  if (scatter_axisAttr) result.getOrAddProperties<ReduceScatterOp::Properties>().scatter_axis = scatter_axisAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    inputRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::RankedTensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(inputOperands, inputTypes, inputOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReduceScatterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  _odsPrinter << ' ' << "on";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  if (getMeshAxesAttr() && getMeshAxesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI16ArrayAttr({})) {
    _odsPrinter << ' ' << "mesh_axes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getMeshAxesAttr());
  }
  if (getReductionAttr() && getReductionAttr() != ::mlir::mesh::PartialAttr::get(::mlir::OpBuilder((*this)->getContext()).getContext(), ::mlir::mesh::Partial::Sum)) {
    _odsPrinter << ' ' << "reduction";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getReductionAttr());
  }
  _odsPrinter << ' ' << "scatter_axis";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getScatterAxisAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  elidedAttrs.push_back("mesh_axes");
  elidedAttrs.push_back("reduction");
  elidedAttrs.push_back("scatter_axis");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMeshAxesAttr();
     if(attr && (attr == odsBuilder.getDenseI16ArrayAttr({})))
       elidedAttrs.push_back("mesh_axes");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getReductionAttr();
     if(attr && (attr == ::mlir::mesh::PartialAttr::get(odsBuilder.getContext(), ::mlir::mesh::Partial::Sum)))
       elidedAttrs.push_back("reduction");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getInput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::RankedTensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ReduceScatterOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::ReduceScatterOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ScatterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ScatterOpGenericAdaptorBase::ScatterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.scatter", odsAttrs.getContext());
}

ScatterOpGenericAdaptorBase::ScatterOpGenericAdaptorBase(ScatterOp op) : ScatterOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ScatterOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr ScatterOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr ScatterOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef ScatterOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr ScatterOpGenericAdaptorBase::getMeshAxesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
  return attr;
}

::llvm::ArrayRef<int16_t> ScatterOpGenericAdaptorBase::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::IntegerAttr ScatterOpGenericAdaptorBase::getScatterAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().scatter_axis);
  return attr;
}

::llvm::APInt ScatterOpGenericAdaptorBase::getScatterAxis() {
  auto attr = getScatterAxisAttr();
  return attr.getValue();
}

::mlir::DenseI64ArrayAttr ScatterOpGenericAdaptorBase::getRootAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().root);
  return attr;
}

::llvm::ArrayRef<int64_t> ScatterOpGenericAdaptorBase::getRoot() {
  auto attr = getRootAttr();
  return attr;
}

} // namespace detail
ScatterOpAdaptor::ScatterOpAdaptor(ScatterOp op) : ScatterOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ScatterOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.scatter' op ""requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_root = getProperties().root; (void)tblgen_root;
  if (!tblgen_root) return emitError(loc, "'mesh.scatter' op ""requires attribute 'root'");
  auto tblgen_scatter_axis = getProperties().scatter_axis; (void)tblgen_scatter_axis;
  if (!tblgen_scatter_axis) return emitError(loc, "'mesh.scatter' op ""requires attribute 'scatter_axis'");

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.scatter' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");

  if (tblgen_mesh_axes && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(tblgen_mesh_axes))))
    return emitError(loc, "'mesh.scatter' op ""attribute 'mesh_axes' failed to satisfy constraint: i16 dense array attribute");

  if (tblgen_scatter_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_scatter_axis))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_scatter_axis).getType())))))
    return emitError(loc, "'mesh.scatter' op ""attribute 'scatter_axis' failed to satisfy constraint: index attribute");

  if (tblgen_root && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_root))))
    return emitError(loc, "'mesh.scatter' op ""attribute 'root' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ScatterOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range ScatterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ScatterOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range ScatterOp::getRootDynamic() {
  return getODSOperands(1);
}

::mlir::OpOperand &ScatterOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange ScatterOp::getRootDynamicMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ScatterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ScatterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> ScatterOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ScatterOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh_axes;
       auto attr = dict.get("mesh_axes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for mesh_axes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh_axes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.root;
       auto attr = dict.get("root");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for root in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `root` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.scatter_axis;
       auto attr = dict.get("scatter_axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for scatter_axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `scatter_axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ScatterOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh_axes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh_axes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.root;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("root",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.scatter_axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("scatter_axis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ScatterOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mesh.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh_axes.getAsOpaquePointer()), 
    llvm::hash_value(prop.root.getAsOpaquePointer()), 
    llvm::hash_value(prop.scatter_axis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ScatterOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mesh")
      return prop.mesh;

    if (name == "mesh_axes")
      return prop.mesh_axes;

    if (name == "root")
      return prop.root;

    if (name == "scatter_axis")
      return prop.scatter_axis;
  return std::nullopt;
}

void ScatterOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }

    if (name == "mesh_axes") {
       prop.mesh_axes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh_axes)>>(value);
       return;
    }

    if (name == "root") {
       prop.root = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.root)>>(value);
       return;
    }

    if (name == "scatter_axis") {
       prop.scatter_axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.scatter_axis)>>(value);
       return;
    }
}

void ScatterOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mesh) attrs.append("mesh", prop.mesh);

    if (prop.mesh_axes) attrs.append("mesh_axes", prop.mesh_axes);

    if (prop.root) attrs.append("root", prop.root);

    if (prop.scatter_axis) attrs.append("scatter_axis", prop.scatter_axis);
}

::mlir::LogicalResult ScatterOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAxesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(attr, "mesh_axes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRootAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(attr, "root", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getScatterAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(attr, "scatter_axis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ScatterOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mesh_axes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.root)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.scatter_axis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScatterOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.mesh);

  writer.writeOptionalAttribute(prop.mesh_axes);
  writer.writeAttribute(prop.root);
  writer.writeAttribute(prop.scatter_axis);
}

::mlir::FlatSymbolRefAttr ScatterOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef ScatterOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr ScatterOp::getMeshAxesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
}

::llvm::ArrayRef<int16_t> ScatterOp::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::IntegerAttr ScatterOp::getScatterAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().scatter_axis);
}

::llvm::APInt ScatterOp::getScatterAxis() {
  auto attr = getScatterAxisAttr();
  return attr.getValue();
}

::mlir::DenseI64ArrayAttr ScatterOp::getRootAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().root);
}

::llvm::ArrayRef<int64_t> ScatterOp::getRoot() {
  auto attr = getRootAttr();
  return attr;
}

void ScatterOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void ScatterOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ScatterOp::setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr) {
  (*this)->setAttr(getMeshAxesAttrName(), attr);
}

void ScatterOp::setMeshAxes(::llvm::ArrayRef<int16_t> attrValue) {
  (*this)->setAttr(getMeshAxesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI16ArrayAttr(attrValue));
}

void ScatterOp::setScatterAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getScatterAxisAttrName(), attr);
}

void ScatterOp::setScatterAxis(::llvm::APInt attrValue) {
  (*this)->setAttr(getScatterAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void ScatterOp::setRootAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getRootAttrName(), attr);
}

void ScatterOp::setRoot(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getRootAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void ScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr scatter_axis, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().scatter_axis = scatter_axis;
  odsState.getOrAddProperties<Properties>().root = root;
  odsState.addTypes(result);
}

void ScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr scatter_axis, ::mlir::DenseI64ArrayAttr root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().scatter_axis = scatter_axis;
  odsState.getOrAddProperties<Properties>().root = root;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt scatter_axis, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().scatter_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), scatter_axis);
  odsState.getOrAddProperties<Properties>().root = odsBuilder.getDenseI64ArrayAttr(root);
  odsState.addTypes(result);
}

void ScatterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt scatter_axis, ::llvm::ArrayRef<int64_t> root, ::mlir::ValueRange root_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(root_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().scatter_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), scatter_axis);
  odsState.getOrAddProperties<Properties>().root = odsBuilder.getDenseI64ArrayAttr(root);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ScatterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ScatterOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.mesh_axes)
    properties.mesh_axes = odsBuilder.getDenseI16ArrayAttr({});
}

::mlir::LogicalResult ScatterOp::verifyInvariantsImpl() {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_root = getProperties().root; (void)tblgen_root;
  if (!tblgen_root) return emitOpError("requires attribute 'root'");
  auto tblgen_scatter_axis = getProperties().scatter_axis; (void)tblgen_scatter_axis;
  if (!tblgen_scatter_axis) return emitOpError("requires attribute 'scatter_axis'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(*this, tblgen_mesh_axes, "mesh_axes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(*this, tblgen_scatter_axis, "scatter_axis")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(*this, tblgen_root, "root")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getRank()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getRank()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getRank()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getRank()))))
    return emitOpError("failed to verify that all of {input, result} have same rank");
  if (!(((getElementTypeOrSelf((*this->getODSOperands(0).begin()))) == (getElementTypeOrSelf((*this->getODSResults(0).begin()))) && (getElementTypeOrSelf((*this->getODSResults(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(0).begin()))))))
    return emitOpError("failed to verify that all of {input, result} have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult ScatterOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ScatterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::DenseI16ArrayAttr mesh_axesAttr;
  ::mlir::IntegerAttr scatter_axisAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> root_dynamicOperands;
  ::llvm::SMLoc root_dynamicOperandsLoc;
  (void)root_dynamicOperandsLoc;
  ::mlir::DenseI64ArrayAttr rootAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("on"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<ScatterOp::Properties>().mesh = meshAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("mesh_axes"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mesh_axesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (mesh_axesAttr) result.getOrAddProperties<ScatterOp::Properties>().mesh_axes = mesh_axesAttr;
  }
  if (parser.parseKeyword("scatter_axis"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(scatter_axisAttr, parser.getBuilder().getIndexType())) {
    return ::mlir::failure();
  }
  if (scatter_axisAttr) result.getOrAddProperties<ScatterOp::Properties>().scatter_axis = scatter_axisAttr;
  if (parser.parseKeyword("root"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();
  {
    root_dynamicOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, root_dynamicOperands, rootAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<ScatterOp::Properties>().root = rootAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(inputOperands, root_dynamicOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ScatterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  _odsPrinter << ' ' << "on";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  if (getMeshAxesAttr() && getMeshAxesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI16ArrayAttr({})) {
    _odsPrinter << ' ' << "mesh_axes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getMeshAxesAttr());
  }
  _odsPrinter << ' ' << "scatter_axis";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getScatterAxisAttr());
  _odsPrinter << ' ' << "root";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getRootDynamic(), getRootAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  elidedAttrs.push_back("mesh_axes");
  elidedAttrs.push_back("scatter_axis");
  elidedAttrs.push_back("root");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMeshAxesAttr();
     if(attr && (attr == odsBuilder.getDenseI16ArrayAttr({})))
       elidedAttrs.push_back("mesh_axes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

void ScatterOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::ScatterOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::SendOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SendOpGenericAdaptorBase::SendOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.send", odsAttrs.getContext());
}

SendOpGenericAdaptorBase::SendOpGenericAdaptorBase(SendOp op) : SendOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SendOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr SendOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr SendOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef SendOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr SendOpGenericAdaptorBase::getMeshAxesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
  return attr;
}

::llvm::ArrayRef<int16_t> SendOpGenericAdaptorBase::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr SendOpGenericAdaptorBase::getDestinationAttr() {
  auto attr = ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().destination);
  return attr;
}

::llvm::ArrayRef<int64_t> SendOpGenericAdaptorBase::getDestination() {
  auto attr = getDestinationAttr();
  return attr;
}

} // namespace detail
SendOpAdaptor::SendOpAdaptor(SendOp op) : SendOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SendOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_destination = getProperties().destination; (void)tblgen_destination;
  if (!tblgen_destination) return emitError(loc, "'mesh.send' op ""requires attribute 'destination'");
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.send' op ""requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.send' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");

  if (tblgen_mesh_axes && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(tblgen_mesh_axes))))
    return emitError(loc, "'mesh.send' op ""attribute 'mesh_axes' failed to satisfy constraint: i16 dense array attribute");

  if (tblgen_destination && !((::llvm::isa<::mlir::DenseI64ArrayAttr>(tblgen_destination))))
    return emitError(loc, "'mesh.send' op ""attribute 'destination' failed to satisfy constraint: i64 dense array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SendOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {false, true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 1) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range SendOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> SendOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range SendOp::getDestinationDynamic() {
  return getODSOperands(1);
}

::mlir::OpOperand &SendOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange SendOp::getDestinationDynamicMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> SendOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SendOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> SendOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult SendOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.destination;
       auto attr = dict.get("destination");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for destination in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `destination` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh_axes;
       auto attr = dict.get("mesh_axes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for mesh_axes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh_axes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SendOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.destination;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("destination",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh_axes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh_axes",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SendOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.destination.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh_axes.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SendOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "destination")
      return prop.destination;

    if (name == "mesh")
      return prop.mesh;

    if (name == "mesh_axes")
      return prop.mesh_axes;
  return std::nullopt;
}

void SendOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "destination") {
       prop.destination = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.destination)>>(value);
       return;
    }

    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }

    if (name == "mesh_axes") {
       prop.mesh_axes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh_axes)>>(value);
       return;
    }
}

void SendOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.destination) attrs.append("destination", prop.destination);

    if (prop.mesh) attrs.append("mesh", prop.mesh);

    if (prop.mesh_axes) attrs.append("mesh_axes", prop.mesh_axes);
}

::mlir::LogicalResult SendOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDestinationAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(attr, "destination", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAxesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(attr, "mesh_axes", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SendOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.destination)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mesh_axes)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SendOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.destination);
  writer.writeAttribute(prop.mesh);

  writer.writeOptionalAttribute(prop.mesh_axes);
}

::mlir::FlatSymbolRefAttr SendOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef SendOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr SendOp::getMeshAxesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
}

::llvm::ArrayRef<int16_t> SendOp::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::DenseI64ArrayAttr SendOp::getDestinationAttr() {
  return ::llvm::cast<::mlir::DenseI64ArrayAttr>(getProperties().destination);
}

::llvm::ArrayRef<int64_t> SendOp::getDestination() {
  auto attr = getDestinationAttr();
  return attr;
}

void SendOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void SendOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void SendOp::setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr) {
  (*this)->setAttr(getMeshAxesAttrName(), attr);
}

void SendOp::setMeshAxes(::llvm::ArrayRef<int16_t> attrValue) {
  (*this)->setAttr(getMeshAxesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI16ArrayAttr(attrValue));
}

void SendOp::setDestinationAttr(::mlir::DenseI64ArrayAttr attr) {
  (*this)->setAttr(getDestinationAttrName(), attr);
}

void SendOp::setDestination(::llvm::ArrayRef<int64_t> attrValue) {
  (*this)->setAttr(getDestinationAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI64ArrayAttr(attrValue));
}

void SendOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::DenseI64ArrayAttr destination, ::mlir::ValueRange destination_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(destination_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().destination = destination;
  odsState.addTypes(result);
}

void SendOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::DenseI64ArrayAttr destination, ::mlir::ValueRange destination_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(destination_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().destination = destination;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SendOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::ArrayRef<int64_t> destination, ::mlir::ValueRange destination_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(destination_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().destination = odsBuilder.getDenseI64ArrayAttr(destination);
  odsState.addTypes(result);
}

void SendOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::ArrayRef<int64_t> destination, ::mlir::ValueRange destination_dynamic) {
  odsState.addOperands(input);
  odsState.addOperands(destination_dynamic);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().destination = odsBuilder.getDenseI64ArrayAttr(destination);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SendOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void SendOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.mesh_axes)
    properties.mesh_axes = odsBuilder.getDenseI16ArrayAttr({});
}

::mlir::LogicalResult SendOp::verifyInvariantsImpl() {
  auto tblgen_destination = getProperties().destination; (void)tblgen_destination;
  if (!tblgen_destination) return emitOpError("requires attribute 'destination'");
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(*this, tblgen_mesh_axes, "mesh_axes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps4(*this, tblgen_destination, "destination")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) && (::llvm::cast<::mlir::ShapedType>((*this->getODSResults(0).begin()).getType()).getShape()) == (::llvm::cast<::mlir::ShapedType>((*this->getODSOperands(0).begin()).getType()).getShape()))))
    return emitOpError("failed to verify that all of {input, result} have same shape");
  if (!(((getElementTypeOrSelf((*this->getODSOperands(0).begin()))) == (getElementTypeOrSelf((*this->getODSResults(0).begin()))) && (getElementTypeOrSelf((*this->getODSResults(0).begin()))) == (getElementTypeOrSelf((*this->getODSOperands(0).begin()))))))
    return emitOpError("failed to verify that all of {input, result} have same element type");
  return ::mlir::success();
}

::mlir::LogicalResult SendOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SendOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::DenseI16ArrayAttr mesh_axesAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> destination_dynamicOperands;
  ::llvm::SMLoc destination_dynamicOperandsLoc;
  (void)destination_dynamicOperandsLoc;
  ::mlir::DenseI64ArrayAttr destinationAttr;
  ::llvm::ArrayRef<::mlir::Type> allOperandTypes;
  ::llvm::ArrayRef<::mlir::Type> allResultTypes;

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("on"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<SendOp::Properties>().mesh = meshAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("mesh_axes"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mesh_axesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (mesh_axesAttr) result.getOrAddProperties<SendOp::Properties>().mesh_axes = mesh_axesAttr;
  }
  if (parser.parseKeyword("destination"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();
  {
    destination_dynamicOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDynamicIndexList(parser, destination_dynamicOperands, destinationAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<SendOp::Properties>().destination = destinationAttr;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  ::mlir::FunctionType allOperand__allResult_functionType;
  if (parser.parseType(allOperand__allResult_functionType))
    return ::mlir::failure();
  allOperandTypes = allOperand__allResult_functionType.getInputs();
  allResultTypes = allOperand__allResult_functionType.getResults();
  result.addTypes(allResultTypes);
  if (parser.resolveOperands(::llvm::concat<const ::mlir::OpAsmParser::UnresolvedOperand>(inputOperands, destination_dynamicOperands), allOperandTypes, parser.getNameLoc(), result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SendOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  _odsPrinter << ' ' << "on";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  if (getMeshAxesAttr() && getMeshAxesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI16ArrayAttr({})) {
    _odsPrinter << ' ' << "mesh_axes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getMeshAxesAttr());
  }
  _odsPrinter << ' ' << "destination";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  printDynamicIndexList(_odsPrinter, *this, getDestinationDynamic(), getDestinationAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  elidedAttrs.push_back("mesh_axes");
  elidedAttrs.push_back("destination");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMeshAxesAttr();
     if(attr && (attr == odsBuilder.getDenseI16ArrayAttr({})))
       elidedAttrs.push_back("mesh_axes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printFunctionalType(getOperation()->getOperandTypes(), getOperation()->getResultTypes());
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::SendOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ShardOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ShardOpGenericAdaptorBase::ShardOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.shard", odsAttrs.getContext());
}

ShardOpGenericAdaptorBase::ShardOpGenericAdaptorBase(ShardOp op) : ShardOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ShardOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ShardOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::mesh::MeshShardingAttr ShardOpGenericAdaptorBase::getShardAttr() {
  auto attr = ::llvm::cast<::mlir::mesh::MeshShardingAttr>(getProperties().shard);
  return attr;
}

::mlir::mesh::MeshShardingAttr ShardOpGenericAdaptorBase::getShard() {
  auto attr = getShardAttr();
  return ::llvm::cast<::mlir::mesh::MeshShardingAttr>(attr);
}

::mlir::UnitAttr ShardOpGenericAdaptorBase::getAnnotateForUsersAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().annotate_for_users);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool ShardOpGenericAdaptorBase::getAnnotateForUsers() {
  auto attr = getAnnotateForUsersAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
ShardOpAdaptor::ShardOpAdaptor(ShardOp op) : ShardOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ShardOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_annotate_for_users = getProperties().annotate_for_users; (void)tblgen_annotate_for_users;
  auto tblgen_shard = getProperties().shard; (void)tblgen_shard;
  if (!tblgen_shard) return emitError(loc, "'mesh.shard' op ""requires attribute 'shard'");

  if (tblgen_shard && !((::llvm::isa<::mlir::mesh::MeshShardingAttr>(tblgen_shard))))
    return emitError(loc, "'mesh.shard' op ""attribute 'shard' failed to satisfy constraint: Attribute that extends tensor type to distributed tensor type.");

  if (tblgen_annotate_for_users && !((::llvm::isa<::mlir::UnitAttr>(tblgen_annotate_for_users))))
    return emitError(loc, "'mesh.shard' op ""attribute 'annotate_for_users' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ShardOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShardOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> ShardOp::getSrc() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ShardOp::getSrcMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ShardOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShardOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> ShardOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ShardOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.annotate_for_users;
       auto attr = dict.get("annotate_for_users");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for annotate_for_users in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `annotate_for_users` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.shard;
       auto attr = dict.get("shard");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for shard in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `shard` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ShardOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.annotate_for_users;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("annotate_for_users",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.shard;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("shard",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ShardOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.annotate_for_users.getAsOpaquePointer()), 
    llvm::hash_value(prop.shard.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ShardOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "annotate_for_users")
      return prop.annotate_for_users;

    if (name == "shard")
      return prop.shard;
  return std::nullopt;
}

void ShardOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "annotate_for_users") {
       prop.annotate_for_users = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.annotate_for_users)>>(value);
       return;
    }

    if (name == "shard") {
       prop.shard = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.shard)>>(value);
       return;
    }
}

void ShardOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.annotate_for_users) attrs.append("annotate_for_users", prop.annotate_for_users);

    if (prop.shard) attrs.append("shard", prop.shard);
}

::mlir::LogicalResult ShardOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAnnotateForUsersAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps7(attr, "annotate_for_users", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getShardAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps6(attr, "shard", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ShardOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.annotate_for_users)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.shard)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ShardOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.annotate_for_users);
  writer.writeAttribute(prop.shard);
}

::mlir::mesh::MeshShardingAttr ShardOp::getShardAttr() {
  return ::llvm::cast<::mlir::mesh::MeshShardingAttr>(getProperties().shard);
}

::mlir::mesh::MeshShardingAttr ShardOp::getShard() {
  auto attr = getShardAttr();
  return ::llvm::cast<::mlir::mesh::MeshShardingAttr>(attr);
}

::mlir::UnitAttr ShardOp::getAnnotateForUsersAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().annotate_for_users);
}

bool ShardOp::getAnnotateForUsers() {
  auto attr = getAnnotateForUsersAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void ShardOp::setShardAttr(::mlir::mesh::MeshShardingAttr attr) {
  (*this)->setAttr(getShardAttrName(), attr);
}

void ShardOp::setAnnotateForUsersAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getAnnotateForUsersAttrName(), attr);
}

void ShardOp::setAnnotateForUsers(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getAnnotateForUsersAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getAnnotateForUsersAttrName());
}

::mlir::Attribute ShardOp::removeAnnotateForUsersAttr() {
    auto &attr = getProperties().annotate_for_users;
    attr = {};
    return attr;
}

void ShardOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src, ::mlir::mesh::MeshShardingAttr shard, /*optional*/::mlir::UnitAttr annotate_for_users) {
  odsState.addOperands(src);
  odsState.getOrAddProperties<Properties>().shard = shard;
  if (annotate_for_users) {
    odsState.getOrAddProperties<Properties>().annotate_for_users = annotate_for_users;
  }
  odsState.addTypes(result);
}

void ShardOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src, ::mlir::mesh::MeshShardingAttr shard, /*optional*/::mlir::UnitAttr annotate_for_users) {
  odsState.addOperands(src);
  odsState.getOrAddProperties<Properties>().shard = shard;
  if (annotate_for_users) {
    odsState.getOrAddProperties<Properties>().annotate_for_users = annotate_for_users;
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ShardOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ShardOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::mesh::MeshShardingAttr shard, /*optional*/::mlir::UnitAttr annotate_for_users) {
  odsState.addOperands(src);
  odsState.getOrAddProperties<Properties>().shard = shard;
  if (annotate_for_users) {
    odsState.getOrAddProperties<Properties>().annotate_for_users = annotate_for_users;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShardOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src, ::mlir::mesh::MeshShardingAttr shard, /*optional*/bool annotate_for_users) {
  odsState.addOperands(src);
  odsState.getOrAddProperties<Properties>().shard = shard;
  if (annotate_for_users) {
    odsState.getOrAddProperties<Properties>().annotate_for_users = ((annotate_for_users) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(result);
}

void ShardOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src, ::mlir::mesh::MeshShardingAttr shard, /*optional*/bool annotate_for_users) {
  odsState.addOperands(src);
  odsState.getOrAddProperties<Properties>().shard = shard;
  if (annotate_for_users) {
    odsState.getOrAddProperties<Properties>().annotate_for_users = ((annotate_for_users) ? odsBuilder.getUnitAttr() : nullptr);
  }

        ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
        if (::mlir::succeeded(ShardOp::inferReturnTypes(odsBuilder.getContext(),
                      odsState.location, odsState.operands,
                      odsState.attributes.getDictionary(odsState.getContext()),
                      odsState.getRawProperties(),
                      odsState.regions, inferredReturnTypes)))
          odsState.addTypes(inferredReturnTypes);
        else
          ::llvm::report_fatal_error("Failed to infer result type(s).");
}

void ShardOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::mesh::MeshShardingAttr shard, /*optional*/bool annotate_for_users) {
  odsState.addOperands(src);
  odsState.getOrAddProperties<Properties>().shard = shard;
  if (annotate_for_users) {
    odsState.getOrAddProperties<Properties>().annotate_for_users = ((annotate_for_users) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShardOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ShardOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);

  ::llvm::SmallVector<::mlir::Type, 2> inferredReturnTypes;
  if (::mlir::succeeded(ShardOp::inferReturnTypes(odsBuilder.getContext(),
          odsState.location, operands,
          odsState.attributes.getDictionary(odsState.getContext()),
          odsState.getRawProperties(),
          odsState.regions, inferredReturnTypes))) {
    assert(inferredReturnTypes.size() == 1u && "mismatched number of return types");
    odsState.addTypes(inferredReturnTypes);
  } else {
    ::llvm::report_fatal_error("Failed to infer result type(s).");
  }
}

::mlir::LogicalResult ShardOp::verifyInvariantsImpl() {
  auto tblgen_annotate_for_users = getProperties().annotate_for_users; (void)tblgen_annotate_for_users;
  auto tblgen_shard = getProperties().shard; (void)tblgen_shard;
  if (!tblgen_shard) return emitOpError("requires attribute 'shard'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps6(*this, tblgen_shard, "shard")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps7(*this, tblgen_annotate_for_users, "annotate_for_users")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ShardOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::LogicalResult ShardOp::inferReturnTypes(::mlir::MLIRContext *context, ::std::optional<::mlir::Location> location, ::mlir::ValueRange operands, ::mlir::DictionaryAttr attributes, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions, ::llvm::SmallVectorImpl<::mlir::Type>&inferredReturnTypes) {
  inferredReturnTypes.resize(1);
  ::mlir::Builder odsBuilder(context);
  ::mlir::Type odsInferredType0 = operands[0].getType();
  inferredReturnTypes[0] = odsInferredType0;
  return ::mlir::success();
}

::mlir::ParseResult ShardOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand srcRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> srcOperands(srcRawOperands);  ::llvm::SMLoc srcOperandsLoc;
  (void)srcOperandsLoc;
  ::mlir::mesh::MeshShardingAttr shardAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  srcOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(srcRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(shardAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (shardAttr) result.getOrAddProperties<ShardOp::Properties>().shard = shardAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("annotate_for_users"))) {
    result.getOrAddProperties<ShardOp::Properties>().annotate_for_users = parser.getBuilder().getUnitAttr();  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::RankedTensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(srcOperands, resultTypes[0], srcOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ShardOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSrc();
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
_odsPrinter.printStrippedAttrOrType(getShardAttr());
  if (getAnnotateForUsersAttr()) {
    _odsPrinter << ' ' << "annotate_for_users";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("shard");
  elidedAttrs.push_back("annotate_for_users");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getAnnotateForUsersAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("annotate_for_users");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::RankedTensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ShardOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::ShardOp)

namespace mlir {
namespace mesh {

//===----------------------------------------------------------------------===//
// ::mlir::mesh::ShiftOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ShiftOpGenericAdaptorBase::ShiftOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("mesh.shift", odsAttrs.getContext());
}

ShiftOpGenericAdaptorBase::ShiftOpGenericAdaptorBase(ShiftOp op) : ShiftOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ShiftOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ShiftOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr ShiftOpGenericAdaptorBase::getMeshAttr() {
  auto attr = ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
  return attr;
}

::llvm::StringRef ShiftOpGenericAdaptorBase::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr ShiftOpGenericAdaptorBase::getMeshAxesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
  return attr;
}

::llvm::ArrayRef<int16_t> ShiftOpGenericAdaptorBase::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::IntegerAttr ShiftOpGenericAdaptorBase::getShiftAxisAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().shift_axis);
  return attr;
}

::llvm::APInt ShiftOpGenericAdaptorBase::getShiftAxis() {
  auto attr = getShiftAxisAttr();
  return attr.getValue();
}

::mlir::IntegerAttr ShiftOpGenericAdaptorBase::getOffsetAttr() {
  auto attr = ::llvm::cast<::mlir::IntegerAttr>(getProperties().offset);
  return attr;
}

uint64_t ShiftOpGenericAdaptorBase::getOffset() {
  auto attr = getOffsetAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr ShiftOpGenericAdaptorBase::getRotateAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().rotate);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool ShiftOpGenericAdaptorBase::getRotate() {
  auto attr = getRotateAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
ShiftOpAdaptor::ShiftOpAdaptor(ShiftOp op) : ShiftOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ShiftOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitError(loc, "'mesh.shift' op ""requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_offset = getProperties().offset; (void)tblgen_offset;
  if (!tblgen_offset) return emitError(loc, "'mesh.shift' op ""requires attribute 'offset'");
  auto tblgen_rotate = getProperties().rotate; (void)tblgen_rotate;
  auto tblgen_shift_axis = getProperties().shift_axis; (void)tblgen_shift_axis;
  if (!tblgen_shift_axis) return emitError(loc, "'mesh.shift' op ""requires attribute 'shift_axis'");

  if (tblgen_mesh && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_mesh))))
    return emitError(loc, "'mesh.shift' op ""attribute 'mesh' failed to satisfy constraint: flat symbol reference attribute");

  if (tblgen_mesh_axes && !((::llvm::isa<::mlir::DenseI16ArrayAttr>(tblgen_mesh_axes))))
    return emitError(loc, "'mesh.shift' op ""attribute 'mesh_axes' failed to satisfy constraint: i16 dense array attribute");

  if (tblgen_shift_axis && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_shift_axis))) && ((::llvm::isa<::mlir::IndexType>(::llvm::cast<::mlir::IntegerAttr>(tblgen_shift_axis).getType())))))
    return emitError(loc, "'mesh.shift' op ""attribute 'shift_axis' failed to satisfy constraint: index attribute");

  if (tblgen_offset && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_offset))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_offset).getType().isSignlessInteger(64)))))
    return emitError(loc, "'mesh.shift' op ""attribute 'offset' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_rotate && !((::llvm::isa<::mlir::UnitAttr>(tblgen_rotate))))
    return emitError(loc, "'mesh.shift' op ""attribute 'rotate' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ShiftOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ShiftOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::TensorType> ShiftOp::getInput() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::TensorType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ShiftOp::getInputMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ShiftOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ShiftOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::RankedTensorType> ShiftOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::RankedTensorType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult ShiftOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.mesh;
       auto attr = dict.get("mesh");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for mesh in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mesh_axes;
       auto attr = dict.get("mesh_axes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for mesh_axes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mesh_axes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.offset;
       auto attr = dict.get("offset");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for offset in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `offset` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.rotate;
       auto attr = dict.get("rotate");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for rotate in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `rotate` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.shift_axis;
       auto attr = dict.get("shift_axis");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for shift_axis in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `shift_axis` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute ShiftOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.mesh;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mesh_axes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mesh_axes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.offset;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("offset",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.rotate;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("rotate",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.shift_axis;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("shift_axis",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ShiftOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.mesh.getAsOpaquePointer()), 
    llvm::hash_value(prop.mesh_axes.getAsOpaquePointer()), 
    llvm::hash_value(prop.offset.getAsOpaquePointer()), 
    llvm::hash_value(prop.rotate.getAsOpaquePointer()), 
    llvm::hash_value(prop.shift_axis.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ShiftOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "mesh")
      return prop.mesh;

    if (name == "mesh_axes")
      return prop.mesh_axes;

    if (name == "offset")
      return prop.offset;

    if (name == "rotate")
      return prop.rotate;

    if (name == "shift_axis")
      return prop.shift_axis;
  return std::nullopt;
}

void ShiftOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "mesh") {
       prop.mesh = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh)>>(value);
       return;
    }

    if (name == "mesh_axes") {
       prop.mesh_axes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mesh_axes)>>(value);
       return;
    }

    if (name == "offset") {
       prop.offset = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.offset)>>(value);
       return;
    }

    if (name == "rotate") {
       prop.rotate = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.rotate)>>(value);
       return;
    }

    if (name == "shift_axis") {
       prop.shift_axis = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.shift_axis)>>(value);
       return;
    }
}

void ShiftOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.mesh) attrs.append("mesh", prop.mesh);

    if (prop.mesh_axes) attrs.append("mesh_axes", prop.mesh_axes);

    if (prop.offset) attrs.append("offset", prop.offset);

    if (prop.rotate) attrs.append("rotate", prop.rotate);

    if (prop.shift_axis) attrs.append("shift_axis", prop.shift_axis);
}

::mlir::LogicalResult ShiftOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMeshAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(attr, "mesh", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMeshAxesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(attr, "mesh_axes", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOffsetAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps8(attr, "offset", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getRotateAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps7(attr, "rotate", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getShiftAxisAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(attr, "shift_axis", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ShiftOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.mesh)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mesh_axes)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.offset)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.rotate)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.shift_axis)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ShiftOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.mesh);

  writer.writeOptionalAttribute(prop.mesh_axes);
  writer.writeAttribute(prop.offset);

  writer.writeOptionalAttribute(prop.rotate);
  writer.writeAttribute(prop.shift_axis);
}

::mlir::FlatSymbolRefAttr ShiftOp::getMeshAttr() {
  return ::llvm::cast<::mlir::FlatSymbolRefAttr>(getProperties().mesh);
}

::llvm::StringRef ShiftOp::getMesh() {
  auto attr = getMeshAttr();
  return attr.getValue();
}

::mlir::DenseI16ArrayAttr ShiftOp::getMeshAxesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::DenseI16ArrayAttr>(getProperties().mesh_axes);
}

::llvm::ArrayRef<int16_t> ShiftOp::getMeshAxes() {
  auto attr = getMeshAxesAttr();
  return attr;
}

::mlir::IntegerAttr ShiftOp::getShiftAxisAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().shift_axis);
}

::llvm::APInt ShiftOp::getShiftAxis() {
  auto attr = getShiftAxisAttr();
  return attr.getValue();
}

::mlir::IntegerAttr ShiftOp::getOffsetAttr() {
  return ::llvm::cast<::mlir::IntegerAttr>(getProperties().offset);
}

uint64_t ShiftOp::getOffset() {
  auto attr = getOffsetAttr();
  return attr.getValue().getZExtValue();
}

::mlir::UnitAttr ShiftOp::getRotateAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().rotate);
}

bool ShiftOp::getRotate() {
  auto attr = getRotateAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void ShiftOp::setMeshAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getMeshAttrName(), attr);
}

void ShiftOp::setMesh(::llvm::StringRef attrValue) {
  (*this)->setAttr(getMeshAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void ShiftOp::setMeshAxesAttr(::mlir::DenseI16ArrayAttr attr) {
  (*this)->setAttr(getMeshAxesAttrName(), attr);
}

void ShiftOp::setMeshAxes(::llvm::ArrayRef<int16_t> attrValue) {
  (*this)->setAttr(getMeshAxesAttrName(), ::mlir::Builder((*this)->getContext()).getDenseI16ArrayAttr(attrValue));
}

void ShiftOp::setShiftAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getShiftAxisAttrName(), attr);
}

void ShiftOp::setShiftAxis(::llvm::APInt attrValue) {
  (*this)->setAttr(getShiftAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIndexType(), attrValue));
}

void ShiftOp::setOffsetAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getOffsetAttrName(), attr);
}

void ShiftOp::setOffset(uint64_t attrValue) {
  (*this)->setAttr(getOffsetAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void ShiftOp::setRotateAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getRotateAttrName(), attr);
}

void ShiftOp::setRotate(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getRotateAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getRotateAttrName());
}

::mlir::Attribute ShiftOp::removeRotateAttr() {
    auto &attr = getProperties().rotate;
    attr = {};
    return attr;
}

void ShiftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr shift_axis, ::mlir::IntegerAttr offset, /*optional*/::mlir::UnitAttr rotate) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().shift_axis = shift_axis;
  odsState.getOrAddProperties<Properties>().offset = offset;
  if (rotate) {
    odsState.getOrAddProperties<Properties>().rotate = rotate;
  }
  odsState.addTypes(result);
}

void ShiftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::FlatSymbolRefAttr mesh, ::mlir::DenseI16ArrayAttr mesh_axes, ::mlir::Value input, ::mlir::IntegerAttr shift_axis, ::mlir::IntegerAttr offset, /*optional*/::mlir::UnitAttr rotate) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = mesh;
  if (mesh_axes) {
    odsState.getOrAddProperties<Properties>().mesh_axes = mesh_axes;
  }
  odsState.getOrAddProperties<Properties>().shift_axis = shift_axis;
  odsState.getOrAddProperties<Properties>().offset = offset;
  if (rotate) {
    odsState.getOrAddProperties<Properties>().rotate = rotate;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShiftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt shift_axis, uint64_t offset, /*optional*/bool rotate) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().shift_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), shift_axis);
  odsState.getOrAddProperties<Properties>().offset = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), offset);
  if (rotate) {
    odsState.getOrAddProperties<Properties>().rotate = ((rotate) ? odsBuilder.getUnitAttr() : nullptr);
  }
  odsState.addTypes(result);
}

void ShiftOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef mesh, ::llvm::ArrayRef<int16_t> mesh_axes, ::mlir::Value input, ::llvm::APInt shift_axis, uint64_t offset, /*optional*/bool rotate) {
  odsState.addOperands(input);
  odsState.getOrAddProperties<Properties>().mesh = ::mlir::SymbolRefAttr::get(odsBuilder.getContext(), mesh);
  odsState.getOrAddProperties<Properties>().mesh_axes = odsBuilder.getDenseI16ArrayAttr(mesh_axes);
  odsState.getOrAddProperties<Properties>().shift_axis = odsBuilder.getIntegerAttr(odsBuilder.getIndexType(), shift_axis);
  odsState.getOrAddProperties<Properties>().offset = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), offset);
  if (rotate) {
    odsState.getOrAddProperties<Properties>().rotate = ((rotate) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ShiftOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void ShiftOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.mesh_axes)
    properties.mesh_axes = odsBuilder.getDenseI16ArrayAttr({});
}

::mlir::LogicalResult ShiftOp::verifyInvariantsImpl() {
  auto tblgen_mesh = getProperties().mesh; (void)tblgen_mesh;
  if (!tblgen_mesh) return emitOpError("requires attribute 'mesh'");
  auto tblgen_mesh_axes = getProperties().mesh_axes; (void)tblgen_mesh_axes;
  auto tblgen_offset = getProperties().offset; (void)tblgen_offset;
  if (!tblgen_offset) return emitOpError("requires attribute 'offset'");
  auto tblgen_rotate = getProperties().rotate; (void)tblgen_rotate;
  auto tblgen_shift_axis = getProperties().shift_axis; (void)tblgen_shift_axis;
  if (!tblgen_shift_axis) return emitOpError("requires attribute 'shift_axis'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps0(*this, tblgen_mesh, "mesh")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps1(*this, tblgen_mesh_axes, "mesh_axes")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps2(*this, tblgen_shift_axis, "shift_axis")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps8(*this, tblgen_offset, "offset")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MeshOps7(*this, tblgen_rotate, "rotate")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MeshOps1(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ShiftOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ShiftOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand inputRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> inputOperands(inputRawOperands);  ::llvm::SMLoc inputOperandsLoc;
  (void)inputOperandsLoc;
  ::mlir::FlatSymbolRefAttr meshAttr;
  ::mlir::DenseI16ArrayAttr mesh_axesAttr;
  ::mlir::IntegerAttr shift_axisAttr;
  ::mlir::IntegerAttr offsetAttr;
  ::mlir::Type inputRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> inputTypes(inputRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  inputOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(inputRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseKeyword("on"))
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(meshAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (meshAttr) result.getOrAddProperties<ShiftOp::Properties>().mesh = meshAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("mesh_axes"))) {
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(mesh_axesAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (mesh_axesAttr) result.getOrAddProperties<ShiftOp::Properties>().mesh_axes = mesh_axesAttr;
  }
  if (parser.parseKeyword("shift_axis"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(shift_axisAttr, parser.getBuilder().getIndexType())) {
    return ::mlir::failure();
  }
  if (shift_axisAttr) result.getOrAddProperties<ShiftOp::Properties>().shift_axis = shift_axisAttr;
  if (parser.parseKeyword("offset"))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(offsetAttr, parser.getBuilder().getIntegerType(64))) {
    return ::mlir::failure();
  }
  if (offsetAttr) result.getOrAddProperties<ShiftOp::Properties>().offset = offsetAttr;
  if (::mlir::succeeded(parser.parseOptionalKeyword("rotate"))) {
    result.getOrAddProperties<ShiftOp::Properties>().rotate = parser.getBuilder().getUnitAttr();  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::TensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    inputRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::RankedTensorType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
  }
  result.addTypes(resultTypes);
  if (parser.resolveOperands(inputOperands, inputTypes, inputOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ShiftOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getInput();
  _odsPrinter << ' ' << "on";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getMeshAttr());
  if (getMeshAxesAttr() && getMeshAxesAttr() != ::mlir::OpBuilder((*this)->getContext()).getDenseI16ArrayAttr({})) {
    _odsPrinter << ' ' << "mesh_axes";
    _odsPrinter << ' ' << "=";
    _odsPrinter << ' ';
  _odsPrinter.printStrippedAttrOrType(getMeshAxesAttr());
  }
  _odsPrinter << ' ' << "shift_axis";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getShiftAxisAttr());
  _odsPrinter << ' ' << "offset";
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getOffsetAttr());
  if (getRotateAttr()) {
    _odsPrinter << ' ' << "rotate";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("mesh");
  elidedAttrs.push_back("mesh_axes");
  elidedAttrs.push_back("shift_axis");
  elidedAttrs.push_back("offset");
  elidedAttrs.push_back("rotate");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMeshAxesAttr();
     if(attr && (attr == odsBuilder.getDenseI16ArrayAttr({})))
       elidedAttrs.push_back("mesh_axes");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getRotateAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("rotate");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getInput().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::TensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::RankedTensorType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

void ShiftOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace mesh
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::mesh::ShiftOp)


#endif  // GET_OP_CLASSES

