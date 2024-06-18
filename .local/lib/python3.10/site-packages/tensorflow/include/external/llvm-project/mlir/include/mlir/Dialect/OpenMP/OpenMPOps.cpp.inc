/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: OpenMPOps.td                                                         *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::mlir::omp::AtomicCaptureOp,
::mlir::omp::AtomicReadOp,
::mlir::omp::AtomicUpdateOp,
::mlir::omp::AtomicWriteOp,
::mlir::omp::BarrierOp,
::mlir::omp::CancelOp,
::mlir::omp::CancellationPointOp,
::mlir::omp::CriticalDeclareOp,
::mlir::omp::CriticalOp,
::mlir::omp::DataBoundsOp,
::mlir::omp::DistributeOp,
::mlir::omp::FlushOp,
::mlir::omp::MapInfoOp,
::mlir::omp::MasterOp,
::mlir::omp::OrderedOp,
::mlir::omp::OrderedRegionOp,
::mlir::omp::ParallelOp,
::mlir::omp::ReductionDeclareOp,
::mlir::omp::ReductionOp,
::mlir::omp::SectionOp,
::mlir::omp::SectionsOp,
::mlir::omp::SimdLoopOp,
::mlir::omp::SingleOp,
::mlir::omp::TargetOp,
::mlir::omp::DataOp,
::mlir::omp::EnterDataOp,
::mlir::omp::ExitDataOp,
::mlir::omp::UpdateDataOp,
::mlir::omp::TaskGroupOp,
::mlir::omp::TaskLoopOp,
::mlir::omp::TaskOp,
::mlir::omp::TaskwaitOp,
::mlir::omp::TaskyieldOp,
::mlir::omp::TeamsOp,
::mlir::omp::TerminatorOp,
::mlir::omp::ThreadprivateOp,
::mlir::omp::WsLoopOp,
::mlir::omp::YieldOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace omp {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::omp::PointerLikeType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be OpenMP-compatible variable type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps2(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(1)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 1-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps3(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::IntegerType>(type))) || ((::llvm::isa<::mlir::IndexType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be integer or index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps4(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::omp::DataBoundsType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be Type for representing omp data clause bounds information, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps5(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((true))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of any type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps6(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::omp::PointerLikeType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of OpenMP-compatible variable type, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps7(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::omp::DataBoundsType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of Type for representing omp data clause bounds information, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps8(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!(((::llvm::isa<::mlir::IntegerType>(type))) || ((::llvm::isa<::mlir::IndexType>(type))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of integer or index, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps9(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((::llvm::isa<::mlir::IntegerType>(type)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps10(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(32)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be 32-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_OpenMPOps11(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((type.isSignlessInteger(32)))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be variadic of 32-bit signless integer, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps0(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps0(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps1(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::omp::ClauseMemoryOrderKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: MemoryOrderKind Clause";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps1(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps1(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps2(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::TypeAttr>(attr))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(attr).getValue()))) && ((true))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: any type attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps2(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps2(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps3(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::omp::ClauseCancellationConstructTypeAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: CancellationConstructType Clause";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps3(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps3(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps4(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::StringAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: string attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps4(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps4(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps5(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: flat symbol reference attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps5(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps5(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps6(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::BoolAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: bool attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps6(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps6(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps7(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::UnitAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: unit attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps7(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps7(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps8(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::omp::ClauseOrderKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: OrderKind Clause";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps8(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps8(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps9(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isUnsignedInteger(64)))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit unsigned integer attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps9(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps9(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps10(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::omp::VariableCaptureKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: variable capture kind";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps10(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps10(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps11(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::omp::ClauseDependAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: depend clause";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps11(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps11(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps12(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() >= 0))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute whose minimum value is 0";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps12(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps12(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps13(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::SymbolRefAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: symbol ref array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps13(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps13(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps14(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::omp::ClauseProcBindKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: ProcBindKind Clause";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps14(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps14(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps15(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit integer array attribute";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps15(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps15(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps16(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getValue().isStrictlyPositive()))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps16(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps16(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps17(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !(((::llvm::isa<::mlir::ArrayAttr>(attr))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(attr), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::omp::ClauseTaskDependAttr>(attr))); }))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: clause_task_depend array attr";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps17(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps17(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps18(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::omp::ClauseScheduleKindAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: ScheduleKind Clause";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps18(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps18(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps19(
    ::mlir::Attribute attr, ::llvm::StringRef attrName, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  if (attr && !((::llvm::isa<::mlir::omp::ScheduleModifierAttr>(attr))))
    return emitError() << "attribute '" << attrName
        << "' failed to satisfy constraint: OpenMP Schedule Modifier";
  return ::mlir::success();
}
static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_OpenMPOps19(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  return __mlir_ods_local_attr_constraint_OpenMPOps19(attr, attrName, [op]() {
    return op->emitOpError();
  });
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_OpenMPOps0(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((::llvm::hasNItems(region, 1)))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: region with 1 blocks";
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_region_constraint_OpenMPOps1(
    ::mlir::Operation *op, ::mlir::Region &region, ::llvm::StringRef regionName,
    unsigned regionIndex) {
  if (!((true))) {
    return op->emitOpError("region #") << regionIndex
        << (regionName.empty() ? " " : " ('" + regionName + "') ")
        << "failed to verify constraint: any region";
  }
  return ::mlir::success();
}
} // namespace omp
} // namespace mlir
namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::AtomicCaptureOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AtomicCaptureOpGenericAdaptorBase::AtomicCaptureOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.atomic.capture", odsAttrs.getContext());
}

AtomicCaptureOpGenericAdaptorBase::AtomicCaptureOpGenericAdaptorBase(AtomicCaptureOp op) : AtomicCaptureOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AtomicCaptureOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AtomicCaptureOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr AtomicCaptureOpGenericAdaptorBase::getHintValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().hint_val);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 0);
  return attr;
}

uint64_t AtomicCaptureOpGenericAdaptorBase::getHintVal() {
  auto attr = getHintValAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 0).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::omp::ClauseMemoryOrderKindAttr AtomicCaptureOpGenericAdaptorBase::getMemoryOrderValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::omp::ClauseMemoryOrderKindAttr>(getProperties().memory_order_val);
  return attr;
}

::std::optional<::mlir::omp::ClauseMemoryOrderKind> AtomicCaptureOpGenericAdaptorBase::getMemoryOrderVal() {
  auto attr = getMemoryOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseMemoryOrderKind>(attr.getValue()) : (::std::nullopt);
}

::mlir::Region &AtomicCaptureOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange AtomicCaptureOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
AtomicCaptureOpAdaptor::AtomicCaptureOpAdaptor(AtomicCaptureOp op) : AtomicCaptureOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AtomicCaptureOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_hint_val = getProperties().hint_val; (void)tblgen_hint_val;
  auto tblgen_memory_order_val = getProperties().memory_order_val; (void)tblgen_memory_order_val;

  if (tblgen_hint_val && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_hint_val))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_hint_val).getType().isSignlessInteger(64)))))
    return emitError(loc, "'omp.atomic.capture' op ""attribute 'hint_val' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_memory_order_val && !((::llvm::isa<::mlir::omp::ClauseMemoryOrderKindAttr>(tblgen_memory_order_val))))
    return emitError(loc, "'omp.atomic.capture' op ""attribute 'memory_order_val' failed to satisfy constraint: MemoryOrderKind Clause");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AtomicCaptureOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AtomicCaptureOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> AtomicCaptureOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AtomicCaptureOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &AtomicCaptureOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult AtomicCaptureOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.hint_val;
       auto attr = dict.get("hint_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for hint_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `hint_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.memory_order_val;
       auto attr = dict.get("memory_order_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for memory_order_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `memory_order_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute AtomicCaptureOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.hint_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("hint_val",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.memory_order_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("memory_order_val",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AtomicCaptureOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.hint_val.getAsOpaquePointer()), 
    llvm::hash_value(prop.memory_order_val.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AtomicCaptureOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "hint_val")
      return prop.hint_val;

    if (name == "memory_order_val")
      return prop.memory_order_val;
  return std::nullopt;
}

void AtomicCaptureOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "hint_val") {
       prop.hint_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.hint_val)>>(value);
       return;
    }

    if (name == "memory_order_val") {
       prop.memory_order_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.memory_order_val)>>(value);
       return;
    }
}

void AtomicCaptureOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.hint_val) attrs.append("hint_val", prop.hint_val);

    if (prop.memory_order_val) attrs.append("memory_order_val", prop.memory_order_val);
}

::mlir::LogicalResult AtomicCaptureOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getHintValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(attr, "hint_val", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMemoryOrderValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps1(attr, "memory_order_val", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AtomicCaptureOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.hint_val)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.memory_order_val)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtomicCaptureOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.hint_val);

  writer.writeOptionalAttribute(prop.memory_order_val);
}

::mlir::IntegerAttr AtomicCaptureOp::getHintValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().hint_val);
}

uint64_t AtomicCaptureOp::getHintVal() {
  auto attr = getHintValAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), 0).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::omp::ClauseMemoryOrderKindAttr AtomicCaptureOp::getMemoryOrderValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::omp::ClauseMemoryOrderKindAttr>(getProperties().memory_order_val);
}

::std::optional<::mlir::omp::ClauseMemoryOrderKind> AtomicCaptureOp::getMemoryOrderVal() {
  auto attr = getMemoryOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseMemoryOrderKind>(attr.getValue()) : (::std::nullopt);
}

void AtomicCaptureOp::setHintValAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getHintValAttrName(), attr);
}

void AtomicCaptureOp::setHintVal(::std::optional<uint64_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getHintValAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue));
    (*this)->removeAttr(getHintValAttrName());
}

void AtomicCaptureOp::setMemoryOrderValAttr(::mlir::omp::ClauseMemoryOrderKindAttr attr) {
  (*this)->setAttr(getMemoryOrderValAttrName(), attr);
}

void AtomicCaptureOp::setMemoryOrderVal(::std::optional<::mlir::omp::ClauseMemoryOrderKind> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getMemoryOrderValAttrName(), ::mlir::omp::ClauseMemoryOrderKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getMemoryOrderValAttrName());
}

::mlir::Attribute AtomicCaptureOp::removeHintValAttr() {
    auto &attr = getProperties().hint_val;
    attr = {};
    return attr;
}

::mlir::Attribute AtomicCaptureOp::removeMemoryOrderValAttr() {
    auto &attr = getProperties().memory_order_val;
    attr = {};
    return attr;
}

void AtomicCaptureOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::IntegerAttr hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  if (hint_val) {
    odsState.getOrAddProperties<Properties>().hint_val = hint_val;
  }
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
  (void)odsState.addRegion();
}

void AtomicCaptureOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::IntegerAttr hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  if (hint_val) {
    odsState.getOrAddProperties<Properties>().hint_val = hint_val;
  }
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicCaptureOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/uint64_t hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.getOrAddProperties<Properties>().hint_val = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint_val);
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
  (void)odsState.addRegion();
}

void AtomicCaptureOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/uint64_t hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.getOrAddProperties<Properties>().hint_val = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint_val);
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicCaptureOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AtomicCaptureOp::verifyInvariantsImpl() {
  auto tblgen_hint_val = getProperties().hint_val; (void)tblgen_hint_val;
  auto tblgen_memory_order_val = getProperties().memory_order_val; (void)tblgen_memory_order_val;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(*this, tblgen_hint_val, "hint_val")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps1(*this, tblgen_memory_order_val, "memory_order_val")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps0(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult AtomicCaptureOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult AtomicCaptureOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::omp::ClauseMemoryOrderKindAttr memory_order_valAttr;
  ::mlir::IntegerAttr hint_valAttr;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  bool memory_orderClause = false;
  bool hintClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("memory_order"))) {

  if (memory_orderClause) {
    return parser.emitError(parser.getNameLoc())
          << "`memory_order` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  memory_orderClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseClauseAttr(parser, memory_order_valAttr);
    if (odsResult) return ::mlir::failure();
    if (memory_order_valAttr)
      result.getOrAddProperties<AtomicCaptureOp::Properties>().memory_order_val = memory_order_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("hint"))) {

  if (hintClause) {
    return parser.emitError(parser.getNameLoc())
          << "`hint` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  hintClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseSynchronizationHint(parser, hint_valAttr);
    if (odsResult) return ::mlir::failure();
    if (hint_valAttr)
      result.getOrAddProperties<AtomicCaptureOp::Properties>().hint_val = hint_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}

  if (parser.parseRegion(*regionRegion))
    return ::mlir::failure();

  ensureTerminator(*regionRegion, parser.getBuilder(), result.location);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  result.addRegion(std::move(regionRegion));
  return ::mlir::success();
}

void AtomicCaptureOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || (getMemoryOrderValAttr())) {
  _odsPrinter << ' ' << "memory_order";
  _odsPrinter << "(";
  printClauseAttr(_odsPrinter, *this, getMemoryOrderValAttr());
  _odsPrinter << ")";
  }
  if (false || (getHintValAttr() && getHintValAttr() != ::mlir::OpBuilder((*this)->getContext()).getIntegerAttr(::mlir::OpBuilder((*this)->getContext()).getIntegerType(64), 0))) {
  _odsPrinter << ' ' << "hint";
  _odsPrinter << "(";
  printSynchronizationHint(_odsPrinter, *this, getHintValAttr());
  _odsPrinter << ")";
  }
  _odsPrinter << ' ';

  {
    bool printTerminator = true;
    if (auto *term = getRegion().empty() ? nullptr : getRegion().begin()->getTerminator()) {
      printTerminator = !term->getAttrDictionary().empty() ||
                        term->getNumOperands() != 0 ||
                        term->getNumResults() != 0;
    }
    _odsPrinter.printRegion(getRegion(), /*printEntryBlockArgs=*/true,
      /*printBlockTerminators=*/printTerminator);
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("memory_order_val");
  elidedAttrs.push_back("hint_val");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getHintValAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 0)))
       elidedAttrs.push_back("hint_val");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::AtomicCaptureOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::AtomicReadOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AtomicReadOpGenericAdaptorBase::AtomicReadOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.atomic.read", odsAttrs.getContext());
}

AtomicReadOpGenericAdaptorBase::AtomicReadOpGenericAdaptorBase(AtomicReadOp op) : AtomicReadOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AtomicReadOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AtomicReadOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::TypeAttr AtomicReadOpGenericAdaptorBase::getElementTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().element_type);
  return attr;
}

::mlir::Type AtomicReadOpGenericAdaptorBase::getElementType() {
  auto attr = getElementTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

::mlir::IntegerAttr AtomicReadOpGenericAdaptorBase::getHintValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().hint_val);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 0);
  return attr;
}

uint64_t AtomicReadOpGenericAdaptorBase::getHintVal() {
  auto attr = getHintValAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 0).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::omp::ClauseMemoryOrderKindAttr AtomicReadOpGenericAdaptorBase::getMemoryOrderValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::omp::ClauseMemoryOrderKindAttr>(getProperties().memory_order_val);
  return attr;
}

::std::optional<::mlir::omp::ClauseMemoryOrderKind> AtomicReadOpGenericAdaptorBase::getMemoryOrderVal() {
  auto attr = getMemoryOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseMemoryOrderKind>(attr.getValue()) : (::std::nullopt);
}

} // namespace detail
AtomicReadOpAdaptor::AtomicReadOpAdaptor(AtomicReadOp op) : AtomicReadOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AtomicReadOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_element_type = getProperties().element_type; (void)tblgen_element_type;
  if (!tblgen_element_type) return emitError(loc, "'omp.atomic.read' op ""requires attribute 'element_type'");
  auto tblgen_hint_val = getProperties().hint_val; (void)tblgen_hint_val;
  auto tblgen_memory_order_val = getProperties().memory_order_val; (void)tblgen_memory_order_val;

  if (tblgen_element_type && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_element_type))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_element_type).getValue()))) && ((true))))
    return emitError(loc, "'omp.atomic.read' op ""attribute 'element_type' failed to satisfy constraint: any type attribute");

  if (tblgen_hint_val && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_hint_val))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_hint_val).getType().isSignlessInteger(64)))))
    return emitError(loc, "'omp.atomic.read' op ""attribute 'hint_val' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_memory_order_val && !((::llvm::isa<::mlir::omp::ClauseMemoryOrderKindAttr>(tblgen_memory_order_val))))
    return emitError(loc, "'omp.atomic.read' op ""attribute 'memory_order_val' failed to satisfy constraint: MemoryOrderKind Clause");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AtomicReadOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AtomicReadOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::omp::PointerLikeType> AtomicReadOp::getX() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::omp::PointerLikeType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::omp::PointerLikeType> AtomicReadOp::getV() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::omp::PointerLikeType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &AtomicReadOp::getXMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &AtomicReadOp::getVMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AtomicReadOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AtomicReadOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult AtomicReadOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.element_type;
       auto attr = dict.get("element_type");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for element_type in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `element_type` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.hint_val;
       auto attr = dict.get("hint_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for hint_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `hint_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.memory_order_val;
       auto attr = dict.get("memory_order_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for memory_order_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `memory_order_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute AtomicReadOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.element_type;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("element_type",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.hint_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("hint_val",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.memory_order_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("memory_order_val",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AtomicReadOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.element_type.getAsOpaquePointer()), 
    llvm::hash_value(prop.hint_val.getAsOpaquePointer()), 
    llvm::hash_value(prop.memory_order_val.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AtomicReadOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "element_type")
      return prop.element_type;

    if (name == "hint_val")
      return prop.hint_val;

    if (name == "memory_order_val")
      return prop.memory_order_val;
  return std::nullopt;
}

void AtomicReadOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "element_type") {
       prop.element_type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.element_type)>>(value);
       return;
    }

    if (name == "hint_val") {
       prop.hint_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.hint_val)>>(value);
       return;
    }

    if (name == "memory_order_val") {
       prop.memory_order_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.memory_order_val)>>(value);
       return;
    }
}

void AtomicReadOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.element_type) attrs.append("element_type", prop.element_type);

    if (prop.hint_val) attrs.append("hint_val", prop.hint_val);

    if (prop.memory_order_val) attrs.append("memory_order_val", prop.memory_order_val);
}

::mlir::LogicalResult AtomicReadOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getElementTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps2(attr, "element_type", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getHintValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(attr, "hint_val", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMemoryOrderValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps1(attr, "memory_order_val", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AtomicReadOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.element_type)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.hint_val)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.memory_order_val)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtomicReadOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.element_type);

  writer.writeOptionalAttribute(prop.hint_val);

  writer.writeOptionalAttribute(prop.memory_order_val);
}

::mlir::TypeAttr AtomicReadOp::getElementTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().element_type);
}

::mlir::Type AtomicReadOp::getElementType() {
  auto attr = getElementTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

::mlir::IntegerAttr AtomicReadOp::getHintValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().hint_val);
}

uint64_t AtomicReadOp::getHintVal() {
  auto attr = getHintValAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), 0).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::omp::ClauseMemoryOrderKindAttr AtomicReadOp::getMemoryOrderValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::omp::ClauseMemoryOrderKindAttr>(getProperties().memory_order_val);
}

::std::optional<::mlir::omp::ClauseMemoryOrderKind> AtomicReadOp::getMemoryOrderVal() {
  auto attr = getMemoryOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseMemoryOrderKind>(attr.getValue()) : (::std::nullopt);
}

void AtomicReadOp::setElementTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getElementTypeAttrName(), attr);
}

void AtomicReadOp::setElementType(::mlir::Type attrValue) {
  (*this)->setAttr(getElementTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void AtomicReadOp::setHintValAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getHintValAttrName(), attr);
}

void AtomicReadOp::setHintVal(::std::optional<uint64_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getHintValAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue));
    (*this)->removeAttr(getHintValAttrName());
}

void AtomicReadOp::setMemoryOrderValAttr(::mlir::omp::ClauseMemoryOrderKindAttr attr) {
  (*this)->setAttr(getMemoryOrderValAttrName(), attr);
}

void AtomicReadOp::setMemoryOrderVal(::std::optional<::mlir::omp::ClauseMemoryOrderKind> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getMemoryOrderValAttrName(), ::mlir::omp::ClauseMemoryOrderKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getMemoryOrderValAttrName());
}

::mlir::Attribute AtomicReadOp::removeHintValAttr() {
    auto &attr = getProperties().hint_val;
    attr = {};
    return attr;
}

::mlir::Attribute AtomicReadOp::removeMemoryOrderValAttr() {
    auto &attr = getProperties().memory_order_val;
    attr = {};
    return attr;
}

void AtomicReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, ::mlir::Value v, ::mlir::TypeAttr element_type, /*optional*/::mlir::IntegerAttr hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.addOperands(x);
  odsState.addOperands(v);
  odsState.getOrAddProperties<Properties>().element_type = element_type;
  if (hint_val) {
    odsState.getOrAddProperties<Properties>().hint_val = hint_val;
  }
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
}

void AtomicReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value v, ::mlir::TypeAttr element_type, /*optional*/::mlir::IntegerAttr hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.addOperands(x);
  odsState.addOperands(v);
  odsState.getOrAddProperties<Properties>().element_type = element_type;
  if (hint_val) {
    odsState.getOrAddProperties<Properties>().hint_val = hint_val;
  }
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, ::mlir::Value v, ::mlir::Type element_type, /*optional*/uint64_t hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.addOperands(x);
  odsState.addOperands(v);
  odsState.getOrAddProperties<Properties>().element_type = ::mlir::TypeAttr::get(element_type);
  odsState.getOrAddProperties<Properties>().hint_val = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint_val);
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
}

void AtomicReadOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value v, ::mlir::Type element_type, /*optional*/uint64_t hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.addOperands(x);
  odsState.addOperands(v);
  odsState.getOrAddProperties<Properties>().element_type = ::mlir::TypeAttr::get(element_type);
  odsState.getOrAddProperties<Properties>().hint_val = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint_val);
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicReadOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AtomicReadOp::verifyInvariantsImpl() {
  auto tblgen_element_type = getProperties().element_type; (void)tblgen_element_type;
  if (!tblgen_element_type) return emitOpError("requires attribute 'element_type'");
  auto tblgen_hint_val = getProperties().hint_val; (void)tblgen_hint_val;
  auto tblgen_memory_order_val = getProperties().memory_order_val; (void)tblgen_memory_order_val;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps2(*this, tblgen_element_type, "element_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(*this, tblgen_hint_val, "hint_val")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps1(*this, tblgen_memory_order_val, "memory_order_val")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSOperands(1).begin()).getType()) && ((*this->getODSOperands(1).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {x, v} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult AtomicReadOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult AtomicReadOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand vRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> vOperands(vRawOperands);  ::llvm::SMLoc vOperandsLoc;
  (void)vOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand xRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> xOperands(xRawOperands);  ::llvm::SMLoc xOperandsLoc;
  (void)xOperandsLoc;
  ::mlir::omp::ClauseMemoryOrderKindAttr memory_order_valAttr;
  ::mlir::IntegerAttr hint_valAttr;
  ::mlir::Type xRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> xTypes(xRawTypes);
  ::mlir::TypeAttr element_typeAttr;

  vOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(vRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  xOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(xRawOperands[0]))
    return ::mlir::failure();
  bool memory_orderClause = false;
  bool hintClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("memory_order"))) {

  if (memory_orderClause) {
    return parser.emitError(parser.getNameLoc())
          << "`memory_order` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  memory_orderClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseClauseAttr(parser, memory_order_valAttr);
    if (odsResult) return ::mlir::failure();
    if (memory_order_valAttr)
      result.getOrAddProperties<AtomicReadOp::Properties>().memory_order_val = memory_order_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("hint"))) {

  if (hintClause) {
    return parser.emitError(parser.getNameLoc())
          << "`hint` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  hintClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseSynchronizationHint(parser, hint_valAttr);
    if (odsResult) return ::mlir::failure();
    if (hint_valAttr)
      result.getOrAddProperties<AtomicReadOp::Properties>().hint_val = hint_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::omp::PointerLikeType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    xRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(element_typeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (element_typeAttr) result.getOrAddProperties<AtomicReadOp::Properties>().element_type = element_typeAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.resolveOperands(xOperands, xTypes, xOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(vOperands, xTypes[0], vOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtomicReadOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getV();
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter << getX();
  if (false || (getMemoryOrderValAttr())) {
  _odsPrinter << ' ' << "memory_order";
  _odsPrinter << "(";
  printClauseAttr(_odsPrinter, *this, getMemoryOrderValAttr());
  _odsPrinter << ")";
  }
  if (false || (getHintValAttr() && getHintValAttr() != ::mlir::OpBuilder((*this)->getContext()).getIntegerAttr(::mlir::OpBuilder((*this)->getContext()).getIntegerType(64), 0))) {
  _odsPrinter << ' ' << "hint";
  _odsPrinter << "(";
  printSynchronizationHint(_odsPrinter, *this, getHintValAttr());
  _odsPrinter << ")";
  }
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getX().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::omp::PointerLikeType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getElementTypeAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("memory_order_val");
  elidedAttrs.push_back("hint_val");
  elidedAttrs.push_back("element_type");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getHintValAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 0)))
       elidedAttrs.push_back("hint_val");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::AtomicReadOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::AtomicUpdateOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AtomicUpdateOpGenericAdaptorBase::AtomicUpdateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.atomic.update", odsAttrs.getContext());
}

AtomicUpdateOpGenericAdaptorBase::AtomicUpdateOpGenericAdaptorBase(AtomicUpdateOp op) : AtomicUpdateOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AtomicUpdateOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AtomicUpdateOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr AtomicUpdateOpGenericAdaptorBase::getHintValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().hint_val);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 0);
  return attr;
}

uint64_t AtomicUpdateOpGenericAdaptorBase::getHintVal() {
  auto attr = getHintValAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 0).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::omp::ClauseMemoryOrderKindAttr AtomicUpdateOpGenericAdaptorBase::getMemoryOrderValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::omp::ClauseMemoryOrderKindAttr>(getProperties().memory_order_val);
  return attr;
}

::std::optional<::mlir::omp::ClauseMemoryOrderKind> AtomicUpdateOpGenericAdaptorBase::getMemoryOrderVal() {
  auto attr = getMemoryOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseMemoryOrderKind>(attr.getValue()) : (::std::nullopt);
}

::mlir::Region &AtomicUpdateOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange AtomicUpdateOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
AtomicUpdateOpAdaptor::AtomicUpdateOpAdaptor(AtomicUpdateOp op) : AtomicUpdateOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AtomicUpdateOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_hint_val = getProperties().hint_val; (void)tblgen_hint_val;
  auto tblgen_memory_order_val = getProperties().memory_order_val; (void)tblgen_memory_order_val;

  if (tblgen_hint_val && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_hint_val))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_hint_val).getType().isSignlessInteger(64)))))
    return emitError(loc, "'omp.atomic.update' op ""attribute 'hint_val' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_memory_order_val && !((::llvm::isa<::mlir::omp::ClauseMemoryOrderKindAttr>(tblgen_memory_order_val))))
    return emitError(loc, "'omp.atomic.update' op ""attribute 'memory_order_val' failed to satisfy constraint: MemoryOrderKind Clause");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AtomicUpdateOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AtomicUpdateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::omp::PointerLikeType> AtomicUpdateOp::getX() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::omp::PointerLikeType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &AtomicUpdateOp::getXMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AtomicUpdateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AtomicUpdateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &AtomicUpdateOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult AtomicUpdateOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.hint_val;
       auto attr = dict.get("hint_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for hint_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `hint_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.memory_order_val;
       auto attr = dict.get("memory_order_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for memory_order_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `memory_order_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute AtomicUpdateOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.hint_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("hint_val",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.memory_order_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("memory_order_val",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AtomicUpdateOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.hint_val.getAsOpaquePointer()), 
    llvm::hash_value(prop.memory_order_val.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AtomicUpdateOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "hint_val")
      return prop.hint_val;

    if (name == "memory_order_val")
      return prop.memory_order_val;
  return std::nullopt;
}

void AtomicUpdateOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "hint_val") {
       prop.hint_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.hint_val)>>(value);
       return;
    }

    if (name == "memory_order_val") {
       prop.memory_order_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.memory_order_val)>>(value);
       return;
    }
}

void AtomicUpdateOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.hint_val) attrs.append("hint_val", prop.hint_val);

    if (prop.memory_order_val) attrs.append("memory_order_val", prop.memory_order_val);
}

::mlir::LogicalResult AtomicUpdateOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getHintValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(attr, "hint_val", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMemoryOrderValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps1(attr, "memory_order_val", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AtomicUpdateOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.hint_val)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.memory_order_val)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtomicUpdateOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.hint_val);

  writer.writeOptionalAttribute(prop.memory_order_val);
}

::mlir::IntegerAttr AtomicUpdateOp::getHintValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().hint_val);
}

uint64_t AtomicUpdateOp::getHintVal() {
  auto attr = getHintValAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), 0).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::omp::ClauseMemoryOrderKindAttr AtomicUpdateOp::getMemoryOrderValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::omp::ClauseMemoryOrderKindAttr>(getProperties().memory_order_val);
}

::std::optional<::mlir::omp::ClauseMemoryOrderKind> AtomicUpdateOp::getMemoryOrderVal() {
  auto attr = getMemoryOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseMemoryOrderKind>(attr.getValue()) : (::std::nullopt);
}

void AtomicUpdateOp::setHintValAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getHintValAttrName(), attr);
}

void AtomicUpdateOp::setHintVal(::std::optional<uint64_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getHintValAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue));
    (*this)->removeAttr(getHintValAttrName());
}

void AtomicUpdateOp::setMemoryOrderValAttr(::mlir::omp::ClauseMemoryOrderKindAttr attr) {
  (*this)->setAttr(getMemoryOrderValAttrName(), attr);
}

void AtomicUpdateOp::setMemoryOrderVal(::std::optional<::mlir::omp::ClauseMemoryOrderKind> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getMemoryOrderValAttrName(), ::mlir::omp::ClauseMemoryOrderKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getMemoryOrderValAttrName());
}

::mlir::Attribute AtomicUpdateOp::removeHintValAttr() {
    auto &attr = getProperties().hint_val;
    attr = {};
    return attr;
}

::mlir::Attribute AtomicUpdateOp::removeMemoryOrderValAttr() {
    auto &attr = getProperties().memory_order_val;
    attr = {};
    return attr;
}

void AtomicUpdateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, /*optional*/::mlir::IntegerAttr hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.addOperands(x);
  if (hint_val) {
    odsState.getOrAddProperties<Properties>().hint_val = hint_val;
  }
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
  (void)odsState.addRegion();
}

void AtomicUpdateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, /*optional*/::mlir::IntegerAttr hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.addOperands(x);
  if (hint_val) {
    odsState.getOrAddProperties<Properties>().hint_val = hint_val;
  }
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicUpdateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, /*optional*/uint64_t hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.addOperands(x);
  odsState.getOrAddProperties<Properties>().hint_val = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint_val);
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
  (void)odsState.addRegion();
}

void AtomicUpdateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, /*optional*/uint64_t hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.addOperands(x);
  odsState.getOrAddProperties<Properties>().hint_val = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint_val);
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicUpdateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AtomicUpdateOp::verifyInvariantsImpl() {
  auto tblgen_hint_val = getProperties().hint_val; (void)tblgen_hint_val;
  auto tblgen_memory_order_val = getProperties().memory_order_val; (void)tblgen_memory_order_val;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(*this, tblgen_hint_val, "hint_val")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps1(*this, tblgen_memory_order_val, "memory_order_val")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps0(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult AtomicUpdateOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

void AtomicUpdateOp::getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context) {
  results.add(canonicalize);
}

::mlir::ParseResult AtomicUpdateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::omp::ClauseMemoryOrderKindAttr memory_order_valAttr;
  ::mlir::IntegerAttr hint_valAttr;
  ::mlir::OpAsmParser::UnresolvedOperand xRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> xOperands(xRawOperands);  ::llvm::SMLoc xOperandsLoc;
  (void)xOperandsLoc;
  ::mlir::Type xRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> xTypes(xRawTypes);
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  bool memory_orderClause = false;
  bool hintClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("memory_order"))) {

  if (memory_orderClause) {
    return parser.emitError(parser.getNameLoc())
          << "`memory_order` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  memory_orderClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseClauseAttr(parser, memory_order_valAttr);
    if (odsResult) return ::mlir::failure();
    if (memory_order_valAttr)
      result.getOrAddProperties<AtomicUpdateOp::Properties>().memory_order_val = memory_order_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("hint"))) {

  if (hintClause) {
    return parser.emitError(parser.getNameLoc())
          << "`hint` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  hintClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseSynchronizationHint(parser, hint_valAttr);
    if (odsResult) return ::mlir::failure();
    if (hint_valAttr)
      result.getOrAddProperties<AtomicUpdateOp::Properties>().hint_val = hint_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}

  xOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(xRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::omp::PointerLikeType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    xRawTypes[0] = type;
  }

  if (parser.parseRegion(*regionRegion))
    return ::mlir::failure();

  ensureTerminator(*regionRegion, parser.getBuilder(), result.location);
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  result.addRegion(std::move(regionRegion));
  if (parser.resolveOperands(xOperands, xTypes, xOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtomicUpdateOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || (getMemoryOrderValAttr())) {
  _odsPrinter << ' ' << "memory_order";
  _odsPrinter << "(";
  printClauseAttr(_odsPrinter, *this, getMemoryOrderValAttr());
  _odsPrinter << ")";
  }
  if (false || (getHintValAttr() && getHintValAttr() != ::mlir::OpBuilder((*this)->getContext()).getIntegerAttr(::mlir::OpBuilder((*this)->getContext()).getIntegerType(64), 0))) {
  _odsPrinter << ' ' << "hint";
  _odsPrinter << "(";
  printSynchronizationHint(_odsPrinter, *this, getHintValAttr());
  _odsPrinter << ")";
  }
  _odsPrinter << ' ';
  _odsPrinter << getX();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getX().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::omp::PointerLikeType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ';

  {
    bool printTerminator = true;
    if (auto *term = getRegion().empty() ? nullptr : getRegion().begin()->getTerminator()) {
      printTerminator = !term->getAttrDictionary().empty() ||
                        term->getNumOperands() != 0 ||
                        term->getNumResults() != 0;
    }
    _odsPrinter.printRegion(getRegion(), /*printEntryBlockArgs=*/true,
      /*printBlockTerminators=*/printTerminator);
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("memory_order_val");
  elidedAttrs.push_back("hint_val");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getHintValAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 0)))
       elidedAttrs.push_back("hint_val");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void AtomicUpdateOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Read::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
  for (::mlir::Value value : getODSOperands(0))
    effects.emplace_back(::mlir::MemoryEffects::Write::get(), value, 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::AtomicUpdateOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::AtomicWriteOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
AtomicWriteOpGenericAdaptorBase::AtomicWriteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.atomic.write", odsAttrs.getContext());
}

AtomicWriteOpGenericAdaptorBase::AtomicWriteOpGenericAdaptorBase(AtomicWriteOp op) : AtomicWriteOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> AtomicWriteOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr AtomicWriteOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr AtomicWriteOpGenericAdaptorBase::getHintValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().hint_val);
  if (!attr)
    attr = ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 0);
  return attr;
}

uint64_t AtomicWriteOpGenericAdaptorBase::getHintVal() {
  auto attr = getHintValAttr();
    if (!attr)
      return ::mlir::Builder(odsAttrs.getContext()).getIntegerAttr(::mlir::Builder(odsAttrs.getContext()).getIntegerType(64), 0).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::omp::ClauseMemoryOrderKindAttr AtomicWriteOpGenericAdaptorBase::getMemoryOrderValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::omp::ClauseMemoryOrderKindAttr>(getProperties().memory_order_val);
  return attr;
}

::std::optional<::mlir::omp::ClauseMemoryOrderKind> AtomicWriteOpGenericAdaptorBase::getMemoryOrderVal() {
  auto attr = getMemoryOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseMemoryOrderKind>(attr.getValue()) : (::std::nullopt);
}

} // namespace detail
AtomicWriteOpAdaptor::AtomicWriteOpAdaptor(AtomicWriteOp op) : AtomicWriteOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult AtomicWriteOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_hint_val = getProperties().hint_val; (void)tblgen_hint_val;
  auto tblgen_memory_order_val = getProperties().memory_order_val; (void)tblgen_memory_order_val;

  if (tblgen_hint_val && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_hint_val))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_hint_val).getType().isSignlessInteger(64)))))
    return emitError(loc, "'omp.atomic.write' op ""attribute 'hint_val' failed to satisfy constraint: 64-bit signless integer attribute");

  if (tblgen_memory_order_val && !((::llvm::isa<::mlir::omp::ClauseMemoryOrderKindAttr>(tblgen_memory_order_val))))
    return emitError(loc, "'omp.atomic.write' op ""attribute 'memory_order_val' failed to satisfy constraint: MemoryOrderKind Clause");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> AtomicWriteOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range AtomicWriteOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::omp::PointerLikeType> AtomicWriteOp::getX() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::omp::PointerLikeType>>(*getODSOperands(0).begin());
}

::mlir::Value AtomicWriteOp::getExpr() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(1).begin());
}

::mlir::OpOperand &AtomicWriteOp::getXMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &AtomicWriteOp::getExprMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> AtomicWriteOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range AtomicWriteOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult AtomicWriteOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.hint_val;
       auto attr = dict.get("hint_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for hint_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `hint_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.memory_order_val;
       auto attr = dict.get("memory_order_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for memory_order_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `memory_order_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute AtomicWriteOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.hint_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("hint_val",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.memory_order_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("memory_order_val",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code AtomicWriteOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.hint_val.getAsOpaquePointer()), 
    llvm::hash_value(prop.memory_order_val.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> AtomicWriteOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "hint_val")
      return prop.hint_val;

    if (name == "memory_order_val")
      return prop.memory_order_val;
  return std::nullopt;
}

void AtomicWriteOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "hint_val") {
       prop.hint_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.hint_val)>>(value);
       return;
    }

    if (name == "memory_order_val") {
       prop.memory_order_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.memory_order_val)>>(value);
       return;
    }
}

void AtomicWriteOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.hint_val) attrs.append("hint_val", prop.hint_val);

    if (prop.memory_order_val) attrs.append("memory_order_val", prop.memory_order_val);
}

::mlir::LogicalResult AtomicWriteOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getHintValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(attr, "hint_val", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMemoryOrderValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps1(attr, "memory_order_val", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult AtomicWriteOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.hint_val)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.memory_order_val)))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtomicWriteOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.hint_val);

  writer.writeOptionalAttribute(prop.memory_order_val);
}

::mlir::IntegerAttr AtomicWriteOp::getHintValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().hint_val);
}

uint64_t AtomicWriteOp::getHintVal() {
  auto attr = getHintValAttr();
    if (!attr)
      return ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), 0).getValue().getZExtValue();
  return attr.getValue().getZExtValue();
}

::mlir::omp::ClauseMemoryOrderKindAttr AtomicWriteOp::getMemoryOrderValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::omp::ClauseMemoryOrderKindAttr>(getProperties().memory_order_val);
}

::std::optional<::mlir::omp::ClauseMemoryOrderKind> AtomicWriteOp::getMemoryOrderVal() {
  auto attr = getMemoryOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseMemoryOrderKind>(attr.getValue()) : (::std::nullopt);
}

void AtomicWriteOp::setHintValAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getHintValAttrName(), attr);
}

void AtomicWriteOp::setHintVal(::std::optional<uint64_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getHintValAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue));
    (*this)->removeAttr(getHintValAttrName());
}

void AtomicWriteOp::setMemoryOrderValAttr(::mlir::omp::ClauseMemoryOrderKindAttr attr) {
  (*this)->setAttr(getMemoryOrderValAttrName(), attr);
}

void AtomicWriteOp::setMemoryOrderVal(::std::optional<::mlir::omp::ClauseMemoryOrderKind> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getMemoryOrderValAttrName(), ::mlir::omp::ClauseMemoryOrderKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getMemoryOrderValAttrName());
}

::mlir::Attribute AtomicWriteOp::removeHintValAttr() {
    auto &attr = getProperties().hint_val;
    attr = {};
    return attr;
}

::mlir::Attribute AtomicWriteOp::removeMemoryOrderValAttr() {
    auto &attr = getProperties().memory_order_val;
    attr = {};
    return attr;
}

void AtomicWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, ::mlir::Value expr, /*optional*/::mlir::IntegerAttr hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.addOperands(x);
  odsState.addOperands(expr);
  if (hint_val) {
    odsState.getOrAddProperties<Properties>().hint_val = hint_val;
  }
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
}

void AtomicWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value expr, /*optional*/::mlir::IntegerAttr hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.addOperands(x);
  odsState.addOperands(expr);
  if (hint_val) {
    odsState.getOrAddProperties<Properties>().hint_val = hint_val;
  }
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value x, ::mlir::Value expr, /*optional*/uint64_t hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.addOperands(x);
  odsState.addOperands(expr);
  odsState.getOrAddProperties<Properties>().hint_val = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint_val);
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
}

void AtomicWriteOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value x, ::mlir::Value expr, /*optional*/uint64_t hint_val, /*optional*/::mlir::omp::ClauseMemoryOrderKindAttr memory_order_val) {
  odsState.addOperands(x);
  odsState.addOperands(expr);
  odsState.getOrAddProperties<Properties>().hint_val = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint_val);
  if (memory_order_val) {
    odsState.getOrAddProperties<Properties>().memory_order_val = memory_order_val;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void AtomicWriteOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult AtomicWriteOp::verifyInvariantsImpl() {
  auto tblgen_hint_val = getProperties().hint_val; (void)tblgen_hint_val;
  auto tblgen_memory_order_val = getProperties().memory_order_val; (void)tblgen_memory_order_val;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(*this, tblgen_hint_val, "hint_val")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps1(*this, tblgen_memory_order_val, "memory_order_val")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult AtomicWriteOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult AtomicWriteOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand xRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> xOperands(xRawOperands);  ::llvm::SMLoc xOperandsLoc;
  (void)xOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand exprRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> exprOperands(exprRawOperands);  ::llvm::SMLoc exprOperandsLoc;
  (void)exprOperandsLoc;
  ::mlir::IntegerAttr hint_valAttr;
  ::mlir::omp::ClauseMemoryOrderKindAttr memory_order_valAttr;
  ::mlir::Type xRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> xTypes(xRawTypes);
  ::mlir::Type exprRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> exprTypes(exprRawTypes);

  xOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(xRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseEqual())
    return ::mlir::failure();

  exprOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(exprRawOperands[0]))
    return ::mlir::failure();
  bool hintClause = false;
  bool memory_orderClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("hint"))) {

  if (hintClause) {
    return parser.emitError(parser.getNameLoc())
          << "`hint` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  hintClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseSynchronizationHint(parser, hint_valAttr);
    if (odsResult) return ::mlir::failure();
    if (hint_valAttr)
      result.getOrAddProperties<AtomicWriteOp::Properties>().hint_val = hint_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("memory_order"))) {

  if (memory_orderClause) {
    return parser.emitError(parser.getNameLoc())
          << "`memory_order` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  memory_orderClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseClauseAttr(parser, memory_order_valAttr);
    if (odsResult) return ::mlir::failure();
    if (memory_order_valAttr)
      result.getOrAddProperties<AtomicWriteOp::Properties>().memory_order_val = memory_order_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::omp::PointerLikeType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    xRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    exprRawTypes[0] = type;
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
  if (parser.resolveOperands(xOperands, xTypes, xOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(exprOperands, exprTypes, exprOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void AtomicWriteOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getX();
  _odsPrinter << ' ' << "=";
  _odsPrinter << ' ';
  _odsPrinter << getExpr();
  if (false || (getHintValAttr() && getHintValAttr() != ::mlir::OpBuilder((*this)->getContext()).getIntegerAttr(::mlir::OpBuilder((*this)->getContext()).getIntegerType(64), 0))) {
  _odsPrinter << ' ' << "hint";
  _odsPrinter << "(";
  printSynchronizationHint(_odsPrinter, *this, getHintValAttr());
  _odsPrinter << ")";
  }
  if (false || (getMemoryOrderValAttr())) {
  _odsPrinter << ' ' << "memory_order";
  _odsPrinter << "(";
  printClauseAttr(_odsPrinter, *this, getMemoryOrderValAttr());
  _odsPrinter << ")";
  }
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getX().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::omp::PointerLikeType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getExpr().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("hint_val");
  elidedAttrs.push_back("memory_order_val");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getHintValAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 0)))
       elidedAttrs.push_back("hint_val");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::AtomicWriteOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::BarrierOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
BarrierOpGenericAdaptorBase::BarrierOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.barrier", odsAttrs.getContext());
}

BarrierOpGenericAdaptorBase::BarrierOpGenericAdaptorBase(BarrierOp op) : BarrierOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> BarrierOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr BarrierOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
BarrierOpAdaptor::BarrierOpAdaptor(BarrierOp op) : BarrierOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult BarrierOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> BarrierOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range BarrierOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> BarrierOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range BarrierOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void BarrierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void BarrierOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void BarrierOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult BarrierOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult BarrierOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult BarrierOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void BarrierOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::BarrierOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::CancelOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CancelOpGenericAdaptorBase::CancelOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.cancel", odsAttrs.getContext());
}

CancelOpGenericAdaptorBase::CancelOpGenericAdaptorBase(CancelOp op) : CancelOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CancelOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr CancelOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::omp::ClauseCancellationConstructTypeAttr CancelOpGenericAdaptorBase::getCancellationConstructTypeValAttr() {
  auto attr = ::llvm::cast<::mlir::omp::ClauseCancellationConstructTypeAttr>(getProperties().cancellation_construct_type_val);
  return attr;
}

::mlir::omp::ClauseCancellationConstructType CancelOpGenericAdaptorBase::getCancellationConstructTypeVal() {
  auto attr = getCancellationConstructTypeValAttr();
  return attr.getValue();
}

} // namespace detail
CancelOpAdaptor::CancelOpAdaptor(CancelOp op) : CancelOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CancelOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_cancellation_construct_type_val = getProperties().cancellation_construct_type_val; (void)tblgen_cancellation_construct_type_val;
  if (!tblgen_cancellation_construct_type_val) return emitError(loc, "'omp.cancel' op ""requires attribute 'cancellation_construct_type_val'");

  if (tblgen_cancellation_construct_type_val && !((::llvm::isa<::mlir::omp::ClauseCancellationConstructTypeAttr>(tblgen_cancellation_construct_type_val))))
    return emitError(loc, "'omp.cancel' op ""attribute 'cancellation_construct_type_val' failed to satisfy constraint: CancellationConstructType Clause");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CancelOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range CancelOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> CancelOp::getIfExpr() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::MutableOperandRange CancelOp::getIfExprMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> CancelOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CancelOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult CancelOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.cancellation_construct_type_val;
       auto attr = dict.get("cancellation_construct_type_val");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for cancellation_construct_type_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `cancellation_construct_type_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute CancelOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.cancellation_construct_type_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("cancellation_construct_type_val",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CancelOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.cancellation_construct_type_val.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CancelOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "cancellation_construct_type_val")
      return prop.cancellation_construct_type_val;
  return std::nullopt;
}

void CancelOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "cancellation_construct_type_val") {
       prop.cancellation_construct_type_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.cancellation_construct_type_val)>>(value);
       return;
    }
}

void CancelOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.cancellation_construct_type_val) attrs.append("cancellation_construct_type_val", prop.cancellation_construct_type_val);
}

::mlir::LogicalResult CancelOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getCancellationConstructTypeValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps3(attr, "cancellation_construct_type_val", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CancelOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.cancellation_construct_type_val)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CancelOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.cancellation_construct_type_val);
}

::mlir::omp::ClauseCancellationConstructTypeAttr CancelOp::getCancellationConstructTypeValAttr() {
  return ::llvm::cast<::mlir::omp::ClauseCancellationConstructTypeAttr>(getProperties().cancellation_construct_type_val);
}

::mlir::omp::ClauseCancellationConstructType CancelOp::getCancellationConstructTypeVal() {
  auto attr = getCancellationConstructTypeValAttr();
  return attr.getValue();
}

void CancelOp::setCancellationConstructTypeValAttr(::mlir::omp::ClauseCancellationConstructTypeAttr attr) {
  (*this)->setAttr(getCancellationConstructTypeValAttrName(), attr);
}

void CancelOp::setCancellationConstructTypeVal(::mlir::omp::ClauseCancellationConstructType attrValue) {
  (*this)->setAttr(getCancellationConstructTypeValAttrName(), ::mlir::omp::ClauseCancellationConstructTypeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CancelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::omp::ClauseCancellationConstructTypeAttr cancellation_construct_type_val, /*optional*/::mlir::Value if_expr) {
  if (if_expr)
    odsState.addOperands(if_expr);
  odsState.getOrAddProperties<Properties>().cancellation_construct_type_val = cancellation_construct_type_val;
}

void CancelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::omp::ClauseCancellationConstructTypeAttr cancellation_construct_type_val, /*optional*/::mlir::Value if_expr) {
  if (if_expr)
    odsState.addOperands(if_expr);
  odsState.getOrAddProperties<Properties>().cancellation_construct_type_val = cancellation_construct_type_val;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CancelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::omp::ClauseCancellationConstructType cancellation_construct_type_val, /*optional*/::mlir::Value if_expr) {
  if (if_expr)
    odsState.addOperands(if_expr);
  odsState.getOrAddProperties<Properties>().cancellation_construct_type_val = ::mlir::omp::ClauseCancellationConstructTypeAttr::get(odsBuilder.getContext(), cancellation_construct_type_val);
}

void CancelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::omp::ClauseCancellationConstructType cancellation_construct_type_val, /*optional*/::mlir::Value if_expr) {
  if (if_expr)
    odsState.addOperands(if_expr);
  odsState.getOrAddProperties<Properties>().cancellation_construct_type_val = ::mlir::omp::ClauseCancellationConstructTypeAttr::get(odsBuilder.getContext(), cancellation_construct_type_val);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CancelOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CancelOp::verifyInvariantsImpl() {
  auto tblgen_cancellation_construct_type_val = getProperties().cancellation_construct_type_val; (void)tblgen_cancellation_construct_type_val;
  if (!tblgen_cancellation_construct_type_val) return emitOpError("requires attribute 'cancellation_construct_type_val'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps3(*this, tblgen_cancellation_construct_type_val, "cancellation_construct_type_val")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult CancelOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult CancelOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::omp::ClauseCancellationConstructTypeAttr cancellation_construct_type_valAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> if_exprOperands;
  ::llvm::SMLoc if_exprOperandsLoc;
  (void)if_exprOperandsLoc;
  if (parser.parseKeyword("cancellation_construct_type"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseClauseAttr(parser, cancellation_construct_type_valAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<CancelOp::Properties>().cancellation_construct_type_val = cancellation_construct_type_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
  if (::mlir::succeeded(parser.parseOptionalKeyword("if"))) {
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    if_exprOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
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
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(1);
  if (parser.resolveOperands(if_exprOperands, odsBuildableType0, if_exprOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void CancelOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << "cancellation_construct_type";
  _odsPrinter << "(";
  printClauseAttr(_odsPrinter, *this, getCancellationConstructTypeValAttr());
  _odsPrinter << ")";
  if (getIfExpr()) {
    _odsPrinter << ' ' << "if";
    _odsPrinter << "(";
    if (::mlir::Value value = getIfExpr())
      _odsPrinter << value;
    _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("cancellation_construct_type_val");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::CancelOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::CancellationPointOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CancellationPointOpGenericAdaptorBase::CancellationPointOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.cancellationpoint", odsAttrs.getContext());
}

CancellationPointOpGenericAdaptorBase::CancellationPointOpGenericAdaptorBase(CancellationPointOp op) : CancellationPointOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CancellationPointOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CancellationPointOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::omp::ClauseCancellationConstructTypeAttr CancellationPointOpGenericAdaptorBase::getCancellationConstructTypeValAttr() {
  auto attr = ::llvm::cast<::mlir::omp::ClauseCancellationConstructTypeAttr>(getProperties().cancellation_construct_type_val);
  return attr;
}

::mlir::omp::ClauseCancellationConstructType CancellationPointOpGenericAdaptorBase::getCancellationConstructTypeVal() {
  auto attr = getCancellationConstructTypeValAttr();
  return attr.getValue();
}

} // namespace detail
CancellationPointOpAdaptor::CancellationPointOpAdaptor(CancellationPointOp op) : CancellationPointOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CancellationPointOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_cancellation_construct_type_val = getProperties().cancellation_construct_type_val; (void)tblgen_cancellation_construct_type_val;
  if (!tblgen_cancellation_construct_type_val) return emitError(loc, "'omp.cancellationpoint' op ""requires attribute 'cancellation_construct_type_val'");

  if (tblgen_cancellation_construct_type_val && !((::llvm::isa<::mlir::omp::ClauseCancellationConstructTypeAttr>(tblgen_cancellation_construct_type_val))))
    return emitError(loc, "'omp.cancellationpoint' op ""attribute 'cancellation_construct_type_val' failed to satisfy constraint: CancellationConstructType Clause");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CancellationPointOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CancellationPointOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> CancellationPointOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CancellationPointOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult CancellationPointOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.cancellation_construct_type_val;
       auto attr = dict.get("cancellation_construct_type_val");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for cancellation_construct_type_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `cancellation_construct_type_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute CancellationPointOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.cancellation_construct_type_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("cancellation_construct_type_val",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CancellationPointOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.cancellation_construct_type_val.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CancellationPointOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "cancellation_construct_type_val")
      return prop.cancellation_construct_type_val;
  return std::nullopt;
}

void CancellationPointOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "cancellation_construct_type_val") {
       prop.cancellation_construct_type_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.cancellation_construct_type_val)>>(value);
       return;
    }
}

void CancellationPointOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.cancellation_construct_type_val) attrs.append("cancellation_construct_type_val", prop.cancellation_construct_type_val);
}

::mlir::LogicalResult CancellationPointOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getCancellationConstructTypeValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps3(attr, "cancellation_construct_type_val", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CancellationPointOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.cancellation_construct_type_val)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CancellationPointOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.cancellation_construct_type_val);
}

::mlir::omp::ClauseCancellationConstructTypeAttr CancellationPointOp::getCancellationConstructTypeValAttr() {
  return ::llvm::cast<::mlir::omp::ClauseCancellationConstructTypeAttr>(getProperties().cancellation_construct_type_val);
}

::mlir::omp::ClauseCancellationConstructType CancellationPointOp::getCancellationConstructTypeVal() {
  auto attr = getCancellationConstructTypeValAttr();
  return attr.getValue();
}

void CancellationPointOp::setCancellationConstructTypeValAttr(::mlir::omp::ClauseCancellationConstructTypeAttr attr) {
  (*this)->setAttr(getCancellationConstructTypeValAttrName(), attr);
}

void CancellationPointOp::setCancellationConstructTypeVal(::mlir::omp::ClauseCancellationConstructType attrValue) {
  (*this)->setAttr(getCancellationConstructTypeValAttrName(), ::mlir::omp::ClauseCancellationConstructTypeAttr::get(::mlir::Builder((*this)->getContext()).getContext(), attrValue));
}

void CancellationPointOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::omp::ClauseCancellationConstructTypeAttr cancellation_construct_type_val) {
  odsState.getOrAddProperties<Properties>().cancellation_construct_type_val = cancellation_construct_type_val;
}

void CancellationPointOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::omp::ClauseCancellationConstructTypeAttr cancellation_construct_type_val) {
  odsState.getOrAddProperties<Properties>().cancellation_construct_type_val = cancellation_construct_type_val;
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CancellationPointOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::omp::ClauseCancellationConstructType cancellation_construct_type_val) {
  odsState.getOrAddProperties<Properties>().cancellation_construct_type_val = ::mlir::omp::ClauseCancellationConstructTypeAttr::get(odsBuilder.getContext(), cancellation_construct_type_val);
}

void CancellationPointOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::omp::ClauseCancellationConstructType cancellation_construct_type_val) {
  odsState.getOrAddProperties<Properties>().cancellation_construct_type_val = ::mlir::omp::ClauseCancellationConstructTypeAttr::get(odsBuilder.getContext(), cancellation_construct_type_val);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CancellationPointOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CancellationPointOp::verifyInvariantsImpl() {
  auto tblgen_cancellation_construct_type_val = getProperties().cancellation_construct_type_val; (void)tblgen_cancellation_construct_type_val;
  if (!tblgen_cancellation_construct_type_val) return emitOpError("requires attribute 'cancellation_construct_type_val'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps3(*this, tblgen_cancellation_construct_type_val, "cancellation_construct_type_val")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult CancellationPointOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult CancellationPointOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::omp::ClauseCancellationConstructTypeAttr cancellation_construct_type_valAttr;
  if (parser.parseKeyword("cancellation_construct_type"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseClauseAttr(parser, cancellation_construct_type_valAttr);
    if (odsResult) return ::mlir::failure();
    result.getOrAddProperties<CancellationPointOp::Properties>().cancellation_construct_type_val = cancellation_construct_type_valAttr;
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

void CancellationPointOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << "cancellation_construct_type";
  _odsPrinter << "(";
  printClauseAttr(_odsPrinter, *this, getCancellationConstructTypeValAttr());
  _odsPrinter << ")";
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("cancellation_construct_type_val");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::CancellationPointOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::CriticalDeclareOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CriticalDeclareOpGenericAdaptorBase::CriticalDeclareOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.critical.declare", odsAttrs.getContext());
}

CriticalDeclareOpGenericAdaptorBase::CriticalDeclareOpGenericAdaptorBase(CriticalDeclareOp op) : CriticalDeclareOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CriticalDeclareOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CriticalDeclareOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr CriticalDeclareOpGenericAdaptorBase::getSymNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
  return attr;
}

::llvm::StringRef CriticalDeclareOpGenericAdaptorBase::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::IntegerAttr CriticalDeclareOpGenericAdaptorBase::getHintValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().hint_val);
  return attr;
}

uint64_t CriticalDeclareOpGenericAdaptorBase::getHintVal() {
  auto attr = getHintValAttr();
  return attr.getValue().getZExtValue();
}

} // namespace detail
CriticalDeclareOpAdaptor::CriticalDeclareOpAdaptor(CriticalDeclareOp op) : CriticalDeclareOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CriticalDeclareOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_hint_val = getProperties().hint_val; (void)tblgen_hint_val;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitError(loc, "'omp.critical.declare' op ""requires attribute 'sym_name'");

  if (tblgen_sym_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_name))))
    return emitError(loc, "'omp.critical.declare' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");

  if (tblgen_hint_val && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_hint_val))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_hint_val).getType().isSignlessInteger(64)))))
    return emitError(loc, "'omp.critical.declare' op ""attribute 'hint_val' failed to satisfy constraint: 64-bit signless integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CriticalDeclareOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CriticalDeclareOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> CriticalDeclareOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CriticalDeclareOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult CriticalDeclareOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.hint_val;
       auto attr = dict.get("hint_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for hint_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `hint_val` in property conversion: " << attr;
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

::mlir::Attribute CriticalDeclareOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.hint_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("hint_val",
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

llvm::hash_code CriticalDeclareOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.hint_val.getAsOpaquePointer()), 
    llvm::hash_value(prop.sym_name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CriticalDeclareOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "hint_val")
      return prop.hint_val;

    if (name == "sym_name")
      return prop.sym_name;
  return std::nullopt;
}

void CriticalDeclareOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "hint_val") {
       prop.hint_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.hint_val)>>(value);
       return;
    }

    if (name == "sym_name") {
       prop.sym_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sym_name)>>(value);
       return;
    }
}

void CriticalDeclareOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.hint_val) attrs.append("hint_val", prop.hint_val);

    if (prop.sym_name) attrs.append("sym_name", prop.sym_name);
}

::mlir::LogicalResult CriticalDeclareOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getHintValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(attr, "hint_val", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSymNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps4(attr, "sym_name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CriticalDeclareOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.hint_val)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.sym_name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CriticalDeclareOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.hint_val);
  writer.writeAttribute(prop.sym_name);
}

::mlir::StringAttr CriticalDeclareOp::getSymNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
}

::llvm::StringRef CriticalDeclareOp::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::IntegerAttr CriticalDeclareOp::getHintValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().hint_val);
}

uint64_t CriticalDeclareOp::getHintVal() {
  auto attr = getHintValAttr();
  return attr.getValue().getZExtValue();
}

void CriticalDeclareOp::setSymNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymNameAttrName(), attr);
}

void CriticalDeclareOp::setSymName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getSymNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void CriticalDeclareOp::setHintValAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getHintValAttrName(), attr);
}

void CriticalDeclareOp::setHintVal(uint64_t attrValue) {
  (*this)->setAttr(getHintValAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), attrValue));
}

void CriticalDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::IntegerAttr hint_val) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  if (hint_val) {
    odsState.getOrAddProperties<Properties>().hint_val = hint_val;
  }
}

void CriticalDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::IntegerAttr hint_val) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  if (hint_val) {
    odsState.getOrAddProperties<Properties>().hint_val = hint_val;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CriticalDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, uint64_t hint_val) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().hint_val = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint_val);
}

void CriticalDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, uint64_t hint_val) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().hint_val = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), hint_val);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CriticalDeclareOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void CriticalDeclareOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.hint_val)
    properties.hint_val = odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 0);
}

::mlir::LogicalResult CriticalDeclareOp::verifyInvariantsImpl() {
  auto tblgen_hint_val = getProperties().hint_val; (void)tblgen_hint_val;
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitOpError("requires attribute 'sym_name'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps4(*this, tblgen_sym_name, "sym_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps0(*this, tblgen_hint_val, "hint_val")))
    return ::mlir::failure();
  return ::mlir::success();
}

::mlir::LogicalResult CriticalDeclareOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult CriticalDeclareOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr sym_nameAttr;
  ::mlir::IntegerAttr hint_valAttr;

  if (parser.parseSymbolName(sym_nameAttr))
    return ::mlir::failure();
  if (sym_nameAttr) result.getOrAddProperties<CriticalDeclareOp::Properties>().sym_name = sym_nameAttr;
  bool hintClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("hint"))) {

  if (hintClause) {
    return parser.emitError(parser.getNameLoc())
          << "`hint` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  hintClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseSynchronizationHint(parser, hint_valAttr);
    if (odsResult) return ::mlir::failure();
    if (hint_valAttr)
      result.getOrAddProperties<CriticalDeclareOp::Properties>().hint_val = hint_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
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
  return ::mlir::success();
}

void CriticalDeclareOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printSymbolName(getSymNameAttr().getValue());
  if (false || (getHintValAttr() && getHintValAttr() != ::mlir::OpBuilder((*this)->getContext()).getIntegerAttr(::mlir::OpBuilder((*this)->getContext()).getIntegerType(64), 0))) {
  _odsPrinter << ' ' << "hint";
  _odsPrinter << "(";
  printSynchronizationHint(_odsPrinter, *this, getHintValAttr());
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("sym_name");
  elidedAttrs.push_back("hint_val");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getHintValAttr();
     if(attr && (attr == odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64), 0)))
       elidedAttrs.push_back("hint_val");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::CriticalDeclareOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::CriticalOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
CriticalOpGenericAdaptorBase::CriticalOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.critical", odsAttrs.getContext());
}

CriticalOpGenericAdaptorBase::CriticalOpGenericAdaptorBase(CriticalOp op) : CriticalOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> CriticalOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr CriticalOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::FlatSymbolRefAttr CriticalOpGenericAdaptorBase::getNameAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::FlatSymbolRefAttr>(getProperties().name);
  return attr;
}

::std::optional< ::llvm::StringRef > CriticalOpGenericAdaptorBase::getName() {
  auto attr = getNameAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

::mlir::Region &CriticalOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange CriticalOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
CriticalOpAdaptor::CriticalOpAdaptor(CriticalOp op) : CriticalOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult CriticalOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_name = getProperties().name; (void)tblgen_name;

  if (tblgen_name && !((::llvm::isa<::mlir::FlatSymbolRefAttr>(tblgen_name))))
    return emitError(loc, "'omp.critical' op ""attribute 'name' failed to satisfy constraint: flat symbol reference attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> CriticalOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range CriticalOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> CriticalOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range CriticalOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &CriticalOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult CriticalOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.name;
       auto attr = dict.get("name");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute CriticalOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("name",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code CriticalOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.name.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> CriticalOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "name")
      return prop.name;
  return std::nullopt;
}

void CriticalOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "name") {
       prop.name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.name)>>(value);
       return;
    }
}

void CriticalOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.name) attrs.append("name", prop.name);
}

::mlir::LogicalResult CriticalOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps5(attr, "name", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult CriticalOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.name)))
    return ::mlir::failure();
  return ::mlir::success();
}

void CriticalOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.name);
}

::mlir::FlatSymbolRefAttr CriticalOp::getNameAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::FlatSymbolRefAttr>(getProperties().name);
}

::std::optional< ::llvm::StringRef > CriticalOp::getName() {
  auto attr = getNameAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

void CriticalOp::setNameAttr(::mlir::FlatSymbolRefAttr attr) {
  (*this)->setAttr(getNameAttrName(), attr);
}

void CriticalOp::setName(::std::optional<::llvm::StringRef> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNameAttrName(), ::mlir::SymbolRefAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getNameAttrName());
}

::mlir::Attribute CriticalOp::removeNameAttr() {
    auto &attr = getProperties().name;
    attr = {};
    return attr;
}

void CriticalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::FlatSymbolRefAttr name) {
  if (name) {
    odsState.getOrAddProperties<Properties>().name = name;
  }
  (void)odsState.addRegion();
}

void CriticalOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::FlatSymbolRefAttr name) {
  if (name) {
    odsState.getOrAddProperties<Properties>().name = name;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void CriticalOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult CriticalOp::verifyInvariantsImpl() {
  auto tblgen_name = getProperties().name; (void)tblgen_name;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps5(*this, tblgen_name, "name")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult CriticalOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult CriticalOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::FlatSymbolRefAttr nameAttr;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  if (::mlir::succeeded(parser.parseOptionalLParen())) {

  if (parser.parseCustomAttributeWithFallback(nameAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (nameAttr) result.getOrAddProperties<CriticalOp::Properties>().name = nameAttr;
  if (parser.parseRParen())
    return ::mlir::failure();
  }

  if (parser.parseRegion(*regionRegion))
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
  result.addRegion(std::move(regionRegion));
  return ::mlir::success();
}

void CriticalOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getNameAttr()) {
    _odsPrinter << "(";
    _odsPrinter.printAttributeWithoutType(getNameAttr());
    _odsPrinter << ")";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("name");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::CriticalOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::DataBoundsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DataBoundsOpGenericAdaptorBase::DataBoundsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.bounds", odsAttrs.getContext());
}

DataBoundsOpGenericAdaptorBase::DataBoundsOpGenericAdaptorBase(DataBoundsOp op) : DataBoundsOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DataBoundsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr DataBoundsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::BoolAttr DataBoundsOpGenericAdaptorBase::getStrideInBytesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().stride_in_bytes);
  return attr;
}

bool DataBoundsOpGenericAdaptorBase::getStrideInBytes() {
  auto attr = getStrideInBytesAttr();
  return attr.getValue();
}

} // namespace detail
DataBoundsOpAdaptor::DataBoundsOpAdaptor(DataBoundsOp op) : DataBoundsOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DataBoundsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_stride_in_bytes = getProperties().stride_in_bytes; (void)tblgen_stride_in_bytes;

  if (tblgen_stride_in_bytes && !((::llvm::isa<::mlir::BoolAttr>(tblgen_stride_in_bytes))))
    return emitError(loc, "'omp.bounds' op ""attribute 'stride_in_bytes' failed to satisfy constraint: bool attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DataBoundsOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range DataBoundsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DataBoundsOp::getLowerBound() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Value DataBoundsOp::getUpperBound() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Value DataBoundsOp::getExtent() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Value DataBoundsOp::getStride() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Value DataBoundsOp::getStartIdx() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange DataBoundsOp::getLowerBoundMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange DataBoundsOp::getUpperBoundMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange DataBoundsOp::getExtentMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange DataBoundsOp::getStrideMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange DataBoundsOp::getStartIdxMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> DataBoundsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DataBoundsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::omp::DataBoundsType> DataBoundsOp::getResult() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::omp::DataBoundsType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult DataBoundsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.stride_in_bytes;
       auto attr = dict.get("stride_in_bytes");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for stride_in_bytes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `stride_in_bytes` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute DataBoundsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.stride_in_bytes;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("stride_in_bytes",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code DataBoundsOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.stride_in_bytes.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> DataBoundsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "stride_in_bytes")
      return prop.stride_in_bytes;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void DataBoundsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "stride_in_bytes") {
       prop.stride_in_bytes = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.stride_in_bytes)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void DataBoundsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.stride_in_bytes) attrs.append("stride_in_bytes", prop.stride_in_bytes);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult DataBoundsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getStrideInBytesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps6(attr, "stride_in_bytes", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult DataBoundsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  if (::mlir::failed(reader.readOptionalAttribute(prop.stride_in_bytes)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void DataBoundsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  writer.writeOptionalAttribute(prop.stride_in_bytes);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::BoolAttr DataBoundsOp::getStrideInBytesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::BoolAttr>(getProperties().stride_in_bytes);
}

bool DataBoundsOp::getStrideInBytes() {
  auto attr = getStrideInBytesAttr();
  return attr.getValue();
}

void DataBoundsOp::setStrideInBytesAttr(::mlir::BoolAttr attr) {
  (*this)->setAttr(getStrideInBytesAttrName(), attr);
}

void DataBoundsOp::setStrideInBytes(bool attrValue) {
  (*this)->setAttr(getStrideInBytesAttrName(), ::mlir::Builder((*this)->getContext()).getBoolAttr(attrValue));
}

void DataBoundsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, /*optional*/::mlir::Value lower_bound, /*optional*/::mlir::Value upper_bound, /*optional*/::mlir::Value extent, /*optional*/::mlir::Value stride, ::mlir::BoolAttr stride_in_bytes, /*optional*/::mlir::Value start_idx) {
  if (lower_bound)
    odsState.addOperands(lower_bound);
  if (upper_bound)
    odsState.addOperands(upper_bound);
  if (extent)
    odsState.addOperands(extent);
  if (stride)
    odsState.addOperands(stride);
  if (start_idx)
    odsState.addOperands(start_idx);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(lower_bound ? 1 : 0), (upper_bound ? 1 : 0), (extent ? 1 : 0), (stride ? 1 : 0), (start_idx ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (stride_in_bytes) {
    odsState.getOrAddProperties<Properties>().stride_in_bytes = stride_in_bytes;
  }
  odsState.addTypes(result);
}

void DataBoundsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value lower_bound, /*optional*/::mlir::Value upper_bound, /*optional*/::mlir::Value extent, /*optional*/::mlir::Value stride, ::mlir::BoolAttr stride_in_bytes, /*optional*/::mlir::Value start_idx) {
  if (lower_bound)
    odsState.addOperands(lower_bound);
  if (upper_bound)
    odsState.addOperands(upper_bound);
  if (extent)
    odsState.addOperands(extent);
  if (stride)
    odsState.addOperands(stride);
  if (start_idx)
    odsState.addOperands(start_idx);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(lower_bound ? 1 : 0), (upper_bound ? 1 : 0), (extent ? 1 : 0), (stride ? 1 : 0), (start_idx ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (stride_in_bytes) {
    odsState.getOrAddProperties<Properties>().stride_in_bytes = stride_in_bytes;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DataBoundsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, /*optional*/::mlir::Value lower_bound, /*optional*/::mlir::Value upper_bound, /*optional*/::mlir::Value extent, /*optional*/::mlir::Value stride, bool stride_in_bytes, /*optional*/::mlir::Value start_idx) {
  if (lower_bound)
    odsState.addOperands(lower_bound);
  if (upper_bound)
    odsState.addOperands(upper_bound);
  if (extent)
    odsState.addOperands(extent);
  if (stride)
    odsState.addOperands(stride);
  if (start_idx)
    odsState.addOperands(start_idx);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(lower_bound ? 1 : 0), (upper_bound ? 1 : 0), (extent ? 1 : 0), (stride ? 1 : 0), (start_idx ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().stride_in_bytes = odsBuilder.getBoolAttr(stride_in_bytes);
  odsState.addTypes(result);
}

void DataBoundsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value lower_bound, /*optional*/::mlir::Value upper_bound, /*optional*/::mlir::Value extent, /*optional*/::mlir::Value stride, bool stride_in_bytes, /*optional*/::mlir::Value start_idx) {
  if (lower_bound)
    odsState.addOperands(lower_bound);
  if (upper_bound)
    odsState.addOperands(upper_bound);
  if (extent)
    odsState.addOperands(extent);
  if (stride)
    odsState.addOperands(stride);
  if (start_idx)
    odsState.addOperands(start_idx);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(lower_bound ? 1 : 0), (upper_bound ? 1 : 0), (extent ? 1 : 0), (stride ? 1 : 0), (start_idx ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().stride_in_bytes = odsBuilder.getBoolAttr(stride_in_bytes);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DataBoundsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void DataBoundsOp::populateDefaultProperties(::mlir::OperationName opName, Properties &properties) {
  ::mlir::Builder odsBuilder(opName.getContext());
  if (!properties.stride_in_bytes)
    properties.stride_in_bytes = odsBuilder.getBoolAttr(false);
}

::mlir::LogicalResult DataBoundsOp::verifyInvariantsImpl() {
  auto tblgen_stride_in_bytes = getProperties().stride_in_bytes; (void)tblgen_stride_in_bytes;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps6(*this, tblgen_stride_in_bytes, "stride_in_bytes")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps4(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult DataBoundsOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult DataBoundsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lower_boundOperands;
  ::llvm::SMLoc lower_boundOperandsLoc;
  (void)lower_boundOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> lower_boundTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> upper_boundOperands;
  ::llvm::SMLoc upper_boundOperandsLoc;
  (void)upper_boundOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> upper_boundTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> extentOperands;
  ::llvm::SMLoc extentOperandsLoc;
  (void)extentOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> extentTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> strideOperands;
  ::llvm::SMLoc strideOperandsLoc;
  (void)strideOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> strideTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> start_idxOperands;
  ::llvm::SMLoc start_idxOperandsLoc;
  (void)start_idxOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> start_idxTypes;
  bool lower_boundClause = false;
  bool upper_boundClause = false;
  bool extentClause = false;
  bool strideClause = false;
  bool start_idxClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("lower_bound"))) {

  if (lower_boundClause) {
    return parser.emitError(parser.getNameLoc())
          << "`lower_bound` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  lower_boundClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    lower_boundOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lower_boundOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      lower_boundTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("upper_bound"))) {

  if (upper_boundClause) {
    return parser.emitError(parser.getNameLoc())
          << "`upper_bound` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  upper_boundClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    upper_boundOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      upper_boundOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      upper_boundTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("extent"))) {

  if (extentClause) {
    return parser.emitError(parser.getNameLoc())
          << "`extent` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  extentClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    extentOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      extentOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      extentTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("stride"))) {

  if (strideClause) {
    return parser.emitError(parser.getNameLoc())
          << "`stride` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  strideClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    strideOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      strideOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      strideTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("start_idx"))) {

  if (start_idxClause) {
    return parser.emitError(parser.getNameLoc())
          << "`start_idx` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  start_idxClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    start_idxOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      start_idxOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      start_idxTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
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
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lower_boundOperands.size()), static_cast<int32_t>(upper_boundOperands.size()), static_cast<int32_t>(extentOperands.size()), static_cast<int32_t>(strideOperands.size()), static_cast<int32_t>(start_idxOperands.size())}), result.getOrAddProperties<DataBoundsOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::omp::DataBoundsType>();
  result.addTypes(odsBuildableType0);
  if (parser.resolveOperands(lower_boundOperands, lower_boundTypes, lower_boundOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(upper_boundOperands, upper_boundTypes, upper_boundOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(extentOperands, extentTypes, extentOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(strideOperands, strideTypes, strideOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(start_idxOperands, start_idxTypes, start_idxOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DataBoundsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getLowerBound()) {
  _odsPrinter << ' ' << "lower_bound";
  _odsPrinter << "(";
  if (::mlir::Value value = getLowerBound())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getLowerBound() ? ::llvm::ArrayRef<::mlir::Type>(getLowerBound().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getUpperBound()) {
  _odsPrinter << ' ' << "upper_bound";
  _odsPrinter << "(";
  if (::mlir::Value value = getUpperBound())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getUpperBound() ? ::llvm::ArrayRef<::mlir::Type>(getUpperBound().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getExtent()) {
  _odsPrinter << ' ' << "extent";
  _odsPrinter << "(";
  if (::mlir::Value value = getExtent())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getExtent() ? ::llvm::ArrayRef<::mlir::Type>(getExtent().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getStride()) {
  _odsPrinter << ' ' << "stride";
  _odsPrinter << "(";
  if (::mlir::Value value = getStride())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getStride() ? ::llvm::ArrayRef<::mlir::Type>(getStride().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getStartIdx()) {
  _odsPrinter << ' ' << "start_idx";
  _odsPrinter << "(";
  if (::mlir::Value value = getStartIdx())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getStartIdx() ? ::llvm::ArrayRef<::mlir::Type>(getStartIdx().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getStrideInBytesAttr();
     if(attr && (attr == odsBuilder.getBoolAttr(false)))
       elidedAttrs.push_back("stride_in_bytes");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void DataBoundsOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::DataBoundsOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::DistributeOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DistributeOpGenericAdaptorBase::DistributeOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.distribute", odsAttrs.getContext());
}

DistributeOpGenericAdaptorBase::DistributeOpGenericAdaptorBase(DistributeOp op) : DistributeOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DistributeOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr DistributeOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr DistributeOpGenericAdaptorBase::getDistScheduleStaticAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().dist_schedule_static);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool DistributeOpGenericAdaptorBase::getDistScheduleStatic() {
  auto attr = getDistScheduleStaticAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::omp::ClauseOrderKindAttr DistributeOpGenericAdaptorBase::getOrderValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::omp::ClauseOrderKindAttr>(getProperties().order_val);
  return attr;
}

::std::optional<::mlir::omp::ClauseOrderKind> DistributeOpGenericAdaptorBase::getOrderVal() {
  auto attr = getOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseOrderKind>(attr.getValue()) : (::std::nullopt);
}

::mlir::Region &DistributeOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange DistributeOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
DistributeOpAdaptor::DistributeOpAdaptor(DistributeOp op) : DistributeOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DistributeOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_dist_schedule_static = getProperties().dist_schedule_static; (void)tblgen_dist_schedule_static;
  auto tblgen_order_val = getProperties().order_val; (void)tblgen_order_val;

  if (tblgen_dist_schedule_static && !((::llvm::isa<::mlir::UnitAttr>(tblgen_dist_schedule_static))))
    return emitError(loc, "'omp.distribute' op ""attribute 'dist_schedule_static' failed to satisfy constraint: unit attribute");

  if (tblgen_order_val && !((::llvm::isa<::mlir::omp::ClauseOrderKindAttr>(tblgen_order_val))))
    return emitError(loc, "'omp.distribute' op ""attribute 'order_val' failed to satisfy constraint: OrderKind Clause");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DistributeOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range DistributeOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value DistributeOp::getChunkSize() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Operation::operand_range DistributeOp::getAllocateVars() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range DistributeOp::getAllocatorsVars() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange DistributeOp::getChunkSizeMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange DistributeOp::getAllocateVarsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange DistributeOp::getAllocatorsVarsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> DistributeOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DistributeOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &DistributeOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult DistributeOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.dist_schedule_static;
       auto attr = dict.get("dist_schedule_static");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for dist_schedule_static in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `dist_schedule_static` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.order_val;
       auto attr = dict.get("order_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for order_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `order_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute DistributeOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.dist_schedule_static;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("dist_schedule_static",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.order_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("order_val",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code DistributeOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.dist_schedule_static.getAsOpaquePointer()), 
    llvm::hash_value(prop.order_val.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> DistributeOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "dist_schedule_static")
      return prop.dist_schedule_static;

    if (name == "order_val")
      return prop.order_val;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void DistributeOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "dist_schedule_static") {
       prop.dist_schedule_static = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.dist_schedule_static)>>(value);
       return;
    }

    if (name == "order_val") {
       prop.order_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.order_val)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void DistributeOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.dist_schedule_static) attrs.append("dist_schedule_static", prop.dist_schedule_static);

    if (prop.order_val) attrs.append("order_val", prop.order_val);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult DistributeOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDistScheduleStaticAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "dist_schedule_static", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOrderValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps8(attr, "order_val", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult DistributeOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.dist_schedule_static)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  if (::mlir::failed(reader.readOptionalAttribute(prop.order_val)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void DistributeOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.dist_schedule_static);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  writer.writeOptionalAttribute(prop.order_val);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::UnitAttr DistributeOp::getDistScheduleStaticAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().dist_schedule_static);
}

bool DistributeOp::getDistScheduleStatic() {
  auto attr = getDistScheduleStaticAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::omp::ClauseOrderKindAttr DistributeOp::getOrderValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::omp::ClauseOrderKindAttr>(getProperties().order_val);
}

::std::optional<::mlir::omp::ClauseOrderKind> DistributeOp::getOrderVal() {
  auto attr = getOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseOrderKind>(attr.getValue()) : (::std::nullopt);
}

void DistributeOp::setDistScheduleStaticAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getDistScheduleStaticAttrName(), attr);
}

void DistributeOp::setDistScheduleStatic(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getDistScheduleStaticAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getDistScheduleStaticAttrName());
}

void DistributeOp::setOrderValAttr(::mlir::omp::ClauseOrderKindAttr attr) {
  (*this)->setAttr(getOrderValAttrName(), attr);
}

void DistributeOp::setOrderVal(::std::optional<::mlir::omp::ClauseOrderKind> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getOrderValAttrName(), ::mlir::omp::ClauseOrderKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getOrderValAttrName());
}

::mlir::Attribute DistributeOp::removeDistScheduleStaticAttr() {
    auto &attr = getProperties().dist_schedule_static;
    attr = {};
    return attr;
}

::mlir::Attribute DistributeOp::removeOrderValAttr() {
    auto &attr = getProperties().order_val;
    attr = {};
    return attr;
}

void DistributeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::UnitAttr dist_schedule_static, /*optional*/::mlir::Value chunk_size, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::omp::ClauseOrderKindAttr order_val) {
  if (chunk_size)
    odsState.addOperands(chunk_size);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(chunk_size ? 1 : 0), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (dist_schedule_static) {
    odsState.getOrAddProperties<Properties>().dist_schedule_static = dist_schedule_static;
  }
  if (order_val) {
    odsState.getOrAddProperties<Properties>().order_val = order_val;
  }
  (void)odsState.addRegion();
}

void DistributeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::UnitAttr dist_schedule_static, /*optional*/::mlir::Value chunk_size, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::omp::ClauseOrderKindAttr order_val) {
  if (chunk_size)
    odsState.addOperands(chunk_size);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(chunk_size ? 1 : 0), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (dist_schedule_static) {
    odsState.getOrAddProperties<Properties>().dist_schedule_static = dist_schedule_static;
  }
  if (order_val) {
    odsState.getOrAddProperties<Properties>().order_val = order_val;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DistributeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/bool dist_schedule_static, /*optional*/::mlir::Value chunk_size, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::omp::ClauseOrderKindAttr order_val) {
  if (chunk_size)
    odsState.addOperands(chunk_size);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(chunk_size ? 1 : 0), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (dist_schedule_static) {
    odsState.getOrAddProperties<Properties>().dist_schedule_static = ((dist_schedule_static) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (order_val) {
    odsState.getOrAddProperties<Properties>().order_val = order_val;
  }
  (void)odsState.addRegion();
}

void DistributeOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/bool dist_schedule_static, /*optional*/::mlir::Value chunk_size, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::omp::ClauseOrderKindAttr order_val) {
  if (chunk_size)
    odsState.addOperands(chunk_size);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(chunk_size ? 1 : 0), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (dist_schedule_static) {
    odsState.getOrAddProperties<Properties>().dist_schedule_static = ((dist_schedule_static) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (order_val) {
    odsState.getOrAddProperties<Properties>().order_val = order_val;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DistributeOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DistributeOp::verifyInvariantsImpl() {
  auto tblgen_dist_schedule_static = getProperties().dist_schedule_static; (void)tblgen_dist_schedule_static;
  auto tblgen_order_val = getProperties().order_val; (void)tblgen_order_val;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_dist_schedule_static, "dist_schedule_static")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps8(*this, tblgen_order_val, "order_val")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult DistributeOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult DistributeOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> chunk_sizeOperands;
  ::llvm::SMLoc chunk_sizeOperandsLoc;
  (void)chunk_sizeOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> chunk_sizeTypes;
  ::mlir::omp::ClauseOrderKindAttr order_valAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocate_varsOperands;
  ::llvm::SMLoc allocate_varsOperandsLoc;
  (void)allocate_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocate_varsTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocators_varsOperands;
  ::llvm::SMLoc allocators_varsOperandsLoc;
  (void)allocators_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocators_varsTypes;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  bool dist_schedule_staticClause = false;
  bool chunk_sizeClause = false;
  bool orderClause = false;
  bool allocateClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("dist_schedule_static"))) {

  if (dist_schedule_staticClause) {
    return parser.emitError(parser.getNameLoc())
          << "`dist_schedule_static` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  dist_schedule_staticClause = true;
    result.getOrAddProperties<DistributeOp::Properties>().dist_schedule_static = parser.getBuilder().getUnitAttr();    } else if (succeeded(parser.parseOptionalKeyword("chunk_size"))) {

  if (chunk_sizeClause) {
    return parser.emitError(parser.getNameLoc())
          << "`chunk_size` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  chunk_sizeClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    chunk_sizeOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      chunk_sizeOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      chunk_sizeTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("order"))) {

  if (orderClause) {
    return parser.emitError(parser.getNameLoc())
          << "`order` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  orderClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseClauseAttr(parser, order_valAttr);
    if (odsResult) return ::mlir::failure();
    if (order_valAttr)
      result.getOrAddProperties<DistributeOp::Properties>().order_val = order_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("allocate"))) {

  if (allocateClause) {
    return parser.emitError(parser.getNameLoc())
          << "`allocate` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  allocateClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    allocate_varsOperandsLoc = parser.getCurrentLocation();
    allocators_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAllocateAndAllocator(parser, allocate_varsOperands, allocate_varsTypes, allocators_varsOperands, allocators_varsTypes);
    if (odsResult) return ::mlir::failure();
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}

  if (parser.parseRegion(*regionRegion))
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
  result.addRegion(std::move(regionRegion));
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(chunk_sizeOperands.size()), static_cast<int32_t>(allocate_varsOperands.size()), static_cast<int32_t>(allocators_varsOperands.size())}), result.getOrAddProperties<DistributeOp::Properties>().operandSegmentSizes.begin());
  if (parser.resolveOperands(chunk_sizeOperands, chunk_sizeTypes, chunk_sizeOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocate_varsOperands, allocate_varsTypes, allocate_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocators_varsOperands, allocators_varsTypes, allocators_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DistributeOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || (getDistScheduleStaticAttr() && getDistScheduleStaticAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr))) {
  _odsPrinter << ' ' << "dist_schedule_static";
  }
  if (false || getChunkSize()) {
  _odsPrinter << ' ' << "chunk_size";
  _odsPrinter << "(";
  if (::mlir::Value value = getChunkSize())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getChunkSize() ? ::llvm::ArrayRef<::mlir::Type>(getChunkSize().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || (getOrderValAttr())) {
  _odsPrinter << ' ' << "order";
  _odsPrinter << "(";
  printClauseAttr(_odsPrinter, *this, getOrderValAttr());
  _odsPrinter << ")";
  }
  if (false || getAllocateVars().size() || getAllocatorsVars().size()) {
  _odsPrinter << ' ' << "allocate";
  _odsPrinter << "(";
  printAllocateAndAllocator(_odsPrinter, *this, getAllocateVars(), getAllocateVars().getTypes(), getAllocatorsVars(), getAllocatorsVars().getTypes());
  _odsPrinter << ")";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("dist_schedule_static");
  elidedAttrs.push_back("order_val");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getDistScheduleStaticAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("dist_schedule_static");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void DistributeOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
  effects.emplace_back(::mlir::MemoryEffects::Write::get(), 0, false, ::mlir::SideEffects::DefaultResource::get());
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::DistributeOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::FlushOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
FlushOpGenericAdaptorBase::FlushOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.flush", odsAttrs.getContext());
}

FlushOpGenericAdaptorBase::FlushOpGenericAdaptorBase(FlushOp op) : FlushOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> FlushOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr FlushOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
FlushOpAdaptor::FlushOpAdaptor(FlushOp op) : FlushOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult FlushOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> FlushOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range FlushOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range FlushOp::getVarList() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange FlushOp::getVarListMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> FlushOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range FlushOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void FlushOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange varList) {
  odsState.addOperands(varList);
}

void FlushOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult FlushOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult FlushOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult FlushOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> varListOperands;
  ::llvm::SMLoc varListOperandsLoc;
  (void)varListOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> varListTypes;
  if (::mlir::succeeded(parser.parseOptionalLParen())) {

  varListOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(varListOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(varListTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.resolveOperands(varListOperands, varListTypes, varListOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void FlushOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (!getVarList().empty()) {
    _odsPrinter << "(";
    _odsPrinter << getVarList();
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << getVarList().getTypes();
    _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::FlushOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::MapInfoOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MapInfoOpGenericAdaptorBase::MapInfoOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.map_info", odsAttrs.getContext());
}

MapInfoOpGenericAdaptorBase::MapInfoOpGenericAdaptorBase(MapInfoOp op) : MapInfoOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MapInfoOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr MapInfoOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::TypeAttr MapInfoOpGenericAdaptorBase::getVarTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().var_type);
  return attr;
}

::mlir::Type MapInfoOpGenericAdaptorBase::getVarType() {
  auto attr = getVarTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

::mlir::IntegerAttr MapInfoOpGenericAdaptorBase::getMapTypeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().map_type);
  return attr;
}

::std::optional<uint64_t> MapInfoOpGenericAdaptorBase::getMapType() {
  auto attr = getMapTypeAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

::mlir::omp::VariableCaptureKindAttr MapInfoOpGenericAdaptorBase::getMapCaptureTypeAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::omp::VariableCaptureKindAttr>(getProperties().map_capture_type);
  return attr;
}

::std::optional<::mlir::omp::VariableCaptureKind> MapInfoOpGenericAdaptorBase::getMapCaptureType() {
  auto attr = getMapCaptureTypeAttr();
  return attr ? ::std::optional<::mlir::omp::VariableCaptureKind>(attr.getValue()) : (::std::nullopt);
}

::mlir::StringAttr MapInfoOpGenericAdaptorBase::getNameAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().name);
  return attr;
}

::std::optional< ::llvm::StringRef > MapInfoOpGenericAdaptorBase::getName() {
  auto attr = getNameAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

} // namespace detail
MapInfoOpAdaptor::MapInfoOpAdaptor(MapInfoOp op) : MapInfoOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MapInfoOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_map_capture_type = getProperties().map_capture_type; (void)tblgen_map_capture_type;
  auto tblgen_map_type = getProperties().map_type; (void)tblgen_map_type;
  auto tblgen_name = getProperties().name; (void)tblgen_name;
  auto tblgen_var_type = getProperties().var_type; (void)tblgen_var_type;
  if (!tblgen_var_type) return emitError(loc, "'omp.map_info' op ""requires attribute 'var_type'");

  if (tblgen_var_type && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_var_type))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_var_type).getValue()))) && ((true))))
    return emitError(loc, "'omp.map_info' op ""attribute 'var_type' failed to satisfy constraint: any type attribute");

  if (tblgen_map_type && !(((::llvm::isa<::mlir::IntegerAttr>(tblgen_map_type))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_map_type).getType().isUnsignedInteger(64)))))
    return emitError(loc, "'omp.map_info' op ""attribute 'map_type' failed to satisfy constraint: 64-bit unsigned integer attribute");

  if (tblgen_map_capture_type && !((::llvm::isa<::mlir::omp::VariableCaptureKindAttr>(tblgen_map_capture_type))))
    return emitError(loc, "'omp.map_info' op ""attribute 'map_capture_type' failed to satisfy constraint: variable capture kind");

  if (tblgen_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_name))))
    return emitError(loc, "'omp.map_info' op ""attribute 'name' failed to satisfy constraint: string attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MapInfoOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range MapInfoOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::omp::PointerLikeType> MapInfoOp::getVarPtr() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::omp::PointerLikeType>>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::omp::PointerLikeType> MapInfoOp::getVarPtrPtr() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::TypedValue<::mlir::omp::PointerLikeType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::omp::PointerLikeType>>(*operands.begin());
}

::mlir::Operation::operand_range MapInfoOp::getMembers() {
  return getODSOperands(2);
}

::mlir::Operation::operand_range MapInfoOp::getBounds() {
  return getODSOperands(3);
}

::mlir::OpOperand &MapInfoOp::getVarPtrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::MutableOperandRange MapInfoOp::getVarPtrPtrMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange MapInfoOp::getMembersMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange MapInfoOp::getBoundsMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> MapInfoOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MapInfoOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::omp::PointerLikeType> MapInfoOp::getOmpPtr() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::omp::PointerLikeType>>(*getODSResults(0).begin());
}

::mlir::LogicalResult MapInfoOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.map_capture_type;
       auto attr = dict.get("map_capture_type");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for map_capture_type in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `map_capture_type` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.map_type;
       auto attr = dict.get("map_type");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for map_type in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `map_type` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.name;
       auto attr = dict.get("name");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for name in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `name` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.var_type;
       auto attr = dict.get("var_type");
    if (attr || /*isRequired=*/true) {
      if (!attr) {
        emitError() << "expected key entry for var_type in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `var_type` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute MapInfoOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.map_capture_type;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("map_capture_type",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.map_type;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("map_type",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("name",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.var_type;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("var_type",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code MapInfoOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.map_capture_type.getAsOpaquePointer()), 
    llvm::hash_value(prop.map_type.getAsOpaquePointer()), 
    llvm::hash_value(prop.name.getAsOpaquePointer()), 
    llvm::hash_value(prop.var_type.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> MapInfoOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "map_capture_type")
      return prop.map_capture_type;

    if (name == "map_type")
      return prop.map_type;

    if (name == "name")
      return prop.name;

    if (name == "var_type")
      return prop.var_type;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void MapInfoOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "map_capture_type") {
       prop.map_capture_type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.map_capture_type)>>(value);
       return;
    }

    if (name == "map_type") {
       prop.map_type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.map_type)>>(value);
       return;
    }

    if (name == "name") {
       prop.name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.name)>>(value);
       return;
    }

    if (name == "var_type") {
       prop.var_type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.var_type)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void MapInfoOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.map_capture_type) attrs.append("map_capture_type", prop.map_capture_type);

    if (prop.map_type) attrs.append("map_type", prop.map_type);

    if (prop.name) attrs.append("name", prop.name);

    if (prop.var_type) attrs.append("var_type", prop.var_type);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult MapInfoOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getMapCaptureTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps10(attr, "map_capture_type", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMapTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps9(attr, "map_type", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps4(attr, "name", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getVarTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps2(attr, "var_type", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult MapInfoOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.map_capture_type)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.map_type)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.name)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  if (::mlir::failed(reader.readAttribute(prop.var_type)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void MapInfoOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.map_capture_type);

  writer.writeOptionalAttribute(prop.map_type);

  writer.writeOptionalAttribute(prop.name);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}
  writer.writeAttribute(prop.var_type);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::TypeAttr MapInfoOp::getVarTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().var_type);
}

::mlir::Type MapInfoOp::getVarType() {
  auto attr = getVarTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

::mlir::IntegerAttr MapInfoOp::getMapTypeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().map_type);
}

::std::optional<uint64_t> MapInfoOp::getMapType() {
  auto attr = getMapTypeAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

::mlir::omp::VariableCaptureKindAttr MapInfoOp::getMapCaptureTypeAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::omp::VariableCaptureKindAttr>(getProperties().map_capture_type);
}

::std::optional<::mlir::omp::VariableCaptureKind> MapInfoOp::getMapCaptureType() {
  auto attr = getMapCaptureTypeAttr();
  return attr ? ::std::optional<::mlir::omp::VariableCaptureKind>(attr.getValue()) : (::std::nullopt);
}

::mlir::StringAttr MapInfoOp::getNameAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::StringAttr>(getProperties().name);
}

::std::optional< ::llvm::StringRef > MapInfoOp::getName() {
  auto attr = getNameAttr();
  return attr ? ::std::optional< ::llvm::StringRef >(attr.getValue()) : (::std::nullopt);
}

void MapInfoOp::setVarTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getVarTypeAttrName(), attr);
}

void MapInfoOp::setVarType(::mlir::Type attrValue) {
  (*this)->setAttr(getVarTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void MapInfoOp::setMapTypeAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getMapTypeAttrName(), attr);
}

void MapInfoOp::setMapType(::std::optional<uint64_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getMapTypeAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64, /*isSigned=*/false), *attrValue));
    (*this)->removeAttr(getMapTypeAttrName());
}

void MapInfoOp::setMapCaptureTypeAttr(::mlir::omp::VariableCaptureKindAttr attr) {
  (*this)->setAttr(getMapCaptureTypeAttrName(), attr);
}

void MapInfoOp::setMapCaptureType(::std::optional<::mlir::omp::VariableCaptureKind> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getMapCaptureTypeAttrName(), ::mlir::omp::VariableCaptureKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getMapCaptureTypeAttrName());
}

void MapInfoOp::setNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getNameAttrName(), attr);
}

void MapInfoOp::setName(::std::optional<::llvm::StringRef> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(*attrValue));
    (*this)->removeAttr(getNameAttrName());
}

::mlir::Attribute MapInfoOp::removeMapTypeAttr() {
    auto &attr = getProperties().map_type;
    attr = {};
    return attr;
}

::mlir::Attribute MapInfoOp::removeMapCaptureTypeAttr() {
    auto &attr = getProperties().map_capture_type;
    attr = {};
    return attr;
}

::mlir::Attribute MapInfoOp::removeNameAttr() {
    auto &attr = getProperties().name;
    attr = {};
    return attr;
}

void MapInfoOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type omp_ptr, ::mlir::Value var_ptr, ::mlir::TypeAttr var_type, /*optional*/::mlir::Value var_ptr_ptr, ::mlir::ValueRange members, ::mlir::ValueRange bounds, /*optional*/::mlir::IntegerAttr map_type, /*optional*/::mlir::omp::VariableCaptureKindAttr map_capture_type, /*optional*/::mlir::StringAttr name) {
  odsState.addOperands(var_ptr);
  if (var_ptr_ptr)
    odsState.addOperands(var_ptr_ptr);
  odsState.addOperands(members);
  odsState.addOperands(bounds);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, (var_ptr_ptr ? 1 : 0), static_cast<int32_t>(members.size()), static_cast<int32_t>(bounds.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().var_type = var_type;
  if (map_type) {
    odsState.getOrAddProperties<Properties>().map_type = map_type;
  }
  if (map_capture_type) {
    odsState.getOrAddProperties<Properties>().map_capture_type = map_capture_type;
  }
  if (name) {
    odsState.getOrAddProperties<Properties>().name = name;
  }
  odsState.addTypes(omp_ptr);
}

void MapInfoOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value var_ptr, ::mlir::TypeAttr var_type, /*optional*/::mlir::Value var_ptr_ptr, ::mlir::ValueRange members, ::mlir::ValueRange bounds, /*optional*/::mlir::IntegerAttr map_type, /*optional*/::mlir::omp::VariableCaptureKindAttr map_capture_type, /*optional*/::mlir::StringAttr name) {
  odsState.addOperands(var_ptr);
  if (var_ptr_ptr)
    odsState.addOperands(var_ptr_ptr);
  odsState.addOperands(members);
  odsState.addOperands(bounds);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, (var_ptr_ptr ? 1 : 0), static_cast<int32_t>(members.size()), static_cast<int32_t>(bounds.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().var_type = var_type;
  if (map_type) {
    odsState.getOrAddProperties<Properties>().map_type = map_type;
  }
  if (map_capture_type) {
    odsState.getOrAddProperties<Properties>().map_capture_type = map_capture_type;
  }
  if (name) {
    odsState.getOrAddProperties<Properties>().name = name;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapInfoOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type omp_ptr, ::mlir::Value var_ptr, ::mlir::Type var_type, /*optional*/::mlir::Value var_ptr_ptr, ::mlir::ValueRange members, ::mlir::ValueRange bounds, /*optional*/::mlir::IntegerAttr map_type, /*optional*/::mlir::omp::VariableCaptureKindAttr map_capture_type, /*optional*/::mlir::StringAttr name) {
  odsState.addOperands(var_ptr);
  if (var_ptr_ptr)
    odsState.addOperands(var_ptr_ptr);
  odsState.addOperands(members);
  odsState.addOperands(bounds);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, (var_ptr_ptr ? 1 : 0), static_cast<int32_t>(members.size()), static_cast<int32_t>(bounds.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().var_type = ::mlir::TypeAttr::get(var_type);
  if (map_type) {
    odsState.getOrAddProperties<Properties>().map_type = map_type;
  }
  if (map_capture_type) {
    odsState.getOrAddProperties<Properties>().map_capture_type = map_capture_type;
  }
  if (name) {
    odsState.getOrAddProperties<Properties>().name = name;
  }
  odsState.addTypes(omp_ptr);
}

void MapInfoOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value var_ptr, ::mlir::Type var_type, /*optional*/::mlir::Value var_ptr_ptr, ::mlir::ValueRange members, ::mlir::ValueRange bounds, /*optional*/::mlir::IntegerAttr map_type, /*optional*/::mlir::omp::VariableCaptureKindAttr map_capture_type, /*optional*/::mlir::StringAttr name) {
  odsState.addOperands(var_ptr);
  if (var_ptr_ptr)
    odsState.addOperands(var_ptr_ptr);
  odsState.addOperands(members);
  odsState.addOperands(bounds);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({1, (var_ptr_ptr ? 1 : 0), static_cast<int32_t>(members.size()), static_cast<int32_t>(bounds.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  odsState.getOrAddProperties<Properties>().var_type = ::mlir::TypeAttr::get(var_type);
  if (map_type) {
    odsState.getOrAddProperties<Properties>().map_type = map_type;
  }
  if (map_capture_type) {
    odsState.getOrAddProperties<Properties>().map_capture_type = map_capture_type;
  }
  if (name) {
    odsState.getOrAddProperties<Properties>().name = name;
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MapInfoOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() >= 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MapInfoOp::verifyInvariantsImpl() {
  auto tblgen_map_capture_type = getProperties().map_capture_type; (void)tblgen_map_capture_type;
  auto tblgen_map_type = getProperties().map_type; (void)tblgen_map_type;
  auto tblgen_name = getProperties().name; (void)tblgen_name;
  auto tblgen_var_type = getProperties().var_type; (void)tblgen_var_type;
  if (!tblgen_var_type) return emitOpError("requires attribute 'var_type'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps2(*this, tblgen_var_type, "var_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps9(*this, tblgen_map_type, "map_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps10(*this, tblgen_map_capture_type, "map_capture_type")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps4(*this, tblgen_name, "name")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps7(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult MapInfoOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MapInfoOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand var_ptrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> var_ptrOperands(var_ptrRawOperands);  ::llvm::SMLoc var_ptrOperandsLoc;
  (void)var_ptrOperandsLoc;
  ::mlir::Type var_ptrRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> var_ptrTypes(var_ptrRawTypes);
  ::mlir::TypeAttr var_typeAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> var_ptr_ptrOperands;
  ::llvm::SMLoc var_ptr_ptrOperandsLoc;
  (void)var_ptr_ptrOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> var_ptr_ptrTypes;
  ::mlir::IntegerAttr map_typeAttr;
  ::mlir::omp::VariableCaptureKindAttr map_capture_typeAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> membersOperands;
  ::llvm::SMLoc membersOperandsLoc;
  (void)membersOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> membersTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> boundsOperands;
  ::llvm::SMLoc boundsOperandsLoc;
  (void)boundsOperandsLoc;
  ::mlir::Type omp_ptrRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> omp_ptrTypes(omp_ptrRawTypes);
  if (parser.parseKeyword("var_ptr"))
    return ::mlir::failure();
  if (parser.parseLParen())
    return ::mlir::failure();

  var_ptrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(var_ptrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::omp::PointerLikeType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    var_ptrRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(var_typeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (var_typeAttr) result.getOrAddProperties<MapInfoOp::Properties>().var_type = var_typeAttr;
  if (parser.parseRParen())
    return ::mlir::failure();
  bool var_ptr_ptrClause = false;
  bool map_clausesClause = false;
  bool captureClause = false;
  bool membersClause = false;
  bool boundsClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("var_ptr_ptr"))) {

  if (var_ptr_ptrClause) {
    return parser.emitError(parser.getNameLoc())
          << "`var_ptr_ptr` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  var_ptr_ptrClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    var_ptr_ptrOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      var_ptr_ptrOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      var_ptr_ptrTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("map_clauses"))) {

  if (map_clausesClause) {
    return parser.emitError(parser.getNameLoc())
          << "`map_clauses` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  map_clausesClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseMapClause(parser, map_typeAttr);
    if (odsResult) return ::mlir::failure();
    if (map_typeAttr)
      result.getOrAddProperties<MapInfoOp::Properties>().map_type = map_typeAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("capture"))) {

  if (captureClause) {
    return parser.emitError(parser.getNameLoc())
          << "`capture` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  captureClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseCaptureType(parser, map_capture_typeAttr);
    if (odsResult) return ::mlir::failure();
    if (map_capture_typeAttr)
      result.getOrAddProperties<MapInfoOp::Properties>().map_capture_type = map_capture_typeAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("members"))) {

  if (membersClause) {
    return parser.emitError(parser.getNameLoc())
          << "`members` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  membersClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  membersOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(membersOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(membersTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("bounds"))) {

  if (boundsClause) {
    return parser.emitError(parser.getNameLoc())
          << "`bounds` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  boundsClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  boundsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(boundsOperands))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::omp::PointerLikeType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    omp_ptrRawTypes[0] = type;
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
::llvm::copy(::llvm::ArrayRef<int32_t>({1, static_cast<int32_t>(var_ptr_ptrOperands.size()), static_cast<int32_t>(membersOperands.size()), static_cast<int32_t>(boundsOperands.size())}), result.getOrAddProperties<MapInfoOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getType<::mlir::omp::DataBoundsType>();
  result.addTypes(omp_ptrTypes);
  if (parser.resolveOperands(var_ptrOperands, var_ptrTypes, var_ptrOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(var_ptr_ptrOperands, var_ptr_ptrTypes, var_ptr_ptrOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(membersOperands, membersTypes, membersOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(boundsOperands, odsBuildableType0, boundsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void MapInfoOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ' << "var_ptr";
  _odsPrinter << "(";
  _odsPrinter << getVarPtr();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getVarPtr().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::omp::PointerLikeType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getVarTypeAttr());
  _odsPrinter << ")";
  if (false || getVarPtrPtr()) {
  _odsPrinter << ' ' << "var_ptr_ptr";
  _odsPrinter << "(";
  if (::mlir::Value value = getVarPtrPtr())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getVarPtrPtr() ? ::llvm::ArrayRef<::mlir::Type>(getVarPtrPtr().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || (getMapTypeAttr())) {
  _odsPrinter << ' ' << "map_clauses";
  _odsPrinter << "(";
  printMapClause(_odsPrinter, *this, getMapTypeAttr());
  _odsPrinter << ")";
  }
  if (false || (getMapCaptureTypeAttr())) {
  _odsPrinter << ' ' << "capture";
  _odsPrinter << "(";
  printCaptureType(_odsPrinter, *this, getMapCaptureTypeAttr());
  _odsPrinter << ")";
  }
  if (false || getMembers().size()) {
  _odsPrinter << ' ' << "members";
  _odsPrinter << "(";
  _odsPrinter << getMembers();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getMembers().getTypes();
  _odsPrinter << ")";
  }
  if (false || getBounds().size()) {
  _odsPrinter << ' ' << "bounds";
  _odsPrinter << "(";
  _odsPrinter << getBounds();
  _odsPrinter << ")";
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getOmpPtr().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::omp::PointerLikeType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("var_type");
  elidedAttrs.push_back("map_type");
  elidedAttrs.push_back("map_capture_type");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::MapInfoOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::MasterOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
MasterOpGenericAdaptorBase::MasterOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.master", odsAttrs.getContext());
}

MasterOpGenericAdaptorBase::MasterOpGenericAdaptorBase(MasterOp op) : MasterOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> MasterOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr MasterOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &MasterOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange MasterOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
MasterOpAdaptor::MasterOpAdaptor(MasterOp op) : MasterOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult MasterOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> MasterOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range MasterOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> MasterOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range MasterOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &MasterOp::getRegion() {
  return (*this)->getRegion(0);
}

void MasterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
  (void)odsState.addRegion();
}

void MasterOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void MasterOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult MasterOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult MasterOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult MasterOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();

  if (parser.parseRegion(*regionRegion))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  result.addRegion(std::move(regionRegion));
  return ::mlir::success();
}

void MasterOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::MasterOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::OrderedOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
OrderedOpGenericAdaptorBase::OrderedOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.ordered", odsAttrs.getContext());
}

OrderedOpGenericAdaptorBase::OrderedOpGenericAdaptorBase(OrderedOp op) : OrderedOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> OrderedOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr OrderedOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::omp::ClauseDependAttr OrderedOpGenericAdaptorBase::getDependTypeValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::omp::ClauseDependAttr>(getProperties().depend_type_val);
  return attr;
}

::std::optional<::mlir::omp::ClauseDepend> OrderedOpGenericAdaptorBase::getDependTypeVal() {
  auto attr = getDependTypeValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseDepend>(attr.getValue()) : (::std::nullopt);
}

::mlir::IntegerAttr OrderedOpGenericAdaptorBase::getNumLoopsValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().num_loops_val);
  return attr;
}

::std::optional<uint64_t> OrderedOpGenericAdaptorBase::getNumLoopsVal() {
  auto attr = getNumLoopsValAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

} // namespace detail
OrderedOpAdaptor::OrderedOpAdaptor(OrderedOp op) : OrderedOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult OrderedOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_depend_type_val = getProperties().depend_type_val; (void)tblgen_depend_type_val;
  auto tblgen_num_loops_val = getProperties().num_loops_val; (void)tblgen_num_loops_val;

  if (tblgen_depend_type_val && !((::llvm::isa<::mlir::omp::ClauseDependAttr>(tblgen_depend_type_val))))
    return emitError(loc, "'omp.ordered' op ""attribute 'depend_type_val' failed to satisfy constraint: depend clause");

  if (tblgen_num_loops_val && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_num_loops_val))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_num_loops_val).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_num_loops_val).getInt() >= 0))))
    return emitError(loc, "'omp.ordered' op ""attribute 'num_loops_val' failed to satisfy constraint: 64-bit signless integer attribute whose minimum value is 0");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> OrderedOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range OrderedOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range OrderedOp::getDependVecVars() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange OrderedOp::getDependVecVarsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> OrderedOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OrderedOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult OrderedOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.depend_type_val;
       auto attr = dict.get("depend_type_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for depend_type_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `depend_type_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.num_loops_val;
       auto attr = dict.get("num_loops_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for num_loops_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `num_loops_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute OrderedOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.depend_type_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("depend_type_val",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.num_loops_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("num_loops_val",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code OrderedOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.depend_type_val.getAsOpaquePointer()), 
    llvm::hash_value(prop.num_loops_val.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> OrderedOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "depend_type_val")
      return prop.depend_type_val;

    if (name == "num_loops_val")
      return prop.num_loops_val;
  return std::nullopt;
}

void OrderedOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "depend_type_val") {
       prop.depend_type_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.depend_type_val)>>(value);
       return;
    }

    if (name == "num_loops_val") {
       prop.num_loops_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.num_loops_val)>>(value);
       return;
    }
}

void OrderedOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.depend_type_val) attrs.append("depend_type_val", prop.depend_type_val);

    if (prop.num_loops_val) attrs.append("num_loops_val", prop.num_loops_val);
}

::mlir::LogicalResult OrderedOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDependTypeValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps11(attr, "depend_type_val", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNumLoopsValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps12(attr, "num_loops_val", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult OrderedOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.depend_type_val)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.num_loops_val)))
    return ::mlir::failure();
  return ::mlir::success();
}

void OrderedOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.depend_type_val);

  writer.writeOptionalAttribute(prop.num_loops_val);
}

::mlir::omp::ClauseDependAttr OrderedOp::getDependTypeValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::omp::ClauseDependAttr>(getProperties().depend_type_val);
}

::std::optional<::mlir::omp::ClauseDepend> OrderedOp::getDependTypeVal() {
  auto attr = getDependTypeValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseDepend>(attr.getValue()) : (::std::nullopt);
}

::mlir::IntegerAttr OrderedOp::getNumLoopsValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().num_loops_val);
}

::std::optional<uint64_t> OrderedOp::getNumLoopsVal() {
  auto attr = getNumLoopsValAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

void OrderedOp::setDependTypeValAttr(::mlir::omp::ClauseDependAttr attr) {
  (*this)->setAttr(getDependTypeValAttrName(), attr);
}

void OrderedOp::setDependTypeVal(::std::optional<::mlir::omp::ClauseDepend> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getDependTypeValAttrName(), ::mlir::omp::ClauseDependAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getDependTypeValAttrName());
}

void OrderedOp::setNumLoopsValAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getNumLoopsValAttrName(), attr);
}

void OrderedOp::setNumLoopsVal(::std::optional<uint64_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNumLoopsValAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue));
    (*this)->removeAttr(getNumLoopsValAttrName());
}

::mlir::Attribute OrderedOp::removeDependTypeValAttr() {
    auto &attr = getProperties().depend_type_val;
    attr = {};
    return attr;
}

::mlir::Attribute OrderedOp::removeNumLoopsValAttr() {
    auto &attr = getProperties().num_loops_val;
    attr = {};
    return attr;
}

void OrderedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::omp::ClauseDependAttr depend_type_val, /*optional*/::mlir::IntegerAttr num_loops_val, ::mlir::ValueRange depend_vec_vars) {
  odsState.addOperands(depend_vec_vars);
  if (depend_type_val) {
    odsState.getOrAddProperties<Properties>().depend_type_val = depend_type_val;
  }
  if (num_loops_val) {
    odsState.getOrAddProperties<Properties>().num_loops_val = num_loops_val;
  }
}

void OrderedOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::omp::ClauseDependAttr depend_type_val, /*optional*/::mlir::IntegerAttr num_loops_val, ::mlir::ValueRange depend_vec_vars) {
  odsState.addOperands(depend_vec_vars);
  if (depend_type_val) {
    odsState.getOrAddProperties<Properties>().depend_type_val = depend_type_val;
  }
  if (num_loops_val) {
    odsState.getOrAddProperties<Properties>().num_loops_val = num_loops_val;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OrderedOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult OrderedOp::verifyInvariantsImpl() {
  auto tblgen_depend_type_val = getProperties().depend_type_val; (void)tblgen_depend_type_val;
  auto tblgen_num_loops_val = getProperties().num_loops_val; (void)tblgen_num_loops_val;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps11(*this, tblgen_depend_type_val, "depend_type_val")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps12(*this, tblgen_num_loops_val, "num_loops_val")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult OrderedOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult OrderedOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::omp::ClauseDependAttr depend_type_valAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> depend_vec_varsOperands;
  ::llvm::SMLoc depend_vec_varsOperandsLoc;
  (void)depend_vec_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> depend_vec_varsTypes;
  if (::mlir::succeeded(parser.parseOptionalKeyword("depend_type"))) {

  if (parser.parseCustomAttributeWithFallback(depend_type_valAttr, ::mlir::Type{})) {
    return ::mlir::failure();
  }
  if (depend_type_valAttr) result.getOrAddProperties<OrderedOp::Properties>().depend_type_val = depend_type_valAttr;
  }
  if (::mlir::succeeded(parser.parseOptionalKeyword("depend_vec"))) {
  if (parser.parseLParen())
    return ::mlir::failure();

  depend_vec_varsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(depend_vec_varsOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(depend_vec_varsTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
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
  if (parser.resolveOperands(depend_vec_varsOperands, depend_vec_varsTypes, depend_vec_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void OrderedOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getDependTypeValAttr()) {
    _odsPrinter << ' ' << "depend_type";
  _odsPrinter.printStrippedAttrOrType(getDependTypeValAttr());
  }
  if (!getDependVecVars().empty()) {
    _odsPrinter << ' ' << "depend_vec";
    _odsPrinter << "(";
    _odsPrinter << getDependVecVars();
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << getDependVecVars().getTypes();
    _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("depend_type_val");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::OrderedOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::OrderedRegionOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
OrderedRegionOpGenericAdaptorBase::OrderedRegionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.ordered_region", odsAttrs.getContext());
}

OrderedRegionOpGenericAdaptorBase::OrderedRegionOpGenericAdaptorBase(OrderedRegionOp op) : OrderedRegionOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> OrderedRegionOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr OrderedRegionOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr OrderedRegionOpGenericAdaptorBase::getSimdAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().simd);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool OrderedRegionOpGenericAdaptorBase::getSimd() {
  auto attr = getSimdAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::Region &OrderedRegionOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange OrderedRegionOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
OrderedRegionOpAdaptor::OrderedRegionOpAdaptor(OrderedRegionOp op) : OrderedRegionOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult OrderedRegionOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_simd = getProperties().simd; (void)tblgen_simd;

  if (tblgen_simd && !((::llvm::isa<::mlir::UnitAttr>(tblgen_simd))))
    return emitError(loc, "'omp.ordered_region' op ""attribute 'simd' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> OrderedRegionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range OrderedRegionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> OrderedRegionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range OrderedRegionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &OrderedRegionOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult OrderedRegionOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.simd;
       auto attr = dict.get("simd");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for simd in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `simd` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
  return ::mlir::success();
}

::mlir::Attribute OrderedRegionOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.simd;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("simd",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code OrderedRegionOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.simd.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> OrderedRegionOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "simd")
      return prop.simd;
  return std::nullopt;
}

void OrderedRegionOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "simd") {
       prop.simd = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.simd)>>(value);
       return;
    }
}

void OrderedRegionOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.simd) attrs.append("simd", prop.simd);
}

::mlir::LogicalResult OrderedRegionOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getSimdAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "simd", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult OrderedRegionOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.simd)))
    return ::mlir::failure();
  return ::mlir::success();
}

void OrderedRegionOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.simd);
}

::mlir::UnitAttr OrderedRegionOp::getSimdAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().simd);
}

bool OrderedRegionOp::getSimd() {
  auto attr = getSimdAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void OrderedRegionOp::setSimdAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getSimdAttrName(), attr);
}

void OrderedRegionOp::setSimd(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getSimdAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getSimdAttrName());
}

::mlir::Attribute OrderedRegionOp::removeSimdAttr() {
    auto &attr = getProperties().simd;
    attr = {};
    return attr;
}

void OrderedRegionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::UnitAttr simd) {
  if (simd) {
    odsState.getOrAddProperties<Properties>().simd = simd;
  }
  (void)odsState.addRegion();
}

void OrderedRegionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::UnitAttr simd) {
  if (simd) {
    odsState.getOrAddProperties<Properties>().simd = simd;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OrderedRegionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/bool simd) {
  if (simd) {
    odsState.getOrAddProperties<Properties>().simd = ((simd) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
}

void OrderedRegionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/bool simd) {
  if (simd) {
    odsState.getOrAddProperties<Properties>().simd = ((simd) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void OrderedRegionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult OrderedRegionOp::verifyInvariantsImpl() {
  auto tblgen_simd = getProperties().simd; (void)tblgen_simd;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_simd, "simd")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult OrderedRegionOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult OrderedRegionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  if (::mlir::succeeded(parser.parseOptionalKeyword("simd"))) {
    result.getOrAddProperties<OrderedRegionOp::Properties>().simd = parser.getBuilder().getUnitAttr();  }

  if (parser.parseRegion(*regionRegion))
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
  result.addRegion(std::move(regionRegion));
  return ::mlir::success();
}

void OrderedRegionOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (getSimdAttr()) {
    _odsPrinter << ' ' << "simd";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("simd");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSimdAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("simd");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::OrderedRegionOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::ParallelOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ParallelOpGenericAdaptorBase::ParallelOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.parallel", odsAttrs.getContext());
}

ParallelOpGenericAdaptorBase::ParallelOpGenericAdaptorBase(ParallelOp op) : ParallelOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ParallelOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr ParallelOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr ParallelOpGenericAdaptorBase::getReductionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().reductions);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > ParallelOpGenericAdaptorBase::getReductions() {
  auto attr = getReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::omp::ClauseProcBindKindAttr ParallelOpGenericAdaptorBase::getProcBindValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::omp::ClauseProcBindKindAttr>(getProperties().proc_bind_val);
  return attr;
}

::std::optional<::mlir::omp::ClauseProcBindKind> ParallelOpGenericAdaptorBase::getProcBindVal() {
  auto attr = getProcBindValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseProcBindKind>(attr.getValue()) : (::std::nullopt);
}

::mlir::Region &ParallelOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange ParallelOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ParallelOpAdaptor::ParallelOpAdaptor(ParallelOp op) : ParallelOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ParallelOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_proc_bind_val = getProperties().proc_bind_val; (void)tblgen_proc_bind_val;
  auto tblgen_reductions = getProperties().reductions; (void)tblgen_reductions;

  if (tblgen_reductions && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_reductions))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_reductions), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::SymbolRefAttr>(attr))); }))))
    return emitError(loc, "'omp.parallel' op ""attribute 'reductions' failed to satisfy constraint: symbol ref array attribute");

  if (tblgen_proc_bind_val && !((::llvm::isa<::mlir::omp::ClauseProcBindKindAttr>(tblgen_proc_bind_val))))
    return emitError(loc, "'omp.parallel' op ""attribute 'proc_bind_val' failed to satisfy constraint: ProcBindKind Clause");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ParallelOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range ParallelOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> ParallelOp::getIfExprVar() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::Value ParallelOp::getNumThreadsVar() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Operation::operand_range ParallelOp::getAllocateVars() {
  return getODSOperands(2);
}

::mlir::Operation::operand_range ParallelOp::getAllocatorsVars() {
  return getODSOperands(3);
}

::mlir::Operation::operand_range ParallelOp::getReductionVars() {
  return getODSOperands(4);
}

::mlir::MutableOperandRange ParallelOp::getIfExprVarMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange ParallelOp::getNumThreadsVarMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange ParallelOp::getAllocateVarsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange ParallelOp::getAllocatorsVarsMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange ParallelOp::getReductionVarsMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> ParallelOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ParallelOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ParallelOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult ParallelOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.proc_bind_val;
       auto attr = dict.get("proc_bind_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for proc_bind_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `proc_bind_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.reductions;
       auto attr = dict.get("reductions");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for reductions in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reductions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute ParallelOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.proc_bind_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("proc_bind_val",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.reductions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reductions",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ParallelOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.proc_bind_val.getAsOpaquePointer()), 
    llvm::hash_value(prop.reductions.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> ParallelOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "proc_bind_val")
      return prop.proc_bind_val;

    if (name == "reductions")
      return prop.reductions;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void ParallelOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "proc_bind_val") {
       prop.proc_bind_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.proc_bind_val)>>(value);
       return;
    }

    if (name == "reductions") {
       prop.reductions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reductions)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void ParallelOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.proc_bind_val) attrs.append("proc_bind_val", prop.proc_bind_val);

    if (prop.reductions) attrs.append("reductions", prop.reductions);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult ParallelOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getProcBindValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps14(attr, "proc_bind_val", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReductionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(attr, "reductions", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ParallelOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  if (::mlir::failed(reader.readOptionalAttribute(prop.proc_bind_val)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.reductions)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ParallelOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  writer.writeOptionalAttribute(prop.proc_bind_val);

  writer.writeOptionalAttribute(prop.reductions);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::ArrayAttr ParallelOp::getReductionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().reductions);
}

::std::optional< ::mlir::ArrayAttr > ParallelOp::getReductions() {
  auto attr = getReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::omp::ClauseProcBindKindAttr ParallelOp::getProcBindValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::omp::ClauseProcBindKindAttr>(getProperties().proc_bind_val);
}

::std::optional<::mlir::omp::ClauseProcBindKind> ParallelOp::getProcBindVal() {
  auto attr = getProcBindValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseProcBindKind>(attr.getValue()) : (::std::nullopt);
}

void ParallelOp::setReductionsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getReductionsAttrName(), attr);
}

void ParallelOp::setProcBindValAttr(::mlir::omp::ClauseProcBindKindAttr attr) {
  (*this)->setAttr(getProcBindValAttrName(), attr);
}

void ParallelOp::setProcBindVal(::std::optional<::mlir::omp::ClauseProcBindKind> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getProcBindValAttrName(), ::mlir::omp::ClauseProcBindKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getProcBindValAttrName());
}

::mlir::Attribute ParallelOp::removeReductionsAttr() {
    auto &attr = getProperties().reductions;
    attr = {};
    return attr;
}

::mlir::Attribute ParallelOp::removeProcBindValAttr() {
    auto &attr = getProperties().proc_bind_val;
    attr = {};
    return attr;
}

void ParallelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr_var, /*optional*/::mlir::Value num_threads_var, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, /*optional*/::mlir::omp::ClauseProcBindKindAttr proc_bind_val) {
  if (if_expr_var)
    odsState.addOperands(if_expr_var);
  if (num_threads_var)
    odsState.addOperands(num_threads_var);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  odsState.addOperands(reduction_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr_var ? 1 : 0), (num_threads_var ? 1 : 0), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size()), static_cast<int32_t>(reduction_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (proc_bind_val) {
    odsState.getOrAddProperties<Properties>().proc_bind_val = proc_bind_val;
  }
  (void)odsState.addRegion();
}

void ParallelOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr_var, /*optional*/::mlir::Value num_threads_var, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, /*optional*/::mlir::omp::ClauseProcBindKindAttr proc_bind_val) {
  if (if_expr_var)
    odsState.addOperands(if_expr_var);
  if (num_threads_var)
    odsState.addOperands(num_threads_var);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  odsState.addOperands(reduction_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr_var ? 1 : 0), (num_threads_var ? 1 : 0), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size()), static_cast<int32_t>(reduction_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (proc_bind_val) {
    odsState.getOrAddProperties<Properties>().proc_bind_val = proc_bind_val;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ParallelOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ParallelOp::verifyInvariantsImpl() {
  auto tblgen_proc_bind_val = getProperties().proc_bind_val; (void)tblgen_proc_bind_val;
  auto tblgen_reductions = getProperties().reductions; (void)tblgen_reductions;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(*this, tblgen_reductions, "reductions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps14(*this, tblgen_proc_bind_val, "proc_bind_val")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ParallelOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ParallelOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> reduction_varsOperands;
  ::llvm::SMLoc reduction_varsOperandsLoc;
  (void)reduction_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> reduction_varsTypes;
  ::mlir::ArrayAttr reductionsAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> if_expr_varOperands;
  ::llvm::SMLoc if_expr_varOperandsLoc;
  (void)if_expr_varOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> if_expr_varTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> num_threads_varOperands;
  ::llvm::SMLoc num_threads_varOperandsLoc;
  (void)num_threads_varOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> num_threads_varTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocate_varsOperands;
  ::llvm::SMLoc allocate_varsOperandsLoc;
  (void)allocate_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocate_varsTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocators_varsOperands;
  ::llvm::SMLoc allocators_varsOperandsLoc;
  (void)allocators_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocators_varsTypes;
  ::mlir::omp::ClauseProcBindKindAttr proc_bind_valAttr;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  bool reductionClause = false;
  bool ifClause = false;
  bool num_threadsClause = false;
  bool allocateClause = false;
  bool proc_bindClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("reduction"))) {

  if (reductionClause) {
    return parser.emitError(parser.getNameLoc())
          << "`reduction` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  reductionClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    reduction_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseReductionVarList(parser, reduction_varsOperands, reduction_varsTypes, reductionsAttr);
    if (odsResult) return ::mlir::failure();
    if (reductionsAttr)
      result.getOrAddProperties<ParallelOp::Properties>().reductions = reductionsAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("if"))) {

  if (ifClause) {
    return parser.emitError(parser.getNameLoc())
          << "`if` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  ifClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    if_expr_varOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_expr_varOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_expr_varTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("num_threads"))) {

  if (num_threadsClause) {
    return parser.emitError(parser.getNameLoc())
          << "`num_threads` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  num_threadsClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    num_threads_varOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      num_threads_varOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      num_threads_varTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("allocate"))) {

  if (allocateClause) {
    return parser.emitError(parser.getNameLoc())
          << "`allocate` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  allocateClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    allocate_varsOperandsLoc = parser.getCurrentLocation();
    allocators_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAllocateAndAllocator(parser, allocate_varsOperands, allocate_varsTypes, allocators_varsOperands, allocators_varsTypes);
    if (odsResult) return ::mlir::failure();
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("proc_bind"))) {

  if (proc_bindClause) {
    return parser.emitError(parser.getNameLoc())
          << "`proc_bind` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  proc_bindClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseClauseAttr(parser, proc_bind_valAttr);
    if (odsResult) return ::mlir::failure();
    if (proc_bind_valAttr)
      result.getOrAddProperties<ParallelOp::Properties>().proc_bind_val = proc_bind_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}

  if (parser.parseRegion(*regionRegion))
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
  result.addRegion(std::move(regionRegion));
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(if_expr_varOperands.size()), static_cast<int32_t>(num_threads_varOperands.size()), static_cast<int32_t>(allocate_varsOperands.size()), static_cast<int32_t>(allocators_varsOperands.size()), static_cast<int32_t>(reduction_varsOperands.size())}), result.getOrAddProperties<ParallelOp::Properties>().operandSegmentSizes.begin());
  if (parser.resolveOperands(if_expr_varOperands, if_expr_varTypes, if_expr_varOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(num_threads_varOperands, num_threads_varTypes, num_threads_varOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocate_varsOperands, allocate_varsTypes, allocate_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocators_varsOperands, allocators_varsTypes, allocators_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(reduction_varsOperands, reduction_varsTypes, reduction_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ParallelOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getReductionVars().size() || (getReductionsAttr())) {
  _odsPrinter << ' ' << "reduction";
  _odsPrinter << "(";
  printReductionVarList(_odsPrinter, *this, getReductionVars(), getReductionVars().getTypes(), getReductionsAttr());
  _odsPrinter << ")";
  }
  if (false || getIfExprVar()) {
  _odsPrinter << ' ' << "if";
  _odsPrinter << "(";
  if (::mlir::Value value = getIfExprVar())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getIfExprVar() ? ::llvm::ArrayRef<::mlir::Type>(getIfExprVar().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getNumThreadsVar()) {
  _odsPrinter << ' ' << "num_threads";
  _odsPrinter << "(";
  if (::mlir::Value value = getNumThreadsVar())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getNumThreadsVar() ? ::llvm::ArrayRef<::mlir::Type>(getNumThreadsVar().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getAllocateVars().size() || getAllocatorsVars().size()) {
  _odsPrinter << ' ' << "allocate";
  _odsPrinter << "(";
  printAllocateAndAllocator(_odsPrinter, *this, getAllocateVars(), getAllocateVars().getTypes(), getAllocatorsVars(), getAllocatorsVars().getTypes());
  _odsPrinter << ")";
  }
  if (false || (getProcBindValAttr())) {
  _odsPrinter << ' ' << "proc_bind";
  _odsPrinter << "(";
  printClauseAttr(_odsPrinter, *this, getProcBindValAttr());
  _odsPrinter << ")";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("reductions");
  elidedAttrs.push_back("proc_bind_val");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::ParallelOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::ReductionDeclareOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReductionDeclareOpGenericAdaptorBase::ReductionDeclareOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.reduction.declare", odsAttrs.getContext());
}

ReductionDeclareOpGenericAdaptorBase::ReductionDeclareOpGenericAdaptorBase(ReductionDeclareOp op) : ReductionDeclareOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReductionDeclareOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReductionDeclareOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::StringAttr ReductionDeclareOpGenericAdaptorBase::getSymNameAttr() {
  auto attr = ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
  return attr;
}

::llvm::StringRef ReductionDeclareOpGenericAdaptorBase::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr ReductionDeclareOpGenericAdaptorBase::getTypeAttr() {
  auto attr = ::llvm::cast<::mlir::TypeAttr>(getProperties().type);
  return attr;
}

::mlir::Type ReductionDeclareOpGenericAdaptorBase::getType() {
  auto attr = getTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

::mlir::Region &ReductionDeclareOpGenericAdaptorBase::getInitializerRegion() {
  return *odsRegions[0];
}

::mlir::Region &ReductionDeclareOpGenericAdaptorBase::getReductionRegion() {
  return *odsRegions[1];
}

::mlir::Region &ReductionDeclareOpGenericAdaptorBase::getAtomicReductionRegion() {
  return *odsRegions[2];
}

::mlir::RegionRange ReductionDeclareOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
ReductionDeclareOpAdaptor::ReductionDeclareOpAdaptor(ReductionDeclareOp op) : ReductionDeclareOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReductionDeclareOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitError(loc, "'omp.reduction.declare' op ""requires attribute 'sym_name'");
  auto tblgen_type = getProperties().type; (void)tblgen_type;
  if (!tblgen_type) return emitError(loc, "'omp.reduction.declare' op ""requires attribute 'type'");

  if (tblgen_sym_name && !((::llvm::isa<::mlir::StringAttr>(tblgen_sym_name))))
    return emitError(loc, "'omp.reduction.declare' op ""attribute 'sym_name' failed to satisfy constraint: string attribute");

  if (tblgen_type && !(((::llvm::isa<::mlir::TypeAttr>(tblgen_type))) && ((::llvm::isa<::mlir::Type>(::llvm::cast<::mlir::TypeAttr>(tblgen_type).getValue()))) && ((true))))
    return emitError(loc, "'omp.reduction.declare' op ""attribute 'type' failed to satisfy constraint: any type attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReductionDeclareOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReductionDeclareOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> ReductionDeclareOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReductionDeclareOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &ReductionDeclareOp::getInitializerRegion() {
  return (*this)->getRegion(0);
}

::mlir::Region &ReductionDeclareOp::getReductionRegion() {
  return (*this)->getRegion(1);
}

::mlir::Region &ReductionDeclareOp::getAtomicReductionRegion() {
  return (*this)->getRegion(2);
}

::mlir::LogicalResult ReductionDeclareOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
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
  return ::mlir::success();
}

::mlir::Attribute ReductionDeclareOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.sym_name;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("sym_name",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.type;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("type",
                                       propStorage));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ReductionDeclareOp::computePropertiesHash(const Properties &prop) {
  return llvm::hash_combine(
    llvm::hash_value(prop.sym_name.getAsOpaquePointer()), 
    llvm::hash_value(prop.type.getAsOpaquePointer()));
}

std::optional<mlir::Attribute> ReductionDeclareOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "sym_name")
      return prop.sym_name;

    if (name == "type")
      return prop.type;
  return std::nullopt;
}

void ReductionDeclareOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "sym_name") {
       prop.sym_name = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.sym_name)>>(value);
       return;
    }

    if (name == "type") {
       prop.type = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.type)>>(value);
       return;
    }
}

void ReductionDeclareOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.sym_name) attrs.append("sym_name", prop.sym_name);

    if (prop.type) attrs.append("type", prop.type);
}

::mlir::LogicalResult ReductionDeclareOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getSymNameAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps4(attr, "sym_name", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getTypeAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps2(attr, "type", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ReductionDeclareOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readAttribute(prop.sym_name)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readAttribute(prop.type)))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReductionDeclareOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;
  writer.writeAttribute(prop.sym_name);
  writer.writeAttribute(prop.type);
}

::mlir::StringAttr ReductionDeclareOp::getSymNameAttr() {
  return ::llvm::cast<::mlir::StringAttr>(getProperties().sym_name);
}

::llvm::StringRef ReductionDeclareOp::getSymName() {
  auto attr = getSymNameAttr();
  return attr.getValue();
}

::mlir::TypeAttr ReductionDeclareOp::getTypeAttr() {
  return ::llvm::cast<::mlir::TypeAttr>(getProperties().type);
}

::mlir::Type ReductionDeclareOp::getType() {
  auto attr = getTypeAttr();
  return ::llvm::cast<::mlir::Type>(attr.getValue());
}

void ReductionDeclareOp::setSymNameAttr(::mlir::StringAttr attr) {
  (*this)->setAttr(getSymNameAttrName(), attr);
}

void ReductionDeclareOp::setSymName(::llvm::StringRef attrValue) {
  (*this)->setAttr(getSymNameAttrName(), ::mlir::Builder((*this)->getContext()).getStringAttr(attrValue));
}

void ReductionDeclareOp::setTypeAttr(::mlir::TypeAttr attr) {
  (*this)->setAttr(getTypeAttrName(), attr);
}

void ReductionDeclareOp::setType(::mlir::Type attrValue) {
  (*this)->setAttr(getTypeAttrName(), ::mlir::TypeAttr::get(attrValue));
}

void ReductionDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::StringAttr sym_name, ::mlir::TypeAttr type) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  odsState.getOrAddProperties<Properties>().type = type;
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
}

void ReductionDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::StringAttr sym_name, ::mlir::TypeAttr type) {
  odsState.getOrAddProperties<Properties>().sym_name = sym_name;
  odsState.getOrAddProperties<Properties>().type = type;
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReductionDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::llvm::StringRef sym_name, ::mlir::Type type) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().type = ::mlir::TypeAttr::get(type);
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
}

void ReductionDeclareOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::llvm::StringRef sym_name, ::mlir::Type type) {
  odsState.getOrAddProperties<Properties>().sym_name = odsBuilder.getStringAttr(sym_name);
  odsState.getOrAddProperties<Properties>().type = ::mlir::TypeAttr::get(type);
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReductionDeclareOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 3; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReductionDeclareOp::verifyInvariantsImpl() {
  auto tblgen_sym_name = getProperties().sym_name; (void)tblgen_sym_name;
  if (!tblgen_sym_name) return emitOpError("requires attribute 'sym_name'");
  auto tblgen_type = getProperties().type; (void)tblgen_type;
  if (!tblgen_type) return emitOpError("requires attribute 'type'");

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps4(*this, tblgen_sym_name, "sym_name")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps2(*this, tblgen_type, "type")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "initializerRegion", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(1)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "reductionRegion", index++)))
        return ::mlir::failure();

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(2)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "atomicReductionRegion", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReductionDeclareOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ReductionDeclareOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::StringAttr sym_nameAttr;
  ::mlir::TypeAttr typeAttr;
  std::unique_ptr<::mlir::Region> initializerRegionRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> reductionRegionRegion = std::make_unique<::mlir::Region>();
  std::unique_ptr<::mlir::Region> atomicReductionRegionRegion = std::make_unique<::mlir::Region>();

  if (parser.parseSymbolName(sym_nameAttr))
    return ::mlir::failure();
  if (sym_nameAttr) result.getOrAddProperties<ReductionDeclareOp::Properties>().sym_name = sym_nameAttr;
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseCustomAttributeWithFallback(typeAttr, parser.getBuilder().getType<::mlir::NoneType>())) {
    return ::mlir::failure();
  }
  if (typeAttr) result.getOrAddProperties<ReductionDeclareOp::Properties>().type = typeAttr;
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDictWithKeyword(result.attributes))
      return ::mlir::failure();
    if (failed(verifyInherentAttrs(result.name, result.attributes, [&]() {
        return parser.emitError(loc) << "'" << result.name.getStringRef() << "' op ";
      })))
      return ::mlir::failure();
  }
  if (parser.parseKeyword("init"))
    return ::mlir::failure();

  if (parser.parseRegion(*initializerRegionRegion))
    return ::mlir::failure();
  if (parser.parseKeyword("combiner"))
    return ::mlir::failure();

  if (parser.parseRegion(*reductionRegionRegion))
    return ::mlir::failure();
  {
    auto odsResult = parseAtomicReductionRegion(parser, *atomicReductionRegionRegion);
    if (odsResult) return ::mlir::failure();
  }
  result.addRegion(std::move(initializerRegionRegion));
  result.addRegion(std::move(reductionRegionRegion));
  result.addRegion(std::move(atomicReductionRegionRegion));
  return ::mlir::success();
}

void ReductionDeclareOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printSymbolName(getSymNameAttr().getValue());
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter.printAttributeWithoutType(getTypeAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("sym_name");
  elidedAttrs.push_back("type");
  _odsPrinter.printOptionalAttrDictWithKeyword((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << "init";
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getInitializerRegion());
  _odsPrinter << ' ' << "combiner";
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getReductionRegion());
  _odsPrinter << ' ';
  printAtomicReductionRegion(_odsPrinter, *this, getAtomicReductionRegion());
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::ReductionDeclareOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::ReductionOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ReductionOpGenericAdaptorBase::ReductionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.reduction", odsAttrs.getContext());
}

ReductionOpGenericAdaptorBase::ReductionOpGenericAdaptorBase(ReductionOp op) : ReductionOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ReductionOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ReductionOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ReductionOpAdaptor::ReductionOpAdaptor(ReductionOp op) : ReductionOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ReductionOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ReductionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ReductionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value ReductionOp::getOperand() {
  return ::llvm::cast<::mlir::Value>(*getODSOperands(0).begin());
}

::mlir::TypedValue<::mlir::omp::PointerLikeType> ReductionOp::getAccumulator() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::omp::PointerLikeType>>(*getODSOperands(1).begin());
}

::mlir::OpOperand &ReductionOp::getOperandMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

::mlir::OpOperand &ReductionOp::getAccumulatorMutable() {
  auto range = getODSOperandIndexAndLength(1);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ReductionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ReductionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void ReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value operand, ::mlir::Value accumulator) {
  odsState.addOperands(operand);
  odsState.addOperands(accumulator);
}

void ReductionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value operand, ::mlir::Value accumulator) {
  odsState.addOperands(operand);
  odsState.addOperands(accumulator);
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ReductionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ReductionOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ReductionOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ReductionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand operandRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> operandOperands(operandRawOperands);  ::llvm::SMLoc operandOperandsLoc;
  (void)operandOperandsLoc;
  ::mlir::OpAsmParser::UnresolvedOperand accumulatorRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> accumulatorOperands(accumulatorRawOperands);  ::llvm::SMLoc accumulatorOperandsLoc;
  (void)accumulatorOperandsLoc;
  ::mlir::Type operandRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> operandTypes(operandRawTypes);
  ::mlir::Type accumulatorRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> accumulatorTypes(accumulatorRawTypes);

  operandOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(operandRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseComma())
    return ::mlir::failure();

  accumulatorOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(accumulatorRawOperands[0]))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    operandRawTypes[0] = type;
  }
  if (parser.parseComma())
    return ::mlir::failure();

  {
    ::mlir::omp::PointerLikeType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    accumulatorRawTypes[0] = type;
  }
  if (parser.resolveOperands(operandOperands, operandTypes, operandOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(accumulatorOperands, accumulatorTypes, accumulatorOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ReductionOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getOperand();
  _odsPrinter << ",";
  _odsPrinter << ' ';
  _odsPrinter << getAccumulator();
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getOperand().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::Type>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ",";
  _odsPrinter << ' ';
  {
    auto type = getAccumulator().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::omp::PointerLikeType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::ReductionOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::SectionOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SectionOpGenericAdaptorBase::SectionOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.section", odsAttrs.getContext());
}

SectionOpGenericAdaptorBase::SectionOpGenericAdaptorBase(SectionOp op) : SectionOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SectionOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr SectionOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &SectionOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange SectionOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
SectionOpAdaptor::SectionOpAdaptor(SectionOp op) : SectionOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SectionOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SectionOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range SectionOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> SectionOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SectionOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &SectionOp::getRegion() {
  return (*this)->getRegion(0);
}

void SectionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
  (void)odsState.addRegion();
}

void SectionOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SectionOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SectionOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult SectionOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult SectionOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();

  if (parser.parseRegion(*regionRegion))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  result.addRegion(std::move(regionRegion));
  return ::mlir::success();
}

void SectionOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::SectionOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::SectionsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SectionsOpGenericAdaptorBase::SectionsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.sections", odsAttrs.getContext());
}

SectionsOpGenericAdaptorBase::SectionsOpGenericAdaptorBase(SectionsOp op) : SectionsOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SectionsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr SectionsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr SectionsOpGenericAdaptorBase::getReductionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().reductions);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > SectionsOpGenericAdaptorBase::getReductions() {
  auto attr = getReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::UnitAttr SectionsOpGenericAdaptorBase::getNowaitAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SectionsOpGenericAdaptorBase::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::Region &SectionsOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange SectionsOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
SectionsOpAdaptor::SectionsOpAdaptor(SectionsOp op) : SectionsOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SectionsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;
  auto tblgen_reductions = getProperties().reductions; (void)tblgen_reductions;

  if (tblgen_reductions && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_reductions))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_reductions), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::SymbolRefAttr>(attr))); }))))
    return emitError(loc, "'omp.sections' op ""attribute 'reductions' failed to satisfy constraint: symbol ref array attribute");

  if (tblgen_nowait && !((::llvm::isa<::mlir::UnitAttr>(tblgen_nowait))))
    return emitError(loc, "'omp.sections' op ""attribute 'nowait' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SectionsOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range SectionsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SectionsOp::getReductionVars() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range SectionsOp::getAllocateVars() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range SectionsOp::getAllocatorsVars() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange SectionsOp::getReductionVarsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SectionsOp::getAllocateVarsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SectionsOp::getAllocatorsVarsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> SectionsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SectionsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &SectionsOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult SectionsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.nowait;
       auto attr = dict.get("nowait");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for nowait in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `nowait` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.reductions;
       auto attr = dict.get("reductions");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for reductions in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reductions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute SectionsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.nowait;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("nowait",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.reductions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reductions",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SectionsOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.nowait.getAsOpaquePointer()), 
    llvm::hash_value(prop.reductions.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> SectionsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "nowait")
      return prop.nowait;

    if (name == "reductions")
      return prop.reductions;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void SectionsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "nowait") {
       prop.nowait = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.nowait)>>(value);
       return;
    }

    if (name == "reductions") {
       prop.reductions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reductions)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void SectionsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.nowait) attrs.append("nowait", prop.nowait);

    if (prop.reductions) attrs.append("reductions", prop.reductions);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult SectionsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNowaitAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "nowait", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReductionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(attr, "reductions", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SectionsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.nowait)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  if (::mlir::failed(reader.readOptionalAttribute(prop.reductions)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void SectionsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.nowait);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  writer.writeOptionalAttribute(prop.reductions);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::ArrayAttr SectionsOp::getReductionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().reductions);
}

::std::optional< ::mlir::ArrayAttr > SectionsOp::getReductions() {
  auto attr = getReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::UnitAttr SectionsOp::getNowaitAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
}

bool SectionsOp::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void SectionsOp::setReductionsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getReductionsAttrName(), attr);
}

void SectionsOp::setNowaitAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getNowaitAttrName(), attr);
}

void SectionsOp::setNowait(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNowaitAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getNowaitAttrName());
}

::mlir::Attribute SectionsOp::removeReductionsAttr() {
    auto &attr = getProperties().reductions;
    attr = {};
    return attr;
}

::mlir::Attribute SectionsOp::removeNowaitAttr() {
    auto &attr = getProperties().nowait;
    attr = {};
    return attr;
}

void SectionsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::UnitAttr nowait) {
  odsState.addOperands(reduction_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(reduction_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
  (void)odsState.addRegion();
}

void SectionsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::UnitAttr nowait) {
  odsState.addOperands(reduction_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(reduction_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SectionsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/bool nowait) {
  odsState.addOperands(reduction_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(reduction_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
}

void SectionsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/bool nowait) {
  odsState.addOperands(reduction_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(reduction_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SectionsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SectionsOp::verifyInvariantsImpl() {
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;
  auto tblgen_reductions = getProperties().reductions; (void)tblgen_reductions;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(*this, tblgen_reductions, "reductions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_nowait, "nowait")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps0(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult SectionsOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult SectionsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> reduction_varsOperands;
  ::llvm::SMLoc reduction_varsOperandsLoc;
  (void)reduction_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> reduction_varsTypes;
  ::mlir::ArrayAttr reductionsAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocate_varsOperands;
  ::llvm::SMLoc allocate_varsOperandsLoc;
  (void)allocate_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocate_varsTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocators_varsOperands;
  ::llvm::SMLoc allocators_varsOperandsLoc;
  (void)allocators_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocators_varsTypes;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  bool reductionClause = false;
  bool allocateClause = false;
  bool nowaitClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("reduction"))) {

  if (reductionClause) {
    return parser.emitError(parser.getNameLoc())
          << "`reduction` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  reductionClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    reduction_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseReductionVarList(parser, reduction_varsOperands, reduction_varsTypes, reductionsAttr);
    if (odsResult) return ::mlir::failure();
    if (reductionsAttr)
      result.getOrAddProperties<SectionsOp::Properties>().reductions = reductionsAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("allocate"))) {

  if (allocateClause) {
    return parser.emitError(parser.getNameLoc())
          << "`allocate` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  allocateClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    allocate_varsOperandsLoc = parser.getCurrentLocation();
    allocators_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAllocateAndAllocator(parser, allocate_varsOperands, allocate_varsTypes, allocators_varsOperands, allocators_varsTypes);
    if (odsResult) return ::mlir::failure();
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("nowait"))) {

  if (nowaitClause) {
    return parser.emitError(parser.getNameLoc())
          << "`nowait` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  nowaitClause = true;
    result.getOrAddProperties<SectionsOp::Properties>().nowait = parser.getBuilder().getUnitAttr();    } else  {
    break;
  }
}

  if (parser.parseRegion(*regionRegion))
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
  result.addRegion(std::move(regionRegion));
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(reduction_varsOperands.size()), static_cast<int32_t>(allocate_varsOperands.size()), static_cast<int32_t>(allocators_varsOperands.size())}), result.getOrAddProperties<SectionsOp::Properties>().operandSegmentSizes.begin());
  if (parser.resolveOperands(reduction_varsOperands, reduction_varsTypes, reduction_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocate_varsOperands, allocate_varsTypes, allocate_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocators_varsOperands, allocators_varsTypes, allocators_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SectionsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getReductionVars().size() || (getReductionsAttr())) {
  _odsPrinter << ' ' << "reduction";
  _odsPrinter << "(";
  printReductionVarList(_odsPrinter, *this, getReductionVars(), getReductionVars().getTypes(), getReductionsAttr());
  _odsPrinter << ")";
  }
  if (false || getAllocateVars().size() || getAllocatorsVars().size()) {
  _odsPrinter << ' ' << "allocate";
  _odsPrinter << "(";
  printAllocateAndAllocator(_odsPrinter, *this, getAllocateVars(), getAllocateVars().getTypes(), getAllocatorsVars(), getAllocatorsVars().getTypes());
  _odsPrinter << ")";
  }
  if (false || (getNowaitAttr() && getNowaitAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr))) {
  _odsPrinter << ' ' << "nowait";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("reductions");
  elidedAttrs.push_back("nowait");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNowaitAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("nowait");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::SectionsOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::SimdLoopOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SimdLoopOpGenericAdaptorBase::SimdLoopOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.simdloop", odsAttrs.getContext());
}

SimdLoopOpGenericAdaptorBase::SimdLoopOpGenericAdaptorBase(SimdLoopOp op) : SimdLoopOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SimdLoopOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr SimdLoopOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr SimdLoopOpGenericAdaptorBase::getAlignmentValuesAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alignment_values);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > SimdLoopOpGenericAdaptorBase::getAlignmentValues() {
  auto attr = getAlignmentValuesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::omp::ClauseOrderKindAttr SimdLoopOpGenericAdaptorBase::getOrderValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::omp::ClauseOrderKindAttr>(getProperties().order_val);
  return attr;
}

::std::optional<::mlir::omp::ClauseOrderKind> SimdLoopOpGenericAdaptorBase::getOrderVal() {
  auto attr = getOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseOrderKind>(attr.getValue()) : (::std::nullopt);
}

::mlir::IntegerAttr SimdLoopOpGenericAdaptorBase::getSimdlenAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().simdlen);
  return attr;
}

::std::optional<uint64_t> SimdLoopOpGenericAdaptorBase::getSimdlen() {
  auto attr = getSimdlenAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

::mlir::IntegerAttr SimdLoopOpGenericAdaptorBase::getSafelenAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().safelen);
  return attr;
}

::std::optional<uint64_t> SimdLoopOpGenericAdaptorBase::getSafelen() {
  auto attr = getSafelenAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

::mlir::UnitAttr SimdLoopOpGenericAdaptorBase::getInclusiveAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().inclusive);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SimdLoopOpGenericAdaptorBase::getInclusive() {
  auto attr = getInclusiveAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::Region &SimdLoopOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange SimdLoopOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
SimdLoopOpAdaptor::SimdLoopOpAdaptor(SimdLoopOp op) : SimdLoopOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SimdLoopOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_alignment_values = getProperties().alignment_values; (void)tblgen_alignment_values;
  auto tblgen_inclusive = getProperties().inclusive; (void)tblgen_inclusive;
  auto tblgen_order_val = getProperties().order_val; (void)tblgen_order_val;
  auto tblgen_safelen = getProperties().safelen; (void)tblgen_safelen;
  auto tblgen_simdlen = getProperties().simdlen; (void)tblgen_simdlen;

  if (tblgen_alignment_values && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_alignment_values))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_alignment_values), [&](::mlir::Attribute attr) { return attr && (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(64)))); }))))
    return emitError(loc, "'omp.simdloop' op ""attribute 'alignment_values' failed to satisfy constraint: 64-bit integer array attribute");

  if (tblgen_order_val && !((::llvm::isa<::mlir::omp::ClauseOrderKindAttr>(tblgen_order_val))))
    return emitError(loc, "'omp.simdloop' op ""attribute 'order_val' failed to satisfy constraint: OrderKind Clause");

  if (tblgen_simdlen && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_simdlen))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_simdlen).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_simdlen).getValue().isStrictlyPositive()))))
    return emitError(loc, "'omp.simdloop' op ""attribute 'simdlen' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive");

  if (tblgen_safelen && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_safelen))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_safelen).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_safelen).getValue().isStrictlyPositive()))))
    return emitError(loc, "'omp.simdloop' op ""attribute 'safelen' failed to satisfy constraint: 64-bit signless integer attribute whose value is positive");

  if (tblgen_inclusive && !((::llvm::isa<::mlir::UnitAttr>(tblgen_inclusive))))
    return emitError(loc, "'omp.simdloop' op ""attribute 'inclusive' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SimdLoopOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range SimdLoopOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SimdLoopOp::getLowerBound() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range SimdLoopOp::getUpperBound() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range SimdLoopOp::getStep() {
  return getODSOperands(2);
}

::mlir::Operation::operand_range SimdLoopOp::getAlignedVars() {
  return getODSOperands(3);
}

::mlir::TypedValue<::mlir::IntegerType> SimdLoopOp::getIfExpr() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::Operation::operand_range SimdLoopOp::getNontemporalVars() {
  return getODSOperands(5);
}

::mlir::MutableOperandRange SimdLoopOp::getLowerBoundMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SimdLoopOp::getUpperBoundMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SimdLoopOp::getStepMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SimdLoopOp::getAlignedVarsMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SimdLoopOp::getIfExprMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SimdLoopOp::getNontemporalVarsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> SimdLoopOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SimdLoopOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &SimdLoopOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult SimdLoopOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.alignment_values;
       auto attr = dict.get("alignment_values");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for alignment_values in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `alignment_values` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.inclusive;
       auto attr = dict.get("inclusive");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for inclusive in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `inclusive` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.order_val;
       auto attr = dict.get("order_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for order_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `order_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.safelen;
       auto attr = dict.get("safelen");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for safelen in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `safelen` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.simdlen;
       auto attr = dict.get("simdlen");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for simdlen in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `simdlen` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute SimdLoopOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.alignment_values;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("alignment_values",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.inclusive;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("inclusive",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.order_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("order_val",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.safelen;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("safelen",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.simdlen;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("simdlen",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SimdLoopOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.alignment_values.getAsOpaquePointer()), 
    llvm::hash_value(prop.inclusive.getAsOpaquePointer()), 
    llvm::hash_value(prop.order_val.getAsOpaquePointer()), 
    llvm::hash_value(prop.safelen.getAsOpaquePointer()), 
    llvm::hash_value(prop.simdlen.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> SimdLoopOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "alignment_values")
      return prop.alignment_values;

    if (name == "inclusive")
      return prop.inclusive;

    if (name == "order_val")
      return prop.order_val;

    if (name == "safelen")
      return prop.safelen;

    if (name == "simdlen")
      return prop.simdlen;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void SimdLoopOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "alignment_values") {
       prop.alignment_values = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.alignment_values)>>(value);
       return;
    }

    if (name == "inclusive") {
       prop.inclusive = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.inclusive)>>(value);
       return;
    }

    if (name == "order_val") {
       prop.order_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.order_val)>>(value);
       return;
    }

    if (name == "safelen") {
       prop.safelen = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.safelen)>>(value);
       return;
    }

    if (name == "simdlen") {
       prop.simdlen = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.simdlen)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void SimdLoopOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.alignment_values) attrs.append("alignment_values", prop.alignment_values);

    if (prop.inclusive) attrs.append("inclusive", prop.inclusive);

    if (prop.order_val) attrs.append("order_val", prop.order_val);

    if (prop.safelen) attrs.append("safelen", prop.safelen);

    if (prop.simdlen) attrs.append("simdlen", prop.simdlen);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult SimdLoopOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getAlignmentValuesAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps15(attr, "alignment_values", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getInclusiveAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "inclusive", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOrderValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps8(attr, "order_val", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSafelenAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps16(attr, "safelen", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSimdlenAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps16(attr, "simdlen", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SimdLoopOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.alignment_values)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.inclusive)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  if (::mlir::failed(reader.readOptionalAttribute(prop.order_val)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.safelen)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.simdlen)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void SimdLoopOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.alignment_values);

  writer.writeOptionalAttribute(prop.inclusive);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  writer.writeOptionalAttribute(prop.order_val);

  writer.writeOptionalAttribute(prop.safelen);

  writer.writeOptionalAttribute(prop.simdlen);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::ArrayAttr SimdLoopOp::getAlignmentValuesAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().alignment_values);
}

::std::optional< ::mlir::ArrayAttr > SimdLoopOp::getAlignmentValues() {
  auto attr = getAlignmentValuesAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::omp::ClauseOrderKindAttr SimdLoopOp::getOrderValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::omp::ClauseOrderKindAttr>(getProperties().order_val);
}

::std::optional<::mlir::omp::ClauseOrderKind> SimdLoopOp::getOrderVal() {
  auto attr = getOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseOrderKind>(attr.getValue()) : (::std::nullopt);
}

::mlir::IntegerAttr SimdLoopOp::getSimdlenAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().simdlen);
}

::std::optional<uint64_t> SimdLoopOp::getSimdlen() {
  auto attr = getSimdlenAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

::mlir::IntegerAttr SimdLoopOp::getSafelenAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().safelen);
}

::std::optional<uint64_t> SimdLoopOp::getSafelen() {
  auto attr = getSafelenAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

::mlir::UnitAttr SimdLoopOp::getInclusiveAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().inclusive);
}

bool SimdLoopOp::getInclusive() {
  auto attr = getInclusiveAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void SimdLoopOp::setAlignmentValuesAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getAlignmentValuesAttrName(), attr);
}

void SimdLoopOp::setOrderValAttr(::mlir::omp::ClauseOrderKindAttr attr) {
  (*this)->setAttr(getOrderValAttrName(), attr);
}

void SimdLoopOp::setOrderVal(::std::optional<::mlir::omp::ClauseOrderKind> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getOrderValAttrName(), ::mlir::omp::ClauseOrderKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getOrderValAttrName());
}

void SimdLoopOp::setSimdlenAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getSimdlenAttrName(), attr);
}

void SimdLoopOp::setSimdlen(::std::optional<uint64_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getSimdlenAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue));
    (*this)->removeAttr(getSimdlenAttrName());
}

void SimdLoopOp::setSafelenAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getSafelenAttrName(), attr);
}

void SimdLoopOp::setSafelen(::std::optional<uint64_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getSafelenAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue));
    (*this)->removeAttr(getSafelenAttrName());
}

void SimdLoopOp::setInclusiveAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getInclusiveAttrName(), attr);
}

void SimdLoopOp::setInclusive(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInclusiveAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getInclusiveAttrName());
}

::mlir::Attribute SimdLoopOp::removeAlignmentValuesAttr() {
    auto &attr = getProperties().alignment_values;
    attr = {};
    return attr;
}

::mlir::Attribute SimdLoopOp::removeOrderValAttr() {
    auto &attr = getProperties().order_val;
    attr = {};
    return attr;
}

::mlir::Attribute SimdLoopOp::removeSimdlenAttr() {
    auto &attr = getProperties().simdlen;
    attr = {};
    return attr;
}

::mlir::Attribute SimdLoopOp::removeSafelenAttr() {
    auto &attr = getProperties().safelen;
    attr = {};
    return attr;
}

::mlir::Attribute SimdLoopOp::removeInclusiveAttr() {
    auto &attr = getProperties().inclusive;
    attr = {};
    return attr;
}

void SimdLoopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange lowerBound, ::mlir::ValueRange upperBound, ::mlir::ValueRange step, ::mlir::ValueRange aligned_vars, /*optional*/::mlir::ArrayAttr alignment_values, /*optional*/::mlir::Value if_expr, ::mlir::ValueRange nontemporal_vars, /*optional*/::mlir::omp::ClauseOrderKindAttr order_val, /*optional*/::mlir::IntegerAttr simdlen, /*optional*/::mlir::IntegerAttr safelen, /*optional*/::mlir::UnitAttr inclusive) {
  odsState.addOperands(lowerBound);
  odsState.addOperands(upperBound);
  odsState.addOperands(step);
  odsState.addOperands(aligned_vars);
  if (if_expr)
    odsState.addOperands(if_expr);
  odsState.addOperands(nontemporal_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBound.size()), static_cast<int32_t>(upperBound.size()), static_cast<int32_t>(step.size()), static_cast<int32_t>(aligned_vars.size()), (if_expr ? 1 : 0), static_cast<int32_t>(nontemporal_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (alignment_values) {
    odsState.getOrAddProperties<Properties>().alignment_values = alignment_values;
  }
  if (order_val) {
    odsState.getOrAddProperties<Properties>().order_val = order_val;
  }
  if (simdlen) {
    odsState.getOrAddProperties<Properties>().simdlen = simdlen;
  }
  if (safelen) {
    odsState.getOrAddProperties<Properties>().safelen = safelen;
  }
  if (inclusive) {
    odsState.getOrAddProperties<Properties>().inclusive = inclusive;
  }
  (void)odsState.addRegion();
}

void SimdLoopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange lowerBound, ::mlir::ValueRange upperBound, ::mlir::ValueRange step, ::mlir::ValueRange aligned_vars, /*optional*/::mlir::ArrayAttr alignment_values, /*optional*/::mlir::Value if_expr, ::mlir::ValueRange nontemporal_vars, /*optional*/::mlir::omp::ClauseOrderKindAttr order_val, /*optional*/::mlir::IntegerAttr simdlen, /*optional*/::mlir::IntegerAttr safelen, /*optional*/::mlir::UnitAttr inclusive) {
  odsState.addOperands(lowerBound);
  odsState.addOperands(upperBound);
  odsState.addOperands(step);
  odsState.addOperands(aligned_vars);
  if (if_expr)
    odsState.addOperands(if_expr);
  odsState.addOperands(nontemporal_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBound.size()), static_cast<int32_t>(upperBound.size()), static_cast<int32_t>(step.size()), static_cast<int32_t>(aligned_vars.size()), (if_expr ? 1 : 0), static_cast<int32_t>(nontemporal_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (alignment_values) {
    odsState.getOrAddProperties<Properties>().alignment_values = alignment_values;
  }
  if (order_val) {
    odsState.getOrAddProperties<Properties>().order_val = order_val;
  }
  if (simdlen) {
    odsState.getOrAddProperties<Properties>().simdlen = simdlen;
  }
  if (safelen) {
    odsState.getOrAddProperties<Properties>().safelen = safelen;
  }
  if (inclusive) {
    odsState.getOrAddProperties<Properties>().inclusive = inclusive;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SimdLoopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange lowerBound, ::mlir::ValueRange upperBound, ::mlir::ValueRange step, ::mlir::ValueRange aligned_vars, /*optional*/::mlir::ArrayAttr alignment_values, /*optional*/::mlir::Value if_expr, ::mlir::ValueRange nontemporal_vars, /*optional*/::mlir::omp::ClauseOrderKindAttr order_val, /*optional*/::mlir::IntegerAttr simdlen, /*optional*/::mlir::IntegerAttr safelen, /*optional*/bool inclusive) {
  odsState.addOperands(lowerBound);
  odsState.addOperands(upperBound);
  odsState.addOperands(step);
  odsState.addOperands(aligned_vars);
  if (if_expr)
    odsState.addOperands(if_expr);
  odsState.addOperands(nontemporal_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBound.size()), static_cast<int32_t>(upperBound.size()), static_cast<int32_t>(step.size()), static_cast<int32_t>(aligned_vars.size()), (if_expr ? 1 : 0), static_cast<int32_t>(nontemporal_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (alignment_values) {
    odsState.getOrAddProperties<Properties>().alignment_values = alignment_values;
  }
  if (order_val) {
    odsState.getOrAddProperties<Properties>().order_val = order_val;
  }
  if (simdlen) {
    odsState.getOrAddProperties<Properties>().simdlen = simdlen;
  }
  if (safelen) {
    odsState.getOrAddProperties<Properties>().safelen = safelen;
  }
  if (inclusive) {
    odsState.getOrAddProperties<Properties>().inclusive = ((inclusive) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
}

void SimdLoopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange lowerBound, ::mlir::ValueRange upperBound, ::mlir::ValueRange step, ::mlir::ValueRange aligned_vars, /*optional*/::mlir::ArrayAttr alignment_values, /*optional*/::mlir::Value if_expr, ::mlir::ValueRange nontemporal_vars, /*optional*/::mlir::omp::ClauseOrderKindAttr order_val, /*optional*/::mlir::IntegerAttr simdlen, /*optional*/::mlir::IntegerAttr safelen, /*optional*/bool inclusive) {
  odsState.addOperands(lowerBound);
  odsState.addOperands(upperBound);
  odsState.addOperands(step);
  odsState.addOperands(aligned_vars);
  if (if_expr)
    odsState.addOperands(if_expr);
  odsState.addOperands(nontemporal_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBound.size()), static_cast<int32_t>(upperBound.size()), static_cast<int32_t>(step.size()), static_cast<int32_t>(aligned_vars.size()), (if_expr ? 1 : 0), static_cast<int32_t>(nontemporal_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (alignment_values) {
    odsState.getOrAddProperties<Properties>().alignment_values = alignment_values;
  }
  if (order_val) {
    odsState.getOrAddProperties<Properties>().order_val = order_val;
  }
  if (simdlen) {
    odsState.getOrAddProperties<Properties>().simdlen = simdlen;
  }
  if (safelen) {
    odsState.getOrAddProperties<Properties>().safelen = safelen;
  }
  if (inclusive) {
    odsState.getOrAddProperties<Properties>().inclusive = ((inclusive) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SimdLoopOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SimdLoopOp::verifyInvariantsImpl() {
  auto tblgen_alignment_values = getProperties().alignment_values; (void)tblgen_alignment_values;
  auto tblgen_inclusive = getProperties().inclusive; (void)tblgen_inclusive;
  auto tblgen_order_val = getProperties().order_val; (void)tblgen_order_val;
  auto tblgen_safelen = getProperties().safelen; (void)tblgen_safelen;
  auto tblgen_simdlen = getProperties().simdlen; (void)tblgen_simdlen;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps15(*this, tblgen_alignment_values, "alignment_values")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps8(*this, tblgen_order_val, "order_val")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps16(*this, tblgen_simdlen, "simdlen")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps16(*this, tblgen_safelen, "safelen")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_inclusive, "inclusive")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((this->getODSOperands(0).getType()) == (this->getODSOperands(1).getType()) && (this->getODSOperands(1).getType()) == (this->getODSOperands(2).getType()) && (this->getODSOperands(2).getType()) == (this->getODSOperands(0).getType()))))
    return emitOpError("failed to verify that all of {lowerBound, upperBound, step} have same type");
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult SimdLoopOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult SimdLoopOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> aligned_varsOperands;
  ::llvm::SMLoc aligned_varsOperandsLoc;
  (void)aligned_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> aligned_varsTypes;
  ::mlir::ArrayAttr alignment_valuesAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> if_exprOperands;
  ::llvm::SMLoc if_exprOperandsLoc;
  (void)if_exprOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> nontemporal_varsOperands;
  ::llvm::SMLoc nontemporal_varsOperandsLoc;
  (void)nontemporal_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> nontemporal_varsTypes;
  ::mlir::omp::ClauseOrderKindAttr order_valAttr;
  ::mlir::IntegerAttr simdlenAttr;
  ::mlir::IntegerAttr safelenAttr;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lowerBoundOperands;
  ::llvm::SMLoc lowerBoundOperandsLoc;
  (void)lowerBoundOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> upperBoundOperands;
  ::llvm::SMLoc upperBoundOperandsLoc;
  (void)upperBoundOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> stepOperands;
  ::llvm::SMLoc stepOperandsLoc;
  (void)stepOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> stepTypes;
  ::mlir::UnitAttr inclusiveAttr;
  bool alignedClause = false;
  bool ifClause = false;
  bool nontemporalClause = false;
  bool orderClause = false;
  bool simdlenClause = false;
  bool safelenClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("aligned"))) {

  if (alignedClause) {
    return parser.emitError(parser.getNameLoc())
          << "`aligned` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  alignedClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    aligned_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAlignedClause(parser, aligned_varsOperands, aligned_varsTypes, alignment_valuesAttr);
    if (odsResult) return ::mlir::failure();
    if (alignment_valuesAttr)
      result.getOrAddProperties<SimdLoopOp::Properties>().alignment_values = alignment_valuesAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("if"))) {

  if (ifClause) {
    return parser.emitError(parser.getNameLoc())
          << "`if` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  ifClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    if_exprOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("nontemporal"))) {

  if (nontemporalClause) {
    return parser.emitError(parser.getNameLoc())
          << "`nontemporal` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  nontemporalClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  nontemporal_varsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(nontemporal_varsOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(nontemporal_varsTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("order"))) {

  if (orderClause) {
    return parser.emitError(parser.getNameLoc())
          << "`order` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  orderClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseClauseAttr(parser, order_valAttr);
    if (odsResult) return ::mlir::failure();
    if (order_valAttr)
      result.getOrAddProperties<SimdLoopOp::Properties>().order_val = order_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("simdlen"))) {

  if (simdlenClause) {
    return parser.emitError(parser.getNameLoc())
          << "`simdlen` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  simdlenClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  ::mlir::OptionalParseResult parseResultsimdlenAttr =
    parser.parseOptionalAttribute(simdlenAttr, parser.getBuilder().getIntegerType(64));
  if (parseResultsimdlenAttr.has_value() && failed(*parseResultsimdlenAttr))
    return ::mlir::failure();
  if (parseResultsimdlenAttr.has_value() && succeeded(*parseResultsimdlenAttr))
  if (simdlenAttr) result.getOrAddProperties<SimdLoopOp::Properties>().simdlen = simdlenAttr;
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("safelen"))) {

  if (safelenClause) {
    return parser.emitError(parser.getNameLoc())
          << "`safelen` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  safelenClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  ::mlir::OptionalParseResult parseResultsafelenAttr =
    parser.parseOptionalAttribute(safelenAttr, parser.getBuilder().getIntegerType(64));
  if (parseResultsafelenAttr.has_value() && failed(*parseResultsafelenAttr))
    return ::mlir::failure();
  if (parseResultsafelenAttr.has_value() && succeeded(*parseResultsafelenAttr))
  if (safelenAttr) result.getOrAddProperties<SimdLoopOp::Properties>().safelen = safelenAttr;
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  if (parser.parseKeyword("for"))
    return ::mlir::failure();
  {
    lowerBoundOperandsLoc = parser.getCurrentLocation();
    upperBoundOperandsLoc = parser.getCurrentLocation();
    stepOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseLoopControl(parser, *regionRegion, lowerBoundOperands, upperBoundOperands, stepOperands, stepTypes, inclusiveAttr);
    if (odsResult) return ::mlir::failure();
    if (inclusiveAttr)
      result.getOrAddProperties<SimdLoopOp::Properties>().inclusive = inclusiveAttr;
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
  result.addRegion(std::move(regionRegion));
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBoundOperands.size()), static_cast<int32_t>(upperBoundOperands.size()), static_cast<int32_t>(stepOperands.size()), static_cast<int32_t>(aligned_varsOperands.size()), static_cast<int32_t>(if_exprOperands.size()), static_cast<int32_t>(nontemporal_varsOperands.size())}), result.getOrAddProperties<SimdLoopOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(1);
  if (parser.resolveOperands(lowerBoundOperands, stepTypes, lowerBoundOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(upperBoundOperands, stepTypes, upperBoundOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(stepOperands, stepTypes, stepOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(aligned_varsOperands, aligned_varsTypes, aligned_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(if_exprOperands, odsBuildableType0, if_exprOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(nontemporal_varsOperands, nontemporal_varsTypes, nontemporal_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SimdLoopOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getAlignedVars().size() || (getAlignmentValuesAttr())) {
  _odsPrinter << ' ' << "aligned";
  _odsPrinter << "(";
  printAlignedClause(_odsPrinter, *this, getAlignedVars(), getAlignedVars().getTypes(), getAlignmentValuesAttr());
  _odsPrinter << ")";
  }
  if (false || getIfExpr()) {
  _odsPrinter << ' ' << "if";
  _odsPrinter << "(";
  if (::mlir::Value value = getIfExpr())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getNontemporalVars().size()) {
  _odsPrinter << ' ' << "nontemporal";
  _odsPrinter << "(";
  _odsPrinter << getNontemporalVars();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getNontemporalVars().getTypes();
  _odsPrinter << ")";
  }
  if (false || (getOrderValAttr())) {
  _odsPrinter << ' ' << "order";
  _odsPrinter << "(";
  printClauseAttr(_odsPrinter, *this, getOrderValAttr());
  _odsPrinter << ")";
  }
  if (false || (getSimdlenAttr())) {
  _odsPrinter << ' ' << "simdlen";
  _odsPrinter << "(";
  _odsPrinter.printAttributeWithoutType(getSimdlenAttr());
  _odsPrinter << ")";
  }
  if (false || (getSafelenAttr())) {
  _odsPrinter << ' ' << "safelen";
  _odsPrinter << "(";
  _odsPrinter.printAttributeWithoutType(getSafelenAttr());
  _odsPrinter << ")";
  }
  _odsPrinter << ' ' << "for";
  _odsPrinter << ' ';
  printLoopControl(_odsPrinter, *this, getRegion(), getLowerBound(), getUpperBound(), getStep(), getStep().getTypes(), getInclusiveAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("alignment_values");
  elidedAttrs.push_back("order_val");
  elidedAttrs.push_back("simdlen");
  elidedAttrs.push_back("safelen");
  elidedAttrs.push_back("inclusive");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInclusiveAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("inclusive");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::SimdLoopOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::SingleOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
SingleOpGenericAdaptorBase::SingleOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.single", odsAttrs.getContext());
}

SingleOpGenericAdaptorBase::SingleOpGenericAdaptorBase(SingleOp op) : SingleOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> SingleOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr SingleOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr SingleOpGenericAdaptorBase::getNowaitAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool SingleOpGenericAdaptorBase::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::Region &SingleOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange SingleOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
SingleOpAdaptor::SingleOpAdaptor(SingleOp op) : SingleOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult SingleOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;

  if (tblgen_nowait && !((::llvm::isa<::mlir::UnitAttr>(tblgen_nowait))))
    return emitError(loc, "'omp.single' op ""attribute 'nowait' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> SingleOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range SingleOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range SingleOp::getAllocateVars() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range SingleOp::getAllocatorsVars() {
  return getODSOperands(1);
}

::mlir::MutableOperandRange SingleOp::getAllocateVarsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange SingleOp::getAllocatorsVarsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> SingleOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range SingleOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &SingleOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult SingleOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.nowait;
       auto attr = dict.get("nowait");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for nowait in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `nowait` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute SingleOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.nowait;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("nowait",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code SingleOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.nowait.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> SingleOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "nowait")
      return prop.nowait;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void SingleOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "nowait") {
       prop.nowait = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.nowait)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void SingleOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.nowait) attrs.append("nowait", prop.nowait);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult SingleOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNowaitAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "nowait", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult SingleOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.nowait)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void SingleOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.nowait);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::UnitAttr SingleOp::getNowaitAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
}

bool SingleOp::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void SingleOp::setNowaitAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getNowaitAttrName(), attr);
}

void SingleOp::setNowait(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNowaitAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getNowaitAttrName());
}

::mlir::Attribute SingleOp::removeNowaitAttr() {
    auto &attr = getProperties().nowait;
    attr = {};
    return attr;
}

void SingleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::UnitAttr nowait) {
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
  (void)odsState.addRegion();
}

void SingleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::UnitAttr nowait) {
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SingleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/bool nowait) {
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
}

void SingleOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/bool nowait) {
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void SingleOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult SingleOp::verifyInvariantsImpl() {
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_nowait, "nowait")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult SingleOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult SingleOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocate_varsOperands;
  ::llvm::SMLoc allocate_varsOperandsLoc;
  (void)allocate_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocate_varsTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocators_varsOperands;
  ::llvm::SMLoc allocators_varsOperandsLoc;
  (void)allocators_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocators_varsTypes;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  bool allocateClause = false;
  bool nowaitClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("allocate"))) {

  if (allocateClause) {
    return parser.emitError(parser.getNameLoc())
          << "`allocate` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  allocateClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    allocate_varsOperandsLoc = parser.getCurrentLocation();
    allocators_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAllocateAndAllocator(parser, allocate_varsOperands, allocate_varsTypes, allocators_varsOperands, allocators_varsTypes);
    if (odsResult) return ::mlir::failure();
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("nowait"))) {

  if (nowaitClause) {
    return parser.emitError(parser.getNameLoc())
          << "`nowait` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  nowaitClause = true;
    result.getOrAddProperties<SingleOp::Properties>().nowait = parser.getBuilder().getUnitAttr();    } else  {
    break;
  }
}

  if (parser.parseRegion(*regionRegion))
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
  result.addRegion(std::move(regionRegion));
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(allocate_varsOperands.size()), static_cast<int32_t>(allocators_varsOperands.size())}), result.getOrAddProperties<SingleOp::Properties>().operandSegmentSizes.begin());
  if (parser.resolveOperands(allocate_varsOperands, allocate_varsTypes, allocate_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocators_varsOperands, allocators_varsTypes, allocators_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void SingleOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getAllocateVars().size() || getAllocatorsVars().size()) {
  _odsPrinter << ' ' << "allocate";
  _odsPrinter << "(";
  printAllocateAndAllocator(_odsPrinter, *this, getAllocateVars(), getAllocateVars().getTypes(), getAllocatorsVars(), getAllocatorsVars().getTypes());
  _odsPrinter << ")";
  }
  if (false || (getNowaitAttr() && getNowaitAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr))) {
  _odsPrinter << ' ' << "nowait";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("nowait");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNowaitAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("nowait");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::SingleOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::TargetOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TargetOpGenericAdaptorBase::TargetOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.target", odsAttrs.getContext());
}

TargetOpGenericAdaptorBase::TargetOpGenericAdaptorBase(TargetOp op) : TargetOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TargetOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr TargetOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr TargetOpGenericAdaptorBase::getNowaitAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool TargetOpGenericAdaptorBase::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::Region &TargetOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange TargetOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
TargetOpAdaptor::TargetOpAdaptor(TargetOp op) : TargetOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TargetOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;

  if (tblgen_nowait && !((::llvm::isa<::mlir::UnitAttr>(tblgen_nowait))))
    return emitError(loc, "'omp.target' op ""attribute 'nowait' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TargetOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range TargetOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> TargetOp::getIfExpr() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> TargetOp::getDevice() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> TargetOp::getThreadLimit() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::Operation::operand_range TargetOp::getMapOperands() {
  return getODSOperands(3);
}

::mlir::MutableOperandRange TargetOp::getIfExprMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TargetOp::getDeviceMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TargetOp::getThreadLimitMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TargetOp::getMapOperandsMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> TargetOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TargetOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &TargetOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult TargetOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.nowait;
       auto attr = dict.get("nowait");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for nowait in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `nowait` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute TargetOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.nowait;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("nowait",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TargetOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.nowait.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> TargetOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "nowait")
      return prop.nowait;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void TargetOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "nowait") {
       prop.nowait = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.nowait)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void TargetOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.nowait) attrs.append("nowait", prop.nowait);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult TargetOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNowaitAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "nowait", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TargetOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.nowait)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void TargetOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.nowait);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::UnitAttr TargetOp::getNowaitAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
}

bool TargetOp::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void TargetOp::setNowaitAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getNowaitAttrName(), attr);
}

void TargetOp::setNowait(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNowaitAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getNowaitAttrName());
}

::mlir::Attribute TargetOp::removeNowaitAttr() {
    auto &attr = getProperties().nowait;
    attr = {};
    return attr;
}

void TargetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::Value thread_limit, /*optional*/::mlir::UnitAttr nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  if (thread_limit)
    odsState.addOperands(thread_limit);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), (thread_limit ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
  (void)odsState.addRegion();
}

void TargetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::Value thread_limit, /*optional*/::mlir::UnitAttr nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  if (thread_limit)
    odsState.addOperands(thread_limit);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), (thread_limit ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TargetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::Value thread_limit, /*optional*/bool nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  if (thread_limit)
    odsState.addOperands(thread_limit);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), (thread_limit ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
}

void TargetOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::Value thread_limit, /*optional*/bool nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  if (thread_limit)
    odsState.addOperands(thread_limit);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), (thread_limit ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TargetOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TargetOp::verifyInvariantsImpl() {
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_nowait, "nowait")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult TargetOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TargetOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> if_exprOperands;
  ::llvm::SMLoc if_exprOperandsLoc;
  (void)if_exprOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> deviceOperands;
  ::llvm::SMLoc deviceOperandsLoc;
  (void)deviceOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> deviceTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> thread_limitOperands;
  ::llvm::SMLoc thread_limitOperandsLoc;
  (void)thread_limitOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> thread_limitTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> map_operandsOperands;
  ::llvm::SMLoc map_operandsOperandsLoc;
  (void)map_operandsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> map_operandsTypes;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  bool ifClause = false;
  bool deviceClause = false;
  bool thread_limitClause = false;
  bool nowaitClause = false;
  bool map_entriesClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("if"))) {

  if (ifClause) {
    return parser.emitError(parser.getNameLoc())
          << "`if` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  ifClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    if_exprOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("device"))) {

  if (deviceClause) {
    return parser.emitError(parser.getNameLoc())
          << "`device` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  deviceClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    deviceOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      deviceOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      deviceTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("thread_limit"))) {

  if (thread_limitClause) {
    return parser.emitError(parser.getNameLoc())
          << "`thread_limit` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  thread_limitClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    thread_limitOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      thread_limitOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      thread_limitTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("nowait"))) {

  if (nowaitClause) {
    return parser.emitError(parser.getNameLoc())
          << "`nowait` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  nowaitClause = true;
    result.getOrAddProperties<TargetOp::Properties>().nowait = parser.getBuilder().getUnitAttr();    } else if (succeeded(parser.parseOptionalKeyword("map_entries"))) {

  if (map_entriesClause) {
    return parser.emitError(parser.getNameLoc())
          << "`map_entries` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  map_entriesClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    map_operandsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseMapEntries(parser, map_operandsOperands, map_operandsTypes);
    if (odsResult) return ::mlir::failure();
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}

  if (parser.parseRegion(*regionRegion))
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
  result.addRegion(std::move(regionRegion));
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(if_exprOperands.size()), static_cast<int32_t>(deviceOperands.size()), static_cast<int32_t>(thread_limitOperands.size()), static_cast<int32_t>(map_operandsOperands.size())}), result.getOrAddProperties<TargetOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(1);
  if (parser.resolveOperands(if_exprOperands, odsBuildableType0, if_exprOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(deviceOperands, deviceTypes, deviceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(thread_limitOperands, thread_limitTypes, thread_limitOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(map_operandsOperands, map_operandsTypes, map_operandsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TargetOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getIfExpr()) {
  _odsPrinter << ' ' << "if";
  _odsPrinter << "(";
  if (::mlir::Value value = getIfExpr())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getDevice()) {
  _odsPrinter << ' ' << "device";
  _odsPrinter << "(";
  if (::mlir::Value value = getDevice())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getDevice() ? ::llvm::ArrayRef<::mlir::Type>(getDevice().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getThreadLimit()) {
  _odsPrinter << ' ' << "thread_limit";
  _odsPrinter << "(";
  if (::mlir::Value value = getThreadLimit())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getThreadLimit() ? ::llvm::ArrayRef<::mlir::Type>(getThreadLimit().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || (getNowaitAttr() && getNowaitAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr))) {
  _odsPrinter << ' ' << "nowait";
  }
  if (false || getMapOperands().size()) {
  _odsPrinter << ' ' << "map_entries";
  _odsPrinter << "(";
  printMapEntries(_odsPrinter, *this, getMapOperands(), getMapOperands().getTypes());
  _odsPrinter << ")";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("nowait");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNowaitAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("nowait");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::TargetOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::DataOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
DataOpGenericAdaptorBase::DataOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.target_data", odsAttrs.getContext());
}

DataOpGenericAdaptorBase::DataOpGenericAdaptorBase(DataOp op) : DataOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> DataOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr DataOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::Region &DataOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange DataOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
DataOpAdaptor::DataOpAdaptor(DataOp op) : DataOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult DataOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> DataOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range DataOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> DataOp::getIfExpr() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> DataOp::getDevice() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::Operation::operand_range DataOp::getUseDevicePtr() {
  return getODSOperands(2);
}

::mlir::Operation::operand_range DataOp::getUseDeviceAddr() {
  return getODSOperands(3);
}

::mlir::Operation::operand_range DataOp::getMapOperands() {
  return getODSOperands(4);
}

::mlir::MutableOperandRange DataOp::getIfExprMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange DataOp::getDeviceMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange DataOp::getUseDevicePtrMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange DataOp::getUseDeviceAddrMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange DataOp::getMapOperandsMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> DataOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range DataOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &DataOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult DataOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }
    ;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute DataOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code DataOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> DataOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void DataOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void DataOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult DataOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    return ::mlir::success();
}

::mlir::LogicalResult DataOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void DataOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

void DataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, ::mlir::ValueRange use_device_ptr, ::mlir::ValueRange use_device_addr, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(use_device_ptr);
  odsState.addOperands(use_device_addr);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(use_device_ptr.size()), static_cast<int32_t>(use_device_addr.size()), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  (void)odsState.addRegion();
}

void DataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, ::mlir::ValueRange use_device_ptr, ::mlir::ValueRange use_device_addr, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(use_device_ptr);
  odsState.addOperands(use_device_addr);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(use_device_ptr.size()), static_cast<int32_t>(use_device_addr.size()), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void DataOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult DataOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult DataOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult DataOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> if_exprOperands;
  ::llvm::SMLoc if_exprOperandsLoc;
  (void)if_exprOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> if_exprTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> deviceOperands;
  ::llvm::SMLoc deviceOperandsLoc;
  (void)deviceOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> deviceTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> map_operandsOperands;
  ::llvm::SMLoc map_operandsOperandsLoc;
  (void)map_operandsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> map_operandsTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> use_device_ptrOperands;
  ::llvm::SMLoc use_device_ptrOperandsLoc;
  (void)use_device_ptrOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> use_device_ptrTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> use_device_addrOperands;
  ::llvm::SMLoc use_device_addrOperandsLoc;
  (void)use_device_addrOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> use_device_addrTypes;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  bool ifClause = false;
  bool deviceClause = false;
  bool map_entriesClause = false;
  bool use_device_ptrClause = false;
  bool use_device_addrClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("if"))) {

  if (ifClause) {
    return parser.emitError(parser.getNameLoc())
          << "`if` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  ifClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    if_exprOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("device"))) {

  if (deviceClause) {
    return parser.emitError(parser.getNameLoc())
          << "`device` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  deviceClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    deviceOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      deviceOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      deviceTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("map_entries"))) {

  if (map_entriesClause) {
    return parser.emitError(parser.getNameLoc())
          << "`map_entries` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  map_entriesClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  map_operandsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(map_operandsOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(map_operandsTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("use_device_ptr"))) {

  if (use_device_ptrClause) {
    return parser.emitError(parser.getNameLoc())
          << "`use_device_ptr` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  use_device_ptrClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  use_device_ptrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(use_device_ptrOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(use_device_ptrTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("use_device_addr"))) {

  if (use_device_addrClause) {
    return parser.emitError(parser.getNameLoc())
          << "`use_device_addr` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  use_device_addrClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  use_device_addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(use_device_addrOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(use_device_addrTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}

  if (parser.parseRegion(*regionRegion))
    return ::mlir::failure();
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  result.addRegion(std::move(regionRegion));
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(if_exprOperands.size()), static_cast<int32_t>(deviceOperands.size()), static_cast<int32_t>(use_device_ptrOperands.size()), static_cast<int32_t>(use_device_addrOperands.size()), static_cast<int32_t>(map_operandsOperands.size())}), result.getOrAddProperties<DataOp::Properties>().operandSegmentSizes.begin());
  if (parser.resolveOperands(if_exprOperands, if_exprTypes, if_exprOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(deviceOperands, deviceTypes, deviceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(use_device_ptrOperands, use_device_ptrTypes, use_device_ptrOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(use_device_addrOperands, use_device_addrTypes, use_device_addrOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(map_operandsOperands, map_operandsTypes, map_operandsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void DataOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getIfExpr()) {
  _odsPrinter << ' ' << "if";
  _odsPrinter << "(";
  if (::mlir::Value value = getIfExpr())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getIfExpr() ? ::llvm::ArrayRef<::mlir::Type>(getIfExpr().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getDevice()) {
  _odsPrinter << ' ' << "device";
  _odsPrinter << "(";
  if (::mlir::Value value = getDevice())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getDevice() ? ::llvm::ArrayRef<::mlir::Type>(getDevice().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getMapOperands().size()) {
  _odsPrinter << ' ' << "map_entries";
  _odsPrinter << "(";
  _odsPrinter << getMapOperands();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getMapOperands().getTypes();
  _odsPrinter << ")";
  }
  if (false || getUseDevicePtr().size()) {
  _odsPrinter << ' ' << "use_device_ptr";
  _odsPrinter << "(";
  _odsPrinter << getUseDevicePtr();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getUseDevicePtr().getTypes();
  _odsPrinter << ")";
  }
  if (false || getUseDeviceAddr().size()) {
  _odsPrinter << ' ' << "use_device_addr";
  _odsPrinter << "(";
  _odsPrinter << getUseDeviceAddr();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getUseDeviceAddr().getTypes();
  _odsPrinter << ")";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::DataOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::EnterDataOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
EnterDataOpGenericAdaptorBase::EnterDataOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.target_enter_data", odsAttrs.getContext());
}

EnterDataOpGenericAdaptorBase::EnterDataOpGenericAdaptorBase(EnterDataOp op) : EnterDataOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> EnterDataOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr EnterDataOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr EnterDataOpGenericAdaptorBase::getNowaitAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool EnterDataOpGenericAdaptorBase::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
EnterDataOpAdaptor::EnterDataOpAdaptor(EnterDataOp op) : EnterDataOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult EnterDataOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;

  if (tblgen_nowait && !((::llvm::isa<::mlir::UnitAttr>(tblgen_nowait))))
    return emitError(loc, "'omp.target_enter_data' op ""attribute 'nowait' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> EnterDataOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range EnterDataOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> EnterDataOp::getIfExpr() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> EnterDataOp::getDevice() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::Operation::operand_range EnterDataOp::getMapOperands() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange EnterDataOp::getIfExprMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange EnterDataOp::getDeviceMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange EnterDataOp::getMapOperandsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> EnterDataOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range EnterDataOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult EnterDataOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.nowait;
       auto attr = dict.get("nowait");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for nowait in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `nowait` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute EnterDataOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.nowait;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("nowait",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code EnterDataOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.nowait.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> EnterDataOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "nowait")
      return prop.nowait;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void EnterDataOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "nowait") {
       prop.nowait = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.nowait)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void EnterDataOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.nowait) attrs.append("nowait", prop.nowait);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult EnterDataOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNowaitAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "nowait", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult EnterDataOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.nowait)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void EnterDataOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.nowait);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::UnitAttr EnterDataOp::getNowaitAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
}

bool EnterDataOp::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void EnterDataOp::setNowaitAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getNowaitAttrName(), attr);
}

void EnterDataOp::setNowait(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNowaitAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getNowaitAttrName());
}

::mlir::Attribute EnterDataOp::removeNowaitAttr() {
    auto &attr = getProperties().nowait;
    attr = {};
    return attr;
}

void EnterDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::UnitAttr nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
}

void EnterDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::UnitAttr nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void EnterDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/bool nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
}

void EnterDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/bool nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void EnterDataOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult EnterDataOp::verifyInvariantsImpl() {
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_nowait, "nowait")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult EnterDataOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult EnterDataOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> if_exprOperands;
  ::llvm::SMLoc if_exprOperandsLoc;
  (void)if_exprOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> if_exprTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> deviceOperands;
  ::llvm::SMLoc deviceOperandsLoc;
  (void)deviceOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> deviceTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> map_operandsOperands;
  ::llvm::SMLoc map_operandsOperandsLoc;
  (void)map_operandsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> map_operandsTypes;
  bool ifClause = false;
  bool deviceClause = false;
  bool nowaitClause = false;
  bool map_entriesClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("if"))) {

  if (ifClause) {
    return parser.emitError(parser.getNameLoc())
          << "`if` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  ifClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    if_exprOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("device"))) {

  if (deviceClause) {
    return parser.emitError(parser.getNameLoc())
          << "`device` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  deviceClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    deviceOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      deviceOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      deviceTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("nowait"))) {

  if (nowaitClause) {
    return parser.emitError(parser.getNameLoc())
          << "`nowait` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  nowaitClause = true;
    result.getOrAddProperties<EnterDataOp::Properties>().nowait = parser.getBuilder().getUnitAttr();    } else if (succeeded(parser.parseOptionalKeyword("map_entries"))) {

  if (map_entriesClause) {
    return parser.emitError(parser.getNameLoc())
          << "`map_entries` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  map_entriesClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  map_operandsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(map_operandsOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(map_operandsTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
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
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(if_exprOperands.size()), static_cast<int32_t>(deviceOperands.size()), static_cast<int32_t>(map_operandsOperands.size())}), result.getOrAddProperties<EnterDataOp::Properties>().operandSegmentSizes.begin());
  if (parser.resolveOperands(if_exprOperands, if_exprTypes, if_exprOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(deviceOperands, deviceTypes, deviceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(map_operandsOperands, map_operandsTypes, map_operandsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void EnterDataOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getIfExpr()) {
  _odsPrinter << ' ' << "if";
  _odsPrinter << "(";
  if (::mlir::Value value = getIfExpr())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getIfExpr() ? ::llvm::ArrayRef<::mlir::Type>(getIfExpr().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getDevice()) {
  _odsPrinter << ' ' << "device";
  _odsPrinter << "(";
  if (::mlir::Value value = getDevice())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getDevice() ? ::llvm::ArrayRef<::mlir::Type>(getDevice().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || (getNowaitAttr() && getNowaitAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr))) {
  _odsPrinter << ' ' << "nowait";
  }
  if (false || getMapOperands().size()) {
  _odsPrinter << ' ' << "map_entries";
  _odsPrinter << "(";
  _odsPrinter << getMapOperands();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getMapOperands().getTypes();
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("nowait");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNowaitAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("nowait");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::EnterDataOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::ExitDataOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ExitDataOpGenericAdaptorBase::ExitDataOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.target_exit_data", odsAttrs.getContext());
}

ExitDataOpGenericAdaptorBase::ExitDataOpGenericAdaptorBase(ExitDataOp op) : ExitDataOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ExitDataOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr ExitDataOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr ExitDataOpGenericAdaptorBase::getNowaitAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool ExitDataOpGenericAdaptorBase::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
ExitDataOpAdaptor::ExitDataOpAdaptor(ExitDataOp op) : ExitDataOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ExitDataOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;

  if (tblgen_nowait && !((::llvm::isa<::mlir::UnitAttr>(tblgen_nowait))))
    return emitError(loc, "'omp.target_exit_data' op ""attribute 'nowait' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ExitDataOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range ExitDataOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> ExitDataOp::getIfExpr() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> ExitDataOp::getDevice() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::Operation::operand_range ExitDataOp::getMapOperands() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange ExitDataOp::getIfExprMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange ExitDataOp::getDeviceMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange ExitDataOp::getMapOperandsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> ExitDataOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ExitDataOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult ExitDataOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.nowait;
       auto attr = dict.get("nowait");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for nowait in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `nowait` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute ExitDataOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.nowait;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("nowait",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code ExitDataOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.nowait.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> ExitDataOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "nowait")
      return prop.nowait;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void ExitDataOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "nowait") {
       prop.nowait = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.nowait)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void ExitDataOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.nowait) attrs.append("nowait", prop.nowait);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult ExitDataOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNowaitAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "nowait", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult ExitDataOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.nowait)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void ExitDataOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.nowait);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::UnitAttr ExitDataOp::getNowaitAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
}

bool ExitDataOp::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void ExitDataOp::setNowaitAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getNowaitAttrName(), attr);
}

void ExitDataOp::setNowait(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNowaitAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getNowaitAttrName());
}

::mlir::Attribute ExitDataOp::removeNowaitAttr() {
    auto &attr = getProperties().nowait;
    attr = {};
    return attr;
}

void ExitDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::UnitAttr nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
}

void ExitDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::UnitAttr nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExitDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/bool nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
}

void ExitDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/bool nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ExitDataOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ExitDataOp::verifyInvariantsImpl() {
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_nowait, "nowait")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult ExitDataOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult ExitDataOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> if_exprOperands;
  ::llvm::SMLoc if_exprOperandsLoc;
  (void)if_exprOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> if_exprTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> deviceOperands;
  ::llvm::SMLoc deviceOperandsLoc;
  (void)deviceOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> deviceTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> map_operandsOperands;
  ::llvm::SMLoc map_operandsOperandsLoc;
  (void)map_operandsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> map_operandsTypes;
  bool ifClause = false;
  bool deviceClause = false;
  bool nowaitClause = false;
  bool map_entriesClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("if"))) {

  if (ifClause) {
    return parser.emitError(parser.getNameLoc())
          << "`if` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  ifClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    if_exprOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("device"))) {

  if (deviceClause) {
    return parser.emitError(parser.getNameLoc())
          << "`device` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  deviceClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    deviceOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      deviceOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      deviceTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("nowait"))) {

  if (nowaitClause) {
    return parser.emitError(parser.getNameLoc())
          << "`nowait` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  nowaitClause = true;
    result.getOrAddProperties<ExitDataOp::Properties>().nowait = parser.getBuilder().getUnitAttr();    } else if (succeeded(parser.parseOptionalKeyword("map_entries"))) {

  if (map_entriesClause) {
    return parser.emitError(parser.getNameLoc())
          << "`map_entries` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  map_entriesClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  map_operandsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(map_operandsOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(map_operandsTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
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
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(if_exprOperands.size()), static_cast<int32_t>(deviceOperands.size()), static_cast<int32_t>(map_operandsOperands.size())}), result.getOrAddProperties<ExitDataOp::Properties>().operandSegmentSizes.begin());
  if (parser.resolveOperands(if_exprOperands, if_exprTypes, if_exprOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(deviceOperands, deviceTypes, deviceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(map_operandsOperands, map_operandsTypes, map_operandsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ExitDataOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getIfExpr()) {
  _odsPrinter << ' ' << "if";
  _odsPrinter << "(";
  if (::mlir::Value value = getIfExpr())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getIfExpr() ? ::llvm::ArrayRef<::mlir::Type>(getIfExpr().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getDevice()) {
  _odsPrinter << ' ' << "device";
  _odsPrinter << "(";
  if (::mlir::Value value = getDevice())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getDevice() ? ::llvm::ArrayRef<::mlir::Type>(getDevice().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || (getNowaitAttr() && getNowaitAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr))) {
  _odsPrinter << ' ' << "nowait";
  }
  if (false || getMapOperands().size()) {
  _odsPrinter << ' ' << "map_entries";
  _odsPrinter << "(";
  _odsPrinter << getMapOperands();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getMapOperands().getTypes();
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("nowait");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNowaitAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("nowait");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::ExitDataOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::UpdateDataOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
UpdateDataOpGenericAdaptorBase::UpdateDataOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.target_update_data", odsAttrs.getContext());
}

UpdateDataOpGenericAdaptorBase::UpdateDataOpGenericAdaptorBase(UpdateDataOp op) : UpdateDataOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> UpdateDataOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr UpdateDataOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr UpdateDataOpGenericAdaptorBase::getNowaitAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool UpdateDataOpGenericAdaptorBase::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

} // namespace detail
UpdateDataOpAdaptor::UpdateDataOpAdaptor(UpdateDataOp op) : UpdateDataOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult UpdateDataOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;

  if (tblgen_nowait && !((::llvm::isa<::mlir::UnitAttr>(tblgen_nowait))))
    return emitError(loc, "'omp.target_update_data' op ""attribute 'nowait' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> UpdateDataOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range UpdateDataOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> UpdateDataOp::getIfExpr() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> UpdateDataOp::getDevice() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::Operation::operand_range UpdateDataOp::getMapOperands() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange UpdateDataOp::getIfExprMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UpdateDataOp::getDeviceMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange UpdateDataOp::getMapOperandsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> UpdateDataOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range UpdateDataOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::LogicalResult UpdateDataOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.nowait;
       auto attr = dict.get("nowait");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for nowait in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `nowait` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute UpdateDataOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.nowait;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("nowait",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code UpdateDataOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.nowait.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> UpdateDataOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "nowait")
      return prop.nowait;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void UpdateDataOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "nowait") {
       prop.nowait = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.nowait)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void UpdateDataOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.nowait) attrs.append("nowait", prop.nowait);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult UpdateDataOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getNowaitAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "nowait", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult UpdateDataOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.nowait)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void UpdateDataOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.nowait);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::UnitAttr UpdateDataOp::getNowaitAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
}

bool UpdateDataOp::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void UpdateDataOp::setNowaitAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getNowaitAttrName(), attr);
}

void UpdateDataOp::setNowait(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNowaitAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getNowaitAttrName());
}

::mlir::Attribute UpdateDataOp::removeNowaitAttr() {
    auto &attr = getProperties().nowait;
    attr = {};
    return attr;
}

void UpdateDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::UnitAttr nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
}

void UpdateDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/::mlir::UnitAttr nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UpdateDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/bool nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
}

void UpdateDataOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value device, /*optional*/bool nowait, ::mlir::ValueRange map_operands) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (device)
    odsState.addOperands(device);
  odsState.addOperands(map_operands);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (device ? 1 : 0), static_cast<int32_t>(map_operands.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void UpdateDataOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult UpdateDataOp::verifyInvariantsImpl() {
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_nowait, "nowait")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult UpdateDataOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult UpdateDataOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> if_exprOperands;
  ::llvm::SMLoc if_exprOperandsLoc;
  (void)if_exprOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> if_exprTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> deviceOperands;
  ::llvm::SMLoc deviceOperandsLoc;
  (void)deviceOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> deviceTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> map_operandsOperands;
  ::llvm::SMLoc map_operandsOperandsLoc;
  (void)map_operandsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> map_operandsTypes;
  bool ifClause = false;
  bool deviceClause = false;
  bool nowaitClause = false;
  bool motion_entriesClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("if"))) {

  if (ifClause) {
    return parser.emitError(parser.getNameLoc())
          << "`if` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  ifClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    if_exprOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("device"))) {

  if (deviceClause) {
    return parser.emitError(parser.getNameLoc())
          << "`device` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  deviceClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    deviceOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      deviceOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      deviceTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("nowait"))) {

  if (nowaitClause) {
    return parser.emitError(parser.getNameLoc())
          << "`nowait` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  nowaitClause = true;
    result.getOrAddProperties<UpdateDataOp::Properties>().nowait = parser.getBuilder().getUnitAttr();    } else if (succeeded(parser.parseOptionalKeyword("motion_entries"))) {

  if (motion_entriesClause) {
    return parser.emitError(parser.getNameLoc())
          << "`motion_entries` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  motion_entriesClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  map_operandsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(map_operandsOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(map_operandsTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
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
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(if_exprOperands.size()), static_cast<int32_t>(deviceOperands.size()), static_cast<int32_t>(map_operandsOperands.size())}), result.getOrAddProperties<UpdateDataOp::Properties>().operandSegmentSizes.begin());
  if (parser.resolveOperands(if_exprOperands, if_exprTypes, if_exprOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(deviceOperands, deviceTypes, deviceOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(map_operandsOperands, map_operandsTypes, map_operandsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void UpdateDataOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getIfExpr()) {
  _odsPrinter << ' ' << "if";
  _odsPrinter << "(";
  if (::mlir::Value value = getIfExpr())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getIfExpr() ? ::llvm::ArrayRef<::mlir::Type>(getIfExpr().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getDevice()) {
  _odsPrinter << ' ' << "device";
  _odsPrinter << "(";
  if (::mlir::Value value = getDevice())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getDevice() ? ::llvm::ArrayRef<::mlir::Type>(getDevice().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || (getNowaitAttr() && getNowaitAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr))) {
  _odsPrinter << ' ' << "nowait";
  }
  if (false || getMapOperands().size()) {
  _odsPrinter << ' ' << "motion_entries";
  _odsPrinter << "(";
  _odsPrinter << getMapOperands();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << getMapOperands().getTypes();
  _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("nowait");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNowaitAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("nowait");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::UpdateDataOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::TaskGroupOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TaskGroupOpGenericAdaptorBase::TaskGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.taskgroup", odsAttrs.getContext());
}

TaskGroupOpGenericAdaptorBase::TaskGroupOpGenericAdaptorBase(TaskGroupOp op) : TaskGroupOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TaskGroupOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr TaskGroupOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr TaskGroupOpGenericAdaptorBase::getTaskReductionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().task_reductions);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TaskGroupOpGenericAdaptorBase::getTaskReductions() {
  auto attr = getTaskReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::Region &TaskGroupOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange TaskGroupOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
TaskGroupOpAdaptor::TaskGroupOpAdaptor(TaskGroupOp op) : TaskGroupOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TaskGroupOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_task_reductions = getProperties().task_reductions; (void)tblgen_task_reductions;

  if (tblgen_task_reductions && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_task_reductions))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_task_reductions), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::SymbolRefAttr>(attr))); }))))
    return emitError(loc, "'omp.taskgroup' op ""attribute 'task_reductions' failed to satisfy constraint: symbol ref array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TaskGroupOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range TaskGroupOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range TaskGroupOp::getTaskReductionVars() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range TaskGroupOp::getAllocateVars() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range TaskGroupOp::getAllocatorsVars() {
  return getODSOperands(2);
}

::mlir::MutableOperandRange TaskGroupOp::getTaskReductionVarsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskGroupOp::getAllocateVarsMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskGroupOp::getAllocatorsVarsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> TaskGroupOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TaskGroupOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &TaskGroupOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult TaskGroupOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.task_reductions;
       auto attr = dict.get("task_reductions");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for task_reductions in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `task_reductions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute TaskGroupOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.task_reductions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("task_reductions",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TaskGroupOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.task_reductions.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> TaskGroupOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "task_reductions")
      return prop.task_reductions;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void TaskGroupOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "task_reductions") {
       prop.task_reductions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.task_reductions)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void TaskGroupOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.task_reductions) attrs.append("task_reductions", prop.task_reductions);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult TaskGroupOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getTaskReductionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(attr, "task_reductions", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TaskGroupOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  if (::mlir::failed(reader.readOptionalAttribute(prop.task_reductions)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void TaskGroupOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  writer.writeOptionalAttribute(prop.task_reductions);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::ArrayAttr TaskGroupOp::getTaskReductionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().task_reductions);
}

::std::optional< ::mlir::ArrayAttr > TaskGroupOp::getTaskReductions() {
  auto attr = getTaskReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void TaskGroupOp::setTaskReductionsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getTaskReductionsAttrName(), attr);
}

::mlir::Attribute TaskGroupOp::removeTaskReductionsAttr() {
    auto &attr = getProperties().task_reductions;
    attr = {};
    return attr;
}

void TaskGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange task_reduction_vars, /*optional*/::mlir::ArrayAttr task_reductions, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars) {
  odsState.addOperands(task_reduction_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(task_reduction_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (task_reductions) {
    odsState.getOrAddProperties<Properties>().task_reductions = task_reductions;
  }
  (void)odsState.addRegion();
}

void TaskGroupOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange task_reduction_vars, /*optional*/::mlir::ArrayAttr task_reductions, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars) {
  odsState.addOperands(task_reduction_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(task_reduction_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (task_reductions) {
    odsState.getOrAddProperties<Properties>().task_reductions = task_reductions;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TaskGroupOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TaskGroupOp::verifyInvariantsImpl() {
  auto tblgen_task_reductions = getProperties().task_reductions; (void)tblgen_task_reductions;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(*this, tblgen_task_reductions, "task_reductions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult TaskGroupOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TaskGroupOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> task_reduction_varsOperands;
  ::llvm::SMLoc task_reduction_varsOperandsLoc;
  (void)task_reduction_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> task_reduction_varsTypes;
  ::mlir::ArrayAttr task_reductionsAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocate_varsOperands;
  ::llvm::SMLoc allocate_varsOperandsLoc;
  (void)allocate_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocate_varsTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocators_varsOperands;
  ::llvm::SMLoc allocators_varsOperandsLoc;
  (void)allocators_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocators_varsTypes;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  bool task_reductionClause = false;
  bool allocateClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("task_reduction"))) {

  if (task_reductionClause) {
    return parser.emitError(parser.getNameLoc())
          << "`task_reduction` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  task_reductionClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    task_reduction_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseReductionVarList(parser, task_reduction_varsOperands, task_reduction_varsTypes, task_reductionsAttr);
    if (odsResult) return ::mlir::failure();
    if (task_reductionsAttr)
      result.getOrAddProperties<TaskGroupOp::Properties>().task_reductions = task_reductionsAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("allocate"))) {

  if (allocateClause) {
    return parser.emitError(parser.getNameLoc())
          << "`allocate` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  allocateClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    allocate_varsOperandsLoc = parser.getCurrentLocation();
    allocators_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAllocateAndAllocator(parser, allocate_varsOperands, allocate_varsTypes, allocators_varsOperands, allocators_varsTypes);
    if (odsResult) return ::mlir::failure();
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}

  if (parser.parseRegion(*regionRegion))
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
  result.addRegion(std::move(regionRegion));
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(task_reduction_varsOperands.size()), static_cast<int32_t>(allocate_varsOperands.size()), static_cast<int32_t>(allocators_varsOperands.size())}), result.getOrAddProperties<TaskGroupOp::Properties>().operandSegmentSizes.begin());
  if (parser.resolveOperands(task_reduction_varsOperands, task_reduction_varsTypes, task_reduction_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocate_varsOperands, allocate_varsTypes, allocate_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocators_varsOperands, allocators_varsTypes, allocators_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TaskGroupOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getTaskReductionVars().size() || (getTaskReductionsAttr())) {
  _odsPrinter << ' ' << "task_reduction";
  _odsPrinter << "(";
  printReductionVarList(_odsPrinter, *this, getTaskReductionVars(), getTaskReductionVars().getTypes(), getTaskReductionsAttr());
  _odsPrinter << ")";
  }
  if (false || getAllocateVars().size() || getAllocatorsVars().size()) {
  _odsPrinter << ' ' << "allocate";
  _odsPrinter << "(";
  printAllocateAndAllocator(_odsPrinter, *this, getAllocateVars(), getAllocateVars().getTypes(), getAllocatorsVars(), getAllocatorsVars().getTypes());
  _odsPrinter << ")";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("task_reductions");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::TaskGroupOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::TaskLoopOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TaskLoopOpGenericAdaptorBase::TaskLoopOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.taskloop", odsAttrs.getContext());
}

TaskLoopOpGenericAdaptorBase::TaskLoopOpGenericAdaptorBase(TaskLoopOp op) : TaskLoopOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TaskLoopOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr TaskLoopOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr TaskLoopOpGenericAdaptorBase::getInclusiveAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().inclusive);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool TaskLoopOpGenericAdaptorBase::getInclusive() {
  auto attr = getInclusiveAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr TaskLoopOpGenericAdaptorBase::getUntiedAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().untied);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool TaskLoopOpGenericAdaptorBase::getUntied() {
  auto attr = getUntiedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr TaskLoopOpGenericAdaptorBase::getMergeableAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().mergeable);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool TaskLoopOpGenericAdaptorBase::getMergeable() {
  auto attr = getMergeableAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::ArrayAttr TaskLoopOpGenericAdaptorBase::getInReductionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().in_reductions);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TaskLoopOpGenericAdaptorBase::getInReductions() {
  auto attr = getInReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr TaskLoopOpGenericAdaptorBase::getReductionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().reductions);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TaskLoopOpGenericAdaptorBase::getReductions() {
  auto attr = getReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::UnitAttr TaskLoopOpGenericAdaptorBase::getNogroupAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nogroup);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool TaskLoopOpGenericAdaptorBase::getNogroup() {
  auto attr = getNogroupAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::Region &TaskLoopOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange TaskLoopOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
TaskLoopOpAdaptor::TaskLoopOpAdaptor(TaskLoopOp op) : TaskLoopOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TaskLoopOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_in_reductions = getProperties().in_reductions; (void)tblgen_in_reductions;
  auto tblgen_inclusive = getProperties().inclusive; (void)tblgen_inclusive;
  auto tblgen_mergeable = getProperties().mergeable; (void)tblgen_mergeable;
  auto tblgen_nogroup = getProperties().nogroup; (void)tblgen_nogroup;
  auto tblgen_reductions = getProperties().reductions; (void)tblgen_reductions;
  auto tblgen_untied = getProperties().untied; (void)tblgen_untied;

  if (tblgen_inclusive && !((::llvm::isa<::mlir::UnitAttr>(tblgen_inclusive))))
    return emitError(loc, "'omp.taskloop' op ""attribute 'inclusive' failed to satisfy constraint: unit attribute");

  if (tblgen_untied && !((::llvm::isa<::mlir::UnitAttr>(tblgen_untied))))
    return emitError(loc, "'omp.taskloop' op ""attribute 'untied' failed to satisfy constraint: unit attribute");

  if (tblgen_mergeable && !((::llvm::isa<::mlir::UnitAttr>(tblgen_mergeable))))
    return emitError(loc, "'omp.taskloop' op ""attribute 'mergeable' failed to satisfy constraint: unit attribute");

  if (tblgen_in_reductions && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_in_reductions))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_in_reductions), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::SymbolRefAttr>(attr))); }))))
    return emitError(loc, "'omp.taskloop' op ""attribute 'in_reductions' failed to satisfy constraint: symbol ref array attribute");

  if (tblgen_reductions && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_reductions))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_reductions), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::SymbolRefAttr>(attr))); }))))
    return emitError(loc, "'omp.taskloop' op ""attribute 'reductions' failed to satisfy constraint: symbol ref array attribute");

  if (tblgen_nogroup && !((::llvm::isa<::mlir::UnitAttr>(tblgen_nogroup))))
    return emitError(loc, "'omp.taskloop' op ""attribute 'nogroup' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TaskLoopOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range TaskLoopOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range TaskLoopOp::getLowerBound() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range TaskLoopOp::getUpperBound() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range TaskLoopOp::getStep() {
  return getODSOperands(2);
}

::mlir::TypedValue<::mlir::IntegerType> TaskLoopOp::getIfExpr() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> TaskLoopOp::getFinalExpr() {
  auto operands = getODSOperands(4);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::Operation::operand_range TaskLoopOp::getInReductionVars() {
  return getODSOperands(5);
}

::mlir::Operation::operand_range TaskLoopOp::getReductionVars() {
  return getODSOperands(6);
}

::mlir::Value TaskLoopOp::getPriority() {
  auto operands = getODSOperands(7);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Operation::operand_range TaskLoopOp::getAllocateVars() {
  return getODSOperands(8);
}

::mlir::Operation::operand_range TaskLoopOp::getAllocatorsVars() {
  return getODSOperands(9);
}

::mlir::Value TaskLoopOp::getGrainSize() {
  auto operands = getODSOperands(10);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::Value TaskLoopOp::getNumTasks() {
  auto operands = getODSOperands(11);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange TaskLoopOp::getLowerBoundMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskLoopOp::getUpperBoundMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskLoopOp::getStepMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskLoopOp::getIfExprMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskLoopOp::getFinalExprMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskLoopOp::getInReductionVarsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskLoopOp::getReductionVarsMutable() {
  auto range = getODSOperandIndexAndLength(6);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(6u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskLoopOp::getPriorityMutable() {
  auto range = getODSOperandIndexAndLength(7);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(7u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskLoopOp::getAllocateVarsMutable() {
  auto range = getODSOperandIndexAndLength(8);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(8u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskLoopOp::getAllocatorsVarsMutable() {
  auto range = getODSOperandIndexAndLength(9);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(9u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskLoopOp::getGrainSizeMutable() {
  auto range = getODSOperandIndexAndLength(10);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(10u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskLoopOp::getNumTasksMutable() {
  auto range = getODSOperandIndexAndLength(11);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(11u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> TaskLoopOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TaskLoopOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &TaskLoopOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult TaskLoopOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.in_reductions;
       auto attr = dict.get("in_reductions");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for in_reductions in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `in_reductions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.inclusive;
       auto attr = dict.get("inclusive");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for inclusive in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `inclusive` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mergeable;
       auto attr = dict.get("mergeable");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for mergeable in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mergeable` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.nogroup;
       auto attr = dict.get("nogroup");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for nogroup in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `nogroup` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.reductions;
       auto attr = dict.get("reductions");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for reductions in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reductions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.untied;
       auto attr = dict.get("untied");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for untied in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `untied` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute TaskLoopOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.in_reductions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("in_reductions",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.inclusive;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("inclusive",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mergeable;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mergeable",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.nogroup;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("nogroup",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.reductions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reductions",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.untied;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("untied",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TaskLoopOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.in_reductions.getAsOpaquePointer()), 
    llvm::hash_value(prop.inclusive.getAsOpaquePointer()), 
    llvm::hash_value(prop.mergeable.getAsOpaquePointer()), 
    llvm::hash_value(prop.nogroup.getAsOpaquePointer()), 
    llvm::hash_value(prop.reductions.getAsOpaquePointer()), 
    llvm::hash_value(prop.untied.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> TaskLoopOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "in_reductions")
      return prop.in_reductions;

    if (name == "inclusive")
      return prop.inclusive;

    if (name == "mergeable")
      return prop.mergeable;

    if (name == "nogroup")
      return prop.nogroup;

    if (name == "reductions")
      return prop.reductions;

    if (name == "untied")
      return prop.untied;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void TaskLoopOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "in_reductions") {
       prop.in_reductions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.in_reductions)>>(value);
       return;
    }

    if (name == "inclusive") {
       prop.inclusive = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.inclusive)>>(value);
       return;
    }

    if (name == "mergeable") {
       prop.mergeable = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mergeable)>>(value);
       return;
    }

    if (name == "nogroup") {
       prop.nogroup = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.nogroup)>>(value);
       return;
    }

    if (name == "reductions") {
       prop.reductions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reductions)>>(value);
       return;
    }

    if (name == "untied") {
       prop.untied = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.untied)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void TaskLoopOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.in_reductions) attrs.append("in_reductions", prop.in_reductions);

    if (prop.inclusive) attrs.append("inclusive", prop.inclusive);

    if (prop.mergeable) attrs.append("mergeable", prop.mergeable);

    if (prop.nogroup) attrs.append("nogroup", prop.nogroup);

    if (prop.reductions) attrs.append("reductions", prop.reductions);

    if (prop.untied) attrs.append("untied", prop.untied);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult TaskLoopOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getInReductionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(attr, "in_reductions", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getInclusiveAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "inclusive", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMergeableAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "mergeable", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNogroupAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "nogroup", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReductionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(attr, "reductions", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUntiedAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "untied", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TaskLoopOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.in_reductions)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.inclusive)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mergeable)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.nogroup)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  if (::mlir::failed(reader.readOptionalAttribute(prop.reductions)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.untied)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void TaskLoopOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.in_reductions);

  writer.writeOptionalAttribute(prop.inclusive);

  writer.writeOptionalAttribute(prop.mergeable);

  writer.writeOptionalAttribute(prop.nogroup);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  writer.writeOptionalAttribute(prop.reductions);

  writer.writeOptionalAttribute(prop.untied);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::UnitAttr TaskLoopOp::getInclusiveAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().inclusive);
}

bool TaskLoopOp::getInclusive() {
  auto attr = getInclusiveAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr TaskLoopOp::getUntiedAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().untied);
}

bool TaskLoopOp::getUntied() {
  auto attr = getUntiedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr TaskLoopOp::getMergeableAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().mergeable);
}

bool TaskLoopOp::getMergeable() {
  auto attr = getMergeableAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::ArrayAttr TaskLoopOp::getInReductionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().in_reductions);
}

::std::optional< ::mlir::ArrayAttr > TaskLoopOp::getInReductions() {
  auto attr = getInReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr TaskLoopOp::getReductionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().reductions);
}

::std::optional< ::mlir::ArrayAttr > TaskLoopOp::getReductions() {
  auto attr = getReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::UnitAttr TaskLoopOp::getNogroupAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nogroup);
}

bool TaskLoopOp::getNogroup() {
  auto attr = getNogroupAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void TaskLoopOp::setInclusiveAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getInclusiveAttrName(), attr);
}

void TaskLoopOp::setInclusive(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInclusiveAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getInclusiveAttrName());
}

void TaskLoopOp::setUntiedAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUntiedAttrName(), attr);
}

void TaskLoopOp::setUntied(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUntiedAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUntiedAttrName());
}

void TaskLoopOp::setMergeableAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getMergeableAttrName(), attr);
}

void TaskLoopOp::setMergeable(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getMergeableAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getMergeableAttrName());
}

void TaskLoopOp::setInReductionsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getInReductionsAttrName(), attr);
}

void TaskLoopOp::setReductionsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getReductionsAttrName(), attr);
}

void TaskLoopOp::setNogroupAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getNogroupAttrName(), attr);
}

void TaskLoopOp::setNogroup(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNogroupAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getNogroupAttrName());
}

::mlir::Attribute TaskLoopOp::removeInclusiveAttr() {
    auto &attr = getProperties().inclusive;
    attr = {};
    return attr;
}

::mlir::Attribute TaskLoopOp::removeUntiedAttr() {
    auto &attr = getProperties().untied;
    attr = {};
    return attr;
}

::mlir::Attribute TaskLoopOp::removeMergeableAttr() {
    auto &attr = getProperties().mergeable;
    attr = {};
    return attr;
}

::mlir::Attribute TaskLoopOp::removeInReductionsAttr() {
    auto &attr = getProperties().in_reductions;
    attr = {};
    return attr;
}

::mlir::Attribute TaskLoopOp::removeReductionsAttr() {
    auto &attr = getProperties().reductions;
    attr = {};
    return attr;
}

::mlir::Attribute TaskLoopOp::removeNogroupAttr() {
    auto &attr = getProperties().nogroup;
    attr = {};
    return attr;
}

void TaskLoopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange lowerBound, ::mlir::ValueRange upperBound, ::mlir::ValueRange step, /*optional*/::mlir::UnitAttr inclusive, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value final_expr, /*optional*/::mlir::UnitAttr untied, /*optional*/::mlir::UnitAttr mergeable, ::mlir::ValueRange in_reduction_vars, /*optional*/::mlir::ArrayAttr in_reductions, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, /*optional*/::mlir::Value priority, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::Value grain_size, /*optional*/::mlir::Value num_tasks, /*optional*/::mlir::UnitAttr nogroup) {
  odsState.addOperands(lowerBound);
  odsState.addOperands(upperBound);
  odsState.addOperands(step);
  if (if_expr)
    odsState.addOperands(if_expr);
  if (final_expr)
    odsState.addOperands(final_expr);
  odsState.addOperands(in_reduction_vars);
  odsState.addOperands(reduction_vars);
  if (priority)
    odsState.addOperands(priority);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  if (grain_size)
    odsState.addOperands(grain_size);
  if (num_tasks)
    odsState.addOperands(num_tasks);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBound.size()), static_cast<int32_t>(upperBound.size()), static_cast<int32_t>(step.size()), (if_expr ? 1 : 0), (final_expr ? 1 : 0), static_cast<int32_t>(in_reduction_vars.size()), static_cast<int32_t>(reduction_vars.size()), (priority ? 1 : 0), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size()), (grain_size ? 1 : 0), (num_tasks ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (inclusive) {
    odsState.getOrAddProperties<Properties>().inclusive = inclusive;
  }
  if (untied) {
    odsState.getOrAddProperties<Properties>().untied = untied;
  }
  if (mergeable) {
    odsState.getOrAddProperties<Properties>().mergeable = mergeable;
  }
  if (in_reductions) {
    odsState.getOrAddProperties<Properties>().in_reductions = in_reductions;
  }
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (nogroup) {
    odsState.getOrAddProperties<Properties>().nogroup = nogroup;
  }
  (void)odsState.addRegion();
}

void TaskLoopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange lowerBound, ::mlir::ValueRange upperBound, ::mlir::ValueRange step, /*optional*/::mlir::UnitAttr inclusive, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value final_expr, /*optional*/::mlir::UnitAttr untied, /*optional*/::mlir::UnitAttr mergeable, ::mlir::ValueRange in_reduction_vars, /*optional*/::mlir::ArrayAttr in_reductions, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, /*optional*/::mlir::Value priority, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::Value grain_size, /*optional*/::mlir::Value num_tasks, /*optional*/::mlir::UnitAttr nogroup) {
  odsState.addOperands(lowerBound);
  odsState.addOperands(upperBound);
  odsState.addOperands(step);
  if (if_expr)
    odsState.addOperands(if_expr);
  if (final_expr)
    odsState.addOperands(final_expr);
  odsState.addOperands(in_reduction_vars);
  odsState.addOperands(reduction_vars);
  if (priority)
    odsState.addOperands(priority);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  if (grain_size)
    odsState.addOperands(grain_size);
  if (num_tasks)
    odsState.addOperands(num_tasks);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBound.size()), static_cast<int32_t>(upperBound.size()), static_cast<int32_t>(step.size()), (if_expr ? 1 : 0), (final_expr ? 1 : 0), static_cast<int32_t>(in_reduction_vars.size()), static_cast<int32_t>(reduction_vars.size()), (priority ? 1 : 0), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size()), (grain_size ? 1 : 0), (num_tasks ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (inclusive) {
    odsState.getOrAddProperties<Properties>().inclusive = inclusive;
  }
  if (untied) {
    odsState.getOrAddProperties<Properties>().untied = untied;
  }
  if (mergeable) {
    odsState.getOrAddProperties<Properties>().mergeable = mergeable;
  }
  if (in_reductions) {
    odsState.getOrAddProperties<Properties>().in_reductions = in_reductions;
  }
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (nogroup) {
    odsState.getOrAddProperties<Properties>().nogroup = nogroup;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TaskLoopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange lowerBound, ::mlir::ValueRange upperBound, ::mlir::ValueRange step, /*optional*/bool inclusive, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value final_expr, /*optional*/bool untied, /*optional*/bool mergeable, ::mlir::ValueRange in_reduction_vars, /*optional*/::mlir::ArrayAttr in_reductions, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, /*optional*/::mlir::Value priority, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::Value grain_size, /*optional*/::mlir::Value num_tasks, /*optional*/bool nogroup) {
  odsState.addOperands(lowerBound);
  odsState.addOperands(upperBound);
  odsState.addOperands(step);
  if (if_expr)
    odsState.addOperands(if_expr);
  if (final_expr)
    odsState.addOperands(final_expr);
  odsState.addOperands(in_reduction_vars);
  odsState.addOperands(reduction_vars);
  if (priority)
    odsState.addOperands(priority);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  if (grain_size)
    odsState.addOperands(grain_size);
  if (num_tasks)
    odsState.addOperands(num_tasks);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBound.size()), static_cast<int32_t>(upperBound.size()), static_cast<int32_t>(step.size()), (if_expr ? 1 : 0), (final_expr ? 1 : 0), static_cast<int32_t>(in_reduction_vars.size()), static_cast<int32_t>(reduction_vars.size()), (priority ? 1 : 0), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size()), (grain_size ? 1 : 0), (num_tasks ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (inclusive) {
    odsState.getOrAddProperties<Properties>().inclusive = ((inclusive) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (untied) {
    odsState.getOrAddProperties<Properties>().untied = ((untied) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (mergeable) {
    odsState.getOrAddProperties<Properties>().mergeable = ((mergeable) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (in_reductions) {
    odsState.getOrAddProperties<Properties>().in_reductions = in_reductions;
  }
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (nogroup) {
    odsState.getOrAddProperties<Properties>().nogroup = ((nogroup) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
}

void TaskLoopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange lowerBound, ::mlir::ValueRange upperBound, ::mlir::ValueRange step, /*optional*/bool inclusive, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value final_expr, /*optional*/bool untied, /*optional*/bool mergeable, ::mlir::ValueRange in_reduction_vars, /*optional*/::mlir::ArrayAttr in_reductions, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, /*optional*/::mlir::Value priority, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, /*optional*/::mlir::Value grain_size, /*optional*/::mlir::Value num_tasks, /*optional*/bool nogroup) {
  odsState.addOperands(lowerBound);
  odsState.addOperands(upperBound);
  odsState.addOperands(step);
  if (if_expr)
    odsState.addOperands(if_expr);
  if (final_expr)
    odsState.addOperands(final_expr);
  odsState.addOperands(in_reduction_vars);
  odsState.addOperands(reduction_vars);
  if (priority)
    odsState.addOperands(priority);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  if (grain_size)
    odsState.addOperands(grain_size);
  if (num_tasks)
    odsState.addOperands(num_tasks);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBound.size()), static_cast<int32_t>(upperBound.size()), static_cast<int32_t>(step.size()), (if_expr ? 1 : 0), (final_expr ? 1 : 0), static_cast<int32_t>(in_reduction_vars.size()), static_cast<int32_t>(reduction_vars.size()), (priority ? 1 : 0), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size()), (grain_size ? 1 : 0), (num_tasks ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (inclusive) {
    odsState.getOrAddProperties<Properties>().inclusive = ((inclusive) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (untied) {
    odsState.getOrAddProperties<Properties>().untied = ((untied) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (mergeable) {
    odsState.getOrAddProperties<Properties>().mergeable = ((mergeable) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (in_reductions) {
    odsState.getOrAddProperties<Properties>().in_reductions = in_reductions;
  }
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (nogroup) {
    odsState.getOrAddProperties<Properties>().nogroup = ((nogroup) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TaskLoopOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TaskLoopOp::verifyInvariantsImpl() {
  auto tblgen_in_reductions = getProperties().in_reductions; (void)tblgen_in_reductions;
  auto tblgen_inclusive = getProperties().inclusive; (void)tblgen_inclusive;
  auto tblgen_mergeable = getProperties().mergeable; (void)tblgen_mergeable;
  auto tblgen_nogroup = getProperties().nogroup; (void)tblgen_nogroup;
  auto tblgen_reductions = getProperties().reductions; (void)tblgen_reductions;
  auto tblgen_untied = getProperties().untied; (void)tblgen_untied;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_inclusive, "inclusive")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_untied, "untied")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_mergeable, "mergeable")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(*this, tblgen_in_reductions, "in_reductions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(*this, tblgen_reductions, "reductions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_nogroup, "nogroup")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    if (valueGroup4.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup4.size();
    }

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup7 = getODSOperands(7);

    if (valueGroup7.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup7.size();
    }

    for (auto v : valueGroup7) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup8 = getODSOperands(8);

    for (auto v : valueGroup8) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup9 = getODSOperands(9);

    for (auto v : valueGroup9) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup10 = getODSOperands(10);

    if (valueGroup10.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup10.size();
    }

    for (auto v : valueGroup10) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup11 = getODSOperands(11);

    if (valueGroup11.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup11.size();
    }

    for (auto v : valueGroup11) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps3(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((this->getODSOperands(0).getType()) == (this->getODSOperands(1).getType()) && (this->getODSOperands(1).getType()) == (this->getODSOperands(2).getType()) && (this->getODSOperands(2).getType()) == (this->getODSOperands(0).getType()))))
    return emitOpError("failed to verify that all of {lowerBound, upperBound, step} have same type");
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult TaskLoopOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TaskLoopOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> if_exprOperands;
  ::llvm::SMLoc if_exprOperandsLoc;
  (void)if_exprOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> final_exprOperands;
  ::llvm::SMLoc final_exprOperandsLoc;
  (void)final_exprOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> in_reduction_varsOperands;
  ::llvm::SMLoc in_reduction_varsOperandsLoc;
  (void)in_reduction_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> in_reduction_varsTypes;
  ::mlir::ArrayAttr in_reductionsAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> reduction_varsOperands;
  ::llvm::SMLoc reduction_varsOperandsLoc;
  (void)reduction_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> reduction_varsTypes;
  ::mlir::ArrayAttr reductionsAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> priorityOperands;
  ::llvm::SMLoc priorityOperandsLoc;
  (void)priorityOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> priorityTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocate_varsOperands;
  ::llvm::SMLoc allocate_varsOperandsLoc;
  (void)allocate_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocate_varsTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocators_varsOperands;
  ::llvm::SMLoc allocators_varsOperandsLoc;
  (void)allocators_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocators_varsTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> grain_sizeOperands;
  ::llvm::SMLoc grain_sizeOperandsLoc;
  (void)grain_sizeOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> grain_sizeTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> num_tasksOperands;
  ::llvm::SMLoc num_tasksOperandsLoc;
  (void)num_tasksOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> num_tasksTypes;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lowerBoundOperands;
  ::llvm::SMLoc lowerBoundOperandsLoc;
  (void)lowerBoundOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> upperBoundOperands;
  ::llvm::SMLoc upperBoundOperandsLoc;
  (void)upperBoundOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> stepOperands;
  ::llvm::SMLoc stepOperandsLoc;
  (void)stepOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> stepTypes;
  ::mlir::UnitAttr inclusiveAttr;
  bool ifClause = false;
  bool finalClause = false;
  bool untiedClause = false;
  bool mergeableClause = false;
  bool in_reductionClause = false;
  bool reductionClause = false;
  bool priorityClause = false;
  bool allocateClause = false;
  bool grain_sizeClause = false;
  bool num_tasksClause = false;
  bool nogroupClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("if"))) {

  if (ifClause) {
    return parser.emitError(parser.getNameLoc())
          << "`if` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  ifClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    if_exprOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("final"))) {

  if (finalClause) {
    return parser.emitError(parser.getNameLoc())
          << "`final` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  finalClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    final_exprOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      final_exprOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("untied"))) {

  if (untiedClause) {
    return parser.emitError(parser.getNameLoc())
          << "`untied` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  untiedClause = true;
    result.getOrAddProperties<TaskLoopOp::Properties>().untied = parser.getBuilder().getUnitAttr();    } else if (succeeded(parser.parseOptionalKeyword("mergeable"))) {

  if (mergeableClause) {
    return parser.emitError(parser.getNameLoc())
          << "`mergeable` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  mergeableClause = true;
    result.getOrAddProperties<TaskLoopOp::Properties>().mergeable = parser.getBuilder().getUnitAttr();    } else if (succeeded(parser.parseOptionalKeyword("in_reduction"))) {

  if (in_reductionClause) {
    return parser.emitError(parser.getNameLoc())
          << "`in_reduction` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  in_reductionClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    in_reduction_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseReductionVarList(parser, in_reduction_varsOperands, in_reduction_varsTypes, in_reductionsAttr);
    if (odsResult) return ::mlir::failure();
    if (in_reductionsAttr)
      result.getOrAddProperties<TaskLoopOp::Properties>().in_reductions = in_reductionsAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("reduction"))) {

  if (reductionClause) {
    return parser.emitError(parser.getNameLoc())
          << "`reduction` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  reductionClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    reduction_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseReductionVarList(parser, reduction_varsOperands, reduction_varsTypes, reductionsAttr);
    if (odsResult) return ::mlir::failure();
    if (reductionsAttr)
      result.getOrAddProperties<TaskLoopOp::Properties>().reductions = reductionsAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("priority"))) {

  if (priorityClause) {
    return parser.emitError(parser.getNameLoc())
          << "`priority` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  priorityClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    priorityOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      priorityOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      priorityTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("allocate"))) {

  if (allocateClause) {
    return parser.emitError(parser.getNameLoc())
          << "`allocate` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  allocateClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    allocate_varsOperandsLoc = parser.getCurrentLocation();
    allocators_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAllocateAndAllocator(parser, allocate_varsOperands, allocate_varsTypes, allocators_varsOperands, allocators_varsTypes);
    if (odsResult) return ::mlir::failure();
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("grain_size"))) {

  if (grain_sizeClause) {
    return parser.emitError(parser.getNameLoc())
          << "`grain_size` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  grain_sizeClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    grain_sizeOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      grain_sizeOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      grain_sizeTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("num_tasks"))) {

  if (num_tasksClause) {
    return parser.emitError(parser.getNameLoc())
          << "`num_tasks` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  num_tasksClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    num_tasksOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      num_tasksOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      num_tasksTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("nogroup"))) {

  if (nogroupClause) {
    return parser.emitError(parser.getNameLoc())
          << "`nogroup` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  nogroupClause = true;
    result.getOrAddProperties<TaskLoopOp::Properties>().nogroup = parser.getBuilder().getUnitAttr();    } else  {
    break;
  }
}
  if (parser.parseKeyword("for"))
    return ::mlir::failure();
  {
    lowerBoundOperandsLoc = parser.getCurrentLocation();
    upperBoundOperandsLoc = parser.getCurrentLocation();
    stepOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseLoopControl(parser, *regionRegion, lowerBoundOperands, upperBoundOperands, stepOperands, stepTypes, inclusiveAttr);
    if (odsResult) return ::mlir::failure();
    if (inclusiveAttr)
      result.getOrAddProperties<TaskLoopOp::Properties>().inclusive = inclusiveAttr;
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
  result.addRegion(std::move(regionRegion));
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBoundOperands.size()), static_cast<int32_t>(upperBoundOperands.size()), static_cast<int32_t>(stepOperands.size()), static_cast<int32_t>(if_exprOperands.size()), static_cast<int32_t>(final_exprOperands.size()), static_cast<int32_t>(in_reduction_varsOperands.size()), static_cast<int32_t>(reduction_varsOperands.size()), static_cast<int32_t>(priorityOperands.size()), static_cast<int32_t>(allocate_varsOperands.size()), static_cast<int32_t>(allocators_varsOperands.size()), static_cast<int32_t>(grain_sizeOperands.size()), static_cast<int32_t>(num_tasksOperands.size())}), result.getOrAddProperties<TaskLoopOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(1);
  if (parser.resolveOperands(lowerBoundOperands, stepTypes, lowerBoundOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(upperBoundOperands, stepTypes, upperBoundOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(stepOperands, stepTypes, stepOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(if_exprOperands, odsBuildableType0, if_exprOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(final_exprOperands, odsBuildableType0, final_exprOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(in_reduction_varsOperands, in_reduction_varsTypes, in_reduction_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(reduction_varsOperands, reduction_varsTypes, reduction_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(priorityOperands, priorityTypes, priorityOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocate_varsOperands, allocate_varsTypes, allocate_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocators_varsOperands, allocators_varsTypes, allocators_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(grain_sizeOperands, grain_sizeTypes, grain_sizeOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(num_tasksOperands, num_tasksTypes, num_tasksOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TaskLoopOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getIfExpr()) {
  _odsPrinter << ' ' << "if";
  _odsPrinter << "(";
  if (::mlir::Value value = getIfExpr())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getFinalExpr()) {
  _odsPrinter << ' ' << "final";
  _odsPrinter << "(";
  if (::mlir::Value value = getFinalExpr())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || (getUntiedAttr() && getUntiedAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr))) {
  _odsPrinter << ' ' << "untied";
  }
  if (false || (getMergeableAttr() && getMergeableAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr))) {
  _odsPrinter << ' ' << "mergeable";
  }
  if (false || getInReductionVars().size() || (getInReductionsAttr())) {
  _odsPrinter << ' ' << "in_reduction";
  _odsPrinter << "(";
  printReductionVarList(_odsPrinter, *this, getInReductionVars(), getInReductionVars().getTypes(), getInReductionsAttr());
  _odsPrinter << ")";
  }
  if (false || getReductionVars().size() || (getReductionsAttr())) {
  _odsPrinter << ' ' << "reduction";
  _odsPrinter << "(";
  printReductionVarList(_odsPrinter, *this, getReductionVars(), getReductionVars().getTypes(), getReductionsAttr());
  _odsPrinter << ")";
  }
  if (false || getPriority()) {
  _odsPrinter << ' ' << "priority";
  _odsPrinter << "(";
  if (::mlir::Value value = getPriority())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getPriority() ? ::llvm::ArrayRef<::mlir::Type>(getPriority().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getAllocateVars().size() || getAllocatorsVars().size()) {
  _odsPrinter << ' ' << "allocate";
  _odsPrinter << "(";
  printAllocateAndAllocator(_odsPrinter, *this, getAllocateVars(), getAllocateVars().getTypes(), getAllocatorsVars(), getAllocatorsVars().getTypes());
  _odsPrinter << ")";
  }
  if (false || getGrainSize()) {
  _odsPrinter << ' ' << "grain_size";
  _odsPrinter << "(";
  if (::mlir::Value value = getGrainSize())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getGrainSize() ? ::llvm::ArrayRef<::mlir::Type>(getGrainSize().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getNumTasks()) {
  _odsPrinter << ' ' << "num_tasks";
  _odsPrinter << "(";
  if (::mlir::Value value = getNumTasks())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getNumTasks() ? ::llvm::ArrayRef<::mlir::Type>(getNumTasks().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || (getNogroupAttr() && getNogroupAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr))) {
  _odsPrinter << ' ' << "nogroup";
  }
  _odsPrinter << ' ' << "for";
  _odsPrinter << ' ';
  printLoopControl(_odsPrinter, *this, getRegion(), getLowerBound(), getUpperBound(), getStep(), getStep().getTypes(), getInclusiveAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("untied");
  elidedAttrs.push_back("mergeable");
  elidedAttrs.push_back("in_reductions");
  elidedAttrs.push_back("reductions");
  elidedAttrs.push_back("nogroup");
  elidedAttrs.push_back("inclusive");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInclusiveAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("inclusive");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUntiedAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("untied");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMergeableAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("mergeable");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNogroupAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("nogroup");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::TaskLoopOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::TaskOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TaskOpGenericAdaptorBase::TaskOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.task", odsAttrs.getContext());
}

TaskOpGenericAdaptorBase::TaskOpGenericAdaptorBase(TaskOp op) : TaskOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TaskOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr TaskOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::UnitAttr TaskOpGenericAdaptorBase::getUntiedAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().untied);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool TaskOpGenericAdaptorBase::getUntied() {
  auto attr = getUntiedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr TaskOpGenericAdaptorBase::getMergeableAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().mergeable);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool TaskOpGenericAdaptorBase::getMergeable() {
  auto attr = getMergeableAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::ArrayAttr TaskOpGenericAdaptorBase::getInReductionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().in_reductions);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TaskOpGenericAdaptorBase::getInReductions() {
  auto attr = getInReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr TaskOpGenericAdaptorBase::getDependsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().depends);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TaskOpGenericAdaptorBase::getDepends() {
  auto attr = getDependsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::Region &TaskOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange TaskOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
TaskOpAdaptor::TaskOpAdaptor(TaskOp op) : TaskOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TaskOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_depends = getProperties().depends; (void)tblgen_depends;
  auto tblgen_in_reductions = getProperties().in_reductions; (void)tblgen_in_reductions;
  auto tblgen_mergeable = getProperties().mergeable; (void)tblgen_mergeable;
  auto tblgen_untied = getProperties().untied; (void)tblgen_untied;

  if (tblgen_untied && !((::llvm::isa<::mlir::UnitAttr>(tblgen_untied))))
    return emitError(loc, "'omp.task' op ""attribute 'untied' failed to satisfy constraint: unit attribute");

  if (tblgen_mergeable && !((::llvm::isa<::mlir::UnitAttr>(tblgen_mergeable))))
    return emitError(loc, "'omp.task' op ""attribute 'mergeable' failed to satisfy constraint: unit attribute");

  if (tblgen_in_reductions && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_in_reductions))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_in_reductions), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::SymbolRefAttr>(attr))); }))))
    return emitError(loc, "'omp.task' op ""attribute 'in_reductions' failed to satisfy constraint: symbol ref array attribute");

  if (tblgen_depends && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_depends))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_depends), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::omp::ClauseTaskDependAttr>(attr))); }))))
    return emitError(loc, "'omp.task' op ""attribute 'depends' failed to satisfy constraint: clause_task_depend array attr");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TaskOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range TaskOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> TaskOp::getIfExpr() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> TaskOp::getFinalExpr() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::Operation::operand_range TaskOp::getInReductionVars() {
  return getODSOperands(2);
}

::mlir::TypedValue<::mlir::IntegerType> TaskOp::getPriority() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::Operation::operand_range TaskOp::getDependVars() {
  return getODSOperands(4);
}

::mlir::Operation::operand_range TaskOp::getAllocateVars() {
  return getODSOperands(5);
}

::mlir::Operation::operand_range TaskOp::getAllocatorsVars() {
  return getODSOperands(6);
}

::mlir::MutableOperandRange TaskOp::getIfExprMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskOp::getFinalExprMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskOp::getInReductionVarsMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskOp::getPriorityMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskOp::getDependVarsMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskOp::getAllocateVarsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TaskOp::getAllocatorsVarsMutable() {
  auto range = getODSOperandIndexAndLength(6);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(6u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> TaskOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TaskOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &TaskOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult TaskOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.depends;
       auto attr = dict.get("depends");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for depends in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `depends` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.in_reductions;
       auto attr = dict.get("in_reductions");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for in_reductions in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `in_reductions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.mergeable;
       auto attr = dict.get("mergeable");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for mergeable in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `mergeable` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.untied;
       auto attr = dict.get("untied");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for untied in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `untied` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute TaskOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.depends;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("depends",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.in_reductions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("in_reductions",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.mergeable;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("mergeable",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.untied;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("untied",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TaskOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.depends.getAsOpaquePointer()), 
    llvm::hash_value(prop.in_reductions.getAsOpaquePointer()), 
    llvm::hash_value(prop.mergeable.getAsOpaquePointer()), 
    llvm::hash_value(prop.untied.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> TaskOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "depends")
      return prop.depends;

    if (name == "in_reductions")
      return prop.in_reductions;

    if (name == "mergeable")
      return prop.mergeable;

    if (name == "untied")
      return prop.untied;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void TaskOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "depends") {
       prop.depends = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.depends)>>(value);
       return;
    }

    if (name == "in_reductions") {
       prop.in_reductions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.in_reductions)>>(value);
       return;
    }

    if (name == "mergeable") {
       prop.mergeable = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.mergeable)>>(value);
       return;
    }

    if (name == "untied") {
       prop.untied = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.untied)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void TaskOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.depends) attrs.append("depends", prop.depends);

    if (prop.in_reductions) attrs.append("in_reductions", prop.in_reductions);

    if (prop.mergeable) attrs.append("mergeable", prop.mergeable);

    if (prop.untied) attrs.append("untied", prop.untied);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult TaskOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getDependsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps17(attr, "depends", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getInReductionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(attr, "in_reductions", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getMergeableAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "mergeable", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getUntiedAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "untied", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TaskOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.depends)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.in_reductions)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.mergeable)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  if (::mlir::failed(reader.readOptionalAttribute(prop.untied)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void TaskOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.depends);

  writer.writeOptionalAttribute(prop.in_reductions);

  writer.writeOptionalAttribute(prop.mergeable);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  writer.writeOptionalAttribute(prop.untied);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::UnitAttr TaskOp::getUntiedAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().untied);
}

bool TaskOp::getUntied() {
  auto attr = getUntiedAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr TaskOp::getMergeableAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().mergeable);
}

bool TaskOp::getMergeable() {
  auto attr = getMergeableAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::ArrayAttr TaskOp::getInReductionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().in_reductions);
}

::std::optional< ::mlir::ArrayAttr > TaskOp::getInReductions() {
  auto attr = getInReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::ArrayAttr TaskOp::getDependsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().depends);
}

::std::optional< ::mlir::ArrayAttr > TaskOp::getDepends() {
  auto attr = getDependsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void TaskOp::setUntiedAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getUntiedAttrName(), attr);
}

void TaskOp::setUntied(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getUntiedAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getUntiedAttrName());
}

void TaskOp::setMergeableAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getMergeableAttrName(), attr);
}

void TaskOp::setMergeable(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getMergeableAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getMergeableAttrName());
}

void TaskOp::setInReductionsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getInReductionsAttrName(), attr);
}

void TaskOp::setDependsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getDependsAttrName(), attr);
}

::mlir::Attribute TaskOp::removeUntiedAttr() {
    auto &attr = getProperties().untied;
    attr = {};
    return attr;
}

::mlir::Attribute TaskOp::removeMergeableAttr() {
    auto &attr = getProperties().mergeable;
    attr = {};
    return attr;
}

::mlir::Attribute TaskOp::removeInReductionsAttr() {
    auto &attr = getProperties().in_reductions;
    attr = {};
    return attr;
}

::mlir::Attribute TaskOp::removeDependsAttr() {
    auto &attr = getProperties().depends;
    attr = {};
    return attr;
}

void TaskOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value final_expr, /*optional*/::mlir::UnitAttr untied, /*optional*/::mlir::UnitAttr mergeable, ::mlir::ValueRange in_reduction_vars, /*optional*/::mlir::ArrayAttr in_reductions, /*optional*/::mlir::Value priority, /*optional*/::mlir::ArrayAttr depends, ::mlir::ValueRange depend_vars, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (final_expr)
    odsState.addOperands(final_expr);
  odsState.addOperands(in_reduction_vars);
  if (priority)
    odsState.addOperands(priority);
  odsState.addOperands(depend_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (final_expr ? 1 : 0), static_cast<int32_t>(in_reduction_vars.size()), (priority ? 1 : 0), static_cast<int32_t>(depend_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (untied) {
    odsState.getOrAddProperties<Properties>().untied = untied;
  }
  if (mergeable) {
    odsState.getOrAddProperties<Properties>().mergeable = mergeable;
  }
  if (in_reductions) {
    odsState.getOrAddProperties<Properties>().in_reductions = in_reductions;
  }
  if (depends) {
    odsState.getOrAddProperties<Properties>().depends = depends;
  }
  (void)odsState.addRegion();
}

void TaskOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value final_expr, /*optional*/::mlir::UnitAttr untied, /*optional*/::mlir::UnitAttr mergeable, ::mlir::ValueRange in_reduction_vars, /*optional*/::mlir::ArrayAttr in_reductions, /*optional*/::mlir::Value priority, /*optional*/::mlir::ArrayAttr depends, ::mlir::ValueRange depend_vars, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (final_expr)
    odsState.addOperands(final_expr);
  odsState.addOperands(in_reduction_vars);
  if (priority)
    odsState.addOperands(priority);
  odsState.addOperands(depend_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (final_expr ? 1 : 0), static_cast<int32_t>(in_reduction_vars.size()), (priority ? 1 : 0), static_cast<int32_t>(depend_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (untied) {
    odsState.getOrAddProperties<Properties>().untied = untied;
  }
  if (mergeable) {
    odsState.getOrAddProperties<Properties>().mergeable = mergeable;
  }
  if (in_reductions) {
    odsState.getOrAddProperties<Properties>().in_reductions = in_reductions;
  }
  if (depends) {
    odsState.getOrAddProperties<Properties>().depends = depends;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TaskOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value final_expr, /*optional*/bool untied, /*optional*/bool mergeable, ::mlir::ValueRange in_reduction_vars, /*optional*/::mlir::ArrayAttr in_reductions, /*optional*/::mlir::Value priority, /*optional*/::mlir::ArrayAttr depends, ::mlir::ValueRange depend_vars, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (final_expr)
    odsState.addOperands(final_expr);
  odsState.addOperands(in_reduction_vars);
  if (priority)
    odsState.addOperands(priority);
  odsState.addOperands(depend_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (final_expr ? 1 : 0), static_cast<int32_t>(in_reduction_vars.size()), (priority ? 1 : 0), static_cast<int32_t>(depend_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (untied) {
    odsState.getOrAddProperties<Properties>().untied = ((untied) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (mergeable) {
    odsState.getOrAddProperties<Properties>().mergeable = ((mergeable) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (in_reductions) {
    odsState.getOrAddProperties<Properties>().in_reductions = in_reductions;
  }
  if (depends) {
    odsState.getOrAddProperties<Properties>().depends = depends;
  }
  (void)odsState.addRegion();
}

void TaskOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value final_expr, /*optional*/bool untied, /*optional*/bool mergeable, ::mlir::ValueRange in_reduction_vars, /*optional*/::mlir::ArrayAttr in_reductions, /*optional*/::mlir::Value priority, /*optional*/::mlir::ArrayAttr depends, ::mlir::ValueRange depend_vars, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars) {
  if (if_expr)
    odsState.addOperands(if_expr);
  if (final_expr)
    odsState.addOperands(final_expr);
  odsState.addOperands(in_reduction_vars);
  if (priority)
    odsState.addOperands(priority);
  odsState.addOperands(depend_vars);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(if_expr ? 1 : 0), (final_expr ? 1 : 0), static_cast<int32_t>(in_reduction_vars.size()), (priority ? 1 : 0), static_cast<int32_t>(depend_vars.size()), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (untied) {
    odsState.getOrAddProperties<Properties>().untied = ((untied) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (mergeable) {
    odsState.getOrAddProperties<Properties>().mergeable = ((mergeable) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (in_reductions) {
    odsState.getOrAddProperties<Properties>().in_reductions = in_reductions;
  }
  if (depends) {
    odsState.getOrAddProperties<Properties>().depends = depends;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TaskOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TaskOp::verifyInvariantsImpl() {
  auto tblgen_depends = getProperties().depends; (void)tblgen_depends;
  auto tblgen_in_reductions = getProperties().in_reductions; (void)tblgen_in_reductions;
  auto tblgen_mergeable = getProperties().mergeable; (void)tblgen_mergeable;
  auto tblgen_untied = getProperties().untied; (void)tblgen_untied;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_untied, "untied")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_mergeable, "mergeable")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(*this, tblgen_in_reductions, "in_reductions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps17(*this, tblgen_depends, "depends")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps10(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult TaskOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TaskOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> if_exprOperands;
  ::llvm::SMLoc if_exprOperandsLoc;
  (void)if_exprOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> final_exprOperands;
  ::llvm::SMLoc final_exprOperandsLoc;
  (void)final_exprOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> in_reduction_varsOperands;
  ::llvm::SMLoc in_reduction_varsOperandsLoc;
  (void)in_reduction_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> in_reduction_varsTypes;
  ::mlir::ArrayAttr in_reductionsAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> priorityOperands;
  ::llvm::SMLoc priorityOperandsLoc;
  (void)priorityOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocate_varsOperands;
  ::llvm::SMLoc allocate_varsOperandsLoc;
  (void)allocate_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocate_varsTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocators_varsOperands;
  ::llvm::SMLoc allocators_varsOperandsLoc;
  (void)allocators_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocators_varsTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> depend_varsOperands;
  ::llvm::SMLoc depend_varsOperandsLoc;
  (void)depend_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> depend_varsTypes;
  ::mlir::ArrayAttr dependsAttr;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  bool ifClause = false;
  bool finalClause = false;
  bool untiedClause = false;
  bool mergeableClause = false;
  bool in_reductionClause = false;
  bool priorityClause = false;
  bool allocateClause = false;
  bool dependClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("if"))) {

  if (ifClause) {
    return parser.emitError(parser.getNameLoc())
          << "`if` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  ifClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    if_exprOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("final"))) {

  if (finalClause) {
    return parser.emitError(parser.getNameLoc())
          << "`final` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  finalClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    final_exprOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      final_exprOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("untied"))) {

  if (untiedClause) {
    return parser.emitError(parser.getNameLoc())
          << "`untied` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  untiedClause = true;
    result.getOrAddProperties<TaskOp::Properties>().untied = parser.getBuilder().getUnitAttr();    } else if (succeeded(parser.parseOptionalKeyword("mergeable"))) {

  if (mergeableClause) {
    return parser.emitError(parser.getNameLoc())
          << "`mergeable` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  mergeableClause = true;
    result.getOrAddProperties<TaskOp::Properties>().mergeable = parser.getBuilder().getUnitAttr();    } else if (succeeded(parser.parseOptionalKeyword("in_reduction"))) {

  if (in_reductionClause) {
    return parser.emitError(parser.getNameLoc())
          << "`in_reduction` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  in_reductionClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    in_reduction_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseReductionVarList(parser, in_reduction_varsOperands, in_reduction_varsTypes, in_reductionsAttr);
    if (odsResult) return ::mlir::failure();
    if (in_reductionsAttr)
      result.getOrAddProperties<TaskOp::Properties>().in_reductions = in_reductionsAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("priority"))) {

  if (priorityClause) {
    return parser.emitError(parser.getNameLoc())
          << "`priority` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  priorityClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    priorityOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      priorityOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("allocate"))) {

  if (allocateClause) {
    return parser.emitError(parser.getNameLoc())
          << "`allocate` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  allocateClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    allocate_varsOperandsLoc = parser.getCurrentLocation();
    allocators_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAllocateAndAllocator(parser, allocate_varsOperands, allocate_varsTypes, allocators_varsOperands, allocators_varsTypes);
    if (odsResult) return ::mlir::failure();
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("depend"))) {

  if (dependClause) {
    return parser.emitError(parser.getNameLoc())
          << "`depend` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  dependClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    depend_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseDependVarList(parser, depend_varsOperands, depend_varsTypes, dependsAttr);
    if (odsResult) return ::mlir::failure();
    if (dependsAttr)
      result.getOrAddProperties<TaskOp::Properties>().depends = dependsAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}

  if (parser.parseRegion(*regionRegion))
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
  result.addRegion(std::move(regionRegion));
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(if_exprOperands.size()), static_cast<int32_t>(final_exprOperands.size()), static_cast<int32_t>(in_reduction_varsOperands.size()), static_cast<int32_t>(priorityOperands.size()), static_cast<int32_t>(depend_varsOperands.size()), static_cast<int32_t>(allocate_varsOperands.size()), static_cast<int32_t>(allocators_varsOperands.size())}), result.getOrAddProperties<TaskOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(1);
  ::mlir::Type odsBuildableType1 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(if_exprOperands, odsBuildableType0, if_exprOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(final_exprOperands, odsBuildableType0, final_exprOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(in_reduction_varsOperands, in_reduction_varsTypes, in_reduction_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(priorityOperands, odsBuildableType1, priorityOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(depend_varsOperands, depend_varsTypes, depend_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocate_varsOperands, allocate_varsTypes, allocate_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocators_varsOperands, allocators_varsTypes, allocators_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TaskOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getIfExpr()) {
  _odsPrinter << ' ' << "if";
  _odsPrinter << "(";
  if (::mlir::Value value = getIfExpr())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getFinalExpr()) {
  _odsPrinter << ' ' << "final";
  _odsPrinter << "(";
  if (::mlir::Value value = getFinalExpr())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || (getUntiedAttr() && getUntiedAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr))) {
  _odsPrinter << ' ' << "untied";
  }
  if (false || (getMergeableAttr() && getMergeableAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr))) {
  _odsPrinter << ' ' << "mergeable";
  }
  if (false || getInReductionVars().size() || (getInReductionsAttr())) {
  _odsPrinter << ' ' << "in_reduction";
  _odsPrinter << "(";
  printReductionVarList(_odsPrinter, *this, getInReductionVars(), getInReductionVars().getTypes(), getInReductionsAttr());
  _odsPrinter << ")";
  }
  if (false || getPriority()) {
  _odsPrinter << ' ' << "priority";
  _odsPrinter << "(";
  if (::mlir::Value value = getPriority())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getAllocateVars().size() || getAllocatorsVars().size()) {
  _odsPrinter << ' ' << "allocate";
  _odsPrinter << "(";
  printAllocateAndAllocator(_odsPrinter, *this, getAllocateVars(), getAllocateVars().getTypes(), getAllocatorsVars(), getAllocatorsVars().getTypes());
  _odsPrinter << ")";
  }
  if (false || getDependVars().size() || (getDependsAttr())) {
  _odsPrinter << ' ' << "depend";
  _odsPrinter << "(";
  printDependVarList(_odsPrinter, *this, getDependVars(), getDependVars().getTypes(), getDependsAttr());
  _odsPrinter << ")";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("untied");
  elidedAttrs.push_back("mergeable");
  elidedAttrs.push_back("in_reductions");
  elidedAttrs.push_back("depends");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getUntiedAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("untied");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getMergeableAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("mergeable");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::TaskOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::TaskwaitOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TaskwaitOpGenericAdaptorBase::TaskwaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.taskwait", odsAttrs.getContext());
}

TaskwaitOpGenericAdaptorBase::TaskwaitOpGenericAdaptorBase(TaskwaitOp op) : TaskwaitOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TaskwaitOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TaskwaitOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TaskwaitOpAdaptor::TaskwaitOpAdaptor(TaskwaitOp op) : TaskwaitOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TaskwaitOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TaskwaitOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TaskwaitOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TaskwaitOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TaskwaitOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TaskwaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void TaskwaitOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TaskwaitOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TaskwaitOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult TaskwaitOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TaskwaitOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void TaskwaitOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::TaskwaitOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::TaskyieldOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TaskyieldOpGenericAdaptorBase::TaskyieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.taskyield", odsAttrs.getContext());
}

TaskyieldOpGenericAdaptorBase::TaskyieldOpGenericAdaptorBase(TaskyieldOp op) : TaskyieldOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TaskyieldOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TaskyieldOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TaskyieldOpAdaptor::TaskyieldOpAdaptor(TaskyieldOp op) : TaskyieldOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TaskyieldOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TaskyieldOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TaskyieldOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TaskyieldOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TaskyieldOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TaskyieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void TaskyieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TaskyieldOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TaskyieldOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult TaskyieldOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TaskyieldOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void TaskyieldOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::TaskyieldOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::TeamsOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TeamsOpGenericAdaptorBase::TeamsOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.teams", odsAttrs.getContext());
}

TeamsOpGenericAdaptorBase::TeamsOpGenericAdaptorBase(TeamsOp op) : TeamsOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TeamsOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr TeamsOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr TeamsOpGenericAdaptorBase::getReductionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().reductions);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > TeamsOpGenericAdaptorBase::getReductions() {
  auto attr = getReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::Region &TeamsOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange TeamsOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
TeamsOpAdaptor::TeamsOpAdaptor(TeamsOp op) : TeamsOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TeamsOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_reductions = getProperties().reductions; (void)tblgen_reductions;

  if (tblgen_reductions && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_reductions))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_reductions), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::SymbolRefAttr>(attr))); }))))
    return emitError(loc, "'omp.teams' op ""attribute 'reductions' failed to satisfy constraint: symbol ref array attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TeamsOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range TeamsOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::IntegerType> TeamsOp::getNumTeamsLower() {
  auto operands = getODSOperands(0);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> TeamsOp::getNumTeamsUpper() {
  auto operands = getODSOperands(1);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> TeamsOp::getIfExpr() {
  auto operands = getODSOperands(2);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::TypedValue<::mlir::IntegerType> TeamsOp::getThreadLimit() {
  auto operands = getODSOperands(3);
  return operands.empty() ? ::mlir::TypedValue<::mlir::IntegerType>{} : ::llvm::cast<::mlir::TypedValue<::mlir::IntegerType>>(*operands.begin());
}

::mlir::Operation::operand_range TeamsOp::getAllocateVars() {
  return getODSOperands(4);
}

::mlir::Operation::operand_range TeamsOp::getAllocatorsVars() {
  return getODSOperands(5);
}

::mlir::Operation::operand_range TeamsOp::getReductionVars() {
  return getODSOperands(6);
}

::mlir::MutableOperandRange TeamsOp::getNumTeamsLowerMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TeamsOp::getNumTeamsUpperMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TeamsOp::getIfExprMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TeamsOp::getThreadLimitMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TeamsOp::getAllocateVarsMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TeamsOp::getAllocatorsVarsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange TeamsOp::getReductionVarsMutable() {
  auto range = getODSOperandIndexAndLength(6);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(6u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> TeamsOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TeamsOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &TeamsOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult TeamsOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.reductions;
       auto attr = dict.get("reductions");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for reductions in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reductions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute TeamsOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.reductions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reductions",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code TeamsOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.reductions.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> TeamsOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "reductions")
      return prop.reductions;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void TeamsOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "reductions") {
       prop.reductions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reductions)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void TeamsOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.reductions) attrs.append("reductions", prop.reductions);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult TeamsOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getReductionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(attr, "reductions", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult TeamsOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  if (::mlir::failed(reader.readOptionalAttribute(prop.reductions)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void TeamsOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  writer.writeOptionalAttribute(prop.reductions);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::ArrayAttr TeamsOp::getReductionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().reductions);
}

::std::optional< ::mlir::ArrayAttr > TeamsOp::getReductions() {
  auto attr = getReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

void TeamsOp::setReductionsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getReductionsAttrName(), attr);
}

::mlir::Attribute TeamsOp::removeReductionsAttr() {
    auto &attr = getProperties().reductions;
    attr = {};
    return attr;
}

void TeamsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value num_teams_lower, /*optional*/::mlir::Value num_teams_upper, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value thread_limit, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions) {
  if (num_teams_lower)
    odsState.addOperands(num_teams_lower);
  if (num_teams_upper)
    odsState.addOperands(num_teams_upper);
  if (if_expr)
    odsState.addOperands(if_expr);
  if (thread_limit)
    odsState.addOperands(thread_limit);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  odsState.addOperands(reduction_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(num_teams_lower ? 1 : 0), (num_teams_upper ? 1 : 0), (if_expr ? 1 : 0), (thread_limit ? 1 : 0), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size()), static_cast<int32_t>(reduction_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  (void)odsState.addRegion();
}

void TeamsOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value num_teams_lower, /*optional*/::mlir::Value num_teams_upper, /*optional*/::mlir::Value if_expr, /*optional*/::mlir::Value thread_limit, ::mlir::ValueRange allocate_vars, ::mlir::ValueRange allocators_vars, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions) {
  if (num_teams_lower)
    odsState.addOperands(num_teams_lower);
  if (num_teams_upper)
    odsState.addOperands(num_teams_upper);
  if (if_expr)
    odsState.addOperands(if_expr);
  if (thread_limit)
    odsState.addOperands(thread_limit);
  odsState.addOperands(allocate_vars);
  odsState.addOperands(allocators_vars);
  odsState.addOperands(reduction_vars);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({(num_teams_lower ? 1 : 0), (num_teams_upper ? 1 : 0), (if_expr ? 1 : 0), (thread_limit ? 1 : 0), static_cast<int32_t>(allocate_vars.size()), static_cast<int32_t>(allocators_vars.size()), static_cast<int32_t>(reduction_vars.size())}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TeamsOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TeamsOp::verifyInvariantsImpl() {
  auto tblgen_reductions = getProperties().reductions; (void)tblgen_reductions;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(*this, tblgen_reductions, "reductions")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    if (valueGroup0.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup0.size();
    }

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    if (valueGroup1.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup1.size();
    }

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    if (valueGroup2.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup2.size();
    }

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps2(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    if (valueGroup3.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup3.size();
    }

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps9(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult TeamsOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult TeamsOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> num_teams_lowerOperands;
  ::llvm::SMLoc num_teams_lowerOperandsLoc;
  (void)num_teams_lowerOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> num_teams_lowerTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> num_teams_upperOperands;
  ::llvm::SMLoc num_teams_upperOperandsLoc;
  (void)num_teams_upperOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> num_teams_upperTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> if_exprOperands;
  ::llvm::SMLoc if_exprOperandsLoc;
  (void)if_exprOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> thread_limitOperands;
  ::llvm::SMLoc thread_limitOperandsLoc;
  (void)thread_limitOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> thread_limitTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> reduction_varsOperands;
  ::llvm::SMLoc reduction_varsOperandsLoc;
  (void)reduction_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> reduction_varsTypes;
  ::mlir::ArrayAttr reductionsAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocate_varsOperands;
  ::llvm::SMLoc allocate_varsOperandsLoc;
  (void)allocate_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocate_varsTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> allocators_varsOperands;
  ::llvm::SMLoc allocators_varsOperandsLoc;
  (void)allocators_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> allocators_varsTypes;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  bool num_teamsClause = false;
  bool ifClause = false;
  bool thread_limitClause = false;
  bool reductionClause = false;
  bool allocateClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("num_teams"))) {

  if (num_teamsClause) {
    return parser.emitError(parser.getNameLoc())
          << "`num_teams` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  num_teamsClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    num_teams_lowerOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      num_teams_lowerOperands.push_back(operand);
    }
  }
  if (!num_teams_lowerOperands.empty()) {
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      num_teams_lowerTypes.push_back(optionalType);
    }
  }
  }
  if (parser.parseKeyword("to"))
    return ::mlir::failure();

  {
    num_teams_upperOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      num_teams_upperOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      num_teams_upperTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("if"))) {

  if (ifClause) {
    return parser.emitError(parser.getNameLoc())
          << "`if` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  ifClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    if_exprOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      if_exprOperands.push_back(operand);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("thread_limit"))) {

  if (thread_limitClause) {
    return parser.emitError(parser.getNameLoc())
          << "`thread_limit` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  thread_limitClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  {
    thread_limitOperandsLoc = parser.getCurrentLocation();
    ::mlir::OpAsmParser::UnresolvedOperand operand;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalOperand(operand);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      thread_limitOperands.push_back(operand);
    }
  }
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::Type optionalType;
    ::mlir::OptionalParseResult parseResult =
                                    parser.parseOptionalType(optionalType);
    if (parseResult.has_value()) {
      if (failed(*parseResult))
        return ::mlir::failure();
      thread_limitTypes.push_back(optionalType);
    }
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("reduction"))) {

  if (reductionClause) {
    return parser.emitError(parser.getNameLoc())
          << "`reduction` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  reductionClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    reduction_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseReductionVarList(parser, reduction_varsOperands, reduction_varsTypes, reductionsAttr);
    if (odsResult) return ::mlir::failure();
    if (reductionsAttr)
      result.getOrAddProperties<TeamsOp::Properties>().reductions = reductionsAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("allocate"))) {

  if (allocateClause) {
    return parser.emitError(parser.getNameLoc())
          << "`allocate` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  allocateClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    allocate_varsOperandsLoc = parser.getCurrentLocation();
    allocators_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseAllocateAndAllocator(parser, allocate_varsOperands, allocate_varsTypes, allocators_varsOperands, allocators_varsTypes);
    if (odsResult) return ::mlir::failure();
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}

  if (parser.parseRegion(*regionRegion))
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
  result.addRegion(std::move(regionRegion));
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(num_teams_lowerOperands.size()), static_cast<int32_t>(num_teams_upperOperands.size()), static_cast<int32_t>(if_exprOperands.size()), static_cast<int32_t>(thread_limitOperands.size()), static_cast<int32_t>(allocate_varsOperands.size()), static_cast<int32_t>(allocators_varsOperands.size()), static_cast<int32_t>(reduction_varsOperands.size())}), result.getOrAddProperties<TeamsOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(1);
  if (parser.resolveOperands(num_teams_lowerOperands, num_teams_lowerTypes, num_teams_lowerOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(num_teams_upperOperands, num_teams_upperTypes, num_teams_upperOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(if_exprOperands, odsBuildableType0, if_exprOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(thread_limitOperands, thread_limitTypes, thread_limitOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocate_varsOperands, allocate_varsTypes, allocate_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(allocators_varsOperands, allocators_varsTypes, allocators_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(reduction_varsOperands, reduction_varsTypes, reduction_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void TeamsOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getNumTeamsLower() || getNumTeamsUpper()) {
  _odsPrinter << ' ' << "num_teams";
  _odsPrinter << "(";
  if (getNumTeamsLower()) {
    if (::mlir::Value value = getNumTeamsLower())
      _odsPrinter << value;
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << (getNumTeamsLower() ? ::llvm::ArrayRef<::mlir::Type>(getNumTeamsLower().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  }
  _odsPrinter << ' ' << "to";
  _odsPrinter << ' ';
  if (::mlir::Value value = getNumTeamsUpper())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getNumTeamsUpper() ? ::llvm::ArrayRef<::mlir::Type>(getNumTeamsUpper().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getIfExpr()) {
  _odsPrinter << ' ' << "if";
  _odsPrinter << "(";
  if (::mlir::Value value = getIfExpr())
    _odsPrinter << value;
  _odsPrinter << ")";
  }
  if (false || getThreadLimit()) {
  _odsPrinter << ' ' << "thread_limit";
  _odsPrinter << "(";
  if (::mlir::Value value = getThreadLimit())
    _odsPrinter << value;
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  _odsPrinter << (getThreadLimit() ? ::llvm::ArrayRef<::mlir::Type>(getThreadLimit().getType()) : ::llvm::ArrayRef<::mlir::Type>());
  _odsPrinter << ")";
  }
  if (false || getReductionVars().size() || (getReductionsAttr())) {
  _odsPrinter << ' ' << "reduction";
  _odsPrinter << "(";
  printReductionVarList(_odsPrinter, *this, getReductionVars(), getReductionVars().getTypes(), getReductionsAttr());
  _odsPrinter << ")";
  }
  if (false || getAllocateVars().size() || getAllocatorsVars().size()) {
  _odsPrinter << ' ' << "allocate";
  _odsPrinter << "(";
  printAllocateAndAllocator(_odsPrinter, *this, getAllocateVars(), getAllocateVars().getTypes(), getAllocatorsVars(), getAllocatorsVars().getTypes());
  _odsPrinter << ")";
  }
  _odsPrinter << ' ';
  _odsPrinter.printRegion(getRegion());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("reductions");
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::TeamsOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::TerminatorOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
TerminatorOpGenericAdaptorBase::TerminatorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.terminator", odsAttrs.getContext());
}

TerminatorOpGenericAdaptorBase::TerminatorOpGenericAdaptorBase(TerminatorOp op) : TerminatorOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> TerminatorOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr TerminatorOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
TerminatorOpAdaptor::TerminatorOpAdaptor(TerminatorOp op) : TerminatorOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult TerminatorOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> TerminatorOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range TerminatorOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

std::pair<unsigned, unsigned> TerminatorOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range TerminatorOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void TerminatorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
}

void TerminatorOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes) {
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void TerminatorOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 0u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult TerminatorOp::verifyInvariantsImpl() {
  return ::mlir::success();
}

::mlir::LogicalResult TerminatorOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult TerminatorOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void TerminatorOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void TerminatorOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::TerminatorOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::ThreadprivateOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
ThreadprivateOpGenericAdaptorBase::ThreadprivateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.threadprivate", odsAttrs.getContext());
}

ThreadprivateOpGenericAdaptorBase::ThreadprivateOpGenericAdaptorBase(ThreadprivateOp op) : ThreadprivateOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> ThreadprivateOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr ThreadprivateOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
ThreadprivateOpAdaptor::ThreadprivateOpAdaptor(ThreadprivateOp op) : ThreadprivateOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult ThreadprivateOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> ThreadprivateOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range ThreadprivateOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::omp::PointerLikeType> ThreadprivateOp::getSymAddr() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::omp::PointerLikeType>>(*getODSOperands(0).begin());
}

::mlir::OpOperand &ThreadprivateOp::getSymAddrMutable() {
  auto range = getODSOperandIndexAndLength(0);
  return getOperation()->getOpOperand(range.first);
}

std::pair<unsigned, unsigned> ThreadprivateOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range ThreadprivateOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::TypedValue<::mlir::omp::PointerLikeType> ThreadprivateOp::getTlsAddr() {
  return ::llvm::cast<::mlir::TypedValue<::mlir::omp::PointerLikeType>>(*getODSResults(0).begin());
}

void ThreadprivateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type tls_addr, ::mlir::Value sym_addr) {
  odsState.addOperands(sym_addr);
  odsState.addTypes(tls_addr);
}

void ThreadprivateOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value sym_addr) {
  odsState.addOperands(sym_addr);
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void ThreadprivateOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 1u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult ThreadprivateOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  if (!((((*this->getODSOperands(0).begin()).getType()) == ((*this->getODSResults(0).begin()).getType()) && ((*this->getODSResults(0).begin()).getType()) == ((*this->getODSOperands(0).begin()).getType()))))
    return emitOpError("failed to verify that all of {sym_addr, tls_addr} have same type");
  return ::mlir::success();
}

::mlir::LogicalResult ThreadprivateOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult ThreadprivateOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::mlir::OpAsmParser::UnresolvedOperand sym_addrRawOperands[1];
  ::llvm::ArrayRef<::mlir::OpAsmParser::UnresolvedOperand> sym_addrOperands(sym_addrRawOperands);  ::llvm::SMLoc sym_addrOperandsLoc;
  (void)sym_addrOperandsLoc;
  ::mlir::Type sym_addrRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> sym_addrTypes(sym_addrRawTypes);
  ::mlir::Type tls_addrRawTypes[1];
  ::llvm::ArrayRef<::mlir::Type> tls_addrTypes(tls_addrRawTypes);

  sym_addrOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperand(sym_addrRawOperands[0]))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  {
    ::mlir::omp::PointerLikeType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    sym_addrRawTypes[0] = type;
  }
  if (parser.parseArrow())
    return ::mlir::failure();

  {
    ::mlir::omp::PointerLikeType type;
    if (parser.parseCustomTypeWithFallback(type))
      return ::mlir::failure();
    tls_addrRawTypes[0] = type;
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  result.addTypes(tls_addrTypes);
  if (parser.resolveOperands(sym_addrOperands, sym_addrTypes, sym_addrOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void ThreadprivateOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  _odsPrinter << ' ';
  _odsPrinter << getSymAddr();
  _odsPrinter << ' ' << ":";
  _odsPrinter << ' ';
  {
    auto type = getSymAddr().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::omp::PointerLikeType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  _odsPrinter << ' ' << "->";
  _odsPrinter << ' ';
  {
    auto type = getTlsAddr().getType();
    if (auto validType = ::llvm::dyn_cast<::mlir::omp::PointerLikeType>(type))
      _odsPrinter.printStrippedAttrOrType(validType);
   else
     _odsPrinter << type;
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::ThreadprivateOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::WsLoopOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
WsLoopOpGenericAdaptorBase::WsLoopOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), properties(properties), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.wsloop", odsAttrs.getContext());
}

WsLoopOpGenericAdaptorBase::WsLoopOpGenericAdaptorBase(WsLoopOp op) : WsLoopOpGenericAdaptorBase(op->getDiscardableAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> WsLoopOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::DictionaryAttr WsLoopOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::ArrayAttr WsLoopOpGenericAdaptorBase::getReductionsAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().reductions);
  return attr;
}

::std::optional< ::mlir::ArrayAttr > WsLoopOpGenericAdaptorBase::getReductions() {
  auto attr = getReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::omp::ClauseScheduleKindAttr WsLoopOpGenericAdaptorBase::getScheduleValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::omp::ClauseScheduleKindAttr>(getProperties().schedule_val);
  return attr;
}

::std::optional<::mlir::omp::ClauseScheduleKind> WsLoopOpGenericAdaptorBase::getScheduleVal() {
  auto attr = getScheduleValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseScheduleKind>(attr.getValue()) : (::std::nullopt);
}

::mlir::omp::ScheduleModifierAttr WsLoopOpGenericAdaptorBase::getScheduleModifierAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::omp::ScheduleModifierAttr>(getProperties().schedule_modifier);
  return attr;
}

::std::optional<::mlir::omp::ScheduleModifier> WsLoopOpGenericAdaptorBase::getScheduleModifier() {
  auto attr = getScheduleModifierAttr();
  return attr ? ::std::optional<::mlir::omp::ScheduleModifier>(attr.getValue()) : (::std::nullopt);
}

::mlir::UnitAttr WsLoopOpGenericAdaptorBase::getSimdModifierAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().simd_modifier);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool WsLoopOpGenericAdaptorBase::getSimdModifier() {
  auto attr = getSimdModifierAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr WsLoopOpGenericAdaptorBase::getNowaitAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool WsLoopOpGenericAdaptorBase::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::IntegerAttr WsLoopOpGenericAdaptorBase::getOrderedValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().ordered_val);
  return attr;
}

::std::optional<uint64_t> WsLoopOpGenericAdaptorBase::getOrderedVal() {
  auto attr = getOrderedValAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

::mlir::omp::ClauseOrderKindAttr WsLoopOpGenericAdaptorBase::getOrderValAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::omp::ClauseOrderKindAttr>(getProperties().order_val);
  return attr;
}

::std::optional<::mlir::omp::ClauseOrderKind> WsLoopOpGenericAdaptorBase::getOrderVal() {
  auto attr = getOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseOrderKind>(attr.getValue()) : (::std::nullopt);
}

::mlir::UnitAttr WsLoopOpGenericAdaptorBase::getInclusiveAttr() {
  auto attr = ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().inclusive);
  if (!attr)
    attr = ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr);
  return attr;
}

bool WsLoopOpGenericAdaptorBase::getInclusive() {
  auto attr = getInclusiveAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder(odsAttrs.getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::Region &WsLoopOpGenericAdaptorBase::getRegion() {
  return *odsRegions[0];
}

::mlir::RegionRange WsLoopOpGenericAdaptorBase::getRegions() {
  return odsRegions;
}

} // namespace detail
WsLoopOpAdaptor::WsLoopOpAdaptor(WsLoopOp op) : WsLoopOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult WsLoopOpAdaptor::verify(::mlir::Location loc) {
  auto tblgen_inclusive = getProperties().inclusive; (void)tblgen_inclusive;
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;
  auto tblgen_order_val = getProperties().order_val; (void)tblgen_order_val;
  auto tblgen_ordered_val = getProperties().ordered_val; (void)tblgen_ordered_val;
  auto tblgen_reductions = getProperties().reductions; (void)tblgen_reductions;
  auto tblgen_schedule_modifier = getProperties().schedule_modifier; (void)tblgen_schedule_modifier;
  auto tblgen_schedule_val = getProperties().schedule_val; (void)tblgen_schedule_val;
  auto tblgen_simd_modifier = getProperties().simd_modifier; (void)tblgen_simd_modifier;

  if (tblgen_reductions && !(((::llvm::isa<::mlir::ArrayAttr>(tblgen_reductions))) && (::llvm::all_of(::llvm::cast<::mlir::ArrayAttr>(tblgen_reductions), [&](::mlir::Attribute attr) { return attr && ((::llvm::isa<::mlir::SymbolRefAttr>(attr))); }))))
    return emitError(loc, "'omp.wsloop' op ""attribute 'reductions' failed to satisfy constraint: symbol ref array attribute");

  if (tblgen_schedule_val && !((::llvm::isa<::mlir::omp::ClauseScheduleKindAttr>(tblgen_schedule_val))))
    return emitError(loc, "'omp.wsloop' op ""attribute 'schedule_val' failed to satisfy constraint: ScheduleKind Clause");

  if (tblgen_schedule_modifier && !((::llvm::isa<::mlir::omp::ScheduleModifierAttr>(tblgen_schedule_modifier))))
    return emitError(loc, "'omp.wsloop' op ""attribute 'schedule_modifier' failed to satisfy constraint: OpenMP Schedule Modifier");

  if (tblgen_simd_modifier && !((::llvm::isa<::mlir::UnitAttr>(tblgen_simd_modifier))))
    return emitError(loc, "'omp.wsloop' op ""attribute 'simd_modifier' failed to satisfy constraint: unit attribute");

  if (tblgen_nowait && !((::llvm::isa<::mlir::UnitAttr>(tblgen_nowait))))
    return emitError(loc, "'omp.wsloop' op ""attribute 'nowait' failed to satisfy constraint: unit attribute");

  if (tblgen_ordered_val && !((((::llvm::isa<::mlir::IntegerAttr>(tblgen_ordered_val))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_ordered_val).getType().isSignlessInteger(64)))) && ((::llvm::cast<::mlir::IntegerAttr>(tblgen_ordered_val).getInt() >= 0))))
    return emitError(loc, "'omp.wsloop' op ""attribute 'ordered_val' failed to satisfy constraint: 64-bit signless integer attribute whose minimum value is 0");

  if (tblgen_order_val && !((::llvm::isa<::mlir::omp::ClauseOrderKindAttr>(tblgen_order_val))))
    return emitError(loc, "'omp.wsloop' op ""attribute 'order_val' failed to satisfy constraint: OrderKind Clause");

  if (tblgen_inclusive && !((::llvm::isa<::mlir::UnitAttr>(tblgen_inclusive))))
    return emitError(loc, "'omp.wsloop' op ""attribute 'inclusive' failed to satisfy constraint: unit attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> WsLoopOp::getODSOperandIndexAndLength(unsigned index) {
  ::llvm::ArrayRef<int32_t> sizeAttr = getProperties().operandSegmentSizes;

  unsigned start = 0;
  for (unsigned i = 0; i < index; ++i)
    start += sizeAttr[i];
  return {start, sizeAttr[index]};
}

::mlir::Operation::operand_range WsLoopOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range WsLoopOp::getLowerBound() {
  return getODSOperands(0);
}

::mlir::Operation::operand_range WsLoopOp::getUpperBound() {
  return getODSOperands(1);
}

::mlir::Operation::operand_range WsLoopOp::getStep() {
  return getODSOperands(2);
}

::mlir::Operation::operand_range WsLoopOp::getLinearVars() {
  return getODSOperands(3);
}

::mlir::Operation::operand_range WsLoopOp::getLinearStepVars() {
  return getODSOperands(4);
}

::mlir::Operation::operand_range WsLoopOp::getReductionVars() {
  return getODSOperands(5);
}

::mlir::Value WsLoopOp::getScheduleChunkVar() {
  auto operands = getODSOperands(6);
  return operands.empty() ? ::mlir::Value{} : ::llvm::cast<::mlir::Value>(*operands.begin());
}

::mlir::MutableOperandRange WsLoopOp::getLowerBoundMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(0u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::getUpperBoundMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(1u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::getStepMutable() {
  auto range = getODSOperandIndexAndLength(2);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(2u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::getLinearVarsMutable() {
  auto range = getODSOperandIndexAndLength(3);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(3u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::getLinearStepVarsMutable() {
  auto range = getODSOperandIndexAndLength(4);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(4u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::getReductionVarsMutable() {
  auto range = getODSOperandIndexAndLength(5);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(5u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

::mlir::MutableOperandRange WsLoopOp::getScheduleChunkVarMutable() {
  auto range = getODSOperandIndexAndLength(6);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second, ::mlir::MutableOperandRange::OperandSegment(6u, {getOperandSegmentSizesAttrName(), ::mlir::DenseI32ArrayAttr::get(getContext(), getProperties().operandSegmentSizes)}));
  return mutableRange;
}

std::pair<unsigned, unsigned> WsLoopOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range WsLoopOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Region &WsLoopOp::getRegion() {
  return (*this)->getRegion(0);
}

::mlir::LogicalResult WsLoopOp::setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
  ::mlir::DictionaryAttr dict = ::llvm::dyn_cast<::mlir::DictionaryAttr>(attr);
  if (!dict) {
    emitError() << "expected DictionaryAttr to set properties";
    return ::mlir::failure();
  }

  {
    auto &propStorage = prop.inclusive;
       auto attr = dict.get("inclusive");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for inclusive in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `inclusive` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.nowait;
       auto attr = dict.get("nowait");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for nowait in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `nowait` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.order_val;
       auto attr = dict.get("order_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for order_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `order_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.ordered_val;
       auto attr = dict.get("ordered_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for ordered_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `ordered_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.reductions;
       auto attr = dict.get("reductions");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for reductions in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `reductions` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.schedule_modifier;
       auto attr = dict.get("schedule_modifier");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for schedule_modifier in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `schedule_modifier` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.schedule_val;
       auto attr = dict.get("schedule_val");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for schedule_val in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `schedule_val` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }

  {
    auto &propStorage = prop.simd_modifier;
       auto attr = dict.get("simd_modifier");
    if (attr || /*isRequired=*/false) {
      if (!attr) {
        emitError() << "expected key entry for simd_modifier in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      auto convertedAttr = ::llvm::dyn_cast<std::remove_reference_t<decltype(propStorage)>>(attr);
      if (convertedAttr) {
        propStorage = convertedAttr;
      } else {
        emitError() << "Invalid attribute `simd_modifier` in property conversion: " << attr;
        return ::mlir::failure();
      }
    }
  }
;
    {
      auto setFromAttr = [] (auto &propStorage, ::mlir::Attribute propAttr,
               ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
        return convertFromAttribute(propStorage, propAttr, emitError);;
      };
         auto attr = dict.get("operandSegmentSizes");   if (!attr) attr = dict.get("operand_segment_sizes");;
      if (!attr) {
        emitError() << "expected key entry for operandSegmentSizes in DictionaryAttr to set "
                   "Properties.";
        return ::mlir::failure();
      }
      if (::mlir::failed(setFromAttr(prop.operandSegmentSizes, attr, emitError)))
        return ::mlir::failure();
    }
  return ::mlir::success();
}

::mlir::Attribute WsLoopOp::getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop) {
    ::mlir::SmallVector<::mlir::NamedAttribute> attrs;
    ::mlir::Builder odsBuilder{ctx};

    {
      const auto &propStorage = prop.inclusive;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("inclusive",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.nowait;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("nowait",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.order_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("order_val",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.ordered_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("ordered_val",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.reductions;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("reductions",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.schedule_modifier;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("schedule_modifier",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.schedule_val;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("schedule_val",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.simd_modifier;
      if (propStorage)
        attrs.push_back(odsBuilder.getNamedAttr("simd_modifier",
                                       propStorage));
    }

    {
      const auto &propStorage = prop.operandSegmentSizes;
      attrs.push_back(odsBuilder.getNamedAttr("operandSegmentSizes",
                                              ::mlir::DenseI32ArrayAttr::get(ctx, propStorage)));
    }

  if (!attrs.empty())
    return odsBuilder.getDictionaryAttr(attrs);
  return {};
}

llvm::hash_code WsLoopOp::computePropertiesHash(const Properties &prop) {
  auto hash_operandSegmentSizes = [] (const auto &propStorage) -> llvm::hash_code {
    return ::llvm::hash_combine_range(std::begin(propStorage), std::end(propStorage));;
  };
  return llvm::hash_combine(
    llvm::hash_value(prop.inclusive.getAsOpaquePointer()), 
    llvm::hash_value(prop.nowait.getAsOpaquePointer()), 
    llvm::hash_value(prop.order_val.getAsOpaquePointer()), 
    llvm::hash_value(prop.ordered_val.getAsOpaquePointer()), 
    llvm::hash_value(prop.reductions.getAsOpaquePointer()), 
    llvm::hash_value(prop.schedule_modifier.getAsOpaquePointer()), 
    llvm::hash_value(prop.schedule_val.getAsOpaquePointer()), 
    llvm::hash_value(prop.simd_modifier.getAsOpaquePointer()), 
    hash_operandSegmentSizes(prop.operandSegmentSizes));
}

std::optional<mlir::Attribute> WsLoopOp::getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name) {
    if (name == "inclusive")
      return prop.inclusive;

    if (name == "nowait")
      return prop.nowait;

    if (name == "order_val")
      return prop.order_val;

    if (name == "ordered_val")
      return prop.ordered_val;

    if (name == "reductions")
      return prop.reductions;

    if (name == "schedule_modifier")
      return prop.schedule_modifier;

    if (name == "schedule_val")
      return prop.schedule_val;

    if (name == "simd_modifier")
      return prop.simd_modifier;
    if (name == "operand_segment_sizes" || name == "operandSegmentSizes") return ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes);
  return std::nullopt;
}

void WsLoopOp::setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value) {
    if (name == "inclusive") {
       prop.inclusive = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.inclusive)>>(value);
       return;
    }

    if (name == "nowait") {
       prop.nowait = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.nowait)>>(value);
       return;
    }

    if (name == "order_val") {
       prop.order_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.order_val)>>(value);
       return;
    }

    if (name == "ordered_val") {
       prop.ordered_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.ordered_val)>>(value);
       return;
    }

    if (name == "reductions") {
       prop.reductions = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.reductions)>>(value);
       return;
    }

    if (name == "schedule_modifier") {
       prop.schedule_modifier = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.schedule_modifier)>>(value);
       return;
    }

    if (name == "schedule_val") {
       prop.schedule_val = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.schedule_val)>>(value);
       return;
    }

    if (name == "simd_modifier") {
       prop.simd_modifier = ::llvm::dyn_cast_or_null<std::remove_reference_t<decltype(prop.simd_modifier)>>(value);
       return;
    }
        if (name == "operand_segment_sizes" || name == "operandSegmentSizes") {
       auto arrAttr = ::llvm::dyn_cast_or_null<::mlir::DenseI32ArrayAttr>(value);
       if (!arrAttr) return;
       if (arrAttr.size() != sizeof(prop.operandSegmentSizes) / sizeof(int32_t))
         return;
       llvm::copy(arrAttr.asArrayRef(), prop.operandSegmentSizes.begin());
       return;
    }
}

void WsLoopOp::populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs) {
    if (prop.inclusive) attrs.append("inclusive", prop.inclusive);

    if (prop.nowait) attrs.append("nowait", prop.nowait);

    if (prop.order_val) attrs.append("order_val", prop.order_val);

    if (prop.ordered_val) attrs.append("ordered_val", prop.ordered_val);

    if (prop.reductions) attrs.append("reductions", prop.reductions);

    if (prop.schedule_modifier) attrs.append("schedule_modifier", prop.schedule_modifier);

    if (prop.schedule_val) attrs.append("schedule_val", prop.schedule_val);

    if (prop.simd_modifier) attrs.append("simd_modifier", prop.simd_modifier);
  attrs.append("operandSegmentSizes", ::mlir::DenseI32ArrayAttr::get(ctx, prop.operandSegmentSizes));
}

::mlir::LogicalResult WsLoopOp::verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError) {
    {
      ::mlir::Attribute attr = attrs.get(getInclusiveAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "inclusive", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getNowaitAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "nowait", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOrderValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps8(attr, "order_val", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getOrderedValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps12(attr, "ordered_val", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getReductionsAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(attr, "reductions", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getScheduleModifierAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps19(attr, "schedule_modifier", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getScheduleValAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps18(attr, "schedule_val", emitError)))
        return ::mlir::failure();
    }

    {
      ::mlir::Attribute attr = attrs.get(getSimdModifierAttrName(opName));
      if (attr && ::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(attr, "simd_modifier", emitError)))
        return ::mlir::failure();
    }
    return ::mlir::success();
}

::mlir::LogicalResult WsLoopOp::readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state) {
  auto &prop = state.getOrAddProperties<Properties>(); (void)prop;
  if (::mlir::failed(reader.readOptionalAttribute(prop.inclusive)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.nowait)))
    return ::mlir::failure();

  if (reader.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
    auto &propStorage = prop.operandSegmentSizes;
    ::mlir::DenseI32ArrayAttr attr;
    if (::mlir::failed(reader.readAttribute(attr))) return ::mlir::failure();
    if (attr.size() > static_cast<int64_t>(sizeof(propStorage) / sizeof(int32_t))) {
      reader.emitError("size mismatch for operand/result_segment_size");
      return ::mlir::failure();
    }
    ::llvm::copy(::llvm::ArrayRef<int32_t>(attr), propStorage.begin());
  }

  if (::mlir::failed(reader.readOptionalAttribute(prop.order_val)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.ordered_val)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.reductions)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.schedule_modifier)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.schedule_val)))
    return ::mlir::failure();

  if (::mlir::failed(reader.readOptionalAttribute(prop.simd_modifier)))
    return ::mlir::failure();

  {
    auto &propStorage = prop.operandSegmentSizes;
    auto readProp = [&]() {

  if (reader.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    return reader.readSparseArray(::llvm::MutableArrayRef(propStorage));
;
      return ::mlir::success();
    };
    if (::mlir::failed(readProp()))
      return ::mlir::failure();
  }
  return ::mlir::success();
}

void WsLoopOp::writeProperties(::mlir::DialectBytecodeWriter &writer) {
  auto &prop = getProperties(); (void)prop;

  writer.writeOptionalAttribute(prop.inclusive);

  writer.writeOptionalAttribute(prop.nowait);

if (writer.getBytecodeVersion() < /*kNativePropertiesODSSegmentSize=*/6) {
  auto &propStorage = prop.operandSegmentSizes;
  writer.writeAttribute(::mlir::DenseI32ArrayAttr::get(this->getContext(), propStorage));
}

  writer.writeOptionalAttribute(prop.order_val);

  writer.writeOptionalAttribute(prop.ordered_val);

  writer.writeOptionalAttribute(prop.reductions);

  writer.writeOptionalAttribute(prop.schedule_modifier);

  writer.writeOptionalAttribute(prop.schedule_val);

  writer.writeOptionalAttribute(prop.simd_modifier);

  {
    auto &propStorage = prop.operandSegmentSizes;

  if (writer.getBytecodeVersion() >= /*kNativePropertiesODSSegmentSize=*/6)
    writer.writeSparseArray(::llvm::ArrayRef(propStorage));
;
  }
}

::mlir::ArrayAttr WsLoopOp::getReductionsAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::ArrayAttr>(getProperties().reductions);
}

::std::optional< ::mlir::ArrayAttr > WsLoopOp::getReductions() {
  auto attr = getReductionsAttr();
  return attr ? ::std::optional< ::mlir::ArrayAttr >(attr) : (::std::nullopt);
}

::mlir::omp::ClauseScheduleKindAttr WsLoopOp::getScheduleValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::omp::ClauseScheduleKindAttr>(getProperties().schedule_val);
}

::std::optional<::mlir::omp::ClauseScheduleKind> WsLoopOp::getScheduleVal() {
  auto attr = getScheduleValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseScheduleKind>(attr.getValue()) : (::std::nullopt);
}

::mlir::omp::ScheduleModifierAttr WsLoopOp::getScheduleModifierAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::omp::ScheduleModifierAttr>(getProperties().schedule_modifier);
}

::std::optional<::mlir::omp::ScheduleModifier> WsLoopOp::getScheduleModifier() {
  auto attr = getScheduleModifierAttr();
  return attr ? ::std::optional<::mlir::omp::ScheduleModifier>(attr.getValue()) : (::std::nullopt);
}

::mlir::UnitAttr WsLoopOp::getSimdModifierAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().simd_modifier);
}

bool WsLoopOp::getSimdModifier() {
  auto attr = getSimdModifierAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::UnitAttr WsLoopOp::getNowaitAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().nowait);
}

bool WsLoopOp::getNowait() {
  auto attr = getNowaitAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

::mlir::IntegerAttr WsLoopOp::getOrderedValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::IntegerAttr>(getProperties().ordered_val);
}

::std::optional<uint64_t> WsLoopOp::getOrderedVal() {
  auto attr = getOrderedValAttr();
  return attr ? ::std::optional<uint64_t>(attr.getValue().getZExtValue()) : (::std::nullopt);
}

::mlir::omp::ClauseOrderKindAttr WsLoopOp::getOrderValAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::omp::ClauseOrderKindAttr>(getProperties().order_val);
}

::std::optional<::mlir::omp::ClauseOrderKind> WsLoopOp::getOrderVal() {
  auto attr = getOrderValAttr();
  return attr ? ::std::optional<::mlir::omp::ClauseOrderKind>(attr.getValue()) : (::std::nullopt);
}

::mlir::UnitAttr WsLoopOp::getInclusiveAttr() {
  return ::llvm::dyn_cast_or_null<::mlir::UnitAttr>(getProperties().inclusive);
}

bool WsLoopOp::getInclusive() {
  auto attr = getInclusiveAttr();
    if (!attr)
      return ((false) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr) != nullptr;
  return attr != nullptr;
}

void WsLoopOp::setReductionsAttr(::mlir::ArrayAttr attr) {
  (*this)->setAttr(getReductionsAttrName(), attr);
}

void WsLoopOp::setScheduleValAttr(::mlir::omp::ClauseScheduleKindAttr attr) {
  (*this)->setAttr(getScheduleValAttrName(), attr);
}

void WsLoopOp::setScheduleVal(::std::optional<::mlir::omp::ClauseScheduleKind> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getScheduleValAttrName(), ::mlir::omp::ClauseScheduleKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getScheduleValAttrName());
}

void WsLoopOp::setScheduleModifierAttr(::mlir::omp::ScheduleModifierAttr attr) {
  (*this)->setAttr(getScheduleModifierAttrName(), attr);
}

void WsLoopOp::setScheduleModifier(::std::optional<::mlir::omp::ScheduleModifier> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getScheduleModifierAttrName(), ::mlir::omp::ScheduleModifierAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getScheduleModifierAttrName());
}

void WsLoopOp::setSimdModifierAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getSimdModifierAttrName(), attr);
}

void WsLoopOp::setSimdModifier(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getSimdModifierAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getSimdModifierAttrName());
}

void WsLoopOp::setNowaitAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getNowaitAttrName(), attr);
}

void WsLoopOp::setNowait(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getNowaitAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getNowaitAttrName());
}

void WsLoopOp::setOrderedValAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getOrderedValAttrName(), attr);
}

void WsLoopOp::setOrderedVal(::std::optional<uint64_t> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getOrderedValAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64), *attrValue));
    (*this)->removeAttr(getOrderedValAttrName());
}

void WsLoopOp::setOrderValAttr(::mlir::omp::ClauseOrderKindAttr attr) {
  (*this)->setAttr(getOrderValAttrName(), attr);
}

void WsLoopOp::setOrderVal(::std::optional<::mlir::omp::ClauseOrderKind> attrValue) {
    if (attrValue)
      return (*this)->setAttr(getOrderValAttrName(), ::mlir::omp::ClauseOrderKindAttr::get(::mlir::Builder((*this)->getContext()).getContext(), *attrValue));
    (*this)->removeAttr(getOrderValAttrName());
}

void WsLoopOp::setInclusiveAttr(::mlir::UnitAttr attr) {
  (*this)->setAttr(getInclusiveAttrName(), attr);
}

void WsLoopOp::setInclusive(bool attrValue) {
    if (attrValue)
      return (*this)->setAttr(getInclusiveAttrName(), ((attrValue) ? ::mlir::Builder((*this)->getContext()).getUnitAttr() : nullptr));
    (*this)->removeAttr(getInclusiveAttrName());
}

::mlir::Attribute WsLoopOp::removeReductionsAttr() {
    auto &attr = getProperties().reductions;
    attr = {};
    return attr;
}

::mlir::Attribute WsLoopOp::removeScheduleValAttr() {
    auto &attr = getProperties().schedule_val;
    attr = {};
    return attr;
}

::mlir::Attribute WsLoopOp::removeScheduleModifierAttr() {
    auto &attr = getProperties().schedule_modifier;
    attr = {};
    return attr;
}

::mlir::Attribute WsLoopOp::removeSimdModifierAttr() {
    auto &attr = getProperties().simd_modifier;
    attr = {};
    return attr;
}

::mlir::Attribute WsLoopOp::removeNowaitAttr() {
    auto &attr = getProperties().nowait;
    attr = {};
    return attr;
}

::mlir::Attribute WsLoopOp::removeOrderedValAttr() {
    auto &attr = getProperties().ordered_val;
    attr = {};
    return attr;
}

::mlir::Attribute WsLoopOp::removeOrderValAttr() {
    auto &attr = getProperties().order_val;
    attr = {};
    return attr;
}

::mlir::Attribute WsLoopOp::removeInclusiveAttr() {
    auto &attr = getProperties().inclusive;
    attr = {};
    return attr;
}

void WsLoopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange lowerBound, ::mlir::ValueRange upperBound, ::mlir::ValueRange step, ::mlir::ValueRange linear_vars, ::mlir::ValueRange linear_step_vars, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, /*optional*/::mlir::omp::ClauseScheduleKindAttr schedule_val, /*optional*/::mlir::Value schedule_chunk_var, /*optional*/::mlir::omp::ScheduleModifierAttr schedule_modifier, /*optional*/::mlir::UnitAttr simd_modifier, /*optional*/::mlir::UnitAttr nowait, /*optional*/::mlir::IntegerAttr ordered_val, /*optional*/::mlir::omp::ClauseOrderKindAttr order_val, /*optional*/::mlir::UnitAttr inclusive) {
  odsState.addOperands(lowerBound);
  odsState.addOperands(upperBound);
  odsState.addOperands(step);
  odsState.addOperands(linear_vars);
  odsState.addOperands(linear_step_vars);
  odsState.addOperands(reduction_vars);
  if (schedule_chunk_var)
    odsState.addOperands(schedule_chunk_var);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBound.size()), static_cast<int32_t>(upperBound.size()), static_cast<int32_t>(step.size()), static_cast<int32_t>(linear_vars.size()), static_cast<int32_t>(linear_step_vars.size()), static_cast<int32_t>(reduction_vars.size()), (schedule_chunk_var ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (schedule_val) {
    odsState.getOrAddProperties<Properties>().schedule_val = schedule_val;
  }
  if (schedule_modifier) {
    odsState.getOrAddProperties<Properties>().schedule_modifier = schedule_modifier;
  }
  if (simd_modifier) {
    odsState.getOrAddProperties<Properties>().simd_modifier = simd_modifier;
  }
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
  if (ordered_val) {
    odsState.getOrAddProperties<Properties>().ordered_val = ordered_val;
  }
  if (order_val) {
    odsState.getOrAddProperties<Properties>().order_val = order_val;
  }
  if (inclusive) {
    odsState.getOrAddProperties<Properties>().inclusive = inclusive;
  }
  (void)odsState.addRegion();
}

void WsLoopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange lowerBound, ::mlir::ValueRange upperBound, ::mlir::ValueRange step, ::mlir::ValueRange linear_vars, ::mlir::ValueRange linear_step_vars, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, /*optional*/::mlir::omp::ClauseScheduleKindAttr schedule_val, /*optional*/::mlir::Value schedule_chunk_var, /*optional*/::mlir::omp::ScheduleModifierAttr schedule_modifier, /*optional*/::mlir::UnitAttr simd_modifier, /*optional*/::mlir::UnitAttr nowait, /*optional*/::mlir::IntegerAttr ordered_val, /*optional*/::mlir::omp::ClauseOrderKindAttr order_val, /*optional*/::mlir::UnitAttr inclusive) {
  odsState.addOperands(lowerBound);
  odsState.addOperands(upperBound);
  odsState.addOperands(step);
  odsState.addOperands(linear_vars);
  odsState.addOperands(linear_step_vars);
  odsState.addOperands(reduction_vars);
  if (schedule_chunk_var)
    odsState.addOperands(schedule_chunk_var);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBound.size()), static_cast<int32_t>(upperBound.size()), static_cast<int32_t>(step.size()), static_cast<int32_t>(linear_vars.size()), static_cast<int32_t>(linear_step_vars.size()), static_cast<int32_t>(reduction_vars.size()), (schedule_chunk_var ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (schedule_val) {
    odsState.getOrAddProperties<Properties>().schedule_val = schedule_val;
  }
  if (schedule_modifier) {
    odsState.getOrAddProperties<Properties>().schedule_modifier = schedule_modifier;
  }
  if (simd_modifier) {
    odsState.getOrAddProperties<Properties>().simd_modifier = simd_modifier;
  }
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = nowait;
  }
  if (ordered_val) {
    odsState.getOrAddProperties<Properties>().ordered_val = ordered_val;
  }
  if (order_val) {
    odsState.getOrAddProperties<Properties>().order_val = order_val;
  }
  if (inclusive) {
    odsState.getOrAddProperties<Properties>().inclusive = inclusive;
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WsLoopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange lowerBound, ::mlir::ValueRange upperBound, ::mlir::ValueRange step, ::mlir::ValueRange linear_vars, ::mlir::ValueRange linear_step_vars, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, /*optional*/::mlir::omp::ClauseScheduleKindAttr schedule_val, /*optional*/::mlir::Value schedule_chunk_var, /*optional*/::mlir::omp::ScheduleModifierAttr schedule_modifier, /*optional*/bool simd_modifier, /*optional*/bool nowait, /*optional*/::mlir::IntegerAttr ordered_val, /*optional*/::mlir::omp::ClauseOrderKindAttr order_val, /*optional*/bool inclusive) {
  odsState.addOperands(lowerBound);
  odsState.addOperands(upperBound);
  odsState.addOperands(step);
  odsState.addOperands(linear_vars);
  odsState.addOperands(linear_step_vars);
  odsState.addOperands(reduction_vars);
  if (schedule_chunk_var)
    odsState.addOperands(schedule_chunk_var);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBound.size()), static_cast<int32_t>(upperBound.size()), static_cast<int32_t>(step.size()), static_cast<int32_t>(linear_vars.size()), static_cast<int32_t>(linear_step_vars.size()), static_cast<int32_t>(reduction_vars.size()), (schedule_chunk_var ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (schedule_val) {
    odsState.getOrAddProperties<Properties>().schedule_val = schedule_val;
  }
  if (schedule_modifier) {
    odsState.getOrAddProperties<Properties>().schedule_modifier = schedule_modifier;
  }
  if (simd_modifier) {
    odsState.getOrAddProperties<Properties>().simd_modifier = ((simd_modifier) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (ordered_val) {
    odsState.getOrAddProperties<Properties>().ordered_val = ordered_val;
  }
  if (order_val) {
    odsState.getOrAddProperties<Properties>().order_val = order_val;
  }
  if (inclusive) {
    odsState.getOrAddProperties<Properties>().inclusive = ((inclusive) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
}

void WsLoopOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange lowerBound, ::mlir::ValueRange upperBound, ::mlir::ValueRange step, ::mlir::ValueRange linear_vars, ::mlir::ValueRange linear_step_vars, ::mlir::ValueRange reduction_vars, /*optional*/::mlir::ArrayAttr reductions, /*optional*/::mlir::omp::ClauseScheduleKindAttr schedule_val, /*optional*/::mlir::Value schedule_chunk_var, /*optional*/::mlir::omp::ScheduleModifierAttr schedule_modifier, /*optional*/bool simd_modifier, /*optional*/bool nowait, /*optional*/::mlir::IntegerAttr ordered_val, /*optional*/::mlir::omp::ClauseOrderKindAttr order_val, /*optional*/bool inclusive) {
  odsState.addOperands(lowerBound);
  odsState.addOperands(upperBound);
  odsState.addOperands(step);
  odsState.addOperands(linear_vars);
  odsState.addOperands(linear_step_vars);
  odsState.addOperands(reduction_vars);
  if (schedule_chunk_var)
    odsState.addOperands(schedule_chunk_var);
  ::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBound.size()), static_cast<int32_t>(upperBound.size()), static_cast<int32_t>(step.size()), static_cast<int32_t>(linear_vars.size()), static_cast<int32_t>(linear_step_vars.size()), static_cast<int32_t>(reduction_vars.size()), (schedule_chunk_var ? 1 : 0)}), odsState.getOrAddProperties<Properties>().operandSegmentSizes.begin());
  if (reductions) {
    odsState.getOrAddProperties<Properties>().reductions = reductions;
  }
  if (schedule_val) {
    odsState.getOrAddProperties<Properties>().schedule_val = schedule_val;
  }
  if (schedule_modifier) {
    odsState.getOrAddProperties<Properties>().schedule_modifier = schedule_modifier;
  }
  if (simd_modifier) {
    odsState.getOrAddProperties<Properties>().simd_modifier = ((simd_modifier) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (nowait) {
    odsState.getOrAddProperties<Properties>().nowait = ((nowait) ? odsBuilder.getUnitAttr() : nullptr);
  }
  if (ordered_val) {
    odsState.getOrAddProperties<Properties>().ordered_val = ordered_val;
  }
  if (order_val) {
    odsState.getOrAddProperties<Properties>().order_val = order_val;
  }
  if (inclusive) {
    odsState.getOrAddProperties<Properties>().inclusive = ((inclusive) ? odsBuilder.getUnitAttr() : nullptr);
  }
  (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void WsLoopOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  for (unsigned i = 0; i != 1; ++i)
    (void)odsState.addRegion();
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult WsLoopOp::verifyInvariantsImpl() {
  auto tblgen_inclusive = getProperties().inclusive; (void)tblgen_inclusive;
  auto tblgen_nowait = getProperties().nowait; (void)tblgen_nowait;
  auto tblgen_order_val = getProperties().order_val; (void)tblgen_order_val;
  auto tblgen_ordered_val = getProperties().ordered_val; (void)tblgen_ordered_val;
  auto tblgen_reductions = getProperties().reductions; (void)tblgen_reductions;
  auto tblgen_schedule_modifier = getProperties().schedule_modifier; (void)tblgen_schedule_modifier;
  auto tblgen_schedule_val = getProperties().schedule_val; (void)tblgen_schedule_val;
  auto tblgen_simd_modifier = getProperties().simd_modifier; (void)tblgen_simd_modifier;

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps13(*this, tblgen_reductions, "reductions")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps18(*this, tblgen_schedule_val, "schedule_val")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps19(*this, tblgen_schedule_modifier, "schedule_modifier")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_simd_modifier, "simd_modifier")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_nowait, "nowait")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps12(*this, tblgen_ordered_val, "ordered_val")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps8(*this, tblgen_order_val, "order_val")))
    return ::mlir::failure();

  if (::mlir::failed(__mlir_ods_local_attr_constraint_OpenMPOps7(*this, tblgen_inclusive, "inclusive")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup2 = getODSOperands(2);

    for (auto v : valueGroup2) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps8(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup3 = getODSOperands(3);

    for (auto v : valueGroup3) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup4 = getODSOperands(4);

    for (auto v : valueGroup4) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps11(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup5 = getODSOperands(5);

    for (auto v : valueGroup5) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps6(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup6 = getODSOperands(6);

    if (valueGroup6.size() > 1) {
      return emitOpError("operand group starting at #") << index
          << " requires 0 or 1 element, but found " << valueGroup6.size();
    }

    for (auto v : valueGroup6) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  if (!(((this->getODSOperands(0).getType()) == (this->getODSOperands(1).getType()) && (this->getODSOperands(1).getType()) == (this->getODSOperands(2).getType()) && (this->getODSOperands(2).getType()) == (this->getODSOperands(0).getType()))))
    return emitOpError("failed to verify that all of {lowerBound, upperBound, step} have same type");
  {
    unsigned index = 0; (void)index;

    for (auto &region : ::llvm::MutableArrayRef((*this)->getRegion(0)))
      if (::mlir::failed(__mlir_ods_local_region_constraint_OpenMPOps1(*this, region, "region", index++)))
        return ::mlir::failure();
  }
  return ::mlir::success();
}

::mlir::LogicalResult WsLoopOp::verifyInvariants() {
  if(::mlir::succeeded(verifyInvariantsImpl()) && ::mlir::succeeded(verify()))
    return ::mlir::success();
  return ::mlir::failure();
}

::mlir::ParseResult WsLoopOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> linear_varsOperands;
  ::llvm::SMLoc linear_varsOperandsLoc;
  (void)linear_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> linear_varsTypes;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> linear_step_varsOperands;
  ::llvm::SMLoc linear_step_varsOperandsLoc;
  (void)linear_step_varsOperandsLoc;
  ::mlir::omp::ClauseScheduleKindAttr schedule_valAttr;
  ::mlir::omp::ScheduleModifierAttr schedule_modifierAttr;
  ::mlir::UnitAttr simd_modifierAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> schedule_chunk_varOperands;
  ::llvm::SMLoc schedule_chunk_varOperandsLoc;
  (void)schedule_chunk_varOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> schedule_chunk_varTypes;
  ::mlir::IntegerAttr ordered_valAttr;
  ::mlir::omp::ClauseOrderKindAttr order_valAttr;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> reduction_varsOperands;
  ::llvm::SMLoc reduction_varsOperandsLoc;
  (void)reduction_varsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> reduction_varsTypes;
  ::mlir::ArrayAttr reductionsAttr;
  std::unique_ptr<::mlir::Region> regionRegion = std::make_unique<::mlir::Region>();
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> lowerBoundOperands;
  ::llvm::SMLoc lowerBoundOperandsLoc;
  (void)lowerBoundOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> upperBoundOperands;
  ::llvm::SMLoc upperBoundOperandsLoc;
  (void)upperBoundOperandsLoc;
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> stepOperands;
  ::llvm::SMLoc stepOperandsLoc;
  (void)stepOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> stepTypes;
  ::mlir::UnitAttr inclusiveAttr;
  bool linearClause = false;
  bool scheduleClause = false;
  bool nowaitClause = false;
  bool orderedClause = false;
  bool orderClause = false;
  bool reductionClause = false;
  while(true) {
if (succeeded(parser.parseOptionalKeyword("linear"))) {

  if (linearClause) {
    return parser.emitError(parser.getNameLoc())
          << "`linear` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  linearClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    linear_varsOperandsLoc = parser.getCurrentLocation();
    linear_step_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseLinearClause(parser, linear_varsOperands, linear_varsTypes, linear_step_varsOperands);
    if (odsResult) return ::mlir::failure();
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("schedule"))) {

  if (scheduleClause) {
    return parser.emitError(parser.getNameLoc())
          << "`schedule` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  scheduleClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    schedule_chunk_varOperandsLoc = parser.getCurrentLocation();
    ::std::optional<::mlir::OpAsmParser::UnresolvedOperand> schedule_chunk_varOperand;
    ::mlir::Type schedule_chunk_varType;
    auto odsResult = parseScheduleClause(parser, schedule_valAttr, schedule_modifierAttr, simd_modifierAttr, schedule_chunk_varOperand, schedule_chunk_varType);
    if (odsResult) return ::mlir::failure();
    if (schedule_valAttr)
      result.getOrAddProperties<WsLoopOp::Properties>().schedule_val = schedule_valAttr;
    if (schedule_modifierAttr)
      result.getOrAddProperties<WsLoopOp::Properties>().schedule_modifier = schedule_modifierAttr;
    if (simd_modifierAttr)
      result.getOrAddProperties<WsLoopOp::Properties>().simd_modifier = simd_modifierAttr;
    if (schedule_chunk_varOperand.has_value())
      schedule_chunk_varOperands.push_back(*schedule_chunk_varOperand);
    if (schedule_chunk_varType)
      schedule_chunk_varTypes.push_back(schedule_chunk_varType);
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("nowait"))) {

  if (nowaitClause) {
    return parser.emitError(parser.getNameLoc())
          << "`nowait` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  nowaitClause = true;
    result.getOrAddProperties<WsLoopOp::Properties>().nowait = parser.getBuilder().getUnitAttr();    } else if (succeeded(parser.parseOptionalKeyword("ordered"))) {

  if (orderedClause) {
    return parser.emitError(parser.getNameLoc())
          << "`ordered` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  orderedClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();

  ::mlir::OptionalParseResult parseResultordered_valAttr =
    parser.parseOptionalAttribute(ordered_valAttr, parser.getBuilder().getIntegerType(64));
  if (parseResultordered_valAttr.has_value() && failed(*parseResultordered_valAttr))
    return ::mlir::failure();
  if (parseResultordered_valAttr.has_value() && succeeded(*parseResultordered_valAttr))
  if (ordered_valAttr) result.getOrAddProperties<WsLoopOp::Properties>().ordered_val = ordered_valAttr;
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("order"))) {

  if (orderClause) {
    return parser.emitError(parser.getNameLoc())
          << "`order` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  orderClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    auto odsResult = parseClauseAttr(parser, order_valAttr);
    if (odsResult) return ::mlir::failure();
    if (order_valAttr)
      result.getOrAddProperties<WsLoopOp::Properties>().order_val = order_valAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else if (succeeded(parser.parseOptionalKeyword("reduction"))) {

  if (reductionClause) {
    return parser.emitError(parser.getNameLoc())
          << "`reduction` clause can appear at most once in the expansion of the "
             "oilist directive";
  }
  reductionClause = true;
  if (parser.parseLParen())
    return ::mlir::failure();
  {
    reduction_varsOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseReductionVarList(parser, reduction_varsOperands, reduction_varsTypes, reductionsAttr);
    if (odsResult) return ::mlir::failure();
    if (reductionsAttr)
      result.getOrAddProperties<WsLoopOp::Properties>().reductions = reductionsAttr;
  }
  if (parser.parseRParen())
    return ::mlir::failure();
    } else  {
    break;
  }
}
  if (parser.parseKeyword("for"))
    return ::mlir::failure();
  {
    lowerBoundOperandsLoc = parser.getCurrentLocation();
    upperBoundOperandsLoc = parser.getCurrentLocation();
    stepOperandsLoc = parser.getCurrentLocation();
    auto odsResult = parseLoopControl(parser, *regionRegion, lowerBoundOperands, upperBoundOperands, stepOperands, stepTypes, inclusiveAttr);
    if (odsResult) return ::mlir::failure();
    if (inclusiveAttr)
      result.getOrAddProperties<WsLoopOp::Properties>().inclusive = inclusiveAttr;
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
  result.addRegion(std::move(regionRegion));
::llvm::copy(::llvm::ArrayRef<int32_t>({static_cast<int32_t>(lowerBoundOperands.size()), static_cast<int32_t>(upperBoundOperands.size()), static_cast<int32_t>(stepOperands.size()), static_cast<int32_t>(linear_varsOperands.size()), static_cast<int32_t>(linear_step_varsOperands.size()), static_cast<int32_t>(reduction_varsOperands.size()), static_cast<int32_t>(schedule_chunk_varOperands.size())}), result.getOrAddProperties<WsLoopOp::Properties>().operandSegmentSizes.begin());
  ::mlir::Type odsBuildableType0 = parser.getBuilder().getIntegerType(32);
  if (parser.resolveOperands(lowerBoundOperands, stepTypes, lowerBoundOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(upperBoundOperands, stepTypes, upperBoundOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(stepOperands, stepTypes, stepOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(linear_varsOperands, linear_varsTypes, linear_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(linear_step_varsOperands, odsBuildableType0, linear_step_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(reduction_varsOperands, reduction_varsTypes, reduction_varsOperandsLoc, result.operands))
    return ::mlir::failure();
  if (parser.resolveOperands(schedule_chunk_varOperands, schedule_chunk_varTypes, schedule_chunk_varOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void WsLoopOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (false || getLinearVars().size() || getLinearStepVars().size()) {
  _odsPrinter << ' ' << "linear";
  _odsPrinter << "(";
  printLinearClause(_odsPrinter, *this, getLinearVars(), getLinearVars().getTypes(), getLinearStepVars());
  _odsPrinter << ")";
  }
  if (false || (getScheduleValAttr()) || (getScheduleModifierAttr()) || (getSimdModifierAttr() && getSimdModifierAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr)) || getScheduleChunkVar()) {
  _odsPrinter << ' ' << "schedule";
  _odsPrinter << "(";
  printScheduleClause(_odsPrinter, *this, getScheduleValAttr(), getScheduleModifierAttr(), getSimdModifierAttr(), getScheduleChunkVar(), (getScheduleChunkVar() ? getScheduleChunkVar().getType() : ::mlir::Type()));
  _odsPrinter << ")";
  }
  if (false || (getNowaitAttr() && getNowaitAttr() != ((false) ? ::mlir::OpBuilder((*this)->getContext()).getUnitAttr() : nullptr))) {
  _odsPrinter << ' ' << "nowait";
  }
  if (false || (getOrderedValAttr())) {
  _odsPrinter << ' ' << "ordered";
  _odsPrinter << "(";
  _odsPrinter.printAttributeWithoutType(getOrderedValAttr());
  _odsPrinter << ")";
  }
  if (false || (getOrderValAttr())) {
  _odsPrinter << ' ' << "order";
  _odsPrinter << "(";
  printClauseAttr(_odsPrinter, *this, getOrderValAttr());
  _odsPrinter << ")";
  }
  if (false || getReductionVars().size() || (getReductionsAttr())) {
  _odsPrinter << ' ' << "reduction";
  _odsPrinter << "(";
  printReductionVarList(_odsPrinter, *this, getReductionVars(), getReductionVars().getTypes(), getReductionsAttr());
  _odsPrinter << ")";
  }
  _odsPrinter << ' ' << "for";
  _odsPrinter << ' ';
  printLoopControl(_odsPrinter, *this, getRegion(), getLowerBound(), getUpperBound(), getStep(), getStep().getTypes(), getInclusiveAttr());
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  elidedAttrs.push_back("operandSegmentSizes");
  elidedAttrs.push_back("schedule_val");
  elidedAttrs.push_back("schedule_modifier");
  elidedAttrs.push_back("simd_modifier");
  elidedAttrs.push_back("nowait");
  elidedAttrs.push_back("ordered_val");
  elidedAttrs.push_back("order_val");
  elidedAttrs.push_back("reductions");
  elidedAttrs.push_back("inclusive");
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getSimdModifierAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("simd_modifier");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getNowaitAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("nowait");
  }
  {
     ::mlir::Builder odsBuilder(getContext());
     ::mlir::Attribute attr = getInclusiveAttr();
     if(attr && (attr == ((false) ? odsBuilder.getUnitAttr() : nullptr)))
       elidedAttrs.push_back("inclusive");
  }
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::WsLoopOp)

namespace mlir {
namespace omp {

//===----------------------------------------------------------------------===//
// ::mlir::omp::YieldOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
YieldOpGenericAdaptorBase::YieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const ::mlir::EmptyProperties &properties, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("omp.yield", odsAttrs.getContext());
}

YieldOpGenericAdaptorBase::YieldOpGenericAdaptorBase(YieldOp op) : YieldOpGenericAdaptorBase(op->getAttrDictionary(), op.getProperties(), op->getRegions()) {}

std::pair<unsigned, unsigned> YieldOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
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

::mlir::DictionaryAttr YieldOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

} // namespace detail
YieldOpAdaptor::YieldOpAdaptor(YieldOp op) : YieldOpGenericAdaptor(op->getOperands(), op) {}

::mlir::LogicalResult YieldOpAdaptor::verify(::mlir::Location loc) {
  return ::mlir::success();
}

std::pair<unsigned, unsigned> YieldOp::getODSOperandIndexAndLength(unsigned index) {
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

::mlir::Operation::operand_range YieldOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Operation::operand_range YieldOp::getResults() {
  return getODSOperands(0);
}

::mlir::MutableOperandRange YieldOp::getResultsMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> YieldOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range YieldOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

void YieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState) {
 build(odsBuilder, odsState, {}); 
}

void YieldOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange results) {
  odsState.addOperands(results);
}

void YieldOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 0u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

::mlir::LogicalResult YieldOp::verifyInvariantsImpl() {
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_OpenMPOps5(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult YieldOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

::mlir::ParseResult YieldOp::parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result) {
  ::llvm::SmallVector<::mlir::OpAsmParser::UnresolvedOperand, 4> resultsOperands;
  ::llvm::SMLoc resultsOperandsLoc;
  (void)resultsOperandsLoc;
  ::llvm::SmallVector<::mlir::Type, 1> resultsTypes;
  if (::mlir::succeeded(parser.parseOptionalLParen())) {

  resultsOperandsLoc = parser.getCurrentLocation();
  if (parser.parseOperandList(resultsOperands))
    return ::mlir::failure();
  if (parser.parseColon())
    return ::mlir::failure();

  if (parser.parseTypeList(resultsTypes))
    return ::mlir::failure();
  if (parser.parseRParen())
    return ::mlir::failure();
  }
  {
    auto loc = parser.getCurrentLocation();(void)loc;
    if (parser.parseOptionalAttrDict(result.attributes))
      return ::mlir::failure();
  }
  if (parser.resolveOperands(resultsOperands, resultsTypes, resultsOperandsLoc, result.operands))
    return ::mlir::failure();
  return ::mlir::success();
}

void YieldOp::print(::mlir::OpAsmPrinter &_odsPrinter) {
  if (!getResults().empty()) {
    _odsPrinter << "(";
    _odsPrinter << getResults();
    _odsPrinter << ' ' << ":";
    _odsPrinter << ' ';
    _odsPrinter << getResults().getTypes();
    _odsPrinter << ")";
  }
  ::llvm::SmallVector<::llvm::StringRef, 2> elidedAttrs;
  _odsPrinter.printOptionalAttrDict((*this)->getAttrs(), elidedAttrs);
}

void YieldOp::getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects) {
}

::mlir::MutableOperandRange YieldOp::getMutableSuccessorOperands(
  ::mlir::RegionBranchPoint point) {
  return ::mlir::MutableOperandRange(*this);
}

} // namespace omp
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::omp::YieldOp)


#endif  // GET_OP_CLASSES

