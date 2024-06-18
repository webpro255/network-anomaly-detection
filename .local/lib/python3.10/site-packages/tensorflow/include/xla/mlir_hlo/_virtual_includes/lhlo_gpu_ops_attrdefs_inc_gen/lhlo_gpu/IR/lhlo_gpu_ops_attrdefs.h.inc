/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES


namespace mlir {
class AsmParser;
class AsmPrinter;
} // namespace mlir
namespace mlir {
namespace lmhlo_gpu {
class ActivationAttr;
class ConvolutionBackendConfigAttr;
class CublasLtMatmulEpilogueAttr;
class NormAlgorithmConfigAttr;
class FusedMHAAlgorithmConfigAttr;
class FusedMhaDagSignatureAttr;
class FusedMhaBackwardDagSignatureAttr;
namespace detail {
struct ActivationAttrStorage;
} // namespace detail
class ActivationAttr : public ::mlir::Attribute::AttrBase<ActivationAttr, ::mlir::Attribute, detail::ActivationAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "lmhlo_gpu.activation";
  static ActivationAttr get(::mlir::MLIRContext *context, ::mlir::lmhlo_gpu::Activation value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"activation"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::lmhlo_gpu::Activation getValue() const;
};
namespace detail {
struct ConvolutionBackendConfigAttrStorage;
} // namespace detail
class ConvolutionBackendConfigAttr : public ::mlir::Attribute::AttrBase<ConvolutionBackendConfigAttr, ::mlir::Attribute, detail::ConvolutionBackendConfigAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "lmhlo_gpu.convolution_backend_config";
  static ConvolutionBackendConfigAttr get(::mlir::MLIRContext *context, int64_t algorithm, bool tensor_ops_enabled, ::llvm::ArrayRef<int64_t> knob_ids, ::llvm::ArrayRef<int64_t> knob_values, bool is_cudnn_frontend, bool is_cudnn_reordered_int8, int64_t workspace_size, ::llvm::ArrayRef<int64_t> operand_0_layout, ::llvm::ArrayRef<int64_t> operand_1_layout, ::llvm::ArrayRef<int64_t> result_layout);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"convolution_backend_config"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  int64_t getAlgorithm() const;
  bool getTensorOpsEnabled() const;
  ::llvm::ArrayRef<int64_t> getKnobIds() const;
  ::llvm::ArrayRef<int64_t> getKnobValues() const;
  bool getIsCudnnFrontend() const;
  bool getIsCudnnReorderedInt8() const;
  int64_t getWorkspaceSize() const;
  ::llvm::ArrayRef<int64_t> getOperand_0Layout() const;
  ::llvm::ArrayRef<int64_t> getOperand_1Layout() const;
  ::llvm::ArrayRef<int64_t> getResultLayout() const;
};
namespace detail {
struct CublasLtMatmulEpilogueAttrStorage;
} // namespace detail
class CublasLtMatmulEpilogueAttr : public ::mlir::Attribute::AttrBase<CublasLtMatmulEpilogueAttr, ::mlir::Attribute, detail::CublasLtMatmulEpilogueAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "lmhlo_gpu.epilogue";
  static CublasLtMatmulEpilogueAttr get(::mlir::MLIRContext *context, ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"epilogue"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue getValue() const;
};
namespace detail {
struct NormAlgorithmConfigAttrStorage;
} // namespace detail
class NormAlgorithmConfigAttr : public ::mlir::Attribute::AttrBase<NormAlgorithmConfigAttr, ::mlir::Attribute, detail::NormAlgorithmConfigAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "lmhlo_gpu.norm_algorithm_config";
  static NormAlgorithmConfigAttr get(::mlir::MLIRContext *context, int64_t algorithm, int64_t workspace_size);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"norm_algorithm_config"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  int64_t getAlgorithm() const;
  int64_t getWorkspaceSize() const;
};
namespace detail {
struct FusedMHAAlgorithmConfigAttrStorage;
} // namespace detail
class FusedMHAAlgorithmConfigAttr : public ::mlir::Attribute::AttrBase<FusedMHAAlgorithmConfigAttr, ::mlir::Attribute, detail::FusedMHAAlgorithmConfigAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "lmhlo_gpu.fHMA_algorithm_config";
  static FusedMHAAlgorithmConfigAttr get(::mlir::MLIRContext *context, int64_t algorithm, ::llvm::ArrayRef<int64_t> knob_ids, ::llvm::ArrayRef<int64_t> knob_values, int64_t workspace_size);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"fHMA_algorithm_config"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  int64_t getAlgorithm() const;
  ::llvm::ArrayRef<int64_t> getKnobIds() const;
  ::llvm::ArrayRef<int64_t> getKnobValues() const;
  int64_t getWorkspaceSize() const;
};
namespace detail {
struct FusedMhaDagSignatureAttrStorage;
} // namespace detail
class FusedMhaDagSignatureAttr : public ::mlir::Attribute::AttrBase<FusedMhaDagSignatureAttr, ::mlir::Attribute, detail::FusedMhaDagSignatureAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "lmhlo_gpu.fused_mha_dag";
  static FusedMhaDagSignatureAttr get(::mlir::MLIRContext *context, ::mlir::lmhlo_gpu::FusedMhaDagSignature value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"fused_mha_dag"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::lmhlo_gpu::FusedMhaDagSignature getValue() const;
};
namespace detail {
struct FusedMhaBackwardDagSignatureAttrStorage;
} // namespace detail
class FusedMhaBackwardDagSignatureAttr : public ::mlir::Attribute::AttrBase<FusedMhaBackwardDagSignatureAttr, ::mlir::Attribute, detail::FusedMhaBackwardDagSignatureAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "lmhlo_gpu.fused_mha_backward_dag";
  static FusedMhaBackwardDagSignatureAttr get(::mlir::MLIRContext *context, ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"fused_mha_backward_dag"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature getValue() const;
};
} // namespace lmhlo_gpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::ActivationAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::ConvolutionBackendConfigAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::CublasLtMatmulEpilogueAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::NormAlgorithmConfigAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::FusedMHAAlgorithmConfigAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::FusedMhaDagSignatureAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::lmhlo_gpu::FusedMhaBackwardDagSignatureAttr)

#endif  // GET_ATTRDEF_CLASSES

