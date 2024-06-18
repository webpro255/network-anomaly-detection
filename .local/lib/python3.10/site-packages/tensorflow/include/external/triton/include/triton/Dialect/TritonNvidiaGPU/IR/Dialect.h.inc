/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: TritonNvidiaGPUDialect.td                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace triton {
namespace nvidia_gpu {

class TritonNvidiaGPUDialect : public ::mlir::Dialect {
  explicit TritonNvidiaGPUDialect(::mlir::MLIRContext *context);

  void initialize();
  friend class ::mlir::MLIRContext;
public:
  ~TritonNvidiaGPUDialect() override;
  static constexpr ::llvm::StringLiteral getDialectNamespace() {
    return ::llvm::StringLiteral("triton_nvidia_gpu");
  }

  /// Parse a type registered to this dialect.
  ::mlir::Type parseType(::mlir::DialectAsmParser &parser) const override;

  /// Print a type registered to this dialect.
  void printType(::mlir::Type type,
                 ::mlir::DialectAsmPrinter &os) const override;

    /// Provides a hook for verifying dialect attributes attached to the given
    /// op.
    ::mlir::LogicalResult verifyOperationAttribute(
        ::mlir::Operation *op, ::mlir::NamedAttribute attribute) override;

    static std::string getNumWarpsAttrName() { return "triton_gpu.num-warps"; }
    static int getNumWarps(ModuleOp mod) {
      if(!mod->hasAttr("triton_gpu.num-warps"))
        llvm::report_fatal_error(
            "TritonGPU module should contain a triton_gpu.num-warps attribute");
      return mod->getAttr("triton_gpu.num-warps").cast<IntegerAttr>().getInt();
    }
    static int getNumCTAs(ModuleOp mod) {
      if(!mod->hasAttr("triton_gpu.num-ctas"))
        llvm::report_fatal_error(
            "TritonGPU module should contain a triton_gpu.num-ctas attribute");
      return mod->getAttr("triton_gpu.num-ctas").cast<IntegerAttr>().getInt();
    }
    static int getComputeCapability(ModuleOp mod) {
      if(!mod->hasAttr("triton_gpu.compute-capability"))
        llvm::report_fatal_error(
            "TritonGPU module should contain a triton_gpu.compute-capability attribute");
      return mod->getAttrOfType<IntegerAttr>("triton_gpu.compute-capability").getInt();
    }
    void registerTypes();

    // Warp specialization related:
    static std::string getWSSupportedAttrName() { return "triton_gpu.enable-warp-specialization"; }
    static int getWSSupportedAttr(ModuleOp mod) {
      auto name = getWSSupportedAttrName();
      if (!mod->hasAttr(name)) return 0;
      return mod->getAttrOfType<IntegerAttr>(name).getInt();
    }
  };
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::TritonNvidiaGPUDialect)
