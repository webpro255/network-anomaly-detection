/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace LLVM {
class FastmathFlagsInterface;
namespace detail {
struct FastmathFlagsInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    FastmathFlagsAttr (*getFastmathAttr)(const Concept *impl, ::mlir::Operation *);
    StringRef (*getFastmathAttrName)();
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::LLVM::FastmathFlagsInterface;
    Model() : Concept{getFastmathAttr, getFastmathAttrName} {}

    static inline FastmathFlagsAttr getFastmathAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline StringRef getFastmathAttrName();
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::LLVM::FastmathFlagsInterface;
    FallbackModel() : Concept{getFastmathAttr, getFastmathAttrName} {}

    static inline FastmathFlagsAttr getFastmathAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline StringRef getFastmathAttrName();
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
    FastmathFlagsAttr getFastmathAttr(::mlir::Operation *tablegen_opaque_val) const;
    static StringRef getFastmathAttrName();
  };
};template <typename ConcreteOp>
struct FastmathFlagsInterfaceTrait;

} // namespace detail
class FastmathFlagsInterface : public ::mlir::OpInterface<FastmathFlagsInterface, detail::FastmathFlagsInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<FastmathFlagsInterface, detail::FastmathFlagsInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::FastmathFlagsInterfaceTrait<ConcreteOp> {};
  /// Returns a FastmathFlagsAttr attribute for the operation
  FastmathFlagsAttr getFastmathAttr();
  /// Returns the name of the FastmathFlagsAttr attribute
  ///                          for the operation
  StringRef getFastmathAttrName();
};
namespace detail {
  template <typename ConcreteOp>
  struct FastmathFlagsInterfaceTrait : public ::mlir::OpInterface<FastmathFlagsInterface, detail::FastmathFlagsInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    /// Returns a FastmathFlagsAttr attribute for the operation
    FastmathFlagsAttr getFastmathAttr() {
      auto op = cast<ConcreteOp>(this->getOperation());
        return op.getFastmathFlagsAttr();
    }
    /// Returns the name of the FastmathFlagsAttr attribute
    ///                          for the operation
    static StringRef getFastmathAttrName() {
      return "fastmathFlags";
    }
  };
}// namespace detail
} // namespace LLVM
} // namespace mlir
namespace mlir {
namespace LLVM {
class IntegerOverflowFlagsInterface;
namespace detail {
struct IntegerOverflowFlagsInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    IntegerOverflowFlagsAttr (*getOverflowAttr)(const Concept *impl, ::mlir::Operation *);
    bool (*hasNoUnsignedWrap)(const Concept *impl, ::mlir::Operation *);
    bool (*hasNoSignedWrap)(const Concept *impl, ::mlir::Operation *);
    StringRef (*getIntegerOverflowAttrName)();
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::LLVM::IntegerOverflowFlagsInterface;
    Model() : Concept{getOverflowAttr, hasNoUnsignedWrap, hasNoSignedWrap, getIntegerOverflowAttrName} {}

    static inline IntegerOverflowFlagsAttr getOverflowAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool hasNoUnsignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool hasNoSignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline StringRef getIntegerOverflowAttrName();
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::LLVM::IntegerOverflowFlagsInterface;
    FallbackModel() : Concept{getOverflowAttr, hasNoUnsignedWrap, hasNoSignedWrap, getIntegerOverflowAttrName} {}

