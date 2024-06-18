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
namespace async {
class TokenType;
class ValueType;
class GroupType;
class CoroIdType;
class CoroHandleType;
class CoroStateType;
class TokenType : public ::mlir::Type::TypeBase<TokenType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "async.token";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"token"};
  }

};
namespace detail {
struct ValueTypeStorage;
} // namespace detail
class ValueType : public ::mlir::Type::TypeBase<ValueType, ::mlir::Type, detail::ValueTypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "async.value";
  static ValueType get(Type valueType);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"value"};
  }

  static ::mlir::Type parse(::mlir::AsmParser &odsParser);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  Type getValueType() const;
};
class GroupType : public ::mlir::Type::TypeBase<GroupType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "async.group";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"group"};
  }

};
class CoroIdType : public ::mlir::Type::TypeBase<CoroIdType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "async.coro.id";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"coro.id"};
  }

};
class CoroHandleType : public ::mlir::Type::TypeBase<CoroHandleType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "async.coro.handle";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"coro.handle"};
  }

};
class CoroStateType : public ::mlir::Type::TypeBase<CoroStateType, ::mlir::Type, ::mlir::TypeStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "async.coro.state";
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"coro.state"};
  }

};
} // namespace async
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::async::TokenType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::async::ValueType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::async::GroupType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::async::CoroIdType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::async::CoroHandleType)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::async::CoroStateType)

#endif  // GET_TYPEDEF_CLASSES

