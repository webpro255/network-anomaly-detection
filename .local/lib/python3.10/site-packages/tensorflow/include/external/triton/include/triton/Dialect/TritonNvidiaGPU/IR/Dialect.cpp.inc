/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: TritonNvidiaGPUDialect.td                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::TritonNvidiaGPUDialect)
namespace mlir {
namespace triton {
namespace nvidia_gpu {

TritonNvidiaGPUDialect::TritonNvidiaGPUDialect(::mlir::MLIRContext *context)
    : ::mlir::Dialect(getDialectNamespace(), context, ::mlir::TypeID::get<TritonNvidiaGPUDialect>()) {
  getContext()->loadDialect<triton::TritonDialect>();
  getContext()->loadDialect<triton::gpu::TritonGPUDialect>();
  getContext()->loadDialect<mlir::gpu::GPUDialect>();
  getContext()->loadDialect<tensor::TensorDialect>();
  initialize();
}

TritonNvidiaGPUDialect::~TritonNvidiaGPUDialect() = default;

} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
