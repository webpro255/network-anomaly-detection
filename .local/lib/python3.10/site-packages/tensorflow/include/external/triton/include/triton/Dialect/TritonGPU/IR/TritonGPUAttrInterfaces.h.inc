/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace triton {
namespace gpu {
class TritonGPU_AttrTrait;
namespace detail {
struct TritonGPU_AttrTraitInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    unsigned (*getTotalElemsPerThread)(const Concept *impl, ::mlir::Attribute , ArrayRef<int64_t>, Type);
    SmallVector<unsigned> (*getElemsPerThread)(const Concept *impl, ::mlir::Attribute , ArrayRef<int64_t>, Type);
  };
  template<typename ConcreteAttr>
  class Model : public Concept {
  public:
    using Interface = ::mlir::triton::gpu::TritonGPU_AttrTrait;
    Model() : Concept{getTotalElemsPerThread, getElemsPerThread} {}

    static inline unsigned getTotalElemsPerThread(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, Type eltTy);
    static inline SmallVector<unsigned> getElemsPerThread(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, Type eltTy);
  };
  template<typename ConcreteAttr>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::triton::gpu::TritonGPU_AttrTrait;
    FallbackModel() : Concept{getTotalElemsPerThread, getElemsPerThread} {}

    static inline unsigned getTotalElemsPerThread(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, Type eltTy);
    static inline SmallVector<unsigned> getElemsPerThread(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, Type eltTy);
  };
  template<typename ConcreteModel, typename ConcreteAttr>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteAttr;
  };
};template <typename ConcreteAttr>
struct TritonGPU_AttrTraitTrait;

} // namespace detail
class TritonGPU_AttrTrait : public ::mlir::AttributeInterface<TritonGPU_AttrTrait, detail::TritonGPU_AttrTraitInterfaceTraits> {
public:
  using ::mlir::AttributeInterface<TritonGPU_AttrTrait, detail::TritonGPU_AttrTraitInterfaceTraits>::AttributeInterface;
  template <typename ConcreteAttr>
  struct Trait : public detail::TritonGPU_AttrTraitTrait<ConcreteAttr> {};
  /// Return total element size per thread.
  unsigned getTotalElemsPerThread(ArrayRef<int64_t> tensorShape, Type eltTy) const;
  /// Return element size per thread in each dimension.
  SmallVector<unsigned> getElemsPerThread(ArrayRef<int64_t> tensorShape, Type eltTy) const;
};
namespace detail {
  template <typename ConcreteAttr>
  struct TritonGPU_AttrTraitTrait : public ::mlir::AttributeInterface<TritonGPU_AttrTrait, detail::TritonGPU_AttrTraitInterfaceTraits>::Trait<ConcreteAttr> {
  };
}// namespace detail
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
class DistributedEncodingTrait;
namespace detail {
struct DistributedEncodingTraitInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    SmallVector<unsigned> (*getCTAsPerCGA)(const Concept *impl, ::mlir::Attribute );
    SmallVector<unsigned> (*getCTAOrder)(const Concept *impl, ::mlir::Attribute );
    SmallVector<unsigned> (*getWarpsPerCTA)(const Concept *impl, ::mlir::Attribute );
    SmallVector<unsigned> (*getWarpOrder)(const Concept *impl, ::mlir::Attribute );
    SmallVector<unsigned> (*getThreadsPerWarp)(const Concept *impl, ::mlir::Attribute );
    SmallVector<unsigned> (*getThreadOrder)(const Concept *impl, ::mlir::Attribute );
    SmallVector<unsigned> (*getSizePerThread)(const Concept *impl, ::mlir::Attribute );
    SmallVector<unsigned> (*getCTASplitNum)(const Concept *impl, ::mlir::Attribute );
    SmallVector<unsigned> (*getShapePerCTATile)(const Concept *impl, ::mlir::Attribute , ArrayRef<int64_t>);
  };
  template<typename ConcreteAttr>
  class Model : public Concept {
  public:
    using Interface = ::mlir::triton::gpu::DistributedEncodingTrait;
    Model() : Concept{getCTAsPerCGA, getCTAOrder, getWarpsPerCTA, getWarpOrder, getThreadsPerWarp, getThreadOrder, getSizePerThread, getCTASplitNum, getShapePerCTATile} {}

    static inline SmallVector<unsigned> getCTAsPerCGA(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getCTAOrder(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getWarpsPerCTA(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getWarpOrder(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getThreadsPerWarp(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getThreadOrder(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getSizePerThread(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getCTASplitNum(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getShapePerCTATile(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape);
  };
  template<typename ConcreteAttr>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::triton::gpu::DistributedEncodingTrait;
    FallbackModel() : Concept{getCTAsPerCGA, getCTAOrder, getWarpsPerCTA, getWarpOrder, getThreadsPerWarp, getThreadOrder, getSizePerThread, getCTASplitNum, getShapePerCTATile} {}

    static inline SmallVector<unsigned> getCTAsPerCGA(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getCTAOrder(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getWarpsPerCTA(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getWarpOrder(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getThreadsPerWarp(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getThreadOrder(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getSizePerThread(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getCTASplitNum(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getShapePerCTATile(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape);
  };
  template<typename ConcreteModel, typename ConcreteAttr>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteAttr;
  };
};template <typename ConcreteAttr>
struct DistributedEncodingTraitTrait;

} // namespace detail
class DistributedEncodingTrait : public ::mlir::AttributeInterface<DistributedEncodingTrait, detail::DistributedEncodingTraitInterfaceTraits> {
public:
  using ::mlir::AttributeInterface<DistributedEncodingTrait, detail::DistributedEncodingTraitInterfaceTraits>::AttributeInterface;
  template <typename ConcreteAttr>
  struct Trait : public detail::DistributedEncodingTraitTrait<ConcreteAttr> {};
  /// Get the shape of the CTAs per CGA.
  SmallVector<unsigned> getCTAsPerCGA() const;
  /// Get the order of the CTAs per CGA. The fastest-changing axis first
  SmallVector<unsigned> getCTAOrder() const;
  /// Get the shape of the warps per CTA.
  SmallVector<unsigned> getWarpsPerCTA() const;
  /// Get the order of the warps per CTA. The fastest-changing axis first
  SmallVector<unsigned> getWarpOrder() const;
  /// Get the shape of the threads per warp
  SmallVector<unsigned> getThreadsPerWarp() const;
  /// Get the order of the threads per warp. The fastest-changing axis first
  SmallVector<unsigned> getThreadOrder() const;
  /// Get the shape of the values per thread.
  SmallVector<unsigned> getSizePerThread() const;
  /// Get the split number of CTAs per CGA to handle the partial of the shape in each dimension.
  SmallVector<unsigned> getCTASplitNum() const;
  /// Return shape per CTA tile.
  SmallVector<unsigned> getShapePerCTATile(ArrayRef<int64_t> tensorShape) const;
};
namespace detail {
  template <typename ConcreteAttr>
  struct DistributedEncodingTraitTrait : public ::mlir::AttributeInterface<DistributedEncodingTrait, detail::DistributedEncodingTraitInterfaceTraits>::Trait<ConcreteAttr> {
  };
}// namespace detail
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
class MmaEncodingTrait;
namespace detail {
struct MmaEncodingTraitInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    bool (*supportReduction)(const Concept *impl, ::mlir::Attribute );
    SmallVector<unsigned> (*getShapePerCTATileForDotOperands)(const Concept *impl, ::mlir::Attribute , ArrayRef<int64_t>, unsigned);
    unsigned (*getTotalElemsPerThreadForOperands)(const Concept *impl, ::mlir::Attribute , ArrayRef<int64_t>, Type, unsigned, unsigned);
    SmallVector<unsigned> (*getSizePerThreadForOperands)(const Concept *impl, ::mlir::Attribute , unsigned);
  };
  template<typename ConcreteAttr>
  class Model : public Concept {
  public:
    using Interface = ::mlir::triton::gpu::MmaEncodingTrait;
    Model() : Concept{supportReduction, getShapePerCTATileForDotOperands, getTotalElemsPerThreadForOperands, getSizePerThreadForOperands} {}

    static inline bool supportReduction(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getShapePerCTATileForDotOperands(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, unsigned opIdx);
    static inline unsigned getTotalElemsPerThreadForOperands(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, Type eltTy, unsigned kWidth, unsigned opIdx);
    static inline SmallVector<unsigned> getSizePerThreadForOperands(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, unsigned opIdx);
  };
  template<typename ConcreteAttr>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::triton::gpu::MmaEncodingTrait;
    FallbackModel() : Concept{supportReduction, getShapePerCTATileForDotOperands, getTotalElemsPerThreadForOperands, getSizePerThreadForOperands} {}

    static inline bool supportReduction(const Concept *impl, ::mlir::Attribute tablegen_opaque_val);
    static inline SmallVector<unsigned> getShapePerCTATileForDotOperands(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, unsigned opIdx);
    static inline unsigned getTotalElemsPerThreadForOperands(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, Type eltTy, unsigned kWidth, unsigned opIdx);
    static inline SmallVector<unsigned> getSizePerThreadForOperands(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, unsigned opIdx);
  };
  template<typename ConcreteModel, typename ConcreteAttr>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteAttr;
  };
};template <typename ConcreteAttr>
struct MmaEncodingTraitTrait;

} // namespace detail
class MmaEncodingTrait : public ::mlir::AttributeInterface<MmaEncodingTrait, detail::MmaEncodingTraitInterfaceTraits> {
public:
  using ::mlir::AttributeInterface<MmaEncodingTrait, detail::MmaEncodingTraitInterfaceTraits>::AttributeInterface;
  template <typename ConcreteAttr>
  struct Trait : public detail::MmaEncodingTraitTrait<ConcreteAttr> {};
  /// Return whether the layout support reduction op.
  bool supportReduction() const;
  /// Return shape per CTA.
  SmallVector<unsigned> getShapePerCTATileForDotOperands(ArrayRef<int64_t> tensorShape, unsigned opIdx) const;
  /// Return total element size per thread for dot operands.
  unsigned getTotalElemsPerThreadForOperands(ArrayRef<int64_t> tensorShape, Type eltTy, unsigned kWidth, unsigned opIdx) const;
  /// Return size per thread for dot operands.
  SmallVector<unsigned> getSizePerThreadForOperands(unsigned opIdx) const;
};
namespace detail {
  template <typename ConcreteAttr>
  struct MmaEncodingTraitTrait : public ::mlir::AttributeInterface<MmaEncodingTrait, detail::MmaEncodingTraitInterfaceTraits>::Trait<ConcreteAttr> {
  };
}// namespace detail
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
template<typename ConcreteAttr>
unsigned detail::TritonGPU_AttrTraitInterfaceTraits::Model<ConcreteAttr>::getTotalElemsPerThread(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, Type eltTy) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getTotalElemsPerThread(tensorShape, eltTy);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::TritonGPU_AttrTraitInterfaceTraits::Model<ConcreteAttr>::getElemsPerThread(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, Type eltTy) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getElemsPerThread(tensorShape, eltTy);
}
template<typename ConcreteAttr>
unsigned detail::TritonGPU_AttrTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getTotalElemsPerThread(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, Type eltTy) {
  return static_cast<const ConcreteAttr *>(impl)->getTotalElemsPerThread(tablegen_opaque_val, tensorShape, eltTy);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::TritonGPU_AttrTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getElemsPerThread(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, Type eltTy) {
  return static_cast<const ConcreteAttr *>(impl)->getElemsPerThread(tablegen_opaque_val, tensorShape, eltTy);
}
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::Model<ConcreteAttr>::getCTAsPerCGA(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getCTAsPerCGA();
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::Model<ConcreteAttr>::getCTAOrder(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getCTAOrder();
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::Model<ConcreteAttr>::getWarpsPerCTA(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getWarpsPerCTA();
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::Model<ConcreteAttr>::getWarpOrder(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getWarpOrder();
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::Model<ConcreteAttr>::getThreadsPerWarp(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getThreadsPerWarp();
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::Model<ConcreteAttr>::getThreadOrder(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getThreadOrder();
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::Model<ConcreteAttr>::getSizePerThread(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getSizePerThread();
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::Model<ConcreteAttr>::getCTASplitNum(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getCTASplitNum();
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::Model<ConcreteAttr>::getShapePerCTATile(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getShapePerCTATile(tensorShape);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getCTAsPerCGA(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return static_cast<const ConcreteAttr *>(impl)->getCTAsPerCGA(tablegen_opaque_val);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getCTAOrder(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return static_cast<const ConcreteAttr *>(impl)->getCTAOrder(tablegen_opaque_val);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getWarpsPerCTA(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return static_cast<const ConcreteAttr *>(impl)->getWarpsPerCTA(tablegen_opaque_val);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getWarpOrder(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return static_cast<const ConcreteAttr *>(impl)->getWarpOrder(tablegen_opaque_val);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getThreadsPerWarp(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return static_cast<const ConcreteAttr *>(impl)->getThreadsPerWarp(tablegen_opaque_val);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getThreadOrder(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return static_cast<const ConcreteAttr *>(impl)->getThreadOrder(tablegen_opaque_val);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getSizePerThread(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return static_cast<const ConcreteAttr *>(impl)->getSizePerThread(tablegen_opaque_val);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getCTASplitNum(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return static_cast<const ConcreteAttr *>(impl)->getCTASplitNum(tablegen_opaque_val);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::DistributedEncodingTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getShapePerCTATile(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape) {
  return static_cast<const ConcreteAttr *>(impl)->getShapePerCTATile(tablegen_opaque_val, tensorShape);
}
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
template<typename ConcreteAttr>
bool detail::MmaEncodingTraitInterfaceTraits::Model<ConcreteAttr>::supportReduction(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).supportReduction();
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::MmaEncodingTraitInterfaceTraits::Model<ConcreteAttr>::getShapePerCTATileForDotOperands(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, unsigned opIdx) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getShapePerCTATileForDotOperands(tensorShape, opIdx);
}
template<typename ConcreteAttr>
unsigned detail::MmaEncodingTraitInterfaceTraits::Model<ConcreteAttr>::getTotalElemsPerThreadForOperands(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, Type eltTy, unsigned kWidth, unsigned opIdx) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getTotalElemsPerThreadForOperands(tensorShape, eltTy, kWidth, opIdx);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::MmaEncodingTraitInterfaceTraits::Model<ConcreteAttr>::getSizePerThreadForOperands(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, unsigned opIdx) {
  return (::llvm::cast<ConcreteAttr>(tablegen_opaque_val)).getSizePerThreadForOperands(opIdx);
}
template<typename ConcreteAttr>
bool detail::MmaEncodingTraitInterfaceTraits::FallbackModel<ConcreteAttr>::supportReduction(const Concept *impl, ::mlir::Attribute tablegen_opaque_val) {
  return static_cast<const ConcreteAttr *>(impl)->supportReduction(tablegen_opaque_val);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::MmaEncodingTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getShapePerCTATileForDotOperands(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, unsigned opIdx) {
  return static_cast<const ConcreteAttr *>(impl)->getShapePerCTATileForDotOperands(tablegen_opaque_val, tensorShape, opIdx);
}
template<typename ConcreteAttr>
unsigned detail::MmaEncodingTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getTotalElemsPerThreadForOperands(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, ArrayRef<int64_t> tensorShape, Type eltTy, unsigned kWidth, unsigned opIdx) {
  return static_cast<const ConcreteAttr *>(impl)->getTotalElemsPerThreadForOperands(tablegen_opaque_val, tensorShape, eltTy, kWidth, opIdx);
}
template<typename ConcreteAttr>
SmallVector<unsigned> detail::MmaEncodingTraitInterfaceTraits::FallbackModel<ConcreteAttr>::getSizePerThreadForOperands(const Concept *impl, ::mlir::Attribute tablegen_opaque_val, unsigned opIdx) {
  return static_cast<const ConcreteAttr *>(impl)->getSizePerThreadForOperands(tablegen_opaque_val, opIdx);
}
} // namespace gpu
} // namespace triton
} // namespace mlir
