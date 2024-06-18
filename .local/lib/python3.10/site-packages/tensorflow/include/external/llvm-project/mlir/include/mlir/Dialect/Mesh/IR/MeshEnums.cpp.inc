/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Enum Utility Definitions                                                   *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: MeshOps.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace mesh {
::llvm::StringRef stringifyIteratorType(IteratorType val) {
  switch (val) {
    case IteratorType::Parallel: return "parallel";
    case IteratorType::ReductionSum: return "reduction_sum";
    case IteratorType::ReductionMax: return "reduction_max";
    case IteratorType::ReductionMin: return "reduction_min";
    case IteratorType::ReductionGeneric: return "reduction_generic";
    case IteratorType::Invalid: return "invalid";
  }
  return "";
}

::std::optional<IteratorType> symbolizeIteratorType(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<IteratorType>>(str)
      .Case("parallel", IteratorType::Parallel)
      .Case("reduction_sum", IteratorType::ReductionSum)
      .Case("reduction_max", IteratorType::ReductionMax)
      .Case("reduction_min", IteratorType::ReductionMin)
      .Case("reduction_generic", IteratorType::ReductionGeneric)
      .Case("invalid", IteratorType::Invalid)
      .Default(::std::nullopt);
}
::std::optional<IteratorType> symbolizeIteratorType(uint32_t value) {
  switch (value) {
  case 1: return IteratorType::Parallel;
  case 2: return IteratorType::ReductionSum;
  case 3: return IteratorType::ReductionMax;
  case 4: return IteratorType::ReductionMin;
  case 5: return IteratorType::ReductionGeneric;
  case 100: return IteratorType::Invalid;
  default: return ::std::nullopt;
  }
}

} // namespace mesh
} // namespace mlir

namespace mlir {
namespace mesh {
::llvm::StringRef stringifyPartial(Partial val) {
  switch (val) {
    case Partial::Sum: return "sum";
    case Partial::Max: return "max";
    case Partial::Min: return "min";
    case Partial::Generic: return "generic";
  }
  return "";
}

::std::optional<Partial> symbolizePartial(::llvm::StringRef str) {
  return ::llvm::StringSwitch<::std::optional<Partial>>(str)
      .Case("sum", Partial::Sum)
      .Case("max", Partial::Max)
      .Case("min", Partial::Min)
      .Case("generic", Partial::Generic)
      .Default(::std::nullopt);
}
::std::optional<Partial> symbolizePartial(uint32_t value) {
  switch (value) {
  case 1: return Partial::Sum;
  case 2: return Partial::Max;
  case 3: return Partial::Min;
  case 100: return Partial::Generic;
  default: return ::std::nullopt;
  }
}

} // namespace mesh
} // namespace mlir

