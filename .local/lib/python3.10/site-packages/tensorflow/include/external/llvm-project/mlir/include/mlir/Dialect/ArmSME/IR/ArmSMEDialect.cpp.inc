/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ArmSME.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::ArmSMEDialect)
namespace mlir {
namespace arm_sme {

ArmSMEDialect::ArmSMEDialect(::mlir::MLIRContext *context)
    : ::mlir::Dialect(getDialectNamespace(), context, ::mlir::TypeID::get<ArmSMEDialect>()) {
  getContext()->loadDialect<scf::SCFDialect>();
  getContext()->loadDialect<vector::VectorDialect>();
  getContext()->loadDialect<memref::MemRefDialect>();
  initialize();
}

ArmSMEDialect::~ArmSMEDialect() = default;

} // namespace arm_sme
} // namespace mlir
