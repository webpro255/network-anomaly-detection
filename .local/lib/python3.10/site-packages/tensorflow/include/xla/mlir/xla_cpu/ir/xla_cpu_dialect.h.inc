/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: xla_cpu_dialect.td                                                   *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace xla_cpu {

class XlaCpuDialect : public ::mlir::Dialect {
  explicit XlaCpuDialect(::mlir::MLIRContext *context);

  void initialize();
  friend class ::mlir::MLIRContext;
public:
  ~XlaCpuDialect() override;
  static constexpr ::llvm::StringLiteral getDialectNamespace() {
    return ::llvm::StringLiteral("xla_cpu");
  }
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::XlaCpuDialect)
