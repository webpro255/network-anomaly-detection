/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: Passes.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace tosa {
// Tosa level
enum class TosaLevelEnum : uint32_t {
  None = 0,
  EightK = 1,
};

::std::optional<TosaLevelEnum> symbolizeTosaLevelEnum(uint32_t);
::llvm::StringRef stringifyTosaLevelEnum(TosaLevelEnum);
::std::optional<TosaLevelEnum> symbolizeTosaLevelEnum(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForTosaLevelEnum() {
  return 1;
}


inline ::llvm::StringRef stringifyEnum(TosaLevelEnum enumValue) {
  return stringifyTosaLevelEnum(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<TosaLevelEnum> symbolizeEnum<TosaLevelEnum>(::llvm::StringRef str) {
  return symbolizeTosaLevelEnum(str);
}

class TosaLevelEnumAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = TosaLevelEnum;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static TosaLevelEnumAttr get(::mlir::MLIRContext *context, TosaLevelEnum val);
  TosaLevelEnum getValue() const;
};
} // namespace tosa
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<mlir::tosa::TosaLevelEnum, mlir::tosa::TosaLevelEnum> {
  template <typename ParserT>
  static FailureOr<mlir::tosa::TosaLevelEnum> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Tosa level");

    // Symbolize the keyword.
    if (::std::optional<mlir::tosa::TosaLevelEnum> attr = mlir::tosa::symbolizeEnum<mlir::tosa::TosaLevelEnum>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Tosa level specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, mlir::tosa::TosaLevelEnum value) {
  auto valueStr = stringifyEnum(value);
  switch (value) {
  case mlir::tosa::TosaLevelEnum::None:
    break;
  default:
    return p << '"' << valueStr << '"';
  }
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<mlir::tosa::TosaLevelEnum> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline mlir::tosa::TosaLevelEnum getEmptyKey() {
    return static_cast<mlir::tosa::TosaLevelEnum>(StorageInfo::getEmptyKey());
  }

  static inline mlir::tosa::TosaLevelEnum getTombstoneKey() {
    return static_cast<mlir::tosa::TosaLevelEnum>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const mlir::tosa::TosaLevelEnum &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const mlir::tosa::TosaLevelEnum &lhs, const mlir::tosa::TosaLevelEnum &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace tosa {
// Tosa profile
enum class TosaProfileEnum : uint32_t {
  BaseInference = 0,
  MainInference = 1,
  MainTraining = 2,
  Undefined = 3,
};

::std::optional<TosaProfileEnum> symbolizeTosaProfileEnum(uint32_t);
::llvm::StringRef stringifyTosaProfileEnum(TosaProfileEnum);
::std::optional<TosaProfileEnum> symbolizeTosaProfileEnum(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForTosaProfileEnum() {
  return 3;
}


inline ::llvm::StringRef stringifyEnum(TosaProfileEnum enumValue) {
  return stringifyTosaProfileEnum(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<TosaProfileEnum> symbolizeEnum<TosaProfileEnum>(::llvm::StringRef str) {
  return symbolizeTosaProfileEnum(str);
}

class TosaProfileEnumAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = TosaProfileEnum;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static TosaProfileEnumAttr get(::mlir::MLIRContext *context, TosaProfileEnum val);
  TosaProfileEnum getValue() const;
};
} // namespace tosa
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<mlir::tosa::TosaProfileEnum, mlir::tosa::TosaProfileEnum> {
  template <typename ParserT>
  static FailureOr<mlir::tosa::TosaProfileEnum> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Tosa profile");

    // Symbolize the keyword.
    if (::std::optional<mlir::tosa::TosaProfileEnum> attr = mlir::tosa::symbolizeEnum<mlir::tosa::TosaProfileEnum>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Tosa profile specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, mlir::tosa::TosaProfileEnum value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<mlir::tosa::TosaProfileEnum> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline mlir::tosa::TosaProfileEnum getEmptyKey() {
    return static_cast<mlir::tosa::TosaProfileEnum>(StorageInfo::getEmptyKey());
  }

  static inline mlir::tosa::TosaProfileEnum getTombstoneKey() {
    return static_cast<mlir::tosa::TosaProfileEnum>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const mlir::tosa::TosaProfileEnum &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const mlir::tosa::TosaProfileEnum &lhs, const mlir::tosa::TosaProfileEnum &rhs) {
    return lhs == rhs;
  }
};
}

