/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: AMDGPU.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::amdgpu::AMDGPUDialect)
namespace mlir {
namespace amdgpu {

AMDGPUDialect::AMDGPUDialect(::mlir::MLIRContext *context)
    : ::mlir::Dialect(getDialectNamespace(), context, ::mlir::TypeID::get<AMDGPUDialect>()) {
  getContext()->loadDialect<arith::ArithDialect>();
  getContext()->loadDialect<gpu::GPUDialect>();
  initialize();
}

AMDGPUDialect::~AMDGPUDialect() = default;

} // namespace amdgpu
} // namespace mlir
