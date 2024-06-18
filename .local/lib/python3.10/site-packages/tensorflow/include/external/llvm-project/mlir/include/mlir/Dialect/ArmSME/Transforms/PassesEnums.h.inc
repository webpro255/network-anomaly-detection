/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: Passes.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace arm_sme {
// Armv9 Streaming SVE mode
enum class ArmStreamingMode : uint32_t {
  Disabled = 0,
  Streaming = 1,
  StreamingLocally = 2,
  StreamingCompatible = 3,
};

::std::optional<ArmStreamingMode> symbolizeArmStreamingMode(uint32_t);
::llvm::StringRef stringifyArmStreamingMode(ArmStreamingMode);
::std::optional<ArmStreamingMode> symbolizeArmStreamingMode(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForArmStreamingMode() {
  return 3;
}


inline ::llvm::StringRef stringifyEnum(ArmStreamingMode enumValue) {
  return stringifyArmStreamingMode(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<ArmStreamingMode> symbolizeEnum<ArmStreamingMode>(::llvm::StringRef str) {
  return symbolizeArmStreamingMode(str);
}
} // namespace arm_sme
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<mlir::arm_sme::ArmStreamingMode, mlir::arm_sme::ArmStreamingMode> {
  template <typename ParserT>
  static FailureOr<mlir::arm_sme::ArmStreamingMode> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Armv9 Streaming SVE mode");

    // Symbolize the keyword.
    if (::std::optional<mlir::arm_sme::ArmStreamingMode> attr = mlir::arm_sme::symbolizeEnum<mlir::arm_sme::ArmStreamingMode>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Armv9 Streaming SVE mode specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, mlir::arm_sme::ArmStreamingMode value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<mlir::arm_sme::ArmStreamingMode> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline mlir::arm_sme::ArmStreamingMode getEmptyKey() {
    return static_cast<mlir::arm_sme::ArmStreamingMode>(StorageInfo::getEmptyKey());
  }

  static inline mlir::arm_sme::ArmStreamingMode getTombstoneKey() {
    return static_cast<mlir::arm_sme::ArmStreamingMode>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const mlir::arm_sme::ArmStreamingMode &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const mlir::arm_sme::ArmStreamingMode &lhs, const mlir::arm_sme::ArmStreamingMode &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace arm_sme {
// Armv9 ZA storage mode
enum class ArmZaMode : uint32_t {
  Disabled = 0,
  NewZA = 1,
  InZA = 2,
  OutZA = 3,
  InOutZA = 4,
  PreservesZA = 5,
};

::std::optional<ArmZaMode> symbolizeArmZaMode(uint32_t);
::llvm::StringRef stringifyArmZaMode(ArmZaMode);
::std::optional<ArmZaMode> symbolizeArmZaMode(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForArmZaMode() {
  return 5;
}


inline ::llvm::StringRef stringifyEnum(ArmZaMode enumValue) {
  return stringifyArmZaMode(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<ArmZaMode> symbolizeEnum<ArmZaMode>(::llvm::StringRef str) {
  return symbolizeArmZaMode(str);
}
} // namespace arm_sme
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<mlir::arm_sme::ArmZaMode, mlir::arm_sme::ArmZaMode> {
  template <typename ParserT>
  static FailureOr<mlir::arm_sme::ArmZaMode> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Armv9 ZA storage mode");

    // Symbolize the keyword.
    if (::std::optional<mlir::arm_sme::ArmZaMode> attr = mlir::arm_sme::symbolizeEnum<mlir::arm_sme::ArmZaMode>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Armv9 ZA storage mode specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, mlir::arm_sme::ArmZaMode value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<mlir::arm_sme::ArmZaMode> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline mlir::arm_sme::ArmZaMode getEmptyKey() {
    return static_cast<mlir::arm_sme::ArmZaMode>(StorageInfo::getEmptyKey());
  }

  static inline mlir::arm_sme::ArmZaMode getTombstoneKey() {
    return static_cast<mlir::arm_sme::ArmZaMode>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const mlir::arm_sme::ArmZaMode &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const mlir::arm_sme::ArmZaMode &lhs, const mlir::arm_sme::ArmZaMode &rhs) {
    return lhs == rhs;
  }
};
}

