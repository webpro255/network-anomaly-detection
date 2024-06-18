/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: NVGPUOps.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace triton {
namespace nvgpu {
::llvm::StringRef stringifyMBarriveType(MBarriveType val) {
  switch (val) {
    case MBarriveType::normal: return "normal";
    case MBarriveType::cp_async: return "cp_async";
    case MBarriveType::expect_tx: return "expect_tx";
    case MBarriveType::remote: return "remote";
  }
  return "";
}

::std::optional<MBarriveType> symbolizeMBarriveType(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<MBarriveType>>(str)
      .Case("normal", MBarriveType::normal)
      .Case("cp_async", MBarriveType::cp_async)
      .Case("expect_tx", MBarriveType::expect_tx)
      .Case("remote", MBarriveType::remote)
      .Default(::std::nullopt);
}
::std::optional<MBarriveType> symbolizeMBarriveType(uint32_t value) {
  switch (value) {
  case 0: return MBarriveType::normal;
  case 1: return MBarriveType::cp_async;
  case 2: return MBarriveType::expect_tx;
  case 3: return MBarriveType::remote;
  default: return ::std::nullopt;
  }
}

bool MBarriveTypeAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 3)));
}
MBarriveTypeAttr MBarriveTypeAttr::get(::mlir::MLIRContext *context, MBarriveType val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<MBarriveTypeAttr>(baseAttr);
}
MBarriveType MBarriveTypeAttr::getValue() const {
  return static_cast<MBarriveType>(::mlir::IntegerAttr::getInt());
}
} // namespace nvgpu
} // namespace triton
} // namespace mlir

namespace mlir {
namespace triton {
namespace nvgpu {
::llvm::StringRef stringifyWGMMAEltType(WGMMAEltType val) {
  switch (val) {
    case WGMMAEltType::s8: return "s8";
    case WGMMAEltType::s32: return "s32";
    case WGMMAEltType::e4m3: return "e4m3";
    case WGMMAEltType::e5m2: return "e5m2";
    case WGMMAEltType::f16: return "f16";
    case WGMMAEltType::bf16: return "bf16";
    case WGMMAEltType::tf32: return "tf32";
    case WGMMAEltType::f32: return "f32";
  }
  return "";
}

::std::optional<WGMMAEltType> symbolizeWGMMAEltType(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<WGMMAEltType>>(str)
      .Case("s8", WGMMAEltType::s8)
      .Case("s32", WGMMAEltType::s32)
      .Case("e4m3", WGMMAEltType::e4m3)
      .Case("e5m2", WGMMAEltType::e5m2)
      .Case("f16", WGMMAEltType::f16)
      .Case("bf16", WGMMAEltType::bf16)
      .Case("tf32", WGMMAEltType::tf32)
      .Case("f32", WGMMAEltType::f32)
      .Default(::std::nullopt);
}
::std::optional<WGMMAEltType> symbolizeWGMMAEltType(uint32_t value) {
  switch (value) {
  case 0: return WGMMAEltType::s8;
  case 1: return WGMMAEltType::s32;
  case 2: return WGMMAEltType::e4m3;
  case 3: return WGMMAEltType::e5m2;
  case 4: return WGMMAEltType::f16;
  case 5: return WGMMAEltType::bf16;
  case 6: return WGMMAEltType::tf32;
  case 7: return WGMMAEltType::f32;
  default: return ::std::nullopt;
  }
}

bool WGMMAEltTypeAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 3)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 4)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 5)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 6)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 7)));
}
WGMMAEltTypeAttr WGMMAEltTypeAttr::get(::mlir::MLIRContext *context, WGMMAEltType val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<WGMMAEltTypeAttr>(baseAttr);
}
WGMMAEltType WGMMAEltTypeAttr::getValue() const {
  return static_cast<WGMMAEltType>(::mlir::IntegerAttr::getInt());
}
} // namespace nvgpu
} // namespace triton
} // namespace mlir

namespace mlir {
namespace triton {
namespace nvgpu {
::llvm::StringRef stringifyWGMMALayout(WGMMALayout val) {
  switch (val) {
    case WGMMALayout::row: return "row";
    case WGMMALayout::col: return "col";
  }
  return "";
}

::std::optional<WGMMALayout> symbolizeWGMMALayout(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<WGMMALayout>>(str)
      .Case("row", WGMMALayout::row)
      .Case("col", WGMMALayout::col)
      .Default(::std::nullopt);
}
::std::optional<WGMMALayout> symbolizeWGMMALayout(uint32_t value) {
  switch (value) {
  case 0: return WGMMALayout::row;
  case 1: return WGMMALayout::col;
  default: return ::std::nullopt;
  }
}

bool WGMMALayoutAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)));
}
WGMMALayoutAttr WGMMALayoutAttr::get(::mlir::MLIRContext *context, WGMMALayout val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<WGMMALayoutAttr>(baseAttr);
}
WGMMALayout WGMMALayoutAttr::getValue() const {
  return static_cast<WGMMALayout>(::mlir::IntegerAttr::getInt());
}
} // namespace nvgpu
} // namespace triton
} // namespace mlir

