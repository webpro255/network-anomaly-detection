/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: VCIXOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace vcix {

class VCIXDialect : public ::mlir::Dialect {
  explicit VCIXDialect(::mlir::MLIRContext *context);

  void initialize();
  friend class ::mlir::MLIRContext;
public:
  ~VCIXDialect() override;
  static constexpr ::llvm::StringLiteral getDialectNamespace() {
    return ::llvm::StringLiteral("vcix");
  }
};
} // namespace vcix
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::vcix::VCIXDialect)
