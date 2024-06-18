/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: AMDGPU.td                                                            *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace amdgpu {
// The possible permutations of the lanes storing B available in an MFMA
enum class MFMAPermB : uint32_t {
  none = 0,
  bcast_first_32 = 1,
  bcast_second_32 = 2,
  rotate_16_right = 3,
  bcast_first_16 = 4,
  bcast_second_16 = 5,
  bcast_third_16 = 6,
  bcast_fourth_16 = 7,
};

::std::optional<MFMAPermB> symbolizeMFMAPermB(uint32_t);
::llvm::StringRef stringifyMFMAPermB(MFMAPermB);
::std::optional<MFMAPermB> symbolizeMFMAPermB(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForMFMAPermB() {
  return 7;
}


inline ::llvm::StringRef stringifyEnum(MFMAPermB enumValue) {
  return stringifyMFMAPermB(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<MFMAPermB> symbolizeEnum<MFMAPermB>(::llvm::StringRef str) {
  return symbolizeMFMAPermB(str);
}
} // namespace amdgpu
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::amdgpu::MFMAPermB, ::mlir::amdgpu::MFMAPermB> {
  template <typename ParserT>
  static FailureOr<::mlir::amdgpu::MFMAPermB> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for The possible permutations of the lanes storing B available in an MFMA");

    // Symbolize the keyword.
    if (::std::optional<::mlir::amdgpu::MFMAPermB> attr = ::mlir::amdgpu::symbolizeEnum<::mlir::amdgpu::MFMAPermB>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid The possible permutations of the lanes storing B available in an MFMA specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::amdgpu::MFMAPermB value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::amdgpu::MFMAPermB> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::amdgpu::MFMAPermB getEmptyKey() {
    return static_cast<::mlir::amdgpu::MFMAPermB>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::amdgpu::MFMAPermB getTombstoneKey() {
    return static_cast<::mlir::amdgpu::MFMAPermB>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::amdgpu::MFMAPermB &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::amdgpu::MFMAPermB &lhs, const ::mlir::amdgpu::MFMAPermB &rhs) {
    return lhs == rhs;
  }
};
}

