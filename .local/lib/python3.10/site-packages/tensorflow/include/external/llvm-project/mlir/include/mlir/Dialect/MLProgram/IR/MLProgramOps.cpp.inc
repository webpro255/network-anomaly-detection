/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: MLProgramOps.td                                                      *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::ml_program::FuncOp,
::mlir::ml_program::GlobalLoadConstOp,
::mlir::ml_program::GlobalLoadGraphOp,
::mlir::ml_program::GlobalLoadOp,
::mlir::ml_program::GlobalOp,
::mlir::ml_program::GlobalStoreGraphOp,
::mlir::ml_program::GlobalStoreOp,
::mlir::ml_program::OutputOp,
::mlir::ml_program::ReturnOp,
::mlir::ml_program::SubgraphOp,
::mlir::ml_program::TokenOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace ml_program {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_MLProgramOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_MLProgramOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::ml_program::TokenType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of Token for establishing execution ordering in a graph, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_MLProgramOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::ml_program::TokenType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Token for establishing execution ordering in a graph, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_MLProgramOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MLProgramOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::TypeAttr>(attr))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(attr).getValue()))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(attr).getValue())))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: type attribute of function type";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MLProgramOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: Array of dictionary attributes";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MLProgramOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::SymbolRefAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: symbol reference attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MLProgramOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::TypeAttr>(attr))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(attr).getValue()))) && ((true))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: any type attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MLProgramOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MLProgramOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps6(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((true)))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: any attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_MLProgramOps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_MLProgramOps6(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_MLProgramOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((true))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: any region";
  }
  return ::mlir::success();
}
} // namespace ml_program
} // namespace mlir
namespace mlir {
namespace ml_program {

//===----------------------------------------------------------------------===//
// ::mlir::ml_program::FuncOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FuncOpGenericAdaptorBase::FuncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("ml_program.func", odsAttrs.getContext());
}

FuncOpGenericAdaptorBase::FuncOpGenericAdaptorBase(FuncOp op) : FuncOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FuncOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr FuncOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr FuncOpGenericAdaptorBase::getSymNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
  return attr;
}

::llvm::StringRef FuncOpGenericAdaptorBase::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr FuncOpGenericAdaptorBase::getFunctionTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().function_type);
  return attr;
}

::mlir::FunctionType FuncOpGenericAdaptorBase::getFunctionType() {
  auto attr = getFunctionTypeAttr();
  return ::llvm::cast<::mlir::FunctionType>(attr.getValue());
}

::mlir::ArrayAttr FuncOpGenericAdaptorBase::getArgAttrsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().arg_attrs);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > FuncOpGenericAdaptorBase::getArgAttrs() {
  auto attr = getArgAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr FuncOpGenericAdaptorBase::getResAttrsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().res_attrs);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > FuncOpGenericAdaptorBase::getResAttrs() {
  auto attr = getResAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::StringAttr FuncOpGenericAdaptorBase::getSymVisibilityAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().sym_visibility);
  return attr;
}

::std::optional< ::llvm::StringRef > FuncOpGenericAdaptorBase::getSymVisibility() {
  auto attr = getSymVisibilityAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

::mlir::Region &FuncOpGenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange FuncOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
FuncOpAdaptor::FuncOpAdaptor(FuncOp op) : FuncOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FuncOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_arg_attrs = getProperties().arg_attrs; (void)tblgen_arg_attrs;
  auto tblgen_function_type = getProperties().function_type; (void)tblgen_function_type;
  if (!tblgen_function_type) return emitError(loc, "'ml_program.func' op ""requires attribute 'function_type'");
  auto tblgen_res_attrs = getProperties().res_attrs; (void)tblgen_res_attrs;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitError(loc, "'ml_program.func' op ""requires attribute 'sym_name'");
  auto tblgen_sym_visibility = getProperties().sym_visibility; (void)tblgen_sym_visibility;

  if (tblgen_sym_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_name))))
    return emitError(loc, "'ml_program.func' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");

  if (tblgen_function_type && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_function_type))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(tblgen_function_type).getValue()))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(tblgen_function_type).getValue())))))
    return emitError(loc, "'ml_program.func' op ""attribute 'function_type' failed to satisfy constraint: type attribute of function type");

  if (tblgen_arg_attrs && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_arg_attrs))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_arg_attrs), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError(loc, "'ml_program.func' op ""attribute 'arg_attrs' failed to satisfy constraint: Array of dictionary attributes");

  if (tblgen_res_attrs && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_res_attrs))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_res_attrs), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError(loc, "'ml_program.func' op ""attribute 'res_attrs' failed to satisfy constraint: Array of dictionary attributes");

  if (tblgen_sym_visibility && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_visibility))))
    return emitError(loc, "'ml_program.func' op ""attribute 'sym_visibility' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FuncOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range FuncOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> FuncOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FuncOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &FuncOp::getBody() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult FuncOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.arg_attrs;
       auto attr = dict.get("arg_attrs");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for arg_attrs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `arg_attrs` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.function_type;
       auto attr = dict.get("function_type");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for function_type in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `function_type` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.res_attrs;
       auto attr = dict.get("res_attrs");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for res_attrs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `res_attrs` in property conversion: " << attr;
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

  {
    auto &propStorage = prop.sym_visibility;
       auto attr = dict.get("sym_visibility");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for sym_visibility in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `sym_visibility` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute FuncOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.arg_attrs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("arg_attrs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.function_type;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("function_type",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.res_attrs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("res_attrs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sym_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sym_name",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sym_visibility;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sym_visibility",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code FuncOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.arg_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.function_type.getAsOpaquePointer()), 
    llvm::hash_value(prop.res_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.sym_name.getAsOpaquePointer()), 
    llvm::hash_value(prop.sym_visibility.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> FuncOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "arg_attrs")
      return prop.arg_attrs;

    if (name == "function_type")
      return prop.function_type;

    if (name == "res_attrs")
      return prop.res_attrs;

    if (name == "sym_name")
      return prop.sym_name;

    if (name == "sym_visibility")
      return prop.sym_visibility;
  return std::nullopt;
}

void FuncOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "arg_attrs") {
       prop.arg_attrs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.arg_attrs)>>(value);
       return;
    }

    if (name == "function_type") {
       prop.function_type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.function_type)>>(value);
       return;
    }

    if (name == "res_attrs") {
       prop.res_attrs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.res_attrs)>>(value);
       return;
    }

    if (name == "sym_name") {
       prop.sym_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sym_name)>>(value);
       return;
    }

    if (name == "sym_visibility") {
       prop.sym_visibility = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sym_visibility)>>(value);
       return;
    }
}

void FuncOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.arg_attrs) attrs.append("arg_attrs", prop.arg_attrs);

    if (prop.function_type) attrs.append("function_type", prop.function_type);

    if (prop.res_attrs) attrs.append("res_attrs", prop.res_attrs);

    if (prop.sym_name) attrs.append("sym_name", prop.sym_name);

    if (prop.sym_visibility) attrs.append("sym_visibility", prop.sym_visibility);
}

::mlir::LogicalResult FuncOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getArgAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps2(attr, "arg_attrs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getFunctionTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps1(attr, "function_type", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getResAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps2(attr, "res_attrs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSymNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps0(attr, "sym_name", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSymVisibilityAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps0(attr, "sym_visibility", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult FuncOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.arg_attrs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.function_type)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.res_attrs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.sym_name)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.sym_visibility)))
    return ::mlir::failure();
  return ::mlir::success();
}

void FuncOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.arg_attrs);
  writer.writeAttribute(prop.function_type);

  writer.writeOptionalAttribute(prop.res_attrs);
  writer.writeAttribute(prop.sym_name);

  writer.writeOptionalAttribute(prop.sym_visibility);
}

::mlir::StringAttr FuncOp::getSymNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
}

::llvm::StringRef FuncOp::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr FuncOp::getFunctionTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().function_type);
}

::mlir::FunctionType FuncOp::getFunctionType() {
  auto attr = getFunctionTypeAttr();
  return ::llvm::cast<::mlir::FunctionType>(attr.getValue());
}

::mlir::ArrayAttr FuncOp::getArgAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().arg_attrs);
}

