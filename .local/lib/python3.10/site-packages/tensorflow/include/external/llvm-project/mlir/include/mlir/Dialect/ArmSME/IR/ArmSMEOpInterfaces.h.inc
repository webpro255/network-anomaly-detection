/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

class ArmSMETileOpInterface;
namespace detail {
struct ArmSMETileOpInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    void (*setTileId)(const Concept *impl, ::mlir::Operation *, mlir::IntegerAttr);
    mlir::IntegerAttr (*getTileId)(const Concept *impl, ::mlir::Operation *);
    std::optional<::mlir::arm_sme::ArmSMETileType> (*getAllocatedTileType)(const Concept *impl, ::mlir::Operation *);
    VectorType (*getTileType)(const Concept *impl, ::mlir::Operation *);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ArmSMETileOpInterface;
    Model() : Concept{setTileId, getTileId, getAllocatedTileType, getTileType} {}

    static inline void setTileId(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, mlir::IntegerAttr tileId);
    static inline mlir::IntegerAttr getTileId(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline std::optional<::mlir::arm_sme::ArmSMETileType> getAllocatedTileType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline VectorType getTileType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ArmSMETileOpInterface;
    FallbackModel() : Concept{setTileId, getTileId, getAllocatedTileType, getTileType} {}

    static inline void setTileId(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, mlir::IntegerAttr tileId);
    static inline mlir::IntegerAttr getTileId(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline std::optional<::mlir::arm_sme::ArmSMETileType> getAllocatedTileType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline VectorType getTileType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
    void setTileId(::mlir::Operation *tablegen_opaque_val, mlir::IntegerAttr tileId) const;
    mlir::IntegerAttr getTileId(::mlir::Operation *tablegen_opaque_val) const;
    std::optional<::mlir::arm_sme::ArmSMETileType> getAllocatedTileType(::mlir::Operation *tablegen_opaque_val) const;
  };
};template <typename ConcreteOp>
struct ArmSMETileOpInterfaceTrait;

} // namespace detail
class ArmSMETileOpInterface : public ::mlir::OpInterface<ArmSMETileOpInterface, detail::ArmSMETileOpInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<ArmSMETileOpInterface, detail::ArmSMETileOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::ArmSMETileOpInterfaceTrait<ConcreteOp> {};
  /// Sets the tile ID for this operation.
  void setTileId(mlir::IntegerAttr tileId);
  /// Returns the tile ID assigned to this operation. This will be null before
  /// tile allocation.
  mlir::IntegerAttr getTileId();
  /// The type of tile this operation allocates. Returns none (std::nullopt)
  /// if this operation does not allocate a tile.
  std::optional<::mlir::arm_sme::ArmSMETileType> getAllocatedTileType();
  /// Returns the VectorType of the tile used by this operation.
  VectorType getTileType();

    // A helper to create a new operation and propagate this operations tile ID.
    template<typename T, typename... Args>
    T createOpAndForwardTileId(::mlir::RewriterBase& rewriter, ::mlir::Location loc, Args &&...args) {
      auto op = rewriter.create<T>(loc, std::forward<Args>(args)...);
      if (auto tileOp = ::llvm::dyn_cast<ArmSMETileOpInterface>(op.getOperation()))
        tileOp.setTileId((*this).getTileId());
      return op;
    }

    // A helper to replace this operation and forward its tile ID (if present).
    template<typename T, typename... Args>
    T replaceWithAndForwardTileId(::mlir::RewriterBase& rewriter, Args &&...args) {
      auto newOp = createOpAndForwardTileId<T>(rewriter, (*this).getLoc(), std::forward<Args>(args)...);
      rewriter.replaceOp((*this), newOp);
      return newOp;
    }

    bool isInMemoryTile() {
      auto tileId = getTileId();
      return tileId && tileId.getInt() >= kInMemoryTileIdBase;
    }
};
namespace detail {
  template <typename ConcreteOp>
  struct ArmSMETileOpInterfaceTrait : public ::mlir::OpInterface<ArmSMETileOpInterface, detail::ArmSMETileOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    /// Sets the tile ID for this operation.
    void setTileId(mlir::IntegerAttr tileId) {
      if (!tileId)
          return;
        ::mlir::Operation* op = this->getOperation();
        op->setAttr("tile_id", tileId);
    }
    /// Returns the tile ID assigned to this operation. This will be null before
    /// tile allocation.
    mlir::IntegerAttr getTileId() {
      ::mlir::Operation* op = this->getOperation();
        return op->getAttrOfType<mlir::IntegerAttr>("tile_id");
    }
    /// The type of tile this operation allocates. Returns none (std::nullopt)
    /// if this operation does not allocate a tile.
    std::optional<::mlir::arm_sme::ArmSMETileType> getAllocatedTileType() {
      // This operation does not allocate a tile.
        return std::nullopt;
    }
    static ::mlir::LogicalResult verifyTrait(::mlir::Operation *op) {
      return ::mlir::arm_sme::verifyOperationHasValidTileId(op);
    }