    static inline IntegerOverflowFlagsAttr getOverflowAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool hasNoUnsignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool hasNoSignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline StringRef getIntegerOverflowAttrName();
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
    IntegerOverflowFlagsAttr getOverflowAttr(::mlir::Operation *tablegen_opaque_val) const;
    bool hasNoUnsignedWrap(::mlir::Operation *tablegen_opaque_val) const;
    bool hasNoSignedWrap(::mlir::Operation *tablegen_opaque_val) const;
    static StringRef getIntegerOverflowAttrName();
  };
};template <typename ConcreteOp>
struct IntegerOverflowFlagsInterfaceTrait;

} // namespace detail
class IntegerOverflowFlagsInterface : public ::mlir::OpInterface<IntegerOverflowFlagsInterface, detail::IntegerOverflowFlagsInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<IntegerOverflowFlagsInterface, detail::IntegerOverflowFlagsInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::IntegerOverflowFlagsInterfaceTrait<ConcreteOp> {};
  /// Returns an IntegerOverflowFlagsAttr attribute for the operation
  IntegerOverflowFlagsAttr getOverflowAttr();
  /// Returns whether the operation has the No Unsigned Wrap keyword
  bool hasNoUnsignedWrap();
  /// Returns whether the operation has the No Signed Wrap keyword
  bool hasNoSignedWrap();
  /// Returns the name of the IntegerOverflowFlagsAttr attribute
  ///                          for the operation
  StringRef getIntegerOverflowAttrName();
};
namespace detail {
  template <typename ConcreteOp>
  struct IntegerOverflowFlagsInterfaceTrait : public ::mlir::OpInterface<IntegerOverflowFlagsInterface, detail::IntegerOverflowFlagsInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    /// Returns an IntegerOverflowFlagsAttr attribute for the operation
    IntegerOverflowFlagsAttr getOverflowAttr() {
      auto op = cast<ConcreteOp>(this->getOperation());
        return op.getOverflowFlagsAttr();
    }
    /// Returns whether the operation has the No Unsigned Wrap keyword
    bool hasNoUnsignedWrap() {
      auto op = cast<ConcreteOp>(this->getOperation());
        IntegerOverflowFlags flags = op.getOverflowFlagsAttr().getValue();
        return bitEnumContainsAll(flags, IntegerOverflowFlags::nuw);
    }
    /// Returns whether the operation has the No Signed Wrap keyword
    bool hasNoSignedWrap() {
      auto op = cast<ConcreteOp>(this->getOperation());
        IntegerOverflowFlags flags = op.getOverflowFlagsAttr().getValue();
        return bitEnumContainsAll(flags, IntegerOverflowFlags::nsw);
    }
    /// Returns the name of the IntegerOverflowFlagsAttr attribute
    ///                          for the operation
    static StringRef getIntegerOverflowAttrName() {
      return "overflowFlags";
    }
  };
}// namespace detail
} // namespace LLVM
} // namespace mlir
namespace mlir {
namespace LLVM {
class BranchWeightOpInterface;
namespace detail {
struct BranchWeightOpInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    DenseI32ArrayAttr (*getBranchWeightsOrNull)(const Concept *impl, ::mlir::Operation *);
    void (*setBranchWeights)(const Concept *impl, ::mlir::Operation *, DenseI32ArrayAttr);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::LLVM::BranchWeightOpInterface;
    Model() : Concept{getBranchWeightsOrNull, setBranchWeights} {}

    static inline DenseI32ArrayAttr getBranchWeightsOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void setBranchWeights(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, DenseI32ArrayAttr attr);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::LLVM::BranchWeightOpInterface;
    FallbackModel() : Concept{getBranchWeightsOrNull, setBranchWeights} {}

    static inline DenseI32ArrayAttr getBranchWeightsOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void setBranchWeights(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, DenseI32ArrayAttr attr);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
    DenseI32ArrayAttr getBranchWeightsOrNull(::mlir::Operation *tablegen_opaque_val) const;
    void setBranchWeights(::mlir::Operation *tablegen_opaque_val, DenseI32ArrayAttr attr) const;
  };
};template <typename ConcreteOp>
struct BranchWeightOpInterfaceTrait;

} // namespace detail
class BranchWeightOpInterface : public ::mlir::OpInterface<BranchWeightOpInterface, detail::BranchWeightOpInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<BranchWeightOpInterface, detail::BranchWeightOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::BranchWeightOpInterfaceTrait<ConcreteOp> {};
  /// Returns the branch weights attribute or nullptr
  DenseI32ArrayAttr getBranchWeightsOrNull();
  /// Sets the branch weights attribute
  void setBranchWeights(DenseI32ArrayAttr attr);
};
namespace detail {
  template <typename ConcreteOp>
  struct BranchWeightOpInterfaceTrait : public ::mlir::OpInterface<BranchWeightOpInterface, detail::BranchWeightOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    /// Returns the branch weights attribute or nullptr
    DenseI32ArrayAttr getBranchWeightsOrNull() {
      auto op = cast<ConcreteOp>(this->getOperation());
        return op.getBranchWeightsAttr();
    }
    /// Sets the branch weights attribute
    void setBranchWeights(DenseI32ArrayAttr attr) {
      auto op = cast<ConcreteOp>(this->getOperation());
        op.setBranchWeightsAttr(attr);
    }
  };
}// namespace detail
} // namespace LLVM
} // namespace mlir
namespace mlir {
namespace LLVM {
class AccessGroupOpInterface;
namespace detail {
struct AccessGroupOpInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    ArrayAttr (*getAccessGroupsOrNull)(const Concept *impl, ::mlir::Operation *);
    void (*setAccessGroups)(const Concept *impl, ::mlir::Operation *, const ArrayAttr);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::LLVM::AccessGroupOpInterface;
    Model() : Concept{getAccessGroupsOrNull, setAccessGroups} {}

