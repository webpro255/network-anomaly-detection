/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* TypeDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_TYPEDEF_CLASSES
#undef GET_TYPEDEF_CLASSES


namespace mlir {
class AsmParser;
class AsmPrinter;
} // namespace mlir
namespace mlir {
namespace triton {
namespace nvidia_gpu {
class TokenType;
class MutexType;
class TokenType : public ::mlir::Type::TypeBase<TokenType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "triton_nvidia_gpu.token";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"token"};
  }

};
class MutexType : public ::mlir::Type::TypeBase<MutexType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "triton_nvidia_gpu.mutex";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"mutex"};
  }

};
} // namespace nvidia_gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::TokenType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::nvidia_gpu::MutexType)

#endif  // GET_TYPEDEF_CLASSES

