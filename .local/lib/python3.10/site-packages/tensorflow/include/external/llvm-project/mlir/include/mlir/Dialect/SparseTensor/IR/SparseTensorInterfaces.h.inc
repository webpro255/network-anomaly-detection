/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace sparse_tensor {
class StageWithSortSparseOp;
namespace detail {
struct StageWithSortSparseOpInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    bool (*needsExtraSort)(const Concept *impl, ::mlir::Operation *);
    ::mlir::LogicalResult (*stageWithSort)(const Concept *impl, ::mlir::Operation *, ::mlir::PatternRewriter &);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::sparse_tensor::StageWithSortSparseOp;
    Model() : Concept{needsExtraSort, stageWithSort} {}

    static inline bool needsExtraSort(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::mlir::LogicalResult stageWithSort(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::PatternRewriter & rewriter);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::sparse_tensor::StageWithSortSparseOp;
    FallbackModel() : Concept{needsExtraSort, stageWithSort} {}

    static inline bool needsExtraSort(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline ::mlir::LogicalResult stageWithSort(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::PatternRewriter & rewriter);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
  };
};template <typename ConcreteOp>
struct StageWithSortSparseOpTrait;

} // namespace detail
class StageWithSortSparseOp : public ::mlir::OpInterface<StageWithSortSparseOp, detail::StageWithSortSparseOpInterfaceTraits> {
public:
  using ::mlir::OpInterface<StageWithSortSparseOp, detail::StageWithSortSparseOpInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::StageWithSortSparseOpTrait<ConcreteOp> {};
  /// Return true if the operation needs an extra sort to produce the final result.
  bool needsExtraSort();
  /// Stage the operation, return the final result value after staging.
  ::mlir::LogicalResult stageWithSort(::mlir::PatternRewriter & rewriter);
};
namespace detail {
  template <typename ConcreteOp>
  struct StageWithSortSparseOpTrait : public ::mlir::OpInterface<StageWithSortSparseOp, detail::StageWithSortSparseOpInterfaceTraits>::Trait<ConcreteOp> {
  };
}// namespace detail
} // namespace sparse_tensor
} // namespace mlir
namespace mlir {
namespace sparse_tensor {
template<typename ConcreteOp>
bool detail::StageWithSortSparseOpInterfaceTraits::Model<ConcreteOp>::needsExtraSort(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).needsExtraSort();
}
template<typename ConcreteOp>
::mlir::LogicalResult detail::StageWithSortSparseOpInterfaceTraits::Model<ConcreteOp>::stageWithSort(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::PatternRewriter & rewriter) {
  return detail::stageWithSortImpl((llvm::cast<ConcreteOp>(tablegen_opaque_val)), rewriter);
}
template<typename ConcreteOp>
bool detail::StageWithSortSparseOpInterfaceTraits::FallbackModel<ConcreteOp>::needsExtraSort(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->needsExtraSort(tablegen_opaque_val);
}
template<typename ConcreteOp>
::mlir::LogicalResult detail::StageWithSortSparseOpInterfaceTraits::FallbackModel<ConcreteOp>::stageWithSort(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, ::mlir::PatternRewriter & rewriter) {
  return static_cast<const ConcreteOp *>(impl)->stageWithSort(tablegen_opaque_val, rewriter);
}
} // namespace sparse_tensor
} // namespace mlir
