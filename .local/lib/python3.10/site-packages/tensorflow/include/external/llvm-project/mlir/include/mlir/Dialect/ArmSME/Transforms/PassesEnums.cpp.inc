/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: Passes.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace arm_sme {
::llvm::StringRef stringifyArmStreamingMode(ArmStreamingMode val) {
  switch (val) {
    case ArmStreamingMode::Disabled: return "disabled";
    case ArmStreamingMode::Streaming: return "arm_streaming";
    case ArmStreamingMode::StreamingLocally: return "arm_locally_streaming";
    case ArmStreamingMode::StreamingCompatible: return "arm_streaming_compatible";
  }
  return "";
}

::std::optional<ArmStreamingMode> symbolizeArmStreamingMode(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<ArmStreamingMode>>(str)
      .Case("disabled", ArmStreamingMode::Disabled)
      .Case("arm_streaming", ArmStreamingMode::Streaming)
      .Case("arm_locally_streaming", ArmStreamingMode::StreamingLocally)
      .Case("arm_streaming_compatible", ArmStreamingMode::StreamingCompatible)
      .Default(::std::nullopt);
}
::std::optional<ArmStreamingMode> symbolizeArmStreamingMode(uint32_t value) {
  switch (value) {
  case 0: return ArmStreamingMode::Disabled;
  case 1: return ArmStreamingMode::Streaming;
  case 2: return ArmStreamingMode::StreamingLocally;
  case 3: return ArmStreamingMode::StreamingCompatible;
  default: return ::std::nullopt;
  }
}

} // namespace arm_sme
} // namespace mlir

namespace mlir {
namespace arm_sme {
::llvm::StringRef stringifyArmZaMode(ArmZaMode val) {
  switch (val) {
    case ArmZaMode::Disabled: return "disabled";
    case ArmZaMode::NewZA: return "arm_new_za";
    case ArmZaMode::InZA: return "arm_in_za";
    case ArmZaMode::OutZA: return "arm_out_za";
    case ArmZaMode::InOutZA: return "arm_inout_za";
    case ArmZaMode::PreservesZA: return "arm_preserves_za";
  }
  return "";
}

::std::optional<ArmZaMode> symbolizeArmZaMode(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<ArmZaMode>>(str)
      .Case("disabled", ArmZaMode::Disabled)
      .Case("arm_new_za", ArmZaMode::NewZA)
      .Case("arm_in_za", ArmZaMode::InZA)
      .Case("arm_out_za", ArmZaMode::OutZA)
      .Case("arm_inout_za", ArmZaMode::InOutZA)
      .Case("arm_preserves_za", ArmZaMode::PreservesZA)
      .Default(::std::nullopt);
}
::std::optional<ArmZaMode> symbolizeArmZaMode(uint32_t value) {
  switch (value) {
  case 0: return ArmZaMode::Disabled;
  case 1: return ArmZaMode::NewZA;
  case 2: return ArmZaMode::InZA;
  case 3: return ArmZaMode::OutZA;
  case 4: return ArmZaMode::InOutZA;
  case 5: return ArmZaMode::PreservesZA;
  default: return ::std::nullopt;
  }
}

} // namespace arm_sme
} // namespace mlir

