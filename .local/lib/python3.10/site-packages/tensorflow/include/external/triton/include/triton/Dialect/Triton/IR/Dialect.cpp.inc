/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: TritonDialect.td                                                     *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::TritonDialect)
namespace mlir {
namespace triton {

TritonDialect::TritonDialect(::mlir::MLIRContext *context)
    : ::mlir::Dialect(getDialectNamespace(), context, ::mlir::TypeID::get<TritonDialect>()) {
  getContext()->loadDialect<arith::ArithDialect>();
  getContext()->loadDialect<math::MathDialect>();
  getContext()->loadDialect<scf::SCFDialect>();
  getContext()->loadDialect<cf::ControlFlowDialect>();
  initialize();
}

TritonDialect::~TritonDialect() = default;

} // namespace triton
} // namespace mlir