::std::optional< ::mlir::ArrayAttr > FuncOp::getArgAttrs() {
  auto attr = getArgAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr FuncOp::getResAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().res_attrs);
}

::std::optional< ::mlir::ArrayAttr > FuncOp::getResAttrs() {
  auto attr = getResAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::StringAttr FuncOp::getSymVisibilityAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().sym_visibility);
}

::std::optional< ::llvm::StringRef > FuncOp::getSymVisibility() {
  auto attr = getSymVisibilityAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

void FuncOp::setSymNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymNameAttrName(), attr);
}

void FuncOp::setSymName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getSymNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void FuncOp::setFunctionTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getFunctionTypeAttrName(), attr);
}

void FuncOp::setFunctionType(::mlir::FunctionType attrValue) {
  (*this)->setAttr(getFunctionTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void FuncOp::setArgAttrsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getArgAttrsAttrName(), attr);
}

void FuncOp::setResAttrsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getResAttrsAttrName(), attr);
}

void FuncOp::setSymVisibilityAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymVisibilityAttrName(), attr);
}

void FuncOp::setSymVisibility(::std::optional<::llvm::StringRef> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getSymVisibilityAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(*attrValue));
    (*this)->removeAttr(getSymVisibilityAttrName());
}

::mlir::Attribute FuncOp::removeArgAttrsAttr() {
    auto &attr = getProperties().arg_attrs;
    attr = {};
    return attr;
}

::mlir::Attribute FuncOp::removeResAttrsAttr() {
    auto &attr = getProperties().res_attrs;
    attr = {};
    return attr;
}

::mlir::Attribute FuncOp::removeSymVisibilityAttr() {
    auto &attr = getProperties().sym_visibility;
    attr = {};
    return attr;
}

void FuncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs, /*optional*/::mlir::StringAttr sym_visibility) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  odsState.getOrAddProperties<Properties>().function_type = function_type;
  if (arg_attrs) {
    odsState.getOrAddProperties<Properties>().arg_attrs = arg_attrs;
  }
  if (res_attrs) {
    odsState.getOrAddProperties<Properties>().res_attrs = res_attrs;
  }
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  (void)odsState.addRegion();
}

void FuncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs, /*optional*/::mlir::StringAttr sym_visibility) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  odsState.getOrAddProperties<Properties>().function_type = function_type;
  if (arg_attrs) {
    odsState.getOrAddProperties<Properties>().arg_attrs = arg_attrs;
  }
  if (res_attrs) {
    odsState.getOrAddProperties<Properties>().res_attrs = res_attrs;
  }
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FuncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, ::mlir::FunctionType function_type, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs, /*optional*/::mlir::StringAttr sym_visibility) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().function_type = ::mlir::TypeAttr::get(function_type);
  if (arg_attrs) {
    odsState.getOrAddProperties<Properties>().arg_attrs = arg_attrs;
  }
  if (res_attrs) {
    odsState.getOrAddProperties<Properties>().res_attrs = res_attrs;
  }
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  (void)odsState.addRegion();
}

void FuncOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, ::mlir::FunctionType function_type, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs, /*optional*/::mlir::StringAttr sym_visibility) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().function_type = ::mlir::TypeAttr::get(function_type);
  if (arg_attrs) {
    odsState.getOrAddProperties<Properties>().arg_attrs = arg_attrs;
  }
  if (res_attrs) {
    odsState.getOrAddProperties<Properties>().res_attrs = res_attrs;
  }
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void FuncOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FuncOp::verifyInvariantsImpl() {
  auto tblgen_arg_attrs = getProperties().arg_attrs; (void)tblgen_arg_attrs;
  auto tblgen_function_type = getProperties().function_type; (void)tblgen_function_type;
  if (!tblgen_function_type) return emitOpError("requires attribute 'function_type'");
  auto tblgen_res_attrs = getProperties().res_attrs; (void)tblgen_res_attrs;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitOpError("requires attribute 'sym_name'");
  auto tblgen_sym_visibility = getProperties().sym_visibility; (void)tblgen_sym_visibility;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps0(*this, tblgen_sym_name, "sym_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps1(*this, tblgen_function_type, "function_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps2(*this, tblgen_arg_attrs, "arg_attrs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps2(*this, tblgen_res_attrs, "res_attrs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps0(*this, tblgen_sym_visibility, "sym_visibility")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_MLProgramOps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult FuncOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace ml_program
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ml_program::FuncOp)

namespace mlir {
namespace ml_program {

//===----------------------------------------------------------------------===//
// ::mlir::ml_program::GlobalLoadConstOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GlobalLoadConstOpGenericAdaptorBase::GlobalLoadConstOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("ml_program.global_load_const", odsAttrs.getContext());
}

GlobalLoadConstOpGenericAdaptorBase::GlobalLoadConstOpGenericAdaptorBase(GlobalLoadConstOp op) : GlobalLoadConstOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GlobalLoadConstOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GlobalLoadConstOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::SymbolRefAttr GlobalLoadConstOpGenericAdaptorBase::getGlobalAttr() {
  auto attr = ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().global);
  return attr;
}

::mlir::SymbolRefAttr GlobalLoadConstOpGenericAdaptorBase::getGlobal() {
  auto attr = getGlobalAttr();
  return attr;
}

} // namespace detail
GlobalLoadConstOpAdaptor::GlobalLoadConstOpAdaptor(GlobalLoadConstOp op) : GlobalLoadConstOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GlobalLoadConstOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_global = getProperties().global; (void)tblgen_global;
  if (!tblgen_global) return emitError(loc, "'ml_program.global_load_const' op ""requires attribute 'global'");

  if (tblgen_global && !((::llvm::isa<::mlir::SymbolRefAttr>(tblgen_global))))
    return emitError(loc, "'ml_program.global_load_const' op ""attribute 'global' failed to satisfy constraint: symbol reference attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GlobalLoadConstOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GlobalLoadConstOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GlobalLoadConstOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GlobalLoadConstOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GlobalLoadConstOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult GlobalLoadConstOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.global;
       auto attr = dict.get("global");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for global in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `global` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GlobalLoadConstOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.global;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("global",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GlobalLoadConstOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.global.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GlobalLoadConstOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "global")
      return prop.global;
  return std::nullopt;
}

void GlobalLoadConstOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "global") {
       prop.global = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.global)>>(value);
       return;
    }
}

void GlobalLoadConstOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.global) attrs.append("global", prop.global);
}

::mlir::LogicalResult GlobalLoadConstOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getGlobalAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps3(attr, "global", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GlobalLoadConstOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.global)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GlobalLoadConstOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.global);
}

::mlir::SymbolRefAttr GlobalLoadConstOp::getGlobalAttr() {
  return ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().global);
}

::mlir::SymbolRefAttr GlobalLoadConstOp::getGlobal() {
  auto attr = getGlobalAttr();
  return attr;
}

void GlobalLoadConstOp::setGlobalAttr(::mlir::SymbolRefAttr attr) {
  (*this)->setAttr(getGlobalAttrName(), attr);
}

void GlobalLoadConstOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::SymbolRefAttr global) {
  odsState.getOrAddProperties<Properties>().global = global;
  odsState.addTypes(result);
}

void GlobalLoadConstOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::SymbolRefAttr global) {
  odsState.getOrAddProperties<Properties>().global = global;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GlobalLoadConstOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GlobalLoadConstOp::verifyInvariantsImpl() {
  auto tblgen_global = getProperties().global; (void)tblgen_global;
  if (!tblgen_global) return emitOpError("requires attribute 'global'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps3(*this, tblgen_global, "global")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MLProgramOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GlobalLoadConstOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GlobalLoadConstOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SymbolRefAttr globalAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  if (parser.parseCustomAttributeWithFallback(globalAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (globalAttr) result.getOrAddProperties<GlobalLoadConstOp::Properties>().global = globalAttr;
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
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
  result.addTypes(resultTypes);
  return ::mlir::success();
}

void GlobalLoadConstOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getGlobalAttr());
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("global");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void GlobalLoadConstOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

void GlobalLoadConstOp::getAsmResultNames(
  function_ref<void(::mlir::Value, ::llvm::StringRef)> setNameFn) {
    setNameFn(getResult(), getGlobal().getLeafReference());
}
} // namespace ml_program
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ml_program::GlobalLoadConstOp)