    static inline ArrayAttr getAccessGroupsOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void setAccessGroups(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::LLVM::AccessGroupOpInterface;
    FallbackModel() : Concept{getAccessGroupsOrNull, setAccessGroups} {}

    static inline ArrayAttr getAccessGroupsOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void setAccessGroups(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
    ArrayAttr getAccessGroupsOrNull(::mlir::Operation *tablegen_opaque_val) const;
    void setAccessGroups(::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) const;
  };
};template <typename ConcreteOp>
struct AccessGroupOpInterfaceTrait;

} // namespace detail
class AccessGroupOpInterface : public ::mlir::OpInterface<AccessGroupOpInterface, detail::AccessGroupOpInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<AccessGroupOpInterface, detail::AccessGroupOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::AccessGroupOpInterfaceTrait<ConcreteOp> {};
  /// Returns the access groups attribute or nullptr
  ArrayAttr getAccessGroupsOrNull();
  /// Sets the access groups attribute
  void setAccessGroups(const ArrayAttr attr);
};
namespace detail {
  template <typename ConcreteOp>
  struct AccessGroupOpInterfaceTrait : public ::mlir::OpInterface<AccessGroupOpInterface, detail::AccessGroupOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    /// Returns the access groups attribute or nullptr
    ArrayAttr getAccessGroupsOrNull() {
      auto op = cast<ConcreteOp>(this->getOperation());
        return op.getAccessGroupsAttr();
    }
    /// Sets the access groups attribute
    void setAccessGroups(const ArrayAttr attr) {
      auto op = cast<ConcreteOp>(this->getOperation());
        op.setAccessGroupsAttr(attr);
    }
    static ::mlir::LogicalResult verifyTrait(::mlir::Operation *op) {
      return detail::verifyAccessGroupOpInterface(op);
    }
  };
}// namespace detail
} // namespace LLVM
} // namespace mlir
namespace mlir {
namespace LLVM {
class AliasAnalysisOpInterface;
namespace detail {
struct AliasAnalysisOpInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    ArrayAttr (*getAliasScopesOrNull)(const Concept *impl, ::mlir::Operation *);
    void (*setAliasScopes)(const Concept *impl, ::mlir::Operation *, const ArrayAttr);
    ArrayAttr (*getNoAliasScopesOrNull)(const Concept *impl, ::mlir::Operation *);
    void (*setNoAliasScopes)(const Concept *impl, ::mlir::Operation *, const ArrayAttr);
    ArrayAttr (*getTBAATagsOrNull)(const Concept *impl, ::mlir::Operation *);
    void (*setTBAATags)(const Concept *impl, ::mlir::Operation *, const ArrayAttr);
    ::llvm::SmallVector<::mlir::Value> (*getAccessedOperands)(const Concept *impl, ::mlir::Operation *);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::LLVM::AliasAnalysisOpInterface;
    Model() : Concept{getAliasScopesOrNull, setAliasScopes, getNoAliasScopesOrNull, setNoAliasScopes, getTBAATagsOrNull, setTBAATags, getAccessedOperands} {}

