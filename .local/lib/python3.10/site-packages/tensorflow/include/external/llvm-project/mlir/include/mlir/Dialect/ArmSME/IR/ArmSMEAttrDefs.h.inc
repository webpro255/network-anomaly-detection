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
namespace arm_sme {
class TileSliceLayoutAttr;
class CombiningKindAttr;
class TypeSizeAttr;
namespace detail {
struct TileSliceLayoutAttrStorage;
} // namespace detail
class TileSliceLayoutAttr : public ::mlir::Attribute::AttrBase<TileSliceLayoutAttr, ::mlir::Attribute, detail::TileSliceLayoutAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "arm_sme.layout";
  static TileSliceLayoutAttr get(::mlir::MLIRContext *context, ::mlir::arm_sme::TileSliceLayout value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"layout"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::arm_sme::TileSliceLayout getValue() const;
};
namespace detail {
struct CombiningKindAttrStorage;
} // namespace detail
class CombiningKindAttr : public ::mlir::Attribute::AttrBase<CombiningKindAttr, ::mlir::Attribute, detail::CombiningKindAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "arm_sme.kind";
  static CombiningKindAttr get(::mlir::MLIRContext *context, ::mlir::arm_sme::CombiningKind value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"kind"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::arm_sme::CombiningKind getValue() const;
};
namespace detail {
struct TypeSizeAttrStorage;
} // namespace detail
class TypeSizeAttr : public ::mlir::Attribute::AttrBase<TypeSizeAttr, ::mlir::Attribute, detail::TypeSizeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "arm_sme.type_size";
  static TypeSizeAttr get(::mlir::MLIRContext *context, ::mlir::arm_sme::TypeSize value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"type_size"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::arm_sme::TypeSize getValue() const;
};
} // namespace arm_sme
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::TileSliceLayoutAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::CombiningKindAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::arm_sme::TypeSizeAttr)

#endif  // GET_ATTRDEF_CLASSES

