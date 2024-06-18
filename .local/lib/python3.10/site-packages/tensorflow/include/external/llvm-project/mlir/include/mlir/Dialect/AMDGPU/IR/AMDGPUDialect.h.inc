/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: AMDGPU.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace amdgpu {

class AMDGPUDialect : public ::mlir::Dialect {
  explicit AMDGPUDialect(::mlir::MLIRContext *context);

  void initialize();
  friend class ::mlir::MLIRContext;
public:
  ~AMDGPUDialect() override;
  static constexpr ::llvm::StringLiteral getDialectNamespace() {
    return ::llvm::StringLiteral("amdgpu");
  }

  /// Parse an attribute registered to this dialect.
  ::mlir::Attribute parseAttribute(::mlir::DialectAsmParser &parser,
                                   ::mlir::Type type) const override;

  /// Print an attribute registered to this dialect.
  void printAttribute(::mlir::Attribute attr,
                      ::mlir::DialectAsmPrinter &os) const override;

    /// Return true if the given MemRefType has an integer address
    /// space that matches the ROCDL shared memory address space or
    /// is a gpu::AddressSpaceAttr attribute with value 'workgroup`.
    static bool hasSharedMemoryAddressSpace(MemRefType type);

    /// Return true if the given Attribute has an integer address
    /// space that matches the ROCDL shared memory address space or
    /// is a gpu::AddressSpaceAttr attribute with value 'workgroup`.
    static bool isSharedMemoryAddressSpace(Attribute type);

    /// Defines the MemRef memory space attribute numeric value that indicates
    /// a memref is located in shared memory. This should correspond to the
    /// value used in ROCDL.
    static constexpr unsigned kSharedMemoryAddressSpace = 3;
  };
} // namespace amdgpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::amdgpu::AMDGPUDialect)
