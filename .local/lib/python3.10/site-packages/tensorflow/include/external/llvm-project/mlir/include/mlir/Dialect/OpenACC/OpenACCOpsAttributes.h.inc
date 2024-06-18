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
namespace acc {
class ClauseDefaultValueAttr;
class ReductionOperatorAttr;
class DataClauseAttr;
class DeclareAttr;
class DeclareActionAttr;
class DeviceTypeAttr;
class GangArgTypeAttr;
class RoutineInfoAttr;
namespace detail {
struct ClauseDefaultValueAttrStorage;
} // namespace detail
class ClauseDefaultValueAttr : public ::mlir::Attribute::AttrBase<ClauseDefaultValueAttr, ::mlir::Attribute, detail::ClauseDefaultValueAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "acc.defaultvalue";
  static ClauseDefaultValueAttr get(::mlir::MLIRContext *context, ::mlir::acc::ClauseDefaultValue value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"defaultvalue"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::acc::ClauseDefaultValue getValue() const;
};
namespace detail {
struct ReductionOperatorAttrStorage;
} // namespace detail
class ReductionOperatorAttr : public ::mlir::Attribute::AttrBase<ReductionOperatorAttr, ::mlir::Attribute, detail::ReductionOperatorAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "acc.reduction_operator";
  static ReductionOperatorAttr get(::mlir::MLIRContext *context, ::mlir::acc::ReductionOperator value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"reduction_operator"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::acc::ReductionOperator getValue() const;
};
namespace detail {
struct DataClauseAttrStorage;
} // namespace detail
class DataClauseAttr : public ::mlir::Attribute::AttrBase<DataClauseAttr, ::mlir::Attribute, detail::DataClauseAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "acc.data_clause";
  static DataClauseAttr get(::mlir::MLIRContext *context, ::mlir::acc::DataClause value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"data_clause"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::acc::DataClause getValue() const;
};
namespace detail {
struct DeclareAttrStorage;
} // namespace detail
class DeclareAttr : public ::mlir::Attribute::AttrBase<DeclareAttr, ::mlir::Attribute, detail::DeclareAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "acc.declare";
  static DeclareAttr get(::mlir::MLIRContext *context, DataClauseAttr dataClause, bool implicit);
  static DeclareAttr get(::mlir::MLIRContext *context, DataClauseAttr dataClause);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"declare"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  DataClauseAttr getDataClause() const;
  bool getImplicit() const;
};
namespace detail {
struct DeclareActionAttrStorage;
} // namespace detail
class DeclareActionAttr : public ::mlir::Attribute::AttrBase<DeclareActionAttr, ::mlir::Attribute, detail::DeclareActionAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "acc.declare_action";
  static DeclareActionAttr get(::mlir::MLIRContext *context, SymbolRefAttr preAlloc, SymbolRefAttr postAlloc, SymbolRefAttr preDealloc, SymbolRefAttr postDealloc);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"declare_action"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  SymbolRefAttr getPreAlloc() const;
  SymbolRefAttr getPostAlloc() const;
  SymbolRefAttr getPreDealloc() const;
  SymbolRefAttr getPostDealloc() const;
};
namespace detail {
struct DeviceTypeAttrStorage;
} // namespace detail
class DeviceTypeAttr : public ::mlir::Attribute::AttrBase<DeviceTypeAttr, ::mlir::Attribute, detail::DeviceTypeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "acc.device_type";
  static DeviceTypeAttr get(::mlir::MLIRContext *context, ::mlir::acc::DeviceType value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"device_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::acc::DeviceType getValue() const;
};
namespace detail {
struct GangArgTypeAttrStorage;
} // namespace detail
class GangArgTypeAttr : public ::mlir::Attribute::AttrBase<GangArgTypeAttr, ::mlir::Attribute, detail::GangArgTypeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "acc.gang_arg_type";
  static GangArgTypeAttr get(::mlir::MLIRContext *context, ::mlir::acc::GangArgType value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"gang_arg_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::acc::GangArgType getValue() const;
};
namespace detail {
struct RoutineInfoAttrStorage;
} // namespace detail
class RoutineInfoAttr : public ::mlir::Attribute::AttrBase<RoutineInfoAttr, ::mlir::Attribute, detail::RoutineInfoAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "acc.routine_info";
  static RoutineInfoAttr get(::mlir::MLIRContext *context, ::llvm::ArrayRef<SymbolRefAttr> accRoutines);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"routine_info"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::llvm::ArrayRef<SymbolRefAttr> getAccRoutines() const;
};
} // namespace acc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::ClauseDefaultValueAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::ReductionOperatorAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::DataClauseAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::DeclareAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::DeclareActionAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::DeviceTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::GangArgTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::RoutineInfoAttr)

#endif  // GET_ATTRDEF_CLASSES

