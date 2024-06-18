/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: xla_cpu_enums.td                                                     *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace xla_cpu {
// Type of reduction to apply.
enum class ReductionKind : uint32_t {
  ALL_REDUCE_SUM = 0,
  ALL_REDUCE_PRODUCT = 1,
  ALL_REDUCE_MIN = 2,
  ALL_REDUCE_MAX = 3,
};

::std::optional<ReductionKind> symbolizeReductionKind(uint32_t);
::llvm::StringRef stringifyReductionKind(ReductionKind);
::std::optional<ReductionKind> symbolizeReductionKind(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForReductionKind() {
  return 3;
}


inline ::llvm::StringRef stringifyEnum(ReductionKind enumValue) {
  return stringifyReductionKind(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<ReductionKind> symbolizeEnum<ReductionKind>(::llvm::StringRef str) {
  return symbolizeReductionKind(str);
}
} // namespace xla_cpu
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::xla_cpu::ReductionKind, ::mlir::xla_cpu::ReductionKind> {
  template <typename ParserT>
  static FailureOr<::mlir::xla_cpu::ReductionKind> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Type of reduction to apply.");

    // Symbolize the keyword.
    if (::std::optional<::mlir::xla_cpu::ReductionKind> attr = ::mlir::xla_cpu::symbolizeEnum<::mlir::xla_cpu::ReductionKind>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Type of reduction to apply. specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::xla_cpu::ReductionKind value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::xla_cpu::ReductionKind> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::xla_cpu::ReductionKind getEmptyKey() {
    return static_cast<::mlir::xla_cpu::ReductionKind>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::xla_cpu::ReductionKind getTombstoneKey() {
    return static_cast<::mlir::xla_cpu::ReductionKind>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::xla_cpu::ReductionKind &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::xla_cpu::ReductionKind &lhs, const ::mlir::xla_cpu::ReductionKind &rhs) {
    return lhs == rhs;
  }
};
}

