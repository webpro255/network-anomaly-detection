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
namespace xla {
namespace runtime {
class ExecutionContextType;
class StatusType;
class OpaqueType;
class ExecutionContextType : public ::mlir::Type::TypeBase<ExecutionContextType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "rt.execution_context";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"execution_context"};
  }

};
class StatusType : public ::mlir::Type::TypeBase<StatusType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "rt.status";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"status"};
  }

};
class OpaqueType : public ::mlir::Type::TypeBase<OpaqueType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "rt.opaque";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"opaque"};
  }

};
} // namespace runtime
} // namespace xla
MLIR_DECLARE_EXPLICIT_TYPE_ID(::xla::runtime::ExecutionContextType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::xla::runtime::StatusType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::xla::runtime::OpaqueType)

#endif  // GET_TYPEDEF_CLASSES

