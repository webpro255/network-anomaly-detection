/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Declarations                                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace mlir {
namespace arith {
class ArithFastMathInterface;
namespace detail {
struct ArithFastMathInterfaceInterfaceTraits {
  struct Concept {
    /// The methods defined by the interface.
    FastMathFlagsAttr (*getFastMathFlagsAttr)(const Concept *impl, ::mlir::Operation *);
    StringRef (*getFastMathAttrName)();
  };
  template<typename ConcreteOp>
  class Model : public Concept {
  public:
    using Interface = ::mlir::arith::ArithFastMathInterface;
    Model() : Concept{getFastMathFlagsAttr, getFastMathAttrName} {}

    static inline FastMathFlagsAttr getFastMathFlagsAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline StringRef getFastMathAttrName();
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::arith::ArithFastMathInterface;
    FallbackModel() : Concept{getFastMathFlagsAttr, getFastMathAttrName} {}

    static inline FastMathFlagsAttr getFastMathFlagsAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline StringRef getFastMathAttrName();
  };
  template<typename ConcreteModel, typename ConcreteOp>
  class ExternalModel : public FallbackModel<ConcreteModel> {
  public:
    using ConcreteEntity = ConcreteOp;
    FastMathFlagsAttr getFastMathFlagsAttr(::mlir::Operation *tablegen_opaque_val) const;
    static StringRef getFastMathAttrName();
  };
};template <typename ConcreteOp>
struct ArithFastMathInterfaceTrait;

} // namespace detail
class ArithFastMathInterface : public ::mlir::OpInterface<ArithFastMathInterface, detail::ArithFastMathInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<ArithFastMathInterface, detail::ArithFastMathInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::ArithFastMathInterfaceTrait<ConcreteOp> {};
  /// Returns a FastMathFlagsAttr attribute for the operation
  FastMathFlagsAttr getFastMathFlagsAttr();
  /// Returns the name of the FastMathFlagsAttr attribute
  ///                          for the operation
  StringRef getFastMathAttrName();
};
namespace detail {
  template <typename ConcreteOp>
  struct ArithFastMathInterfaceTrait : public ::mlir::OpInterface<ArithFastMathInterface, detail::ArithFastMathInterfaceInterfaceTraits>::Trait<ConcreteOp> {
    /// Returns a FastMathFlagsAttr attribute for the operation
    FastMathFlagsAttr getFastMathFlagsAttr() {
      ConcreteOp op = cast<ConcreteOp>(this->getOperation());
        return op.getFastmathAttr();
    }
    /// Returns the name of the FastMathFlagsAttr attribute
    ///                          for the operation
    static StringRef getFastMathAttrName() {
      return "fastmath";
    }
  };
}// namespace detail
} // namespace arith
} // namespace mlir
namespace mlir {
namespace arith {
class ArithIntegerOverflowFlagsInterface;
namespace detail {
struct ArithIntegerOverflowFlagsInterfaceInterfaceTraits {
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
    using Interface = ::mlir::arith::ArithIntegerOverflowFlagsInterface;
    Model() : Concept{getOverflowAttr, hasNoUnsignedWrap, hasNoSignedWrap, getIntegerOverflowAttrName} {}

