/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: TritonOps.td                                                         *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace triton {
// allowed 32-bit signless integer cases: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
enum class RMWOp : uint32_t {
  AND = 1,
  OR = 2,
  XOR = 3,
  ADD = 4,
  FADD = 5,
  MAX = 6,
  MIN = 7,
  UMAX = 8,
  UMIN = 9,
  XCHG = 10,
};

::std::optional<RMWOp> symbolizeRMWOp(uint32_t);
::llvm::StringRef stringifyRMWOp(RMWOp);
::std::optional<RMWOp> symbolizeRMWOp(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForRMWOp() {
  return 10;
}


inline ::llvm::StringRef stringifyEnum(RMWOp enumValue) {
  return stringifyRMWOp(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<RMWOp> symbolizeEnum<RMWOp>(::llvm::StringRef str) {
  return symbolizeRMWOp(str);
}

class RMWOpAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = RMWOp;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static RMWOpAttr get(::mlir::MLIRContext *context, RMWOp val);
  RMWOp getValue() const;
};
} // namespace triton
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::triton::RMWOp, ::mlir::triton::RMWOp> {
  template <typename ParserT>
  static FailureOr<::mlir::triton::RMWOp> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for allowed 32-bit signless integer cases: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10");

    // Symbolize the keyword.
    if (::std::optional<::mlir::triton::RMWOp> attr = ::mlir::triton::symbolizeEnum<::mlir::triton::RMWOp>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid allowed 32-bit signless integer cases: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::triton::RMWOp value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::triton::RMWOp> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::triton::RMWOp getEmptyKey() {
    return static_cast<::mlir::triton::RMWOp>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::triton::RMWOp getTombstoneKey() {
    return static_cast<::mlir::triton::RMWOp>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::triton::RMWOp &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::triton::RMWOp &lhs, const ::mlir::triton::RMWOp &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace triton {
// allowed 32-bit signless integer cases: 1, 2, 3, 4, 5, 6
enum class CacheModifier : uint32_t {
  NONE = 1,
  CA = 2,
  CG = 3,
  WB = 4,
  CS = 5,
  WT = 6,
};

::std::optional<CacheModifier> symbolizeCacheModifier(uint32_t);
::llvm::StringRef stringifyCacheModifier(CacheModifier);
::std::optional<CacheModifier> symbolizeCacheModifier(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForCacheModifier() {
  return 6;
}


inline ::llvm::StringRef stringifyEnum(CacheModifier enumValue) {
  return stringifyCacheModifier(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<CacheModifier> symbolizeEnum<CacheModifier>(::llvm::StringRef str) {
  return symbolizeCacheModifier(str);
}

class CacheModifierAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = CacheModifier;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static CacheModifierAttr get(::mlir::MLIRContext *context, CacheModifier val);
  CacheModifier getValue() const;
};
} // namespace triton
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::triton::CacheModifier, ::mlir::triton::CacheModifier> {
  template <typename ParserT>
  static FailureOr<::mlir::triton::CacheModifier> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for allowed 32-bit signless integer cases: 1, 2, 3, 4, 5, 6");

    // Symbolize the keyword.
    if (::std::optional<::mlir::triton::CacheModifier> attr = ::mlir::triton::symbolizeEnum<::mlir::triton::CacheModifier>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid allowed 32-bit signless integer cases: 1, 2, 3, 4, 5, 6 specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::triton::CacheModifier value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::triton::CacheModifier> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::triton::CacheModifier getEmptyKey() {
    return static_cast<::mlir::triton::CacheModifier>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::triton::CacheModifier getTombstoneKey() {
    return static_cast<::mlir::triton::CacheModifier>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::triton::CacheModifier &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::triton::CacheModifier &lhs, const ::mlir::triton::CacheModifier &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace triton {
// allowed 32-bit signless integer cases: 1, 2, 3
enum class EvictionPolicy : uint32_t {
  NORMAL = 1,
  EVICT_FIRST = 2,
  EVICT_LAST = 3,
};

::std::optional<EvictionPolicy> symbolizeEvictionPolicy(uint32_t);
::llvm::StringRef stringifyEvictionPolicy(EvictionPolicy);
::std::optional<EvictionPolicy> symbolizeEvictionPolicy(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForEvictionPolicy() {
  return 3;
}


inline ::llvm::StringRef stringifyEnum(EvictionPolicy enumValue) {
  return stringifyEvictionPolicy(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<EvictionPolicy> symbolizeEnum<EvictionPolicy>(::llvm::StringRef str) {
  return symbolizeEvictionPolicy(str);
}

class EvictionPolicyAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = EvictionPolicy;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static EvictionPolicyAttr get(::mlir::MLIRContext *context, EvictionPolicy val);
  EvictionPolicy getValue() const;
};
} // namespace triton
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::triton::EvictionPolicy, ::mlir::triton::EvictionPolicy> {
  template <typename ParserT>
  static FailureOr<::mlir::triton::EvictionPolicy> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for allowed 32-bit signless integer cases: 1, 2, 3");

    // Symbolize the keyword.
    if (::std::optional<::mlir::triton::EvictionPolicy> attr = ::mlir::triton::symbolizeEnum<::mlir::triton::EvictionPolicy>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid allowed 32-bit signless integer cases: 1, 2, 3 specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::triton::EvictionPolicy value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::triton::EvictionPolicy> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::triton::EvictionPolicy getEmptyKey() {
    return static_cast<::mlir::triton::EvictionPolicy>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::triton::EvictionPolicy getTombstoneKey() {
    return static_cast<::mlir::triton::EvictionPolicy>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::triton::EvictionPolicy &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::triton::EvictionPolicy &lhs, const ::mlir::triton::EvictionPolicy &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace triton {
// allowed 32-bit signless integer cases: 1, 2, 3, 4
enum class MemSemantic : uint32_t {
  RELAXED = 1,
  ACQUIRE = 2,
  RELEASE = 3,
  ACQUIRE_RELEASE = 4,
};

::std::optional<MemSemantic> symbolizeMemSemantic(uint32_t);
::llvm::StringRef stringifyMemSemantic(MemSemantic);
::std::optional<MemSemantic> symbolizeMemSemantic(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForMemSemantic() {
  return 4;
}


inline ::llvm::StringRef stringifyEnum(MemSemantic enumValue) {
  return stringifyMemSemantic(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<MemSemantic> symbolizeEnum<MemSemantic>(::llvm::StringRef str) {
  return symbolizeMemSemantic(str);
}

class MemSemanticAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = MemSemantic;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static MemSemanticAttr get(::mlir::MLIRContext *context, MemSemantic val);
  MemSemantic getValue() const;
};
} // namespace triton
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::triton::MemSemantic, ::mlir::triton::MemSemantic> {
  template <typename ParserT>
  static FailureOr<::mlir::triton::MemSemantic> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for allowed 32-bit signless integer cases: 1, 2, 3, 4");

    // Symbolize the keyword.
    if (::std::optional<::mlir::triton::MemSemantic> attr = ::mlir::triton::symbolizeEnum<::mlir::triton::MemSemantic>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid allowed 32-bit signless integer cases: 1, 2, 3, 4 specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::triton::MemSemantic value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::triton::MemSemantic> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::triton::MemSemantic getEmptyKey() {
    return static_cast<::mlir::triton::MemSemantic>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::triton::MemSemantic getTombstoneKey() {
    return static_cast<::mlir::triton::MemSemantic>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::triton::MemSemantic &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::triton::MemSemantic &lhs, const ::mlir::triton::MemSemantic &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace triton {
// allowed 32-bit signless integer cases: 1, 2, 3
enum class MemSyncScope : uint32_t {
  GPU = 1,
  CTA = 2,
  SYSTEM = 3,
};

::std::optional<MemSyncScope> symbolizeMemSyncScope(uint32_t);
::llvm::StringRef stringifyMemSyncScope(MemSyncScope);
::std::optional<MemSyncScope> symbolizeMemSyncScope(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForMemSyncScope() {
  return 3;
}


inline ::llvm::StringRef stringifyEnum(MemSyncScope enumValue) {
  return stringifyMemSyncScope(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<MemSyncScope> symbolizeEnum<MemSyncScope>(::llvm::StringRef str) {
  return symbolizeMemSyncScope(str);
}

class MemSyncScopeAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = MemSyncScope;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static MemSyncScopeAttr get(::mlir::MLIRContext *context, MemSyncScope val);
  MemSyncScope getValue() const;
};
} // namespace triton
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::triton::MemSyncScope, ::mlir::triton::MemSyncScope> {
  template <typename ParserT>
  static FailureOr<::mlir::triton::MemSyncScope> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for allowed 32-bit signless integer cases: 1, 2, 3");

    // Symbolize the keyword.
    if (::std::optional<::mlir::triton::MemSyncScope> attr = ::mlir::triton::symbolizeEnum<::mlir::triton::MemSyncScope>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid allowed 32-bit signless integer cases: 1, 2, 3 specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::triton::MemSyncScope value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::triton::MemSyncScope> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::triton::MemSyncScope getEmptyKey() {
    return static_cast<::mlir::triton::MemSyncScope>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::triton::MemSyncScope getTombstoneKey() {
    return static_cast<::mlir::triton::MemSyncScope>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::triton::MemSyncScope &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::triton::MemSyncScope &lhs, const ::mlir::triton::MemSyncScope &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace triton {
// allowed 32-bit signless integer cases: 1, 2
enum class PaddingOption : uint32_t {
  PAD_ZERO = 1,
  PAD_NAN = 2,
};

::std::optional<PaddingOption> symbolizePaddingOption(uint32_t);
::llvm::StringRef stringifyPaddingOption(PaddingOption);
::std::optional<PaddingOption> symbolizePaddingOption(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForPaddingOption() {
  return 2;
}


inline ::llvm::StringRef stringifyEnum(PaddingOption enumValue) {
  return stringifyPaddingOption(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<PaddingOption> symbolizeEnum<PaddingOption>(::llvm::StringRef str) {
  return symbolizePaddingOption(str);
}

class PaddingOptionAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = PaddingOption;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static PaddingOptionAttr get(::mlir::MLIRContext *context, PaddingOption val);
  PaddingOption getValue() const;
};
} // namespace triton
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::triton::PaddingOption, ::mlir::triton::PaddingOption> {
  template <typename ParserT>
  static FailureOr<::mlir::triton::PaddingOption> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for allowed 32-bit signless integer cases: 1, 2");

    // Symbolize the keyword.
    if (::std::optional<::mlir::triton::PaddingOption> attr = ::mlir::triton::symbolizeEnum<::mlir::triton::PaddingOption>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid allowed 32-bit signless integer cases: 1, 2 specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::triton::PaddingOption value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::triton::PaddingOption> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::triton::PaddingOption getEmptyKey() {
    return static_cast<::mlir::triton::PaddingOption>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::triton::PaddingOption getTombstoneKey() {
    return static_cast<::mlir::triton::PaddingOption>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::triton::PaddingOption &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::triton::PaddingOption &lhs, const ::mlir::triton::PaddingOption &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace triton {
// allowed 32-bit signless integer cases: 0, 1, 2
enum class ProgramIDDim : uint32_t {
  X = 0,
  Y = 1,
  Z = 2,
};

::std::optional<ProgramIDDim> symbolizeProgramIDDim(uint32_t);
::llvm::StringRef stringifyProgramIDDim(ProgramIDDim);
::std::optional<ProgramIDDim> symbolizeProgramIDDim(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForProgramIDDim() {
  return 2;
}


inline ::llvm::StringRef stringifyEnum(ProgramIDDim enumValue) {
  return stringifyProgramIDDim(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<ProgramIDDim> symbolizeEnum<ProgramIDDim>(::llvm::StringRef str) {
  return symbolizeProgramIDDim(str);
}

class ProgramIDDimAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = ProgramIDDim;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static ProgramIDDimAttr get(::mlir::MLIRContext *context, ProgramIDDim val);
  ProgramIDDim getValue() const;
};
} // namespace triton
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::triton::ProgramIDDim, ::mlir::triton::ProgramIDDim> {
  template <typename ParserT>
  static FailureOr<::mlir::triton::ProgramIDDim> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for allowed 32-bit signless integer cases: 0, 1, 2");

    // Symbolize the keyword.
    if (::std::optional<::mlir::triton::ProgramIDDim> attr = ::mlir::triton::symbolizeEnum<::mlir::triton::ProgramIDDim>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid allowed 32-bit signless integer cases: 0, 1, 2 specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::triton::ProgramIDDim value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::triton::ProgramIDDim> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::triton::ProgramIDDim getEmptyKey() {
    return static_cast<::mlir::triton::ProgramIDDim>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::triton::ProgramIDDim getTombstoneKey() {
    return static_cast<::mlir::triton::ProgramIDDim>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::triton::ProgramIDDim &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::triton::ProgramIDDim &lhs, const ::mlir::triton::ProgramIDDim &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace triton {
// allowed 32-bit signless integer cases: 0, 65535
enum class PropagateNan : uint32_t {
  NONE = 0,
  ALL = 65535,
};

::std::optional<PropagateNan> symbolizePropagateNan(uint32_t);
::llvm::StringRef stringifyPropagateNan(PropagateNan);
::std::optional<PropagateNan> symbolizePropagateNan(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForPropagateNan() {
  return 65535;
}


inline ::llvm::StringRef stringifyEnum(PropagateNan enumValue) {
  return stringifyPropagateNan(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<PropagateNan> symbolizeEnum<PropagateNan>(::llvm::StringRef str) {
  return symbolizePropagateNan(str);
}

class PropagateNanAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = PropagateNan;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static PropagateNanAttr get(::mlir::MLIRContext *context, PropagateNan val);
  PropagateNan getValue() const;
};
} // namespace triton
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::triton::PropagateNan, ::mlir::triton::PropagateNan> {
  template <typename ParserT>
  static FailureOr<::mlir::triton::PropagateNan> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for allowed 32-bit signless integer cases: 0, 65535");

    // Symbolize the keyword.
    if (::std::optional<::mlir::triton::PropagateNan> attr = ::mlir::triton::symbolizeEnum<::mlir::triton::PropagateNan>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid allowed 32-bit signless integer cases: 0, 65535 specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::triton::PropagateNan value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::triton::PropagateNan> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::triton::PropagateNan getEmptyKey() {
    return static_cast<::mlir::triton::PropagateNan>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::triton::PropagateNan getTombstoneKey() {
    return static_cast<::mlir::triton::PropagateNan>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::triton::PropagateNan &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::triton::PropagateNan &lhs, const ::mlir::triton::PropagateNan &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace triton {
// allowed 32-bit signless integer cases: 0, 1
enum class RoundingMode : uint32_t {
  RTZ = 0,
  RTNE = 1,
};

::std::optional<RoundingMode> symbolizeRoundingMode(uint32_t);
::llvm::StringRef stringifyRoundingMode(RoundingMode);
::std::optional<RoundingMode> symbolizeRoundingMode(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForRoundingMode() {
  return 1;
}


inline ::llvm::StringRef stringifyEnum(RoundingMode enumValue) {
  return stringifyRoundingMode(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<RoundingMode> symbolizeEnum<RoundingMode>(::llvm::StringRef str) {
  return symbolizeRoundingMode(str);
}

class RoundingModeAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = RoundingMode;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static RoundingModeAttr get(::mlir::MLIRContext *context, RoundingMode val);
  RoundingMode getValue() const;
};
} // namespace triton
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::triton::RoundingMode, ::mlir::triton::RoundingMode> {
  template <typename ParserT>
  static FailureOr<::mlir::triton::RoundingMode> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for allowed 32-bit signless integer cases: 0, 1");

    // Symbolize the keyword.
    if (::std::optional<::mlir::triton::RoundingMode> attr = ::mlir::triton::symbolizeEnum<::mlir::triton::RoundingMode>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid allowed 32-bit signless integer cases: 0, 1 specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::triton::RoundingMode value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::triton::RoundingMode> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::triton::RoundingMode getEmptyKey() {
    return static_cast<::mlir::triton::RoundingMode>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::triton::RoundingMode getTombstoneKey() {
    return static_cast<::mlir::triton::RoundingMode>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::triton::RoundingMode &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::triton::RoundingMode &lhs, const ::mlir::triton::RoundingMode &rhs) {
    return lhs == rhs;
  }
};
}

