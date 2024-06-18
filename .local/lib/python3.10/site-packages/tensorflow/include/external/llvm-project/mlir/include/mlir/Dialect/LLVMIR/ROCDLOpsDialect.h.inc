/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ROCDLOps.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace ROCDL {

class ROCDLDialect : public ::mlir::Dialect {
  explicit ROCDLDialect(::mlir::MLIRContext *context);

  void initialize();
  friend class ::mlir::MLIRContext;
public:
  ~ROCDLDialect() override;
  static constexpr ::llvm::StringLiteral getDialectNamespace() {
    return ::llvm::StringLiteral("rocdl");
  }

  /// Parse an attribute registered to this dialect.
  ::mlir::Attribute parseAttribute(::mlir::DialectAsmParser &parser,
                                   ::mlir::Type type) const override;

  /// Print an attribute registered to this dialect.
  void printAttribute(::mlir::Attribute attr,
                      ::mlir::DialectAsmPrinter &os) const override;

    /// Provides a hook for verifying dialect attributes attached to the given
    /// op.
    ::mlir::LogicalResult verifyOperationAttribute(
        ::mlir::Operation *op, ::mlir::NamedAttribute attribute) override;

    /// Get the name of the attribute used to annotate external kernel
    /// functions.
    static StringRef getKernelFuncAttrName() { return "rocdl.kernel"; }
    static constexpr ::llvm::StringLiteral getFlatWorkGroupSizeAttrName() {
      return ::llvm::StringLiteral("rocdl.flat_work_group_size");
    }
    static constexpr ::llvm::StringLiteral getReqdWorkGroupSizeAttrName() {
      return ::llvm::StringLiteral("rocdl.reqd_work_group_size");
    }

    /// The address space value that represents global memory.
    static constexpr unsigned kGlobalMemoryAddressSpace = 1;
    /// The address space value that represents shared memory.
    static constexpr unsigned kSharedMemoryAddressSpace = 3;
    /// The address space value that represents private memory.
    static constexpr unsigned kPrivateMemoryAddressSpace = 5;
  };
} // namespace ROCDL
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::ROCDL::ROCDLDialect)