    static inline ArrayAttr getAliasScopesOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void setAliasScopes(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr);
    static inline ArrayAttr getNoAliasScopesOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void setNoAliasScopes(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr);
    static inline ArrayAttr getTBAATagsOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void setTBAATags(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr);
    static inline ::llvm::SmallVector<::mlir::Value> getAccessedOperands(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::LLVM::AliasAnalysisOpInterface;
    FallbackModel() : Concept{getAliasScopesOrNull, setAliasScopes, getNoAliasScopesOrNull, setNoAliasScopes, getTBAATagsOrNull, setTBAATags, getAccessedOperands} {}

    static inline ArrayAttr getAliasScopesOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void setAliasScopes(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr);
    static inline ArrayAttr getNoAliasScopesOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void setNoAliasScopes(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr);
    static inline ArrayAttr getTBAATagsOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline void setTBAATags(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr);
    static inline ::llvm::SmallVector<::mlir::Value> getAccessedOperands(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
    ArrayAttr getAliasScopesOrNull(::mlir::Operation *tablegen_opaque_val) const;
    void setAliasScopes(::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) const;
    ArrayAttr getNoAliasScopesOrNull(::mlir::Operation *tablegen_opaque_val) const;
    void setNoAliasScopes(::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) const;
    ArrayAttr getTBAATagsOrNull(::mlir::Operation *tablegen_opaque_val) const;
    void setTBAATags(::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) const;
  };
};template <typename ConcreteOp>
struct AliasAnalysisOpInterfaceTrait;

} // namespace detail
class AliasAnalysisOpInterface : public ::mlir::OpInterface<AliasAnalysisOpInterface, detail::AliasAnalysisOpInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<AliasAnalysisOpInterface, detail::AliasAnalysisOpInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::AliasAnalysisOpInterfaceTrait<ConcreteOp> {};
  /// Returns the alias scopes attribute or nullptr
  ArrayAttr getAliasScopesOrNull();
  /// Sets the alias scopes attribute
  void setAliasScopes(const ArrayAttr attr);
  /// Returns the noalias scopes attribute or nullptr
  ArrayAttr getNoAliasScopesOrNull();
  /// Sets the noalias scopes attribute
  void setNoAliasScopes(const ArrayAttr attr);
  /// Returns the tbaa attribute or nullptr
  ArrayAttr getTBAATagsOrNull();
  /// Sets the tbaa attribute
  void setTBAATags(const ArrayAttr attr);
  /// Returns a list of all pointer operands accessed by the operation
  ::llvm::SmallVector<::mlir::Value> getAccessedOperands();
};
namespace detail {
  template <typename ConcreteOp>
  struct AliasAnalysisOpInterfaceTrait : public ::mlir::OpInterface<AliasAnalysisOpInterface, detail::AliasAnalysisOpInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    /// Returns the alias scopes attribute or nullptr
    ArrayAttr getAliasScopesOrNull() {
      auto op = cast<ConcreteOp>(this->getOperation());
        return op.getAliasScopesAttr();
    }
    /// Sets the alias scopes attribute
    void setAliasScopes(const ArrayAttr attr) {
      auto op = cast<ConcreteOp>(this->getOperation());
        op.setAliasScopesAttr(attr);
    }
    /// Returns the noalias scopes attribute or nullptr
    ArrayAttr getNoAliasScopesOrNull() {
      auto op = cast<ConcreteOp>(this->getOperation());
        return op.getNoaliasScopesAttr();
    }
    /// Sets the noalias scopes attribute
    void setNoAliasScopes(const ArrayAttr attr) {
      auto op = cast<ConcreteOp>(this->getOperation());
        op.setNoaliasScopesAttr(attr);
    }
    /// Returns the tbaa attribute or nullptr
    ArrayAttr getTBAATagsOrNull() {
      auto op = cast<ConcreteOp>(this->getOperation());
        return op.getTbaaAttr();
    }
    /// Sets the tbaa attribute
    void setTBAATags(const ArrayAttr attr) {
      auto op = cast<ConcreteOp>(this->getOperation());
        op.setTbaaAttr(attr);
    }
    static ::mlir::LogicalResult verifyTrait(::mlir::Operation *op) {
      return detail::verifyAliasAnalysisOpInterface(op);
    }
  };
}// namespace detail
} // namespace LLVM
} // namespace mlir
namespace mlir {
namespace LLVM {
class GetResultPtrElementType;
namespace detail {
struct GetResultPtrElementTypeInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    Type (*getResultPtrElementType)(const Concept *impl, ::mlir::Operation *);
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::LLVM::GetResultPtrElementType;
    Model() : Concept{getResultPtrElementType} {}

    static inline Type getResultPtrElementType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::LLVM::GetResultPtrElementType;
    FallbackModel() : Concept{getResultPtrElementType} {}