    static inline IntegerOverflowFlagsAttr getOverflowAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool hasNoUnsignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline bool hasNoSignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val);
    static inline StringRef getIntegerOverflowAttrName();
  };
  template<typename ConcreteOp>
  class FallbackModel : public Concept {
  public:
    using Interface = ::mlir::arith::ArithIntegerOverflowFlagsInterface;
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
struct ArithIntegerOverflowFlagsInterfaceTrait;

} // namespace detail
class ArithIntegerOverflowFlagsInterface : public ::mlir::OpInterface<ArithIntegerOverflowFlagsInterface, detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits> {
public:
  using ::mlir::OpInterface<ArithIntegerOverflowFlagsInterface, detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits>::OpInterface;
  template <typename ConcreteOp>
  struct Trait : public detail::ArithIntegerOverflowFlagsInterfaceTrait<ConcreteOp> {};
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
  struct ArithIntegerOverflowFlagsInterfaceTrait : public ::mlir::OpInterface<ArithIntegerOverflowFlagsInterface, detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits>::Trait<ConcreteOp> {
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
} // namespace arith
} // namespace mlir
namespace mlir {
namespace arith {
template<typename ConcreteOp>
FastMathFlagsAttr detail::ArithFastMathInterfaceInterfaceTraits::Model<ConcreteOp>::getFastMathFlagsAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getFastMathFlagsAttr();
}
template<typename ConcreteOp>
StringRef detail::ArithFastMathInterfaceInterfaceTraits::Model<ConcreteOp>::getFastMathAttrName() {
  return ConcreteOp::getFastMathAttrName();
}
template<typename ConcreteOp>
FastMathFlagsAttr detail::ArithFastMathInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getFastMathFlagsAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getFastMathFlagsAttr(tablegen_opaque_val);
}
template<typename ConcreteOp>
StringRef detail::ArithFastMathInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getFastMathAttrName() {
  return ConcreteOp::getFastMathAttrName();
}
template<typename ConcreteModel, typename ConcreteOp>
FastMathFlagsAttr detail::ArithFastMathInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getFastMathFlagsAttr(::mlir::Operation *tablegen_opaque_val) const {
ConcreteOp op = cast<ConcreteOp>(this->getOperation());
        return op.getFastmathAttr();
}
template<typename ConcreteModel, typename ConcreteOp>
StringRef detail::ArithFastMathInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getFastMathAttrName() {
return "fastmath";
}
} // namespace arith
} // namespace mlir
namespace mlir {
namespace arith {
template<typename ConcreteOp>
IntegerOverflowFlagsAttr detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits::Model<ConcreteOp>::getOverflowAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).getOverflowAttr();
}
template<typename ConcreteOp>
bool detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits::Model<ConcreteOp>::hasNoUnsignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).hasNoUnsignedWrap();
}
template<typename ConcreteOp>
bool detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits::Model<ConcreteOp>::hasNoSignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return (llvm::cast<ConcreteOp>(tablegen_opaque_val)).hasNoSignedWrap();
}
template<typename ConcreteOp>
StringRef detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits::Model<ConcreteOp>::getIntegerOverflowAttrName() {
  return ConcreteOp::getIntegerOverflowAttrName();
}
template<typename ConcreteOp>
IntegerOverflowFlagsAttr detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getOverflowAttr(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->getOverflowAttr(tablegen_opaque_val);
}
template<typename ConcreteOp>
bool detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::hasNoUnsignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->hasNoUnsignedWrap(tablegen_opaque_val);
}
template<typename ConcreteOp>
bool detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::hasNoSignedWrap(const Concept *impl, ::mlir::Operation *tablegen_opaque_val) {
  return static_cast<const ConcreteOp *>(impl)->hasNoSignedWrap(tablegen_opaque_val);
}
template<typename ConcreteOp>
StringRef detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits::FallbackModel<ConcreteOp>::getIntegerOverflowAttrName() {
  return ConcreteOp::getIntegerOverflowAttrName();
}
template<typename ConcreteModel, typename ConcreteOp>
IntegerOverflowFlagsAttr detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getOverflowAttr(::mlir::Operation *tablegen_opaque_val) const {
auto op = cast<ConcreteOp>(this->getOperation());
        return op.getOverflowFlagsAttr();
}
template<typename ConcreteModel, typename ConcreteOp>
bool detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::hasNoUnsignedWrap(::mlir::Operation *tablegen_opaque_val) const {
auto op = cast<ConcreteOp>(this->getOperation());
        IntegerOverflowFlags flags = op.getOverflowFlagsAttr().getValue();
        return bitEnumContainsAll(flags, IntegerOverflowFlags::nuw);
}
template<typename ConcreteModel, typename ConcreteOp>
bool detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::hasNoSignedWrap(::mlir::Operation *tablegen_opaque_val) const {
auto op = cast<ConcreteOp>(this->getOperation());
        IntegerOverflowFlags flags = op.getOverflowFlagsAttr().getValue();
        return bitEnumContainsAll(flags, IntegerOverflowFlags::nsw);
}
template<typename ConcreteModel, typename ConcreteOp>
StringRef detail::ArithIntegerOverflowFlagsInterfaceInterfaceTraits::ExternalModel<ConcreteModel, ConcreteOp>::getIntegerOverflowAttrName() {
return "overflowFlags";
}
} // namespace arith
} // namespace mlir
