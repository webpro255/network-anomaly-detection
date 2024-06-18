/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Declarations                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: lhlo_gpu_ops_enums.td                                                *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace lmhlo_gpu {
// Activation applied with fused convolution
enum class Activation : uint32_t {
  None = 0,
  Sigmoid = 1,
  Tanh = 2,
  Relu = 3,
  Relu6 = 4,
  ReluX = 5,
  BandPass = 6,
  Elu = 7,
  LeakyRelu = 8,
};

::std::optional<Activation> symbolizeActivation(uint32_t);
::llvm::StringRef stringifyActivation(Activation);
::std::optional<Activation> symbolizeActivation(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForActivation() {
  return 8;
}


inline ::llvm::StringRef stringifyEnum(Activation enumValue) {
  return stringifyActivation(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<Activation> symbolizeEnum<Activation>(::llvm::StringRef str) {
  return symbolizeActivation(str);
}
} // namespace lmhlo_gpu
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::lmhlo_gpu::Activation, ::mlir::lmhlo_gpu::Activation> {
  template <typename ParserT>
  static FailureOr<::mlir::lmhlo_gpu::Activation> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Activation applied with fused convolution");

    // Symbolize the keyword.
    if (::std::optional<::mlir::lmhlo_gpu::Activation> attr = ::mlir::lmhlo_gpu::symbolizeEnum<::mlir::lmhlo_gpu::Activation>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Activation applied with fused convolution specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::lmhlo_gpu::Activation value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::lmhlo_gpu::Activation> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::lmhlo_gpu::Activation getEmptyKey() {
    return static_cast<::mlir::lmhlo_gpu::Activation>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::lmhlo_gpu::Activation getTombstoneKey() {
    return static_cast<::mlir::lmhlo_gpu::Activation>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::lmhlo_gpu::Activation &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::lmhlo_gpu::Activation &lhs, const ::mlir::lmhlo_gpu::Activation &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace lmhlo_gpu {
// Epilogue for cublasLt matmul
enum class CublasLtMatmulEpilogue : uint32_t {
  Default = 0,
  Bias = 1,
  Relu = 2,
  BiasRelu = 3,
  Gelu = 4,
  BiasGelu = 5,
  GeluAux = 6,
  BiasGeluAux = 7,
};

::std::optional<CublasLtMatmulEpilogue> symbolizeCublasLtMatmulEpilogue(uint32_t);
::llvm::StringRef stringifyCublasLtMatmulEpilogue(CublasLtMatmulEpilogue);
::std::optional<CublasLtMatmulEpilogue> symbolizeCublasLtMatmulEpilogue(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForCublasLtMatmulEpilogue() {
  return 7;
}


inline ::llvm::StringRef stringifyEnum(CublasLtMatmulEpilogue enumValue) {
  return stringifyCublasLtMatmulEpilogue(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<CublasLtMatmulEpilogue> symbolizeEnum<CublasLtMatmulEpilogue>(::llvm::StringRef str) {
  return symbolizeCublasLtMatmulEpilogue(str);
}
} // namespace lmhlo_gpu
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::lmhlo_gpu::CublasLtMatmulEpilogue, ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue> {
  template <typename ParserT>
  static FailureOr<::mlir::lmhlo_gpu::CublasLtMatmulEpilogue> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for Epilogue for cublasLt matmul");

    // Symbolize the keyword.
    if (::std::optional<::mlir::lmhlo_gpu::CublasLtMatmulEpilogue> attr = ::mlir::lmhlo_gpu::symbolizeEnum<::mlir::lmhlo_gpu::CublasLtMatmulEpilogue>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid Epilogue for cublasLt matmul specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::lmhlo_gpu::CublasLtMatmulEpilogue> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue getEmptyKey() {
    return static_cast<::mlir::lmhlo_gpu::CublasLtMatmulEpilogue>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue getTombstoneKey() {
    return static_cast<::mlir::lmhlo_gpu::CublasLtMatmulEpilogue>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue &lhs, const ::mlir::lmhlo_gpu::CublasLtMatmulEpilogue &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace lmhlo_gpu {
// DAG configuration for Fused Multi-Headed Attention Backward
enum class FusedMhaBackwardDagSignature : uint32_t {
  BackwardScaleBiasSoftmaxDropout = 0,
  BackwardScaleBiasSoftmax = 1,
  BackwardScaleBiasMaskSoftmax = 2,
  BackwardScaleBiasMaskSoftmaxDropout = 3,
  BackwardSoftmax = 4,
  BackwardSoftmaxDropout = 5,
  BackwardScaleMaskSoftmax = 6,
  BackwardScaleMaskSoftmaxDropout = 7,
};

::std::optional<FusedMhaBackwardDagSignature> symbolizeFusedMhaBackwardDagSignature(uint32_t);
::llvm::StringRef stringifyFusedMhaBackwardDagSignature(FusedMhaBackwardDagSignature);
::std::optional<FusedMhaBackwardDagSignature> symbolizeFusedMhaBackwardDagSignature(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForFusedMhaBackwardDagSignature() {
  return 7;
}


inline ::llvm::StringRef stringifyEnum(FusedMhaBackwardDagSignature enumValue) {
  return stringifyFusedMhaBackwardDagSignature(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<FusedMhaBackwardDagSignature> symbolizeEnum<FusedMhaBackwardDagSignature>(::llvm::StringRef str) {
  return symbolizeFusedMhaBackwardDagSignature(str);
}
} // namespace lmhlo_gpu
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature, ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature> {
  template <typename ParserT>
  static FailureOr<::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for DAG configuration for Fused Multi-Headed Attention Backward");

    // Symbolize the keyword.
    if (::std::optional<::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature> attr = ::mlir::lmhlo_gpu::symbolizeEnum<::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid DAG configuration for Fused Multi-Headed Attention Backward specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature getEmptyKey() {
    return static_cast<::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature getTombstoneKey() {
    return static_cast<::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature &lhs, const ::mlir::lmhlo_gpu::FusedMhaBackwardDagSignature &rhs) {
    return lhs == rhs;
  }
};
}

namespace mlir {
namespace lmhlo_gpu {
// DAG configuration for Fused Multi-Headed Attention
enum class FusedMhaDagSignature : uint32_t {
  Default = 0,
  ScaleBiasMaskSoftmax = 1,
  ScaleBiasMaskSoftmaxDropout = 2,
  ScaleMaskSoftmax = 3,
  ScaleMaskSoftmaxDropout = 4,
  SoftmaxDropout = 5,
  Softmax = 6,
  ScaleBiasSoftmaxDropout = 7,
  ScaleBiasSoftmax = 8,
};

::std::optional<FusedMhaDagSignature> symbolizeFusedMhaDagSignature(uint32_t);
::llvm::StringRef stringifyFusedMhaDagSignature(FusedMhaDagSignature);
::std::optional<FusedMhaDagSignature> symbolizeFusedMhaDagSignature(::llvm::StringRef);
inline constexpr unsigned getMaxEnumValForFusedMhaDagSignature() {
  return 8;
}


inline ::llvm::StringRef stringifyEnum(FusedMhaDagSignature enumValue) {
  return stringifyFusedMhaDagSignature(enumValue);
}

template <typename EnumType>
::std::optional<EnumType> symbolizeEnum(::llvm::StringRef);

template <>
inline ::std::optional<FusedMhaDagSignature> symbolizeEnum<FusedMhaDagSignature>(::llvm::StringRef str) {
  return symbolizeFusedMhaDagSignature(str);
}
} // namespace lmhlo_gpu
} // namespace mlir

namespace mlir {
template <typename T, typename>
struct FieldParser;

template<>
struct FieldParser<::mlir::lmhlo_gpu::FusedMhaDagSignature, ::mlir::lmhlo_gpu::FusedMhaDagSignature> {
  template <typename ParserT>
  static FailureOr<::mlir::lmhlo_gpu::FusedMhaDagSignature> parse(ParserT &parser) {
    // Parse the keyword/string containing the enum.
    std::string enumKeyword;
    auto loc = parser.getCurrentLocation();
    if (failed(parser.parseOptionalKeywordOrString(&enumKeyword)))
      return parser.emitError(loc, "expected keyword for DAG configuration for Fused Multi-Headed Attention");

    // Symbolize the keyword.
    if (::std::optional<::mlir::lmhlo_gpu::FusedMhaDagSignature> attr = ::mlir::lmhlo_gpu::symbolizeEnum<::mlir::lmhlo_gpu::FusedMhaDagSignature>(enumKeyword))
      return *attr;
    return parser.emitError(loc, "invalid DAG configuration for Fused Multi-Headed Attention specification: ") << enumKeyword;
  }
};
} // namespace mlir

namespace llvm {
inline ::llvm::raw_ostream &operator<<(::llvm::raw_ostream &p, ::mlir::lmhlo_gpu::FusedMhaDagSignature value) {
  auto valueStr = stringifyEnum(value);
  return p << valueStr;
}
} // namespace llvm

namespace llvm {
template<> struct DenseMapInfo<::mlir::lmhlo_gpu::FusedMhaDagSignature> {
  using StorageInfo = ::llvm::DenseMapInfo<uint32_t>;

  static inline ::mlir::lmhlo_gpu::FusedMhaDagSignature getEmptyKey() {
    return static_cast<::mlir::lmhlo_gpu::FusedMhaDagSignature>(StorageInfo::getEmptyKey());
  }

  static inline ::mlir::lmhlo_gpu::FusedMhaDagSignature getTombstoneKey() {
    return static_cast<::mlir::lmhlo_gpu::FusedMhaDagSignature>(StorageInfo::getTombstoneKey());
  }

  static unsigned getHashValue(const ::mlir::lmhlo_gpu::FusedMhaDagSignature &val) {
    return StorageInfo::getHashValue(static_cast<uint32_t>(val));
  }

  static bool isEqual(const ::mlir::lmhlo_gpu::FusedMhaDagSignature &lhs, const ::mlir::lmhlo_gpu::FusedMhaDagSignature &rhs) {
    return lhs == rhs;
  }
};
}

