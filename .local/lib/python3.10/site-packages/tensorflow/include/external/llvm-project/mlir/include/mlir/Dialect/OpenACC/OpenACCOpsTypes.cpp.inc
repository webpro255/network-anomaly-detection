/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* TypeDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_TYPEDEF_LIST
#undef GET_TYPEDEF_LIST

::mlir::acc::DataBoundsType,
::mlir::acc::DeclareTokenType

#endif  // GET_TYPEDEF_LIST

#ifdef GET_TYPEDEF_CLASSES
#undef GET_TYPEDEF_CLASSES

static ::mlir::OptionalParseResult generatedTypeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::mlir::acc::DataBoundsType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::DataBoundsType::get(parser.getContext());
      return ::mlir::success(!!value);
    })
    .Case(::mlir::acc::DeclareTokenType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::DeclareTokenType::get(parser.getContext());
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::mlir::LogicalResult generatedTypePrinter(::mlir::Type def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Type, ::mlir::LogicalResult>(def)    .Case<::mlir::acc::DataBoundsType>([&](auto t) {
      printer << ::mlir::acc::DataBoundsType::getMnemonic();
      return ::mlir::success();
    })
    .Case<::mlir::acc::DeclareTokenType>([&](auto t) {
      printer << ::mlir::acc::DeclareTokenType::getMnemonic();
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace mlir {
namespace acc {
} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::DataBoundsType)
namespace mlir {
namespace acc {
} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::DeclareTokenType)
namespace mlir {
namespace acc {

/// Parse a type registered to this dialect.
::mlir::Type OpenACCDialect::parseType(::mlir::DialectAsmParser &parser) const {
  ::llvm::SMLoc typeLoc = parser.getCurrentLocation();
  ::llvm::StringRef mnemonic;
  ::mlir::Type genType;
  auto parseResult = generatedTypeParser(parser, &mnemonic, genType);
  if (parseResult.has_value())
    return genType;
  
  parser.emitError(typeLoc) << "unknown  type `"
      << mnemonic << "` in dialect `" << getNamespace() << "`";
  return {};
}
/// Print a type registered to this dialect.
void OpenACCDialect::printType(::mlir::Type type,
                    ::mlir::DialectAsmPrinter &printer) const {
  if (::mlir::succeeded(generatedTypePrinter(type, printer)))
    return;
  
}
} // namespace acc
} // namespace mlir

#endif  // GET_TYPEDEF_CLASSES

