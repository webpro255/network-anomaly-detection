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
namespace omp {
class DataBoundsType;
class DataBoundsType : public ::mlir::Type::TypeBase<DataBoundsType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "omp.data_bounds_ty";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"data_bounds_ty"};
  }

};
} // namespace omp
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::omp::DataBoundsType)

#endif  // GET_TYPEDEF_CLASSES