namespace mlir {
namespace ml_program {

//===----------------------------------------------------------------------===//
// ::mlir::ml_program::GlobalLoadGraphOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GlobalLoadGraphOpGenericAdaptorBase::GlobalLoadGraphOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("ml_program.global_load_graph", odsAttrs.getContext());
}

GlobalLoadGraphOpGenericAdaptorBase::GlobalLoadGraphOpGenericAdaptorBase(GlobalLoadGraphOp op) : GlobalLoadGraphOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GlobalLoadGraphOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr GlobalLoadGraphOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::SymbolRefAttr GlobalLoadGraphOpGenericAdaptorBase::getGlobalAttr() {
  auto attr = ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().global);
  return attr;
}

::mlir::SymbolRefAttr GlobalLoadGraphOpGenericAdaptorBase::getGlobal() {
  auto attr = getGlobalAttr();
  return attr;
}

} // namespace detail
GlobalLoadGraphOpAdaptor::GlobalLoadGraphOpAdaptor(GlobalLoadGraphOp op) : GlobalLoadGraphOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GlobalLoadGraphOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_global = getProperties().global; (void)tblgen_global;
  if (!tblgen_global) return emitError(loc, "'ml_program.global_load_graph' op ""requires attribute 'global'");

  if (tblgen_global && !((::llvm::isa<::mlir::SymbolRefAttr>(tblgen_global))))
    return emitError(loc, "'ml_program.global_load_graph' op ""attribute 'global' failed to satisfy constraint: symbol reference attribute");
  return ::mlir::success();
}

void GlobalLoadGraphOp::getAsmResultNames(::mlir::OpAsmSetValueNameFn setNameFn) {
  auto resultGroup0 = getODSResults(0);
  if (!resultGroup0.empty())
    setNameFn(*resultGroup0.begin(), "result");
  auto resultGroup1 = getODSResults(1);
  if (!resultGroup1.empty())
    setNameFn(*resultGroup1.begin(), "produceToken");
}

std::pair<unsigned, unsigned> GlobalLoadGraphOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range GlobalLoadGraphOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range GlobalLoadGraphOp::getConsumeTokens() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange GlobalLoadGraphOp::getConsumeTokensMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> GlobalLoadGraphOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GlobalLoadGraphOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GlobalLoadGraphOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::TypedValue<::mlir::ml_program::TokenType> GlobalLoadGraphOp::getProduceToken() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ml_program::TokenType>>(*getODSResults(1).begin());
}

::mlir::LogicalResult GlobalLoadGraphOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.global;
       auto attr = dict.get("global");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for global in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `global` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GlobalLoadGraphOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.global;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("global",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GlobalLoadGraphOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.global.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GlobalLoadGraphOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "global")
      return prop.global;
  return std::nullopt;
}

void GlobalLoadGraphOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "global") {
       prop.global = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.global)>>(value);
       return;
    }
}

void GlobalLoadGraphOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.global) attrs.append("global", prop.global);
}

::mlir::LogicalResult GlobalLoadGraphOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getGlobalAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps3(attr, "global", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GlobalLoadGraphOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.global)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GlobalLoadGraphOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.global);
}

::mlir::SymbolRefAttr GlobalLoadGraphOp::getGlobalAttr() {
  return ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().global);
}

::mlir::SymbolRefAttr GlobalLoadGraphOp::getGlobal() {
  auto attr = getGlobalAttr();
  return attr;
}

void GlobalLoadGraphOp::setGlobalAttr(::mlir::SymbolRefAttr attr) {
  (*this)->setAttr(getGlobalAttrName(), attr);
}

void GlobalLoadGraphOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Type produceToken, ::mlir::SymbolRefAttr global, ::mlir::ValueRange consumeTokens) {
  odsState.addOperands(consumeTokens);
  odsState.getOrAddProperties<Properties>().global = global;
  odsState.addTypes(result);
  odsState.addTypes(produceToken);
}

void GlobalLoadGraphOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::SymbolRefAttr global, ::mlir::ValueRange consumeTokens) {
  odsState.addOperands(consumeTokens);
  odsState.getOrAddProperties<Properties>().global = global;
  assert(resultTypes.size() == 2u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GlobalLoadGraphOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 2u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GlobalLoadGraphOp::verifyInvariantsImpl() {
  auto tblgen_global = getProperties().global; (void)tblgen_global;
  if (!tblgen_global) return emitOpError("requires attribute 'global'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps3(*this, tblgen_global, "global")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MLProgramOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MLProgramOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSResults(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MLProgramOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GlobalLoadGraphOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GlobalLoadGraphOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SymbolRefAttr globalAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> consumeTokensOperands;
  ::llvm::SMLoc consumeTokensOperandsLoc;
  (void)consumeTokensOperandsLoc;
  ::mlir::Type produceTokenRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> produceTokenTypes(produceTokenRawTypes);
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  if (parser.parseCustomAttributeWithFallback(globalAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (globalAttr) result.getOrAddProperties<GlobalLoadGraphOp::Properties>().global = globalAttr;
  {
    consumeTokensOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseTokenOrdering(parser, consumeTokensOperands, produceTokenRawTypes[0]);
    if (odsResult) return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
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
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::ml_program::TokenType>();
  result.addTypes(resultTypes);
  result.addTypes(produceTokenTypes);
  if (parser.resolveOperands(consumeTokensOperands, odsBuildableType0, consumeTokensOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GlobalLoadGraphOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getGlobalAttr());
  printTokenOrdering(_odsPrinter, *this, getConsumeTokens(), getProduceToken().getType());
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("global");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void GlobalLoadGraphOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Read::get(), getGlobalAttr(), 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace ml_program
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ml_program::GlobalLoadGraphOp)

namespace mlir {
namespace ml_program {

//===----------------------------------------------------------------------===//
// ::mlir::ml_program::GlobalLoadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GlobalLoadOpGenericAdaptorBase::GlobalLoadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("ml_program.global_load", odsAttrs.getContext());
}

GlobalLoadOpGenericAdaptorBase::GlobalLoadOpGenericAdaptorBase(GlobalLoadOp op) : GlobalLoadOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GlobalLoadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GlobalLoadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::SymbolRefAttr GlobalLoadOpGenericAdaptorBase::getGlobalAttr() {
  auto attr = ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().global);
  return attr;
}

::mlir::SymbolRefAttr GlobalLoadOpGenericAdaptorBase::getGlobal() {
  auto attr = getGlobalAttr();
  return attr;
}

} // namespace detail
GlobalLoadOpAdaptor::GlobalLoadOpAdaptor(GlobalLoadOp op) : GlobalLoadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GlobalLoadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_global = getProperties().global; (void)tblgen_global;
  if (!tblgen_global) return emitError(loc, "'ml_program.global_load' op ""requires attribute 'global'");

  if (tblgen_global && !((::llvm::isa<::mlir::SymbolRefAttr>(tblgen_global))))
    return emitError(loc, "'ml_program.global_load' op ""attribute 'global' failed to satisfy constraint: symbol reference attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GlobalLoadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GlobalLoadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GlobalLoadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GlobalLoadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GlobalLoadOp::getResult() {
  return ::llvm::cast<::mlir::Value>(*getODSResults(0).begin());
}

::mlir::LogicalResult GlobalLoadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.global;
       auto attr = dict.get("global");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for global in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `global` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GlobalLoadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.global;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("global",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GlobalLoadOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.global.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GlobalLoadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "global")
      return prop.global;
  return std::nullopt;
}

void GlobalLoadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "global") {
       prop.global = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.global)>>(value);
       return;
    }
}

void GlobalLoadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.global) attrs.append("global", prop.global);
}

::mlir::LogicalResult GlobalLoadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getGlobalAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps3(attr, "global", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GlobalLoadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.global)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GlobalLoadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.global);
}

::mlir::SymbolRefAttr GlobalLoadOp::getGlobalAttr() {
  return ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().global);
}

