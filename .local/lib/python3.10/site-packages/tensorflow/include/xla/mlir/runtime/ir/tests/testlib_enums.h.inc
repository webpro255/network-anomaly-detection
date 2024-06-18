/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: testlib.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace xla {
namespace runtime {
// Custom Call Testlib Enum Type.
enum class EnumType : uint32_t {
  Foo = 0,
  Bar = 1,
  Baz = 2,
};

::std::optional<EnumType> symbolizeEnumType(uint32_t);
::llvm::StringRef stringifyEnumType(EnumType);
::std::optional<EnumType> symbolizeEnumType(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForEnumType() {
  return 2;
}


inline ::llvm::StringRef stringifyEnum(EnumType enumValue) {
  return stringifyEnumType(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<EnumType> symbolizeEnum<EnumType>(::llvm::StringRef str) {
  return symbolizeEnumType(str);
}
} // namespace runtime
} // namespace xla

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::xla::runtime::EnumType, ::xla::runtime::EnumType> {
  template <typename ParserT>
  static FailureOr<::xla::runtime::EnumType> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Custom Call Testlib Enum Type.");

    // Symbolize the keyword.
    if (::std::optional<::xla::runtime::EnumType> attr = ::xla::runtime::symbolizeEnum<::xla::runtime::EnumType>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Custom Call Testlib Enum Type. specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::xla::runtime::EnumType value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::xla::runtime::EnumType> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::xla::runtime::EnumType getEmptyKey() {
    return static_cast<::xla::runtime::EnumType>(StorageInfo::getEmptyKey());
  }

  static inline ::xla::runtime::EnumType getTombstoneKey() {
    return static_cast<::xla::runtime::EnumType>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::xla::runtime::EnumType &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::xla::runtime::EnumType &lhs, const ::xla::runtime::EnumType &rhs) {
    return lhs == rhs;
  }
};
}

namespace xla {
namespace runtime {
// Another Custom Call Testlib Enum Type.
enum class EnumType2 : uint32_t {
  Foo = 0,
  Bar = 1,
  Baz = 2,
};

::std::optional<EnumType2> symbolizeEnumType2(uint32_t);
::llvm::StringRef stringifyEnumType2(EnumType2);
::std::optional<EnumType2> symbolizeEnumType2(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForEnumType2() {
  return 2;
}


inline ::llvm::StringRef stringifyEnum(EnumType2 enumValue) {
  return stringifyEnumType2(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<EnumType2> symbolizeEnum<EnumType2>(::llvm::StringRef str) {
  return symbolizeEnumType2(str);
}
} // namespace runtime
} // namespace xla

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::xla::runtime::EnumType2, ::xla::runtime::EnumType2> {
  template <typename ParserT>
  static FailureOr<::xla::runtime::EnumType2> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Another Custom Call Testlib Enum Type.");

    // Symbolize the keyword.
    if (::std::optional<::xla::runtime::EnumType2> attr = ::xla::runtime::symbolizeEnum<::xla::runtime::EnumType2>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Another Custom Call Testlib Enum Type. specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::xla::runtime::EnumType2 value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::xla::runtime::EnumType2> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::xla::runtime::EnumType2 getEmptyKey() {
    return static_cast<::xla::runtime::EnumType2>(StorageInfo::getEmptyKey());
  }

  static inline ::xla::runtime::EnumType2 getTombstoneKey() {
    return static_cast<::xla::runtime::EnumType2>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::xla::runtime::EnumType2 &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::xla::runtime::EnumType2 &lhs, const ::xla::runtime::EnumType2 &rhs) {
    return lhs == rhs;
  }
};
}

