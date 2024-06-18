/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: ArmSMEOps.td                                                         *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace arm_sme {
::llvm::StringRef stringifyArmSMETileType(ArmSMETileType val) {
  switch (val) {
    case ArmSMETileType::ZAB: return "za.b";
    case ArmSMETileType::ZAH: return "za.h";
    case ArmSMETileType::ZAS: return "za.s";
    case ArmSMETileType::ZAD: return "za.d";
    case ArmSMETileType::ZAQ: return "za.q";
  }
  return "";
}

::std::optional<ArmSMETileType> symbolizeArmSMETileType(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<ArmSMETileType>>(str)
      .Case("za.b", ArmSMETileType::ZAB)
      .Case("za.h", ArmSMETileType::ZAH)
      .Case("za.s", ArmSMETileType::ZAS)
      .Case("za.d", ArmSMETileType::ZAD)
      .Case("za.q", ArmSMETileType::ZAQ)
      .Default(::std::nullopt);
}
::std::optional<ArmSMETileType> symbolizeArmSMETileType(uint32_t value) {
  switch (value) {
  case 0: return ArmSMETileType::ZAB;
  case 1: return ArmSMETileType::ZAH;
  case 2: return ArmSMETileType::ZAS;
  case 3: return ArmSMETileType::ZAD;
  case 4: return ArmSMETileType::ZAQ;
  default: return ::std::nullopt;
  }
}

} // namespace arm_sme
} // namespace mlir

namespace mlir {
namespace arm_sme {
::llvm::StringRef stringifyCombiningKind(CombiningKind val) {
  switch (val) {
    case CombiningKind::Add: return "add";
    case CombiningKind::Sub: return "sub";
  }
  return "";
}

::std::optional<CombiningKind> symbolizeCombiningKind(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<CombiningKind>>(str)
      .Case("add", CombiningKind::Add)
      .Case("sub", CombiningKind::Sub)
      .Default(::std::nullopt);
}
::std::optional<CombiningKind> symbolizeCombiningKind(uint32_t value) {
  switch (value) {
  case 0: return CombiningKind::Add;
  case 1: return CombiningKind::Sub;
  default: return ::std::nullopt;
  }
}

} // namespace arm_sme
} // namespace mlir

namespace mlir {
namespace arm_sme {
::llvm::StringRef stringifyTileSliceLayout(TileSliceLayout val) {
  switch (val) {
    case TileSliceLayout::Horizontal: return "horizontal";
    case TileSliceLayout::Vertical: return "vertical";
  }
  return "";
}

::std::optional<TileSliceLayout> symbolizeTileSliceLayout(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<TileSliceLayout>>(str)
      .Case("horizontal", TileSliceLayout::Horizontal)
      .Case("vertical", TileSliceLayout::Vertical)
      .Default(::std::nullopt);
}
::std::optional<TileSliceLayout> symbolizeTileSliceLayout(uint32_t value) {
  switch (value) {
  case 0: return TileSliceLayout::Horizontal;
  case 1: return TileSliceLayout::Vertical;
  default: return ::std::nullopt;
  }
}

} // namespace arm_sme
} // namespace mlir

namespace mlir {
namespace arm_sme {
::llvm::StringRef stringifyTypeSize(TypeSize val) {
  switch (val) {
    case TypeSize::Byte: return "byte";
    case TypeSize::Half: return "half";
    case TypeSize::Word: return "word";
    case TypeSize::Double: return "double";
  }
  return "";
}

::std::optional<TypeSize> symbolizeTypeSize(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<TypeSize>>(str)
      .Case("byte", TypeSize::Byte)
      .Case("half", TypeSize::Half)
      .Case("word", TypeSize::Word)
      .Case("double", TypeSize::Double)
      .Default(::std::nullopt);
}
::std::optional<TypeSize> symbolizeTypeSize(uint32_t value) {
  switch (value) {
  case 0: return TypeSize::Byte;
  case 1: return TypeSize::Half;
  case 2: return TypeSize::Word;
  case 3: return TypeSize::Double;
  default: return ::std::nullopt;
  }
}

} // namespace arm_sme
} // namespace mlir