::mlir::SymbolRefAttr GlobalLoadOp::getGlobal() {
  auto attr = getGlobalAttr();
  return attr;
}

void GlobalLoadOp::setGlobalAttr(::mlir::SymbolRefAttr attr) {
  (*this)->setAttr(getGlobalAttrName(), attr);
}

void GlobalLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::SymbolRefAttr global) {
  odsState.getOrAddProperties<Properties>().global = global;
  odsState.addTypes(result);
}

void GlobalLoadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::SymbolRefAttr global) {
  odsState.getOrAddProperties<Properties>().global = global;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GlobalLoadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GlobalLoadOp::verifyInvariantsImpl() {
  auto tblgen_global = getProperties().global; (void)tblgen_global;
  if (!tblgen_global) return emitOpError("requires attribute 'global'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps3(*this, tblgen_global, "global")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MLProgramOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GlobalLoadOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GlobalLoadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SymbolRefAttr globalAttr;
  ::mlir::Type resultRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> resultTypes(resultRawTypes);

  if (parser.parseCustomAttributeWithFallback(globalAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (globalAttr) result.getOrAddProperties<GlobalLoadOp::Properties>().global = globalAttr;
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    resultRawTypes[0] = type;
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
  result.addTypes(resultTypes);
  return ::mlir::success();
}

void GlobalLoadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getGlobalAttr());
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getResult().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("global");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void GlobalLoadOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Read::get(), getGlobalAttr(), 0, false, ::mlir::SideEffects::DefaultResource::get());
}

void GlobalLoadOp::getAsmResultNames(
    function_ref<void(::mlir::Value, ::llvm::StringRef)> setNameFn) {
  setNameFn(getResult(), getGlobal().getLeafReference());
}
} // namespace ml_program
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ml_program::GlobalLoadOp)

namespace mlir {
namespace ml_program {

//===----------------------------------------------------------------------===//
// ::mlir::ml_program::GlobalOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GlobalOpGenericAdaptorBase::GlobalOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("ml_program.global", odsAttrs.getContext());
}

GlobalOpGenericAdaptorBase::GlobalOpGenericAdaptorBase(GlobalOp op) : GlobalOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GlobalOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GlobalOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr GlobalOpGenericAdaptorBase::getSymNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
  return attr;
}

::llvm::StringRef GlobalOpGenericAdaptorBase::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr GlobalOpGenericAdaptorBase::getTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().type);
  return attr;
}

::mlir::Type GlobalOpGenericAdaptorBase::getType() {
  auto attr = getTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

::mlir::UnitAttr GlobalOpGenericAdaptorBase::getIsMutableAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_mutable);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool GlobalOpGenericAdaptorBase::getIsMutable() {
  auto attr = getIsMutableAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::Attribute GlobalOpGenericAdaptorBase::getValueAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().value);
  return attr;
}

::std::optional<::mlir::Attribute> GlobalOpGenericAdaptorBase::getValue() {
  auto attr = getValueAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

::mlir::StringAttr GlobalOpGenericAdaptorBase::getSymVisibilityAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().sym_visibility);
  return attr;
}

::std::optional< ::llvm::StringRef > GlobalOpGenericAdaptorBase::getSymVisibility() {
  auto attr = getSymVisibilityAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

} // namespace detail
GlobalOpAdaptor::GlobalOpAdaptor(GlobalOp op) : GlobalOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GlobalOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_is_mutable = getProperties().is_mutable; (void)tblgen_is_mutable;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitError(loc, "'ml_program.global' op ""requires attribute 'sym_name'");
  auto tblgen_sym_visibility = getProperties().sym_visibility; (void)tblgen_sym_visibility;
  auto tblgen_type = getProperties().type; (void)tblgen_type;
  if (!tblgen_type) return emitError(loc, "'ml_program.global' op ""requires attribute 'type'");
  auto tblgen_value = getProperties().value; (void)tblgen_value;

  if (tblgen_sym_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_name))))
    return emitError(loc, "'ml_program.global' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");

  if (tblgen_type && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_type))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_type).getValue()))) && ((true))))
    return emitError(loc, "'ml_program.global' op ""attribute 'type' failed to satisfy constraint: any type attribute");

  if (tblgen_is_mutable && !((::llvm::isa<::mlir::UnitAttr>(tblgen_is_mutable))))
    return emitError(loc, "'ml_program.global' op ""attribute 'is_mutable' failed to satisfy constraint: unit attribute");

  if (tblgen_value && !((true)))
    return emitError(loc, "'ml_program.global' op ""attribute 'value' failed to satisfy constraint: any attribute");

  if (tblgen_sym_visibility && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_visibility))))
    return emitError(loc, "'ml_program.global' op ""attribute 'sym_visibility' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GlobalOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GlobalOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> GlobalOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GlobalOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult GlobalOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.is_mutable;
       auto attr = dict.get("is_mutable");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for is_mutable in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `is_mutable` in property conversion: " << attr;
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

  {
    auto &propStorage = prop.sym_visibility;
       auto attr = dict.get("sym_visibility");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for sym_visibility in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `sym_visibility` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.type;
       auto attr = dict.get("type");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for type in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `type` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.value;
       auto attr = dict.get("value");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for value in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `value` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GlobalOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.is_mutable;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("is_mutable",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sym_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sym_name",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sym_visibility;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sym_visibility",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.type;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("type",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.value;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("value",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GlobalOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.is_mutable.getAsOpaquePointer()), 
    llvm::hash_value(prop.sym_name.getAsOpaquePointer()), 
    llvm::hash_value(prop.sym_visibility.getAsOpaquePointer()), 
    llvm::hash_value(prop.type.getAsOpaquePointer()), 
    llvm::hash_value(prop.value.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GlobalOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "is_mutable")
      return prop.is_mutable;

    if (name == "sym_name")
      return prop.sym_name;

    if (name == "sym_visibility")
      return prop.sym_visibility;

    if (name == "type")
      return prop.type;

    if (name == "value")
      return prop.value;
  return std::nullopt;
}

void GlobalOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "is_mutable") {
       prop.is_mutable = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.is_mutable)>>(value);
       return;
    }

    if (name == "sym_name") {
       prop.sym_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sym_name)>>(value);
       return;
    }

    if (name == "sym_visibility") {
       prop.sym_visibility = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sym_visibility)>>(value);
       return;
    }

    if (name == "type") {
       prop.type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.type)>>(value);
       return;
    }

    if (name == "value") {
       prop.value = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.value)>>(value);
       return;
    }
}

void GlobalOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.is_mutable) attrs.append("is_mutable", prop.is_mutable);

    if (prop.sym_name) attrs.append("sym_name", prop.sym_name);

    if (prop.sym_visibility) attrs.append("sym_visibility", prop.sym_visibility);

    if (prop.type) attrs.append("type", prop.type);

    if (prop.value) attrs.append("value", prop.value);
}

::mlir::LogicalResult GlobalOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getIsMutableAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps5(attr, "is_mutable", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSymNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps0(attr, "sym_name", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSymVisibilityAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps0(attr, "sym_visibility", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps4(attr, "type", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getValueAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps6(attr, "value", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GlobalOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.is_mutable)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.sym_name)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.sym_visibility)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.type)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.value)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GlobalOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.is_mutable);
  writer.writeAttribute(prop.sym_name);

  writer.writeOptionalAttribute(prop.sym_visibility);
  writer.writeAttribute(prop.type);

  writer.writeOptionalAttribute(prop.value);
}

::mlir::StringAttr GlobalOp::getSymNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
}

::llvm::StringRef GlobalOp::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr GlobalOp::getTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().type);
}

::mlir::Type GlobalOp::getType() {
  auto attr = getTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

::mlir::UnitAttr GlobalOp::getIsMutableAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().is_mutable);
}

bool GlobalOp::getIsMutable() {
  auto attr = getIsMutableAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::Attribute GlobalOp::getValueAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::Attribute>(getProperties().value);
}

::std::optional<::mlir::Attribute> GlobalOp::getValue() {
  auto attr = getValueAttr();
  return attr ? ::std::optional<::mlir::Attribute>(attr) : (::std::nullopt);
}

::mlir::StringAttr GlobalOp::getSymVisibilityAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().sym_visibility);
}

