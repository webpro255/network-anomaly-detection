/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: TritonOps.td                                                         *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace triton {
::llvm::StringRef stringifyRMWOp(RMWOp val) {
  switch (val) {
    case RMWOp::AND: return "and";
    case RMWOp::OR: return "or";
    case RMWOp::XOR: return "xor";
    case RMWOp::ADD: return "add";
    case RMWOp::FADD: return "fadd";
    case RMWOp::MAX: return "max";
    case RMWOp::MIN: return "min";
    case RMWOp::UMAX: return "umax";
    case RMWOp::UMIN: return "umin";
    case RMWOp::XCHG: return "exch";
  }
  return "";
}

::std::optional<RMWOp> symbolizeRMWOp(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<RMWOp>>(str)
      .Case("and", RMWOp::AND)
      .Case("or", RMWOp::OR)
      .Case("xor", RMWOp::XOR)
      .Case("add", RMWOp::ADD)
      .Case("fadd", RMWOp::FADD)
      .Case("max", RMWOp::MAX)
      .Case("min", RMWOp::MIN)
      .Case("umax", RMWOp::UMAX)
      .Case("umin", RMWOp::UMIN)
      .Case("exch", RMWOp::XCHG)
      .Default(::std::nullopt);
}
::std::optional<RMWOp> symbolizeRMWOp(uint32_t value) {
  switch (value) {
  case 1: return RMWOp::AND;
  case 2: return RMWOp::OR;
  case 3: return RMWOp::XOR;
  case 4: return RMWOp::ADD;
  case 5: return RMWOp::FADD;
  case 6: return RMWOp::MAX;
  case 7: return RMWOp::MIN;
  case 8: return RMWOp::UMAX;
  case 9: return RMWOp::UMIN;
  case 10: return RMWOp::XCHG;
  default: return ::std::nullopt;
  }
}

bool RMWOpAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 3)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 4)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 5)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 6)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 7)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 8)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 9)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 10)));
}
RMWOpAttr RMWOpAttr::get(::mlir::MLIRContext *context, RMWOp val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<RMWOpAttr>(baseAttr);
}
RMWOp RMWOpAttr::getValue() const {
  return static_cast<RMWOp>(::mlir::IntegerAttr::getInt());
}
} // namespace triton
} // namespace mlir

namespace mlir {
namespace triton {
::llvm::StringRef stringifyCacheModifier(CacheModifier val) {
  switch (val) {
    case CacheModifier::NONE: return "none";
    case CacheModifier::CA: return "ca";
    case CacheModifier::CG: return "cg";
    case CacheModifier::WB: return "wb";
    case CacheModifier::CS: return "cs";
    case CacheModifier::WT: return "wt";
  }
  return "";
}

::std::optional<CacheModifier> symbolizeCacheModifier(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<CacheModifier>>(str)
      .Case("none", CacheModifier::NONE)
      .Case("ca", CacheModifier::CA)
      .Case("cg", CacheModifier::CG)
      .Case("wb", CacheModifier::WB)
      .Case("cs", CacheModifier::CS)
      .Case("wt", CacheModifier::WT)
      .Default(::std::nullopt);
}
::std::optional<CacheModifier> symbolizeCacheModifier(uint32_t value) {
  switch (value) {
  case 1: return CacheModifier::NONE;
  case 2: return CacheModifier::CA;
  case 3: return CacheModifier::CG;
  case 4: return CacheModifier::WB;
  case 5: return CacheModifier::CS;
  case 6: return CacheModifier::WT;
  default: return ::std::nullopt;
  }
}

bool CacheModifierAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 3)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 4)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 5)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 6)));
}
CacheModifierAttr CacheModifierAttr::get(::mlir::MLIRContext *context, CacheModifier val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<CacheModifierAttr>(baseAttr);
}
CacheModifier CacheModifierAttr::getValue() const {
  return static_cast<CacheModifier>(::mlir::IntegerAttr::getInt());
}
} // namespace triton
} // namespace mlir