    static inline Type getResultPtrElementType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
  };
};template <typename ConcreteOp>
struct GetResultPtrElementTypeTrait;

} // namespace detail
class GetResultPtrElementType : public ::mlir::OpInterface<GetResultPtrElementType, detail::GetResultPtrElementTypeInterfaceTraits> {
public:
  using ::mlir::OpInterface<GetResultPtrElementType, detail::GetResultPtrElementTypeInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::GetResultPtrElementTypeTrait<ConcreteOp> {};
  /// Returns the the element type hint of the result
  ///                          LLVMPointer, if known. Returns nullptr if the
  ///                          requested result is not an LLVMPointer or if the
  ///                          element type is unknown.
  Type getResultPtrElementType();
};
namespace detail {
  template <typename ConcreteOp>
  struct GetResultPtrElementTypeTrait : public ::mlir::OpInterface<GetResultPtrElementType, detail::GetResultPtrElementTypeInterfaceTraits>::Trait<ConcreteOp> {
  };
}// namespace detail
} // namespace LLVM
} // namespace mlir
namespace mlir {
namespace LLVM {
template<typename ConcreteOp>
FastmathFlagsAttr detail::FastmathFlagsInterfaceInterfaceTraits::Model<ConcreteOp>::getFastmathAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getFastmathAttr();
}
template<typename ConcreteOp>
StringRef detail::FastmathFlagsInterfaceInterfaceTraits::Model<ConcreteOp>::getFastmathAttrName() {
  return ConcreteOp::getFastmathAttrName();
}
template<typename ConcreteOp>
FastmathFlagsAttr detail::FastmathFlagsInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getFastmathAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getFastmathAttr(tablegen_opaque_val);
}
template<typename ConcreteOp>
StringRef detail::FastmathFlagsInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getFastmathAttrName() {
  return ConcreteOp::getFastmathAttrName();
}
template<typename ConcreteModel, typename ConcreteOp>
FastmathFlagsAttr detail::FastmathFlagsInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getFastmathAttr(::mlir::Operation *tablegen_opaque_val) const {
auto op = cast<ConcreteOp>(this->getOperation());
        return op.getFastmathFlagsAttr();
}
template<typename ConcreteModel, typename ConcreteOp>
StringRef detail::FastmathFlagsInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getFastmathAttrName() {
return "fastmathFlags";
}
} // namespace LLVM
} // namespace mlir
namespace mlir {
namespace LLVM {
template<typename ConcreteOp>
IntegerOverflowFlagsAttr detail::IntegerOverflowFlagsInterfaceInterfaceTraits::Model<ConcreteOp>::getOverflowAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getOverflowAttr();
}
template<typename ConcreteOp>
bool detail::IntegerOverflowFlagsInterfaceInterfaceTraits::Model<ConcreteOp>::hasNoUnsignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).hasNoUnsignedWrap();
}
template<typename ConcreteOp>
bool detail::IntegerOverflowFlagsInterfaceInterfaceTraits::Model<ConcreteOp>::hasNoSignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).hasNoSignedWrap();
}
template<typename ConcreteOp>
StringRef detail::IntegerOverflowFlagsInterfaceInterfaceTraits::Model<ConcreteOp>::getIntegerOverflowAttrName() {
  return ConcreteOp::getIntegerOverflowAttrName();
}
template<typename ConcreteOp>
IntegerOverflowFlagsAttr detail::IntegerOverflowFlagsInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getOverflowAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getOverflowAttr(tablegen_opaque_val);
}
template<typename ConcreteOp>
bool detail::IntegerOverflowFlagsInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::hasNoUnsignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->hasNoUnsignedWrap(tablegen_opaque_val);
}
template<typename ConcreteOp>
bool detail::IntegerOverflowFlagsInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::hasNoSignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->hasNoSignedWrap(tablegen_opaque_val);
}
template<typename ConcreteOp>
StringRef detail::IntegerOverflowFlagsInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getIntegerOverflowAttrName() {
  return ConcreteOp::getIntegerOverflowAttrName();
}
template<typename ConcreteModel, typename ConcreteOp>
IntegerOverflowFlagsAttr detail::IntegerOverflowFlagsInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getOverflowAttr(::mlir::Operation *tablegen_opaque_val) const {
auto op = cast<ConcreteOp>(this->getOperation());
        return op.getOverflowFlagsAttr();
}
template<typename ConcreteModel, typename ConcreteOp>
bool detail::IntegerOverflowFlagsInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::hasNoUnsignedWrap(::mlir::Operation *tablegen_opaque_val) const {
auto op = cast<ConcreteOp>(this->getOperation());
        IntegerOverflowFlags flags = op.getOverflowFlagsAttr().getValue();
        return bitEnumContainsAll(flags, IntegerOverflowFlags::nuw);
}
template<typename ConcreteModel, typename ConcreteOp>
bool detail::IntegerOverflowFlagsInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::hasNoSignedWrap(::mlir::Operation *tablegen_opaque_val) const {
auto op = cast<ConcreteOp>(this->getOperation());
        IntegerOverflowFlags flags = op.getOverflowFlagsAttr().getValue();
        return bitEnumContainsAll(flags, IntegerOverflowFlags::nsw);
}
template<typename ConcreteModel, typename ConcreteOp>
StringRef detail::IntegerOverflowFlagsInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getIntegerOverflowAttrName() {
return "overflowFlags";
}
} // namespace LLVM
} // namespace mlir
namespace mlir {
namespace LLVM {
template<typename ConcreteOp>
DenseI32ArrayAttr detail::BranchWeightOpInterfaceInterfaceTraits::Model<ConcreteOp>::getBranchWeightsOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getBranchWeightsOrNull();
}
template<typename ConcreteOp>
void detail::BranchWeightOpInterfaceInterfaceTraits::Model<ConcreteOp>::setBranchWeights(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, DenseI32ArrayAttr attr) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).setBranchWeights(attr);
}
template<typename ConcreteOp>
DenseI32ArrayAttr detail::BranchWeightOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getBranchWeightsOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getBranchWeightsOrNull(tablegen_opaque_val);
}
template<typename ConcreteOp>
void detail::BranchWeightOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::setBranchWeights(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, DenseI32ArrayAttr attr) {
  return static_cast<const ConcreteOp *>(impl)->setBranchWeights(tablegen_opaque_val, attr);
}
template<typename ConcreteModel, typename ConcreteOp>
DenseI32ArrayAttr detail::BranchWeightOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getBranchWeightsOrNull(::mlir::Operation *tablegen_opaque_val) const {
auto op = cast<ConcreteOp>(this->getOperation());
        return op.getBranchWeightsAttr();
}
template<typename ConcreteModel, typename ConcreteOp>
void detail::BranchWeightOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::setBranchWeights(::mlir::Operation *tablegen_opaque_val, DenseI32ArrayAttr attr) const {
auto op = cast<ConcreteOp>(this->getOperation());
        op.setBranchWeightsAttr(attr);
}
} // namespace LLVM
} // namespace mlir
namespace mlir {
namespace LLVM {
template<typename ConcreteOp>
ArrayAttr detail::AccessGroupOpInterfaceInterfaceTraits::Model<ConcreteOp>::getAccessGroupsOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getAccessGroupsOrNull();
}
template<typename ConcreteOp>
void detail::AccessGroupOpInterfaceInterfaceTraits::Model<ConcreteOp>::setAccessGroups(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).setAccessGroups(attr);
}
template<typename ConcreteOp>
ArrayAttr detail::AccessGroupOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getAccessGroupsOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getAccessGroupsOrNull(tablegen_opaque_val);
}
template<typename ConcreteOp>
void detail::AccessGroupOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::setAccessGroups(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) {
  return static_cast<const ConcreteOp *>(impl)->setAccessGroups(tablegen_opaque_val, attr);
}
template<typename ConcreteModel, typename ConcreteOp>
ArrayAttr detail::AccessGroupOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getAccessGroupsOrNull(::mlir::Operation *tablegen_opaque_val) const {
auto op = cast<ConcreteOp>(this->getOperation());
        return op.getAccessGroupsAttr();
}
template<typename ConcreteModel, typename ConcreteOp>
void detail::AccessGroupOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::setAccessGroups(::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) const {
auto op = cast<ConcreteOp>(this->getOperation());
        op.setAccessGroupsAttr(attr);
}
} // namespace LLVM
} // namespace mlir
namespace mlir {
namespace LLVM {
template<typename ConcreteOp>
ArrayAttr detail::AliasAnalysisOpInterfaceInterfaceTraits::Model<ConcreteOp>::getAliasScopesOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getAliasScopesOrNull();
}
template<typename ConcreteOp>
void detail::AliasAnalysisOpInterfaceInterfaceTraits::Model<ConcreteOp>::setAliasScopes(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).setAliasScopes(attr);
}
template<typename ConcreteOp>
ArrayAttr detail::AliasAnalysisOpInterfaceInterfaceTraits::Model<ConcreteOp>::getNoAliasScopesOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getNoAliasScopesOrNull();
}
template<typename ConcreteOp>
void detail::AliasAnalysisOpInterfaceInterfaceTraits::Model<ConcreteOp>::setNoAliasScopes(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).setNoAliasScopes(attr);
}
template<typename ConcreteOp>
ArrayAttr detail::AliasAnalysisOpInterfaceInterfaceTraits::Model<ConcreteOp>::getTBAATagsOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getTBAATagsOrNull();
}
template<typename ConcreteOp>
void detail::AliasAnalysisOpInterfaceInterfaceTraits::Model<ConcreteOp>::setTBAATags(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).setTBAATags(attr);
}
template<typename ConcreteOp>
::llvm::SmallVector<::mlir::Value> detail::AliasAnalysisOpInterfaceInterfaceTraits::Model<ConcreteOp>::getAccessedOperands(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getAccessedOperands();
}
template<typename ConcreteOp>
ArrayAttr detail::AliasAnalysisOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getAliasScopesOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getAliasScopesOrNull(tablegen_opaque_val);
}
template<typename ConcreteOp>
void detail::AliasAnalysisOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::setAliasScopes(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) {
  return static_cast<const ConcreteOp *>(impl)->setAliasScopes(tablegen_opaque_val, attr);
}
template<typename ConcreteOp>
ArrayAttr detail::AliasAnalysisOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getNoAliasScopesOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getNoAliasScopesOrNull(tablegen_opaque_val);
}
template<typename ConcreteOp>
void detail::AliasAnalysisOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::setNoAliasScopes(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) {
  return static_cast<const ConcreteOp *>(impl)->setNoAliasScopes(tablegen_opaque_val, attr);
}
template<typename ConcreteOp>
ArrayAttr detail::AliasAnalysisOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getTBAATagsOrNull(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getTBAATagsOrNull(tablegen_opaque_val);
}
template<typename ConcreteOp>
void detail::AliasAnalysisOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::setTBAATags(const Concept *impl, ::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) {
  return static_cast<const ConcreteOp *>(impl)->setTBAATags(tablegen_opaque_val, attr);
}
template<typename ConcreteOp>
::llvm::SmallVector<::mlir::Value> detail::AliasAnalysisOpInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getAccessedOperands(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getAccessedOperands(tablegen_opaque_val);
}
template<typename ConcreteModel, typename ConcreteOp>
ArrayAttr detail::AliasAnalysisOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getAliasScopesOrNull(::mlir::Operation *tablegen_opaque_val) const {
auto op = cast<ConcreteOp>(this->getOperation());
        return op.getAliasScopesAttr();
}
template<typename ConcreteModel, typename ConcreteOp>
void detail::AliasAnalysisOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::setAliasScopes(::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) const {
auto op = cast<ConcreteOp>(this->getOperation());
        op.setAliasScopesAttr(attr);
}
template<typename ConcreteModel, typename ConcreteOp>
ArrayAttr detail::AliasAnalysisOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getNoAliasScopesOrNull(::mlir::Operation *tablegen_opaque_val) const {
auto op = cast<ConcreteOp>(this->getOperation());
        return op.getNoaliasScopesAttr();
}
template<typename ConcreteModel, typename ConcreteOp>
void detail::AliasAnalysisOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::setNoAliasScopes(::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) const {
auto op = cast<ConcreteOp>(this->getOperation());
        op.setNoaliasScopesAttr(attr);
}
template<typename ConcreteModel, typename ConcreteOp>
ArrayAttr detail::AliasAnalysisOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getTBAATagsOrNull(::mlir::Operation *tablegen_opaque_val) const {
auto op = cast<ConcreteOp>(this->getOperation());
        return op.getTbaaAttr();
}
template<typename ConcreteModel, typename ConcreteOp>
void detail::AliasAnalysisOpInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::setTBAATags(::mlir::Operation *tablegen_opaque_val, const ArrayAttr attr) const {
auto op = cast<ConcreteOp>(this->getOperation());
        op.setTbaaAttr(attr);
}
} // namespace LLVM
} // namespace mlir
namespace mlir {
namespace LLVM {
template<typename ConcreteOp>
Type detail::GetResultPtrElementTypeInterfaceTraits::Model<ConcreteOp>::getResultPtrElementType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getResultPtrElementType();
}
template<typename ConcreteOp>
Type detail::GetResultPtrElementTypeInterfaceTraits::FallbackModel<ConcreteOp>::getResultPtrElementType(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getResultPtrElementType(tablegen_opaque_val);
}
} // namespace LLVM
} // namespace mlir
