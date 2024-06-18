/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: TritonGPUDialect.td                                                  *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::TritonGPUDialect)
namespace mlir {
namespace triton {
namespace gpu {

TritonGPUDialect::TritonGPUDialect(::mlir::MLIRContext *context)
    : ::mlir::Dialect(getDialectNamespace(), context, ::mlir::TypeID::get<TritonGPUDialect>()) {
  getContext()->loadDialect<triton::TritonDialect>();
  getContext()->loadDialect<mlir::gpu::GPUDialect>();
  getContext()->loadDialect<tensor::TensorDialect>();
  initialize();
}

TritonGPUDialect::~TritonGPUDialect() = default;

} // namespace gpu
} // namespace triton
} // namespace mlir