namespace mlir {
namespace triton {
::llvm::StringRef stringifyEvictionPolicy(EvictionPolicy val) {
  switch (val) {
    case EvictionPolicy::NORMAL: return "evict_normal";
    case EvictionPolicy::EVICT_FIRST: return "evict_first";
    case EvictionPolicy::EVICT_LAST: return "evict_last";
  }
  return "";
}

::std::optional<EvictionPolicy> symbolizeEvictionPolicy(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<EvictionPolicy>>(str)
      .Case("evict_normal", EvictionPolicy::NORMAL)
      .Case("evict_first", EvictionPolicy::EVICT_FIRST)
      .Case("evict_last", EvictionPolicy::EVICT_LAST)
      .Default(::std::nullopt);
}
::std::optional<EvictionPolicy> symbolizeEvictionPolicy(uint32_t value) {
  switch (value) {
  case 1: return EvictionPolicy::NORMAL;
  case 2: return EvictionPolicy::EVICT_FIRST;
  case 3: return EvictionPolicy::EVICT_LAST;
  default: return ::std::nullopt;
  }
}

bool EvictionPolicyAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 3)));
}
EvictionPolicyAttr EvictionPolicyAttr::get(::mlir::MLIRContext *context, EvictionPolicy val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<EvictionPolicyAttr>(baseAttr);
}
EvictionPolicy EvictionPolicyAttr::getValue() const {
  return static_cast<EvictionPolicy>(::mlir::IntegerAttr::getInt());
}
} // namespace triton
} // namespace mlir

namespace mlir {
namespace triton {
::llvm::StringRef stringifyMemSemantic(MemSemantic val) {
  switch (val) {
    case MemSemantic::RELAXED: return "relaxed";
    case MemSemantic::ACQUIRE: return "acquire";
    case MemSemantic::RELEASE: return "release";
    case MemSemantic::ACQUIRE_RELEASE: return "acq_rel";
  }
  return "";
}

::std::optional<MemSemantic> symbolizeMemSemantic(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<MemSemantic>>(str)
      .Case("relaxed", MemSemantic::RELAXED)
      .Case("acquire", MemSemantic::ACQUIRE)
      .Case("release", MemSemantic::RELEASE)
      .Case("acq_rel", MemSemantic::ACQUIRE_RELEASE)
      .Default(::std::nullopt);
}
::std::optional<MemSemantic> symbolizeMemSemantic(uint32_t value) {
  switch (value) {
  case 1: return MemSemantic::RELAXED;
  case 2: return MemSemantic::ACQUIRE;
  case 3: return MemSemantic::RELEASE;
  case 4: return MemSemantic::ACQUIRE_RELEASE;
  default: return ::std::nullopt;
  }
}

bool MemSemanticAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 3)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 4)));
}
MemSemanticAttr MemSemanticAttr::get(::mlir::MLIRContext *context, MemSemantic val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<MemSemanticAttr>(baseAttr);
}
MemSemantic MemSemanticAttr::getValue() const {
  return static_cast<MemSemantic>(::mlir::IntegerAttr::getInt());
}
} // namespace triton
} // namespace mlir

namespace mlir {
namespace triton {
::llvm::StringRef stringifyMemSyncScope(MemSyncScope val) {
  switch (val) {
    case MemSyncScope::GPU: return "gpu";
    case MemSyncScope::CTA: return "cta";
    case MemSyncScope::SYSTEM: return "sys";
  }
  return "";
}

::std::optional<MemSyncScope> symbolizeMemSyncScope(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<MemSyncScope>>(str)
      .Case("gpu", MemSyncScope::GPU)
      .Case("cta", MemSyncScope::CTA)
      .Case("sys", MemSyncScope::SYSTEM)
      .Default(::std::nullopt);
}
::std::optional<MemSyncScope> symbolizeMemSyncScope(uint32_t value) {
  switch (value) {
  case 1: return MemSyncScope::GPU;
  case 2: return MemSyncScope::CTA;
  case 3: return MemSyncScope::SYSTEM;
  default: return ::std::nullopt;
  }
}

bool MemSyncScopeAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 3)));
}
MemSyncScopeAttr MemSyncScopeAttr::get(::mlir::MLIRContext *context, MemSyncScope val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<MemSyncScopeAttr>(baseAttr);
}
MemSyncScope MemSyncScopeAttr::getValue() const {
  return static_cast<MemSyncScope>(::mlir::IntegerAttr::getInt());
}
} // namespace triton
} // namespace mlir

namespace mlir {
namespace triton {
::llvm::StringRef stringifyPaddingOption(PaddingOption val) {
  switch (val) {
    case PaddingOption::PAD_ZERO: return "zero";
    case PaddingOption::PAD_NAN: return "nan";
  }
  return "";
}

::std::optional<PaddingOption> symbolizePaddingOption(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<PaddingOption>>(str)
      .Case("zero", PaddingOption::PAD_ZERO)
      .Case("nan", PaddingOption::PAD_NAN)
      .Default(::std::nullopt);
}
::std::optional<PaddingOption> symbolizePaddingOption(uint32_t value) {
  switch (value) {
  case 1: return PaddingOption::PAD_ZERO;
  case 2: return PaddingOption::PAD_NAN;
  default: return ::std::nullopt;
  }
}

bool PaddingOptionAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)));
}
PaddingOptionAttr PaddingOptionAttr::get(::mlir::MLIRContext *context, PaddingOption val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<PaddingOptionAttr>(baseAttr);
}
PaddingOption PaddingOptionAttr::getValue() const {
  return static_cast<PaddingOption>(::mlir::IntegerAttr::getInt());
}
} // namespace triton
} // namespace mlir