::std::optional< ::llvm::StringRef > GlobalOp::getSymVisibility() {
  auto attr = getSymVisibilityAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

void GlobalOp::setSymNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymNameAttrName(), attr);
}

void GlobalOp::setSymName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getSymNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void GlobalOp::setTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getTypeAttrName(), attr);
}

void GlobalOp::setType(::mlir::Type attrValue) {
  (*this)->setAttr(getTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void GlobalOp::setIsMutableAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getIsMutableAttrName(), attr);
}

void GlobalOp::setIsMutable(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getIsMutableAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getIsMutableAttrName());
}

void GlobalOp::setValueAttr(::mlir::Attribute attr) {
  (*this)->setAttr(getValueAttrName(), attr);
}

void GlobalOp::setSymVisibilityAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymVisibilityAttrName(), attr);
}

void GlobalOp::setSymVisibility(::std::optional<::llvm::StringRef> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getSymVisibilityAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(*attrValue));
    (*this)->removeAttr(getSymVisibilityAttrName());
}

::mlir::Attribute GlobalOp::removeIsMutableAttr() {
    auto &attr = getProperties().is_mutable;
    attr = {};
    return attr;
}

::mlir::Attribute GlobalOp::removeValueAttr() {
    auto &attr = getProperties().value;
    attr = {};
    return attr;
}

::mlir::Attribute GlobalOp::removeSymVisibilityAttr() {
    auto &attr = getProperties().sym_visibility;
    attr = {};
    return attr;
}

void GlobalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::TypeAttr type, /*optional*/::mlir::UnitAttr is_mutable, /*optional*/::mlir::Attribute value, /*optional*/::mlir::StringAttr sym_visibility) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  odsState.getOrAddProperties<Properties>().type = type;
  if (is_mutable) {
    odsState.getOrAddProperties<Properties>().is_mutable = is_mutable;
  }
  if (value) {
    odsState.getOrAddProperties<Properties>().value = value;
  }
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
}

void GlobalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::TypeAttr type, /*optional*/::mlir::UnitAttr is_mutable, /*optional*/::mlir::Attribute value, /*optional*/::mlir::StringAttr sym_visibility) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  odsState.getOrAddProperties<Properties>().type = type;
  if (is_mutable) {
    odsState.getOrAddProperties<Properties>().is_mutable = is_mutable;
  }
  if (value) {
    odsState.getOrAddProperties<Properties>().value = value;
  }
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GlobalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, ::mlir::Type type, /*optional*/bool is_mutable, /*optional*/::mlir::Attribute value, /*optional*/::mlir::StringAttr sym_visibility) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().type = ::mlir::TypeAttr::get(type);
  if (is_mutable) {
    odsState.getOrAddProperties<Properties>().is_mutable = ((is_mutable) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (value) {
    odsState.getOrAddProperties<Properties>().value = value;
  }
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
}

void GlobalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, ::mlir::Type type, /*optional*/bool is_mutable, /*optional*/::mlir::Attribute value, /*optional*/::mlir::StringAttr sym_visibility) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().type = ::mlir::TypeAttr::get(type);
  if (is_mutable) {
    odsState.getOrAddProperties<Properties>().is_mutable = ((is_mutable) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (value) {
    odsState.getOrAddProperties<Properties>().value = value;
  }
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GlobalOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GlobalOp::verifyInvariantsImpl() {
  auto tblgen_is_mutable = getProperties().is_mutable; (void)tblgen_is_mutable;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitOpError("requires attribute 'sym_name'");
  auto tblgen_sym_visibility = getProperties().sym_visibility; (void)tblgen_sym_visibility;
  auto tblgen_type = getProperties().type; (void)tblgen_type;
  if (!tblgen_type) return emitOpError("requires attribute 'type'");
  auto tblgen_value = getProperties().value; (void)tblgen_value;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps0(*this, tblgen_sym_name, "sym_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps4(*this, tblgen_type, "type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps5(*this, tblgen_is_mutable, "is_mutable")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps6(*this, tblgen_value, "value")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps0(*this, tblgen_sym_visibility, "sym_visibility")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult GlobalOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult GlobalOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr sym_visibilityAttr;
  ::mlir::StringAttr sym_nameAttr;
  ::mlir::TypeAttr typeAttr;
  ::mlir::Attribute valueAttr;
  {
    auto odsResult = parseSymbolVisibility(parser, sym_visibilityAttr);
    if (odsResult) return ::mlir::failure();
    if (sym_visibilityAttr)
      result.getOrAddProperties<GlobalOp::Properties>().sym_visibility = sym_visibilityAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("mutable"))) {
    result.getOrAddProperties<GlobalOp::Properties>().is_mutable = parser.getBuilder().getUnitAttr();  }

  if (parser.parseSymbolName(sym_nameAttr))
    return ::mlir::failure();
  if (sym_nameAttr) result.getOrAddProperties<GlobalOp::Properties>().sym_name = sym_nameAttr;
  {
    auto odsResult = parseTypedInitialValue(parser, typeAttr, valueAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<GlobalOp::Properties>().type = typeAttr;
    if (valueAttr)
      result.getOrAddProperties<GlobalOp::Properties>().value = valueAttr;
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
  return ::mlir::success();
}

void GlobalOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  printSymbolVisibility(_odsPrinter, *this, getSymVisibilityAttr());
  if (getIsMutableAttr()) {
    _odsPrinter << ' ' << "mutable";
  }
  _odsPrinter << ' ';
  _odsPrinter.printSymbolName(getSymNameAttr().getValue());
  printTypedInitialValue(_odsPrinter, *this, getTypeAttr(), getValueAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("sym_visibility");
  elidedAttrs.push_back("is_mutable");
  elidedAttrs.push_back("sym_name");
  elidedAttrs.push_back("type");
  elidedAttrs.push_back("value");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getIsMutableAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("is_mutable");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace ml_program
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ml_program::GlobalOp)

namespace mlir {
namespace ml_program {

//===----------------------------------------------------------------------===//
// ::mlir::ml_program::GlobalStoreGraphOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GlobalStoreGraphOpGenericAdaptorBase::GlobalStoreGraphOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("ml_program.global_store_graph", odsAttrs.getContext());
}

GlobalStoreGraphOpGenericAdaptorBase::GlobalStoreGraphOpGenericAdaptorBase(GlobalStoreGraphOp op) : GlobalStoreGraphOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GlobalStoreGraphOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr GlobalStoreGraphOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::SymbolRefAttr GlobalStoreGraphOpGenericAdaptorBase::getGlobalAttr() {
  auto attr = ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().global);
  return attr;
}

::mlir::SymbolRefAttr GlobalStoreGraphOpGenericAdaptorBase::getGlobal() {
  auto attr = getGlobalAttr();
  return attr;
}

} // namespace detail
GlobalStoreGraphOpAdaptor::GlobalStoreGraphOpAdaptor(GlobalStoreGraphOp op) : GlobalStoreGraphOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GlobalStoreGraphOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_global = getProperties().global; (void)tblgen_global;
  if (!tblgen_global) return emitError(loc, "'ml_program.global_store_graph' op ""requires attribute 'global'");

  if (tblgen_global && !((::llvm::isa<::mlir::SymbolRefAttr>(tblgen_global))))
    return emitError(loc, "'ml_program.global_store_graph' op ""attribute 'global' failed to satisfy constraint: symbol reference attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GlobalStoreGraphOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range GlobalStoreGraphOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GlobalStoreGraphOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::Operation::operand_range GlobalStoreGraphOp::getConsumeTokens() {
  return getODSOperands(1);
}

::mlir::OpOperand &GlobalStoreGraphOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange GlobalStoreGraphOp::getConsumeTokensMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> GlobalStoreGraphOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GlobalStoreGraphOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ml_program::TokenType> GlobalStoreGraphOp::getProduceToken() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ml_program::TokenType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult GlobalStoreGraphOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.global;
       auto attr = dict.get("global");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for global in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `global` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GlobalStoreGraphOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.global;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("global",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GlobalStoreGraphOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.global.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GlobalStoreGraphOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "global")
      return prop.global;
  return std::nullopt;
}

void GlobalStoreGraphOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "global") {
       prop.global = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.global)>>(value);
       return;
    }
}

void GlobalStoreGraphOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.global) attrs.append("global", prop.global);
}

::mlir::LogicalResult GlobalStoreGraphOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getGlobalAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps3(attr, "global", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GlobalStoreGraphOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.global)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GlobalStoreGraphOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.global);
}

::mlir::SymbolRefAttr GlobalStoreGraphOp::getGlobalAttr() {
  return ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().global);
}

::mlir::SymbolRefAttr GlobalStoreGraphOp::getGlobal() {
  auto attr = getGlobalAttr();
  return attr;
}

void GlobalStoreGraphOp::setGlobalAttr(::mlir::SymbolRefAttr attr) {
  (*this)->setAttr(getGlobalAttrName(), attr);
}

void GlobalStoreGraphOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type produceToken, ::mlir::SymbolRefAttr global, ::mlir::Value value, ::mlir::ValueRange consumeTokens) {
  odsState.addOperands(value);
  odsState.addOperands(consumeTokens);
  odsState.getOrAddProperties<Properties>().global = global;
  odsState.addTypes(produceToken);
}

void GlobalStoreGraphOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::SymbolRefAttr global, ::mlir::Value value, ::mlir::ValueRange consumeTokens) {
  odsState.addOperands(value);
  odsState.addOperands(consumeTokens);
  odsState.getOrAddProperties<Properties>().global = global;
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GlobalStoreGraphOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GlobalStoreGraphOp::verifyInvariantsImpl() {
  auto tblgen_global = getProperties().global; (void)tblgen_global;
  if (!tblgen_global) return emitOpError("requires attribute 'global'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps3(*this, tblgen_global, "global")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MLProgramOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MLProgramOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MLProgramOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GlobalStoreGraphOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GlobalStoreGraphOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SymbolRefAttr globalAttr;
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> consumeTokensOperands;
  ::llvm::SMLoc consumeTokensOperandsLoc;
  (void)consumeTokensOperandsLoc;
  ::mlir::Type produceTokenRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> produceTokenTypes(produceTokenRawTypes);
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);

  if (parser.parseCustomAttributeWithFallback(globalAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (globalAttr) result.getOrAddProperties<GlobalStoreGraphOp::Properties>().global = globalAttr;
  if (parser.parseEqual())
    return ::mlir::failure();

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  {
    consumeTokensOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseTokenOrdering(parser, consumeTokensOperands, produceTokenRawTypes[0]);
    if (odsResult) return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueRawTypes[0] = type;
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
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::ml_program::TokenType>();
  result.addTypes(produceTokenTypes);
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(consumeTokensOperands, odsBuildableType0, consumeTokensOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GlobalStoreGraphOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getGlobalAttr());
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  printTokenOrdering(_odsPrinter, *this, getConsumeTokens(), getProduceToken().getType());
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("global");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void GlobalStoreGraphOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Read::get(), getGlobalAttr(), 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace ml_program
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ml_program::GlobalStoreGraphOp)

namespace mlir {
namespace ml_program {

//===----------------------------------------------------------------------===//
// ::mlir::ml_program::GlobalStoreOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GlobalStoreOpGenericAdaptorBase::GlobalStoreOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("ml_program.global_store", odsAttrs.getContext());
}

GlobalStoreOpGenericAdaptorBase::GlobalStoreOpGenericAdaptorBase(GlobalStoreOp op) : GlobalStoreOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> GlobalStoreOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GlobalStoreOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::SymbolRefAttr GlobalStoreOpGenericAdaptorBase::getGlobalAttr() {
  auto attr = ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().global);
  return attr;
}

::mlir::SymbolRefAttr GlobalStoreOpGenericAdaptorBase::getGlobal() {
  auto attr = getGlobalAttr();
  return attr;
}

} // namespace detail
GlobalStoreOpAdaptor::GlobalStoreOpAdaptor(GlobalStoreOp op) : GlobalStoreOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult GlobalStoreOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_global = getProperties().global; (void)tblgen_global;
  if (!tblgen_global) return emitError(loc, "'ml_program.global_store' op ""requires attribute 'global'");

  if (tblgen_global && !((::llvm::isa<::mlir::SymbolRefAttr>(tblgen_global))))
    return emitError(loc, "'ml_program.global_store' op ""attribute 'global' failed to satisfy constraint: symbol reference attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GlobalStoreOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GlobalStoreOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GlobalStoreOp::getValue() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::OpOperand &GlobalStoreOp::getValueMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> GlobalStoreOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GlobalStoreOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult GlobalStoreOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.global;
       auto attr = dict.get("global");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for global in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `global` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute GlobalStoreOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.global;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("global",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code GlobalStoreOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.global.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> GlobalStoreOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "global")
      return prop.global;
  return std::nullopt;
}

void GlobalStoreOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "global") {
       prop.global = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.global)>>(value);
       return;
    }
}

void GlobalStoreOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.global) attrs.append("global", prop.global);
}

::mlir::LogicalResult GlobalStoreOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getGlobalAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps3(attr, "global", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult GlobalStoreOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.global)))
    return ::mlir::failure();
  return ::mlir::success();
}

void GlobalStoreOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.global);
}

::mlir::SymbolRefAttr GlobalStoreOp::getGlobalAttr() {
  return ::llvm::cast<::mlir::SymbolRefAttr>(getProperties().global);
}

::mlir::SymbolRefAttr GlobalStoreOp::getGlobal() {
  auto attr = getGlobalAttr();
  return attr;
}

void GlobalStoreOp::setGlobalAttr(::mlir::SymbolRefAttr attr) {
  (*this)->setAttr(getGlobalAttrName(), attr);
}

void GlobalStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::SymbolRefAttr global, ::mlir::Value value) {
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().global = global;
}

void GlobalStoreOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::SymbolRefAttr global, ::mlir::Value value) {
  odsState.addOperands(value);
  odsState.getOrAddProperties<Properties>().global = global;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GlobalStoreOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult GlobalStoreOp::verifyInvariantsImpl() {
  auto tblgen_global = getProperties().global; (void)tblgen_global;
  if (!tblgen_global) return emitOpError("requires attribute 'global'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps3(*this, tblgen_global, "global")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MLProgramOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GlobalStoreOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult GlobalStoreOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::SymbolRefAttr globalAttr;
  ::mlir::OpAsmParser::UnresolvedOperand valueRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> valueOperands(valueRawOperands);  ::llvm::SMLoc valueOperandsLoc;
  (void)valueOperandsLoc;
  ::mlir::Type valueRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> valueTypes(valueRawTypes);

  if (parser.parseCustomAttributeWithFallback(globalAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (globalAttr) result.getOrAddProperties<GlobalStoreOp::Properties>().global = globalAttr;
  if (parser.parseEqual())
    return ::mlir::failure();

  valueOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(valueRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    valueRawTypes[0] = type;
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
  if (parser.resolveOperands(valueOperands, valueTypes, valueOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void GlobalStoreOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getGlobalAttr());
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter << getValue();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getValue().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("global");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void GlobalStoreOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Write::get(), getGlobalAttr(), 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace ml_program
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ml_program::GlobalStoreOp)

namespace mlir {
namespace ml_program {

//===----------------------------------------------------------------------===//
// ::mlir::ml_program::OutputOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
OutputOpGenericAdaptorBase::OutputOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("ml_program.output", odsAttrs.getContext());
}

OutputOpGenericAdaptorBase::OutputOpGenericAdaptorBase(OutputOp op) : OutputOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> OutputOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr OutputOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
OutputOpAdaptor::OutputOpAdaptor(OutputOp op) : OutputOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult OutputOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> OutputOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range OutputOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range OutputOp::getOperands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange OutputOp::getOperandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> OutputOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OutputOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void OutputOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
    build(odsBuilder, odsState, std::nullopt);
  
}

void OutputOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands) {
  odsState.addOperands(operands);
}

void OutputOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult OutputOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MLProgramOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult OutputOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult OutputOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> operandsOperands;
  ::llvm::SMLoc operandsOperandsLoc;
  (void)operandsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> operandsTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }

  operandsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(operandsOperands))
    return ::mlir::failure();
  if (!operandsOperands.empty()) {
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(operandsTypes))
    return ::mlir::failure();
  }
  if (parser.resolveOperands(operandsOperands, operandsTypes, operandsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void OutputOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  if (!getOperands().empty()) {
    _odsPrinter << ' ';
    _odsPrinter << getOperands();
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << getOperands().getTypes();
  }
}

void OutputOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::MutableOperandRange OutputOp::getMutableSuccessorOperands(
  ::mlir::RegionBranchPoint point) {
  return ::mlir::MutableOperandRange(*this);
}

} // namespace ml_program
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ml_program::OutputOp)

namespace mlir {
namespace ml_program {

//===----------------------------------------------------------------------===//
// ::mlir::ml_program::ReturnOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReturnOpGenericAdaptorBase::ReturnOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("ml_program.return", odsAttrs.getContext());
}

ReturnOpGenericAdaptorBase::ReturnOpGenericAdaptorBase(ReturnOp op) : ReturnOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReturnOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (odsOperandsSize - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::DictionaryAttr ReturnOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ReturnOpAdaptor::ReturnOpAdaptor(ReturnOp op) : ReturnOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReturnOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReturnOp::getODSOperandIndexAndLength(unsigned index) {
  bool isVariadic[] = {true};
  int prevVariadicCount = 0;
  for (unsigned i = 0; i < index; ++i)
    if (isVariadic[i]) ++prevVariadicCount;

  // Calculate how many dynamic values a static variadic operand corresponds to.
  // This assumes all static variadic operands have the same dynamic value count.
  int variadicSize = (getOperation()->getNumOperands() - 0) / 1;
  // `index` passed in as the parameter is the static index which counts each
  // operand (variadic or not) as size 1. So here for each previous static variadic
  // operand, we need to offset by (variadicSize - 1) to get where the dynamic
  // value pack for this static operand starts.
  int start = index + (variadicSize - 1) * prevVariadicCount;
  int size = isVariadic[index] ? variadicSize : 1;
  return {start, size};
}

::mlir::Operation::operand_range ReturnOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range ReturnOp::getOperands() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange ReturnOp::getOperandsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> ReturnOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReturnOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ReturnOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
    build(odsBuilder, odsState, std::nullopt);
  
}

void ReturnOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands) {
  odsState.addOperands(operands);
}

void ReturnOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReturnOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MLProgramOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReturnOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReturnOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> operandsOperands;
  ::llvm::SMLoc operandsOperandsLoc;
  (void)operandsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> operandsTypes;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }

  operandsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(operandsOperands))
    return ::mlir::failure();
  if (!operandsOperands.empty()) {
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(operandsTypes))
    return ::mlir::failure();
  }
  if (parser.resolveOperands(operandsOperands, operandsTypes, operandsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReturnOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  if (!getOperands().empty()) {
    _odsPrinter << ' ';
    _odsPrinter << getOperands();
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << getOperands().getTypes();
  }
}

void ReturnOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::MutableOperandRange ReturnOp::getMutableSuccessorOperands(
  ::mlir::RegionBranchPoint point) {
  return ::mlir::MutableOperandRange(*this);
}

} // namespace ml_program
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ml_program::ReturnOp)

namespace mlir {
namespace ml_program {

//===----------------------------------------------------------------------===//
// ::mlir::ml_program::SubgraphOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SubgraphOpGenericAdaptorBase::SubgraphOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("ml_program.subgraph", odsAttrs.getContext());
}

SubgraphOpGenericAdaptorBase::SubgraphOpGenericAdaptorBase(SubgraphOp op) : SubgraphOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SubgraphOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SubgraphOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr SubgraphOpGenericAdaptorBase::getSymNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
  return attr;
}

::llvm::StringRef SubgraphOpGenericAdaptorBase::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr SubgraphOpGenericAdaptorBase::getFunctionTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().function_type);
  return attr;
}

::mlir::FunctionType SubgraphOpGenericAdaptorBase::getFunctionType() {
  auto attr = getFunctionTypeAttr();
  return ::llvm::cast<::mlir::FunctionType>(attr.getValue());
}

::mlir::ArrayAttr SubgraphOpGenericAdaptorBase::getArgAttrsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().arg_attrs);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > SubgraphOpGenericAdaptorBase::getArgAttrs() {
  auto attr = getArgAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr SubgraphOpGenericAdaptorBase::getResAttrsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().res_attrs);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > SubgraphOpGenericAdaptorBase::getResAttrs() {
  auto attr = getResAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::StringAttr SubgraphOpGenericAdaptorBase::getSymVisibilityAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().sym_visibility);
  return attr;
}

::std::optional< ::llvm::StringRef > SubgraphOpGenericAdaptorBase::getSymVisibility() {
  auto attr = getSymVisibilityAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

::mlir::Region &SubgraphOpGenericAdaptorBase::getBody() {
  return *odsRegions[0];
}

::mlir::RegionRange SubgraphOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
SubgraphOpAdaptor::SubgraphOpAdaptor(SubgraphOp op) : SubgraphOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SubgraphOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_arg_attrs = getProperties().arg_attrs; (void)tblgen_arg_attrs;
  auto tblgen_function_type = getProperties().function_type; (void)tblgen_function_type;
  if (!tblgen_function_type) return emitError(loc, "'ml_program.subgraph' op ""requires attribute 'function_type'");
  auto tblgen_res_attrs = getProperties().res_attrs; (void)tblgen_res_attrs;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitError(loc, "'ml_program.subgraph' op ""requires attribute 'sym_name'");
  auto tblgen_sym_visibility = getProperties().sym_visibility; (void)tblgen_sym_visibility;

  if (tblgen_sym_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_name))))
    return emitError(loc, "'ml_program.subgraph' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");

  if (tblgen_function_type && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_function_type))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(tblgen_function_type).getValue()))) && ((::llvm::isa<::mlir::FunctionType>(::llvm::cast<::mlir::TypeAttr>(tblgen_function_type).getValue())))))
    return emitError(loc, "'ml_program.subgraph' op ""attribute 'function_type' failed to satisfy constraint: type attribute of function type");

  if (tblgen_arg_attrs && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_arg_attrs))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_arg_attrs), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError(loc, "'ml_program.subgraph' op ""attribute 'arg_attrs' failed to satisfy constraint: Array of dictionary attributes");

  if (tblgen_res_attrs && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_res_attrs))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_res_attrs), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::DictionaryAttr>(attr))); }))))
    return emitError(loc, "'ml_program.subgraph' op ""attribute 'res_attrs' failed to satisfy constraint: Array of dictionary attributes");

  if (tblgen_sym_visibility && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_visibility))))
    return emitError(loc, "'ml_program.subgraph' op ""attribute 'sym_visibility' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SubgraphOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SubgraphOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> SubgraphOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SubgraphOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &SubgraphOp::getBody() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult SubgraphOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.arg_attrs;
       auto attr = dict.get("arg_attrs");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for arg_attrs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `arg_attrs` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.function_type;
       auto attr = dict.get("function_type");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for function_type in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `function_type` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.res_attrs;
       auto attr = dict.get("res_attrs");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for res_attrs in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `res_attrs` in property conversion: " << attr;
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

  {
    auto &propStorage = prop.sym_visibility;
       auto attr = dict.get("sym_visibility");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for sym_visibility in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `sym_visibility` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute SubgraphOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.arg_attrs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("arg_attrs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.function_type;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("function_type",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.res_attrs;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("res_attrs",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sym_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sym_name",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.sym_visibility;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sym_visibility",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SubgraphOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.arg_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.function_type.getAsOpaquePointer()), 
    llvm::hash_value(prop.res_attrs.getAsOpaquePointer()), 
    llvm::hash_value(prop.sym_name.getAsOpaquePointer()), 
    llvm::hash_value(prop.sym_visibility.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> SubgraphOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "arg_attrs")
      return prop.arg_attrs;

    if (name == "function_type")
      return prop.function_type;

    if (name == "res_attrs")
      return prop.res_attrs;

    if (name == "sym_name")
      return prop.sym_name;

    if (name == "sym_visibility")
      return prop.sym_visibility;
  return std::nullopt;
}

void SubgraphOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "arg_attrs") {
       prop.arg_attrs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.arg_attrs)>>(value);
       return;
    }

    if (name == "function_type") {
       prop.function_type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.function_type)>>(value);
       return;
    }

    if (name == "res_attrs") {
       prop.res_attrs = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.res_attrs)>>(value);
       return;
    }

    if (name == "sym_name") {
       prop.sym_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sym_name)>>(value);
       return;
    }

    if (name == "sym_visibility") {
       prop.sym_visibility = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sym_visibility)>>(value);
       return;
    }
}

void SubgraphOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.arg_attrs) attrs.append("arg_attrs", prop.arg_attrs);

    if (prop.function_type) attrs.append("function_type", prop.function_type);

    if (prop.res_attrs) attrs.append("res_attrs", prop.res_attrs);

    if (prop.sym_name) attrs.append("sym_name", prop.sym_name);

    if (prop.sym_visibility) attrs.append("sym_visibility", prop.sym_visibility);
}

::mlir::LogicalResult SubgraphOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getArgAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps2(attr, "arg_attrs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getFunctionTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps1(attr, "function_type", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getResAttrsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps2(attr, "res_attrs", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSymNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps0(attr, "sym_name", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSymVisibilityAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps0(attr, "sym_visibility", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SubgraphOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.arg_attrs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.function_type)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.res_attrs)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.sym_name)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.sym_visibility)))
    return ::mlir::failure();
  return ::mlir::success();
}

void SubgraphOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.arg_attrs);
  writer.writeAttribute(prop.function_type);

  writer.writeOptionalAttribute(prop.res_attrs);
  writer.writeAttribute(prop.sym_name);

  writer.writeOptionalAttribute(prop.sym_visibility);
}

::mlir::StringAttr SubgraphOp::getSymNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
}

::llvm::StringRef SubgraphOp::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr SubgraphOp::getFunctionTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().function_type);
}

::mlir::FunctionType SubgraphOp::getFunctionType() {
  auto attr = getFunctionTypeAttr();
  return ::llvm::cast<::mlir::FunctionType>(attr.getValue());
}

::mlir::ArrayAttr SubgraphOp::getArgAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().arg_attrs);
}

::std::optional< ::mlir::ArrayAttr > SubgraphOp::getArgAttrs() {
  auto attr = getArgAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr SubgraphOp::getResAttrsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().res_attrs);
}

::std::optional< ::mlir::ArrayAttr > SubgraphOp::getResAttrs() {
  auto attr = getResAttrsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::StringAttr SubgraphOp::getSymVisibilityAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().sym_visibility);
}

::std::optional< ::llvm::StringRef > SubgraphOp::getSymVisibility() {
  auto attr = getSymVisibilityAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

void SubgraphOp::setSymNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymNameAttrName(), attr);
}

void SubgraphOp::setSymName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getSymNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void SubgraphOp::setFunctionTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getFunctionTypeAttrName(), attr);
}

void SubgraphOp::setFunctionType(::mlir::FunctionType attrValue) {
  (*this)->setAttr(getFunctionTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void SubgraphOp::setArgAttrsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getArgAttrsAttrName(), attr);
}

void SubgraphOp::setResAttrsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getResAttrsAttrName(), attr);
}

void SubgraphOp::setSymVisibilityAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymVisibilityAttrName(), attr);
}

void SubgraphOp::setSymVisibility(::std::optional<::llvm::StringRef> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getSymVisibilityAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(*attrValue));
    (*this)->removeAttr(getSymVisibilityAttrName());
}

::mlir::Attribute SubgraphOp::removeArgAttrsAttr() {
    auto &attr = getProperties().arg_attrs;
    attr = {};
    return attr;
}

::mlir::Attribute SubgraphOp::removeResAttrsAttr() {
    auto &attr = getProperties().res_attrs;
    attr = {};
    return attr;
}

::mlir::Attribute SubgraphOp::removeSymVisibilityAttr() {
    auto &attr = getProperties().sym_visibility;
    attr = {};
    return attr;
}

void SubgraphOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs, /*optional*/::mlir::StringAttr sym_visibility) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  odsState.getOrAddProperties<Properties>().function_type = function_type;
  if (arg_attrs) {
    odsState.getOrAddProperties<Properties>().arg_attrs = arg_attrs;
  }
  if (res_attrs) {
    odsState.getOrAddProperties<Properties>().res_attrs = res_attrs;
  }
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  (void)odsState.addRegion();
}

void SubgraphOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::TypeAttr function_type, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs, /*optional*/::mlir::StringAttr sym_visibility) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  odsState.getOrAddProperties<Properties>().function_type = function_type;
  if (arg_attrs) {
    odsState.getOrAddProperties<Properties>().arg_attrs = arg_attrs;
  }
  if (res_attrs) {
    odsState.getOrAddProperties<Properties>().res_attrs = res_attrs;
  }
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgraphOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, ::mlir::FunctionType function_type, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs, /*optional*/::mlir::StringAttr sym_visibility) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().function_type = ::mlir::TypeAttr::get(function_type);
  if (arg_attrs) {
    odsState.getOrAddProperties<Properties>().arg_attrs = arg_attrs;
  }
  if (res_attrs) {
    odsState.getOrAddProperties<Properties>().res_attrs = res_attrs;
  }
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  (void)odsState.addRegion();
}

void SubgraphOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, ::mlir::FunctionType function_type, /*optional*/::mlir::ArrayAttr arg_attrs, /*optional*/::mlir::ArrayAttr res_attrs, /*optional*/::mlir::StringAttr sym_visibility) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().function_type = ::mlir::TypeAttr::get(function_type);
  if (arg_attrs) {
    odsState.getOrAddProperties<Properties>().arg_attrs = arg_attrs;
  }
  if (res_attrs) {
    odsState.getOrAddProperties<Properties>().res_attrs = res_attrs;
  }
  if (sym_visibility) {
    odsState.getOrAddProperties<Properties>().sym_visibility = sym_visibility;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SubgraphOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SubgraphOp::verifyInvariantsImpl() {
  auto tblgen_arg_attrs = getProperties().arg_attrs; (void)tblgen_arg_attrs;
  auto tblgen_function_type = getProperties().function_type; (void)tblgen_function_type;
  if (!tblgen_function_type) return emitOpError("requires attribute 'function_type'");
  auto tblgen_res_attrs = getProperties().res_attrs; (void)tblgen_res_attrs;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitOpError("requires attribute 'sym_name'");
  auto tblgen_sym_visibility = getProperties().sym_visibility; (void)tblgen_sym_visibility;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps0(*this, tblgen_sym_name, "sym_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps1(*this, tblgen_function_type, "function_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps2(*this, tblgen_arg_attrs, "arg_attrs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps2(*this, tblgen_res_attrs, "res_attrs")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_MLProgramOps0(*this, tblgen_sym_visibility, "sym_visibility")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_MLProgramOps0(*this, region, "body", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult SubgraphOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace ml_program
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ml_program::SubgraphOp)

namespace mlir {
namespace ml_program {

//===----------------------------------------------------------------------===//
// ::mlir::ml_program::TokenOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TokenOpGenericAdaptorBase::TokenOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("ml_program.token", odsAttrs.getContext());
}

TokenOpGenericAdaptorBase::TokenOpGenericAdaptorBase(TokenOp op) : TokenOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TokenOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TokenOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TokenOpAdaptor::TokenOpAdaptor(TokenOp op) : TokenOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TokenOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TokenOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TokenOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TokenOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TokenOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::ml_program::TokenType> TokenOp::getToken() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::ml_program::TokenType>>(*getODSResults(0).begin());
}

void TokenOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type token) {
  odsState.addTypes(token);
}

void TokenOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TokenOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TokenOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_MLProgramOps2(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult TokenOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TokenOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::ml_program::TokenType>();
  result.addTypes(odsBuildableType0);
  return ::mlir::success();
}

void TokenOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void TokenOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace ml_program
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ml_program::TokenOp)


#endif  // GET_OP_CLASSES

