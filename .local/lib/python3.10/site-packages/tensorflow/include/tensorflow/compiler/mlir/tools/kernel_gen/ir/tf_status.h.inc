/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: tf_status.td                                                         *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace kernel_gen {
namespace tf_framework {
// error code
enum class ErrorCode : uint32_t {
  OK = 0,
  CANCELLED = 1,
  UNKNOWN = 2,
  INVALID_ARGUMENT = 3,
  DEADLINE_EXCEEDED = 4,
  NOT_FOUND = 5,
  ALREADY_EXISTS = 6,
  PERMISSION_DENIED = 7,
  UNAUTHENTICATED = 16,
  RESOURCE_EXHAUSTED = 8,
  FAILED_PRECONDITION = 9,
  ABORTED = 10,
  OUT_OF_RANGE = 11,
  UNIMPLEMENTED = 12,
  INTERNAL = 13,
  UNAVAILABLE = 14,
  DATA_LOSS = 15,
};

::std::optional<ErrorCode> symbolizeErrorCode(uint32_t);
::llvm::StringRef stringifyErrorCode(ErrorCode);
::std::optional<ErrorCode> symbolizeErrorCode(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForErrorCode() {
  return 16;
}


inline ::llvm::StringRef stringifyEnum(ErrorCode enumValue) {
  return stringifyErrorCode(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<ErrorCode> symbolizeEnum<ErrorCode>(::llvm::StringRef str) {
  return symbolizeErrorCode(str);
}

class ErrorCodeAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = ErrorCode;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static ErrorCodeAttr get(::mlir::MLIRContext *context, ErrorCode val);
  ErrorCode getValue() const;
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::kernel_gen::tf_framework::ErrorCode, ::mlir::kernel_gen::tf_framework::ErrorCode> {
  template <typename ParserT>
  static FailureOr<::mlir::kernel_gen::tf_framework::ErrorCode> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for error code");

    // Symbolize the keyword.
    if (::std::optional<::mlir::kernel_gen::tf_framework::ErrorCode> attr = ::mlir::kernel_gen::tf_framework::symbolizeEnum<::mlir::kernel_gen::tf_framework::ErrorCode>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid error code specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::kernel_gen::tf_framework::ErrorCode value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::kernel_gen::tf_framework::ErrorCode> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::kernel_gen::tf_framework::ErrorCode getEmptyKey() {
    return static_cast<::mlir::kernel_gen::tf_framework::ErrorCode>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::kernel_gen::tf_framework::ErrorCode getTombstoneKey() {
    return static_cast<::mlir::kernel_gen::tf_framework::ErrorCode>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::kernel_gen::tf_framework::ErrorCode &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::kernel_gen::tf_framework::ErrorCode &lhs, const ::mlir::kernel_gen::tf_framework::ErrorCode &rhs) {
    return lhs == rhs;
  }
};
}