    // A helper to create a new operation and propagate this operations tile ID.
    template<typename T, typename... Args>
    T createOpAndForwardTileId(::mlir::RewriterBase& rewriter, ::mlir::Location loc, Args &&...args) {
      auto op = rewriter.create<T>(loc, std::forward<Args>(args)...);
      if (auto tileOp = ::llvm::dyn_cast<ArmSMETileOpInterface>(op.getOperation()))
        tileOp.setTileId((*static_cast<ConcreteOp *>(this)).getTileId());
      return op;
    }

    // A helper to replace this operation and forward its tile ID (if present).
    template<typename T, typename... Args>
    T replaceWithAndForwardTileId(::mlir::RewriterBase& rewriter, Args &&...args) {
      auto newOp = createOpAndForwardTileId<T>(rewriter, (*static_cast<ConcreteOp *>(this)).getLoc(), std::forward<Args>(args)...);
      rewriter.replaceOp((*static_cast<ConcreteOp *>(this)), newOp);
      return newOp;
    }

    bool isInMemoryTile() {
      auto tileId = getTileId();
      return tileId && tileId.getInt() >= kInMemoryTileIdBase;
    }
  
  };
}// namespace detail
template<typename ConcreteOp>
void detail::ArmSMETileOpInterfaceInterfaceTraits::Model<ConcreteOp>::setTileId(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, mlir::IntegerAttr tileId) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).setTileId(tileId);
}
template<typename ConcreteOp>
mlir::IntegerAttr detail::ArmSMETileOpInterfaceInterfaceTraits::Model<ConcreteOp>::getTileId(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getTileId();
}
template<typename ConcreteOp>
std::optional<::mlir::arm_sme::ArmSMETileType> detail::ArmSMETileOpInterfaceInterfaceTraits::Model<ConcreteOp>::getAllocatedTileType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getAllocatedTileType();
}
template<typename ConcreteOp>
VectorType detail::ArmSMETileOpInterfaceInterfaceTraits::Model<ConcreteOp>::getTileType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getTileType();
}
template<typename ConcreteOp>
void detail::ArmSMETileOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::setTileId(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, mlir::IntegerAttr tileId) {
  return static_cast<const ConcreteOp *>(impl)->setTileId(tablegen_opaque_val, tileId);
}
template<typename ConcreteOp>
mlir::IntegerAttr detail::ArmSMETileOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getTileId(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getTileId(tablegen_opaque_val);
}
template<typename ConcreteOp>
std::optional<::mlir::arm_sme::ArmSMETileType> detail::ArmSMETileOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getAllocatedTileType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getAllocatedTileType(tablegen_opaque_val);
}
template<typename ConcreteOp>
VectorType detail::ArmSMETileOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getTileType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getTileType(tablegen_opaque_val);
}
template<typename ConcreteModel, typename ConcreteOp>
void detail::ArmSMETileOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::setTileId(::mlir::Operation *tablegen_opaque_val, mlir::IntegerAttr tileId) const {
if (!tileId)
          return;
        ::mlir::Operation* op = this->getOperation();
        op->setAttr("tile_id", tileId);
}
template<typename ConcreteModel, typename ConcreteOp>
mlir::IntegerAttr detail::ArmSMETileOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getTileId(::mlir::Operation *tablegen_opaque_val) const {
::mlir::Operation* op = this->getOperation();
        return op->getAttrOfType<mlir::IntegerAttr>("tile_id");
}
template<typename ConcreteModel, typename ConcreteOp>
std::optional<::mlir::arm_sme::ArmSMETileType> detail::ArmSMETileOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getAllocatedTileType(::mlir::Operation *tablegen_opaque_val) const {
// This operation does not allocate a tile.
        return std::nullopt;
}
