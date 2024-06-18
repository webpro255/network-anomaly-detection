/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: MeshOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace mesh {
// Iterator type
enum class IteratorType : uint32_t {
  Parallel = 1,
  ReductionSum = 2,
  ReductionMax = 3,
  ReductionMin = 4,
  ReductionGeneric = 5,
  Invalid = 100,
};

::std::optional<IteratorType> symbolizeIteratorType(uint32_t);
::llvm::StringRef stringifyIteratorType(IteratorType);
::std::optional<IteratorType> symbolizeIteratorType(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForIteratorType() {
  return 100;
}


inline ::llvm::StringRef stringifyEnum(IteratorType enumValue) {
  return stringifyIteratorType(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<IteratorType> symbolizeEnum<IteratorType>(::llvm::StringRef str) {
  return symbolizeIteratorType(str);
}
} // namespace mesh
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::mesh::IteratorType, ::mlir::mesh::IteratorType> {
  template <typename ParserT>
  static FailureOr<::mlir::mesh::IteratorType> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Iterator type");

    // Symbolize the keyword.
    if (::std::optional<::mlir::mesh::IteratorType> attr = ::mlir::mesh::symbolizeEnum<::mlir::mesh::IteratorType>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Iterator type specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::mesh::IteratorType value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::mesh::IteratorType> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::mesh::IteratorType getEmptyKey() {
    return static_cast<::mlir::mesh::IteratorType>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::mesh::IteratorType getTombstoneKey() {
    return static_cast<::mlir::mesh::IteratorType>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::mesh::IteratorType &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::mesh::IteratorType &lhs, const ::mlir::mesh::IteratorType &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace mesh {
// partial type of a distributed tensor
enum class Partial : uint32_t {
  Sum = 1,
  Max = 2,
  Min = 3,
  Generic = 100,
};

::std::optional<Partial> symbolizePartial(uint32_t);
::llvm::StringRef stringifyPartial(Partial);
::std::optional<Partial> symbolizePartial(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForPartial() {
  return 100;
}


inline ::llvm::StringRef stringifyEnum(Partial enumValue) {
  return stringifyPartial(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<Partial> symbolizeEnum<Partial>(::llvm::StringRef str) {
  return symbolizePartial(str);
}
} // namespace mesh
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::mesh::Partial, ::mlir::mesh::Partial> {
  template <typename ParserT>
  static FailureOr<::mlir::mesh::Partial> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for partial type of a distributed tensor");

    // Symbolize the keyword.
    if (::std::optional<::mlir::mesh::Partial> attr = ::mlir::mesh::symbolizeEnum<::mlir::mesh::Partial>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid partial type of a distributed tensor specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::mesh::Partial value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::mesh::Partial> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::mesh::Partial getEmptyKey() {
    return static_cast<::mlir::mesh::Partial>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::mesh::Partial getTombstoneKey() {
    return static_cast<::mlir::mesh::Partial>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::mesh::Partial &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::mesh::Partial &lhs, const ::mlir::mesh::Partial &rhs) {
    return lhs == rhs;
  }
};
}

