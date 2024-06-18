/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* TypeDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_TYPEDEF_LIST
#undef GET_TYPEDEF_LIST

::mlir::triton::gpu::TokenType

#endif  // GET_TYPEDEF_LIST

#ifdef GET_TYPEDEF_CLASSES
#undef GET_TYPEDEF_CLASSES

static ::mlir::OptionalParseResult generatedTypeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::mlir::triton::gpu::TokenType::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::triton::gpu::TokenType::parse(parser);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::mlir::LogicalResult generatedTypePrinter(::mlir::Type def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Type, ::mlir::LogicalResult>(def)    .Case<::mlir::triton::gpu::TokenType>([&](auto t) {
      printer << ::mlir::triton::gpu::TokenType::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace mlir {
namespace triton {
namespace gpu {
namespace detail {
struct TokenTypeStorage : public ::mlir::TypeStorage {
  using KeyTy = std::tuple<int32_t>;
  TokenTypeStorage(int32_t type) : type(std::move(type)) {}

  KeyTy getAsKey() const {
    return KeyTy(type);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (type == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static TokenTypeStorage *construct(::mlir::TypeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto type = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<TokenTypeStorage>()) TokenTypeStorage(std::move(type));
  }

  int32_t type;
};
} // namespace detail
TokenType TokenType::get(::mlir::MLIRContext *context, unsigned type) {
  return Base::get(context, type);
}

int32_t TokenType::getType() const {
  return getImpl()->type;
}

} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::TokenType)

#endif  // GET_TYPEDEF_CLASSES

