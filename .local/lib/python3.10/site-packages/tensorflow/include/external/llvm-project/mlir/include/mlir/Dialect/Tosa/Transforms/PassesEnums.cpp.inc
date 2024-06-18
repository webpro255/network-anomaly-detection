/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: Passes.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace tosa {
::llvm::StringRef stringifyTosaLevelEnum(TosaLevelEnum val) {
  switch (val) {
    case TosaLevelEnum::None: return "none";
    case TosaLevelEnum::EightK: return "8k";
  }
  return "";
}

::std::optional<TosaLevelEnum> symbolizeTosaLevelEnum(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<TosaLevelEnum>>(str)
      .Case("none", TosaLevelEnum::None)
      .Case("8k", TosaLevelEnum::EightK)
      .Default(::std::nullopt);
}
::std::optional<TosaLevelEnum> symbolizeTosaLevelEnum(uint32_t value) {
  switch (value) {
  case 0: return TosaLevelEnum::None;
  case 1: return TosaLevelEnum::EightK;
  default: return ::std::nullopt;
  }
}

bool TosaLevelEnumAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)));
}
TosaLevelEnumAttr TosaLevelEnumAttr::get(::mlir::MLIRContext *context, TosaLevelEnum val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<TosaLevelEnumAttr>(baseAttr);
}
TosaLevelEnum TosaLevelEnumAttr::getValue() const {
  return static_cast<TosaLevelEnum>(::mlir::IntegerAttr::getInt());
}
} // namespace tosa
} // namespace mlir

namespace mlir {
namespace tosa {
::llvm::StringRef stringifyTosaProfileEnum(TosaProfileEnum val) {
  switch (val) {
    case TosaProfileEnum::BaseInference: return "bi";
    case TosaProfileEnum::MainInference: return "mi";
    case TosaProfileEnum::MainTraining: return "mt";
    case TosaProfileEnum::Undefined: return "Undefined";
  }
  return "";
}

::std::optional<TosaProfileEnum> symbolizeTosaProfileEnum(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<TosaProfileEnum>>(str)
      .Case("bi", TosaProfileEnum::BaseInference)
      .Case("mi", TosaProfileEnum::MainInference)
      .Case("mt", TosaProfileEnum::MainTraining)
      .Case("Undefined", TosaProfileEnum::Undefined)
      .Default(::std::nullopt);
}
::std::optional<TosaProfileEnum> symbolizeTosaProfileEnum(uint32_t value) {
  switch (value) {
  case 0: return TosaProfileEnum::BaseInference;
  case 1: return TosaProfileEnum::MainInference;
  case 2: return TosaProfileEnum::MainTraining;
  case 3: return TosaProfileEnum::Undefined;
  default: return ::std::nullopt;
  }
}

bool TosaProfileEnumAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 3)));
}
TosaProfileEnumAttr TosaProfileEnumAttr::get(::mlir::MLIRContext *context, TosaProfileEnum val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<TosaProfileEnumAttr>(baseAttr);
}
TosaProfileEnum TosaProfileEnumAttr::getValue() const {
  return static_cast<TosaProfileEnum>(::mlir::IntegerAttr::getInt());
}
} // namespace tosa
} // namespace mlir

