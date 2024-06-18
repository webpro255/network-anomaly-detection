/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: EmitC.td                                                             *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace emitc {
// allowed 64-bit signless integer cases: 0, 1, 2, 3, 4, 5, 6
enum class CmpPredicate : uint64_t {
  eq = 0,
  ne = 1,
  lt = 2,
  le = 3,
  gt = 4,
  ge = 5,
  three_way = 6,
};

::std::optional<CmpPredicate> symbolizeCmpPredicate(uint64_t);
::llvm::StringRef stringifyCmpPredicate(CmpPredicate);
::std::optional<CmpPredicate> symbolizeCmpPredicate(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForCmpPredicate() {
  return 6;
}


inline ::llvm::StringRef stringifyEnum(CmpPredicate enumValue) {
  return stringifyCmpPredicate(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<CmpPredicate> symbolizeEnum<CmpPredicate>(::llvm::StringRef str) {
  return symbolizeCmpPredicate(str);
}

class CmpPredicateAttr : public ::mlir::IntegerAttr {
public:
  using ValueType = CmpPredicate;
  using ::mlir::IntegerAttr::IntegerAttr;
  static bool classof(::mlir::Attribute attr);
  static CmpPredicateAttr get(::mlir::MLIRContext *context, CmpPredicate val);
  CmpPredicate getValue() const;
};
} // namespace emitc
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::emitc::CmpPredicate, ::mlir::emitc::CmpPredicate> {
  template <typename ParserT>
  static FailureOr<::mlir::emitc::CmpPredicate> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for allowed 64-bit signless integer cases: 0, 1, 2, 3, 4, 5, 6");

    // Symbolize the keyword.
    if (::std::optional<::mlir::emitc::CmpPredicate> attr = ::mlir::emitc::symbolizeEnum<::mlir::emitc::CmpPredicate>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid allowed 64-bit signless integer cases: 0, 1, 2, 3, 4, 5, 6 specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::emitc::CmpPredicate value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::emitc::CmpPredicate> {
  using StorageInfo = ::llvm::DenseMapInfo<uint64_t>;

  static inline ::mlir::emitc::CmpPredicate getEmptyKey() {
    return static_cast<::mlir::emitc::CmpPredicate>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::emitc::CmpPredicate getTombstoneKey() {
    return static_cast<::mlir::emitc::CmpPredicate>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::emitc::CmpPredicate &val) {
    return StorageInfo::getHashValue(static_cast<uint64_t>(val));
  }

  static bool isEqual(const ::mlir::emitc::CmpPredicate &lhs, const ::mlir::emitc::CmpPredicate &rhs) {
    return lhs == rhs;
  }
};
}