namespace mlir {
namespace triton {
::llvm::StringRef stringifyProgramIDDim(ProgramIDDim val) {
  switch (val) {
    case ProgramIDDim::X: return "x";
    case ProgramIDDim::Y: return "y";
    case ProgramIDDim::Z: return "z";
  }
  return "";
}

::std::optional<ProgramIDDim> symbolizeProgramIDDim(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<ProgramIDDim>>(str)
      .Case("x", ProgramIDDim::X)
      .Case("y", ProgramIDDim::Y)
      .Case("z", ProgramIDDim::Z)
      .Default(::std::nullopt);
}
::std::optional<ProgramIDDim> symbolizeProgramIDDim(uint32_t value) {
  switch (value) {
  case 0: return ProgramIDDim::X;
  case 1: return ProgramIDDim::Y;
  case 2: return ProgramIDDim::Z;
  default: return ::std::nullopt;
  }
}

bool ProgramIDDimAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 2)));
}
ProgramIDDimAttr ProgramIDDimAttr::get(::mlir::MLIRContext *context, ProgramIDDim val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<ProgramIDDimAttr>(baseAttr);
}
ProgramIDDim ProgramIDDimAttr::getValue() const {
  return static_cast<ProgramIDDim>(::mlir::IntegerAttr::getInt());
}
} // namespace triton
} // namespace mlir

namespace mlir {
namespace triton {
::llvm::StringRef stringifyPropagateNan(PropagateNan val) {
  switch (val) {
    case PropagateNan::NONE: return "none";
    case PropagateNan::ALL: return "all";
  }
  return "";
}

::std::optional<PropagateNan> symbolizePropagateNan(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<PropagateNan>>(str)
      .Case("none", PropagateNan::NONE)
      .Case("all", PropagateNan::ALL)
      .Default(::std::nullopt);
}
::std::optional<PropagateNan> symbolizePropagateNan(uint32_t value) {
  switch (value) {
  case 0: return PropagateNan::NONE;
  case 65535: return PropagateNan::ALL;
  default: return ::std::nullopt;
  }
}

bool PropagateNanAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 65535)));
}
PropagateNanAttr PropagateNanAttr::get(::mlir::MLIRContext *context, PropagateNan val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<PropagateNanAttr>(baseAttr);
}
PropagateNan PropagateNanAttr::getValue() const {
  return static_cast<PropagateNan>(::mlir::IntegerAttr::getInt());
}
} // namespace triton
} // namespace mlir

namespace mlir {
namespace triton {
::llvm::StringRef stringifyRoundingMode(RoundingMode val) {
  switch (val) {
    case RoundingMode::RTZ: return "rtz";
    case RoundingMode::RTNE: return "rtne";
  }
  return "";
}

::std::optional<RoundingMode> symbolizeRoundingMode(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<RoundingMode>>(str)
      .Case("rtz", RoundingMode::RTZ)
      .Case("rtne", RoundingMode::RTNE)
      .Default(::std::nullopt);
}
::std::optional<RoundingMode> symbolizeRoundingMode(uint32_t value) {
  switch (value) {
  case 0: return RoundingMode::RTZ;
  case 1: return RoundingMode::RTNE;
  default: return ::std::nullopt;
  }
}

bool RoundingModeAttr::classof(::mlir::Attribute attr) {
  return (((::llvm::isa<::mlir::IntegerAttr>(attr))) && ((::llvm::cast<::mlir::IntegerAttr>(attr).getType().isSignlessInteger(32)))) && (((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 0)) || ((::llvm::cast<::mlir::IntegerAttr>(attr).getInt() == 1)));
}
RoundingModeAttr RoundingModeAttr::get(::mlir::MLIRContext *context, RoundingMode val) {
  ::mlir::IntegerType intType = ::mlir::IntegerType::get(context, 32);
  ::mlir::IntegerAttr baseAttr = ::mlir::IntegerAttr::get(intType, static_cast<uint32_t>(val));
  return ::llvm::cast<RoundingModeAttr>(baseAttr);
}
RoundingMode RoundingModeAttr::getValue() const {
  return static_cast<RoundingMode>(::mlir::IntegerAttr::getInt());
}
} // namespace triton
} // namespace mlir

