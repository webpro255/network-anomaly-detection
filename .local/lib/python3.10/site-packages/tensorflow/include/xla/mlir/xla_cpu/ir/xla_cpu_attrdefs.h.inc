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
namespace xla_cpu {
class ReductionKindAttr;
namespace detail {
struct ReductionKindAttrStorage;
} // namespace detail
class ReductionKindAttr : public ::mlir::Attribute::AttrBase<ReductionKindAttr, ::mlir::Attribute, detail::ReductionKindAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "xla_cpu.reduction_kind";
  static ReductionKindAttr get(::mlir::MLIRContext *context, ::mlir::xla_cpu::ReductionKind value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"reduction_kind"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::xla_cpu::ReductionKind getValue() const;
};
} // namespace xla_cpu
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::xla_cpu::ReductionKindAttr)

#endif  // GET_ATTRDEF_CLASSES

