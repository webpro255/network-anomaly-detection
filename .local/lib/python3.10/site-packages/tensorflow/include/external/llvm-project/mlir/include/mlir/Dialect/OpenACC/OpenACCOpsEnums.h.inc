/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: OpenACCOps.td                                                        *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace acc {
// DefaultValue Clause
enum class ClauseDefaultValue : uint32_t {
  Present = 0,
  None = 1,
};

::std::optional<ClauseDefaultValue> symbolizeClauseDefaultValue(uint32_t);
::llvm::StringRef stringifyClauseDefaultValue(ClauseDefaultValue);
::std::optional<ClauseDefaultValue> symbolizeClauseDefaultValue(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForClauseDefaultValue() {
  return 1;
}


inline ::llvm::StringRef stringifyEnum(ClauseDefaultValue enumValue) {
  return stringifyClauseDefaultValue(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<ClauseDefaultValue> symbolizeEnum<ClauseDefaultValue>(::llvm::StringRef str) {
  return symbolizeClauseDefaultValue(str);
}
} // namespace acc
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::acc::ClauseDefaultValue, ::mlir::acc::ClauseDefaultValue> {
  template <typename ParserT>
  static FailureOr<::mlir::acc::ClauseDefaultValue> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for DefaultValue Clause");

    // Symbolize the keyword.
    if (::std::optional<::mlir::acc::ClauseDefaultValue> attr = ::mlir::acc::symbolizeEnum<::mlir::acc::ClauseDefaultValue>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid DefaultValue Clause specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::acc::ClauseDefaultValue value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::acc::ClauseDefaultValue> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::acc::ClauseDefaultValue getEmptyKey() {
    return static_cast<::mlir::acc::ClauseDefaultValue>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::acc::ClauseDefaultValue getTombstoneKey() {
    return static_cast<::mlir::acc::ClauseDefaultValue>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::acc::ClauseDefaultValue &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::acc::ClauseDefaultValue &lhs, const ::mlir::acc::ClauseDefaultValue &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace acc {
// data clauses supported by OpenACC
enum class DataClause : uint64_t {
  acc_copyin = 1,
  acc_copyin_readonly = 2,
  acc_copy = 3,
  acc_copyout = 4,
  acc_copyout_zero = 5,
  acc_present = 6,
  acc_create = 7,
  acc_create_zero = 8,
  acc_delete = 9,
  acc_attach = 10,
  acc_detach = 11,
  acc_no_create = 12,
  acc_private = 13,
  acc_firstprivate = 14,
  acc_deviceptr = 15,
  acc_getdeviceptr = 16,
  acc_update_host = 17,
  acc_update_self = 18,
  acc_update_device = 19,
  acc_use_device = 20,
  acc_reduction = 21,
  acc_declare_device_resident = 22,
  acc_declare_link = 23,
  acc_cache = 24,
  acc_cache_readonly = 25,
};

::std::optional<DataClause> symbolizeDataClause(uint64_t);
::llvm::StringRef stringifyDataClause(DataClause);
::std::optional<DataClause> symbolizeDataClause(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForDataClause() {
  return 25;
}


inline ::llvm::StringRef stringifyEnum(DataClause enumValue) {
  return stringifyDataClause(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<DataClause> symbolizeEnum<DataClause>(::llvm::StringRef str) {
  return symbolizeDataClause(str);
}
} // namespace acc
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::acc::DataClause, ::mlir::acc::DataClause> {
  template <typename ParserT>
  static FailureOr<::mlir::acc::DataClause> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for data clauses supported by OpenACC");

    // Symbolize the keyword.
    if (::std::optional<::mlir::acc::DataClause> attr = ::mlir::acc::symbolizeEnum<::mlir::acc::DataClause>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid data clauses supported by OpenACC specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::acc::DataClause value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::acc::DataClause> {
  using StorageInfo = ::llvm::DenseMapInfo<uint64_t>;

  static inline ::mlir::acc::DataClause getEmptyKey() {
    return static_cast<::mlir::acc::DataClause>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::acc::DataClause getTombstoneKey() {
    return static_cast<::mlir::acc::DataClause>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::acc::DataClause &val) {
    return StorageInfo::getHashValue(static_cast<uint64_t>(val));
  }

  static bool isEqual(const ::mlir::acc::DataClause &lhs, const ::mlir::acc::DataClause &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace acc {
// built-in device type supported by OpenACC
enum class DeviceType : uint32_t {
  None = 0,
  Star = 1,
  Default = 2,
  Host = 3,
  Multicore = 4,
  Nvidia = 5,
  Radeon = 6,
};

::std::optional<DeviceType> symbolizeDeviceType(uint32_t);
::llvm::StringRef stringifyDeviceType(DeviceType);
::std::optional<DeviceType> symbolizeDeviceType(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForDeviceType() {
  return 6;
}


inline ::llvm::StringRef stringifyEnum(DeviceType enumValue) {
  return stringifyDeviceType(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<DeviceType> symbolizeEnum<DeviceType>(::llvm::StringRef str) {
  return symbolizeDeviceType(str);
}
} // namespace acc
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::acc::DeviceType, ::mlir::acc::DeviceType> {
  template <typename ParserT>
  static FailureOr<::mlir::acc::DeviceType> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for built-in device type supported by OpenACC");

    // Symbolize the keyword.
    if (::std::optional<::mlir::acc::DeviceType> attr = ::mlir::acc::symbolizeEnum<::mlir::acc::DeviceType>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid built-in device type supported by OpenACC specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::acc::DeviceType value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::acc::DeviceType> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::acc::DeviceType getEmptyKey() {
    return static_cast<::mlir::acc::DeviceType>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::acc::DeviceType getTombstoneKey() {
    return static_cast<::mlir::acc::DeviceType>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::acc::DeviceType &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::acc::DeviceType &lhs, const ::mlir::acc::DeviceType &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace acc {
// Differentiate the different gang arg values
enum class GangArgType : uint32_t {
  Num = 0,
  Dim = 1,
  Static = 2,
};

::std::optional<GangArgType> symbolizeGangArgType(uint32_t);
::llvm::StringRef stringifyGangArgType(GangArgType);
::std::optional<GangArgType> symbolizeGangArgType(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForGangArgType() {
  return 2;
}


inline ::llvm::StringRef stringifyEnum(GangArgType enumValue) {
  return stringifyGangArgType(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<GangArgType> symbolizeEnum<GangArgType>(::llvm::StringRef str) {
  return symbolizeGangArgType(str);
}
} // namespace acc
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::acc::GangArgType, ::mlir::acc::GangArgType> {
  template <typename ParserT>
  static FailureOr<::mlir::acc::GangArgType> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Differentiate the different gang arg values");

    // Symbolize the keyword.
    if (::std::optional<::mlir::acc::GangArgType> attr = ::mlir::acc::symbolizeEnum<::mlir::acc::GangArgType>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Differentiate the different gang arg values specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::acc::GangArgType value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::acc::GangArgType> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::acc::GangArgType getEmptyKey() {
    return static_cast<::mlir::acc::GangArgType>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::acc::GangArgType getTombstoneKey() {
    return static_cast<::mlir::acc::GangArgType>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::acc::GangArgType &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::acc::GangArgType &lhs, const ::mlir::acc::GangArgType &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace acc {
// built-in reduction operations supported by OpenACC
enum class ReductionOperator : uint32_t {
  AccAdd = 0,
  AccMul = 1,
  AccMax = 2,
  AccMin = 3,
  AccIand = 4,
  AccIor = 5,
  AccXor = 6,
  AccEqv = 7,
  AccNeqv = 8,
  AccLand = 9,
  AccLor = 10,
};

::std::optional<ReductionOperator> symbolizeReductionOperator(uint32_t);
::llvm::StringRef stringifyReductionOperator(ReductionOperator);
::std::optional<ReductionOperator> symbolizeReductionOperator(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForReductionOperator() {
  return 10;
}


inline ::llvm::StringRef stringifyEnum(ReductionOperator enumValue) {
  return stringifyReductionOperator(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<ReductionOperator> symbolizeEnum<ReductionOperator>(::llvm::StringRef str) {
  return symbolizeReductionOperator(str);
}
} // namespace acc
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::acc::ReductionOperator, ::mlir::acc::ReductionOperator> {
  template <typename ParserT>
  static FailureOr<::mlir::acc::ReductionOperator> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for built-in reduction operations supported by OpenACC");

    // Symbolize the keyword.
    if (::std::optional<::mlir::acc::ReductionOperator> attr = ::mlir::acc::symbolizeEnum<::mlir::acc::ReductionOperator>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid built-in reduction operations supported by OpenACC specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::acc::ReductionOperator value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::acc::ReductionOperator> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::acc::ReductionOperator getEmptyKey() {
    return static_cast<::mlir::acc::ReductionOperator>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::acc::ReductionOperator getTombstoneKey() {
    return static_cast<::mlir::acc::ReductionOperator>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::acc::ReductionOperator &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::acc::ReductionOperator &lhs, const ::mlir::acc::ReductionOperator &rhs) {
    return lhs == rhs;
  }
};
}

