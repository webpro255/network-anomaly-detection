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
class PointerType;
namespace detail {
struct PointerTypeStorage;
} // namespace detail
class PointerType : public ::mlir::Type::TypeBase<PointerType, ::mlir::Type, detail::PointerTypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "tt.ptr";
  static PointerType get(Type pointeeType, int addressSpace);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"ptr"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  Type getPointeeType() const;
  int getAddressSpace() const;
};
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::PointerType)

#endif  // GET_TYPEDEF_CLASSES

