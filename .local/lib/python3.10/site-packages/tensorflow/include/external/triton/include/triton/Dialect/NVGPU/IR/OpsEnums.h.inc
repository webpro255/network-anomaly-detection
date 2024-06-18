/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: NVGPUOps.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace triton {
namespace nvgpu {
// mbarrier arrive type, either 'normal', 'expect_tx', 'cp_async'
enum class MBarriveType : uint32_t {
  normal = 0,
  cp_async = 1,
  expect_tx = 2,
  remote = 3,
};

::std::optional<MBarriveType> symbolizeMBarriveType(uint32_t);
::llvm::StringRef stringifyMBarriveType(MBarriveType);
::std::optional<MBarriveType> symbolizeMBarriveType(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForMBarriveType() {
  return 3;
}


inline ::llvm::StringRef stringifyEnum(MBarriveType enumValue) {
  return stringifyMBarriveType(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<MBarriveType> symbolizeEnum<MBarriveType>(::llvm::StringRef str) {
  return symbolizeMBarriveType(str);
}

class MBarriveTypeAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = MBarriveType;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static MBarriveTypeAttr get(::mlir::MLIRContext *context, MBarriveType val);
  MBarriveType getValue() const;
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::triton::nvgpu::MBarriveType, ::mlir::triton::nvgpu::MBarriveType> {
  template <typename ParserT>
  static FailureOr<::mlir::triton::nvgpu::MBarriveType> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for mbarrier arrive type, either 'normal', 'expect_tx', 'cp_async'");

    // Symbolize the keyword.
    if (::std::optional<::mlir::triton::nvgpu::MBarriveType> attr = ::mlir::triton::nvgpu::symbolizeEnum<::mlir::triton::nvgpu::MBarriveType>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid mbarrier arrive type, either 'normal', 'expect_tx', 'cp_async' specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::triton::nvgpu::MBarriveType value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::triton::nvgpu::MBarriveType> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::triton::nvgpu::MBarriveType getEmptyKey() {
    return static_cast<::mlir::triton::nvgpu::MBarriveType>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::triton::nvgpu::MBarriveType getTombstoneKey() {
    return static_cast<::mlir::triton::nvgpu::MBarriveType>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::triton::nvgpu::MBarriveType &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::triton::nvgpu::MBarriveType &lhs, const ::mlir::triton::nvgpu::MBarriveType &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace triton {
namespace nvgpu {
// wgmma operand type, either 's8', 's32', 'e4m3', 'e5m2', 'f16', 'bf16', 'tf32', or 'f32'
enum class WGMMAEltType : uint32_t {
  s8 = 0,
  s32 = 1,
  e4m3 = 2,
  e5m2 = 3,
  f16 = 4,
  bf16 = 5,
  tf32 = 6,
  f32 = 7,
};

::std::optional<WGMMAEltType> symbolizeWGMMAEltType(uint32_t);
::llvm::StringRef stringifyWGMMAEltType(WGMMAEltType);
::std::optional<WGMMAEltType> symbolizeWGMMAEltType(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForWGMMAEltType() {
  return 7;
}


inline ::llvm::StringRef stringifyEnum(WGMMAEltType enumValue) {
  return stringifyWGMMAEltType(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<WGMMAEltType> symbolizeEnum<WGMMAEltType>(::llvm::StringRef str) {
  return symbolizeWGMMAEltType(str);
}

class WGMMAEltTypeAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = WGMMAEltType;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static WGMMAEltTypeAttr get(::mlir::MLIRContext *context, WGMMAEltType val);
  WGMMAEltType getValue() const;
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::triton::nvgpu::WGMMAEltType, ::mlir::triton::nvgpu::WGMMAEltType> {
  template <typename ParserT>
  static FailureOr<::mlir::triton::nvgpu::WGMMAEltType> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for wgmma operand type, either 's8', 's32', 'e4m3', 'e5m2', 'f16', 'bf16', 'tf32', or 'f32'");

    // Symbolize the keyword.
    if (::std::optional<::mlir::triton::nvgpu::WGMMAEltType> attr = ::mlir::triton::nvgpu::symbolizeEnum<::mlir::triton::nvgpu::WGMMAEltType>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid wgmma operand type, either 's8', 's32', 'e4m3', 'e5m2', 'f16', 'bf16', 'tf32', or 'f32' specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::triton::nvgpu::WGMMAEltType value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::triton::nvgpu::WGMMAEltType> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::triton::nvgpu::WGMMAEltType getEmptyKey() {
    return static_cast<::mlir::triton::nvgpu::WGMMAEltType>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::triton::nvgpu::WGMMAEltType getTombstoneKey() {
    return static_cast<::mlir::triton::nvgpu::WGMMAEltType>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::triton::nvgpu::WGMMAEltType &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::triton::nvgpu::WGMMAEltType &lhs, const ::mlir::triton::nvgpu::WGMMAEltType &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace triton {
namespace nvgpu {
// wgmma layout, either 'row' or 'col'
enum class WGMMALayout : uint32_t {
  row = 0,
  col = 1,
};

::std::optional<WGMMALayout> symbolizeWGMMALayout(uint32_t);
::llvm::StringRef stringifyWGMMALayout(WGMMALayout);
::std::optional<WGMMALayout> symbolizeWGMMALayout(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForWGMMALayout() {
  return 1;
}


inline ::llvm::StringRef stringifyEnum(WGMMALayout enumValue) {
  return stringifyWGMMALayout(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<WGMMALayout> symbolizeEnum<WGMMALayout>(::llvm::StringRef str) {
  return symbolizeWGMMALayout(str);
}

class WGMMALayoutAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = WGMMALayout;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static WGMMALayoutAttr get(::mlir::MLIRContext *context, WGMMALayout val);
  WGMMALayout getValue() const;
};
} // namespace nvgpu
} // namespace triton
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::triton::nvgpu::WGMMALayout, ::mlir::triton::nvgpu::WGMMALayout> {
  template <typename ParserT>
  static FailureOr<::mlir::triton::nvgpu::WGMMALayout> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for wgmma layout, either 'row' or 'col'");

    // Symbolize the keyword.
    if (::std::optional<::mlir::triton::nvgpu::WGMMALayout> attr = ::mlir::triton::nvgpu::symbolizeEnum<::mlir::triton::nvgpu::WGMMALayout>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid wgmma layout, either 'row' or 'col' specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::triton::nvgpu::WGMMALayout value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::triton::nvgpu::WGMMALayout> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::triton::nvgpu::WGMMALayout getEmptyKey() {
    return static_cast<::mlir::triton::nvgpu::WGMMALayout>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::triton::nvgpu::WGMMALayout getTombstoneKey() {
    return static_cast<::mlir::triton::nvgpu::WGMMALayout>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::triton::nvgpu::WGMMALayout &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::triton::nvgpu::WGMMALayout &lhs, const ::mlir::triton::nvgpu::WGMMALayout &rhs) {
    return lhs == rhs;
  }
};
}

