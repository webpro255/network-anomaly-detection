/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: VCIXOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::vcix::VCIXDialect)
namespace mlir {
namespace vcix {

VCIXDialect::VCIXDialect(::mlir::MLIRContext *context)
    : ::mlir::Dialect(getDialectNamespace(), context, ::mlir::TypeID::get<VCIXDialect>()) {
  getContext()->loadDialect<LLVM::LLVMDialect>();
  initialize();
}

VCIXDialect::~VCIXDialect() = default;

} // namespace vcix
} // namespace mlir
