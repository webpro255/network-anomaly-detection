/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: TritonGPUOps.td                                                      *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace triton {
namespace gpu {
class AllocTensorOp;
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
class AsyncBulkCommitGroupOp;
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
class AsyncBulkWaitOp;
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
class AsyncCommitGroupOp;
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
class AsyncWaitOp;
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
class ConvertLayoutOp;
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
class DeallocTensorOp;
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
class ExtractSliceOp;
} // namespace gpu
} // namespace triton
} // namespace mlir
namespace mlir {
namespace triton {
namespace gpu {
class InsertSliceAsyncOp;
} // namespace gpu
} // namespace triton
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::AllocTensorOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AllocTensorOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AllocTensorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AllocTensorOpGenericAdaptorBase(AllocTensorOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AllocTensorOpGenericAdaptor : public detail::AllocTensorOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AllocTensorOpGenericAdaptorBase;
public:
  AllocTensorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AllocTensorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AllocTensorOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AllocTensorOp, typename = std::enable_if_t<std::is_same_v<LateInst, AllocTensorOp>>>
  AllocTensorOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AllocTensorOpAdaptor : public AllocTensorOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AllocTensorOpGenericAdaptor::AllocTensorOpGenericAdaptor;
  AllocTensorOpAdaptor(AllocTensorOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AllocTensorOp : public ::mlir::Op<AllocTensorOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::ResultsAreSharedEncoding, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AllocTensorOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AllocTensorOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_gpu.alloc_tensor");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::AllocTensorOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::AsyncBulkCommitGroupOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AsyncBulkCommitGroupOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AsyncBulkCommitGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AsyncBulkCommitGroupOpGenericAdaptorBase(AsyncBulkCommitGroupOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AsyncBulkCommitGroupOpGenericAdaptor : public detail::AsyncBulkCommitGroupOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AsyncBulkCommitGroupOpGenericAdaptorBase;
public:
  AsyncBulkCommitGroupOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AsyncBulkCommitGroupOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AsyncBulkCommitGroupOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AsyncBulkCommitGroupOp, typename = std::enable_if_t<std::is_same_v<LateInst, AsyncBulkCommitGroupOp>>>
  AsyncBulkCommitGroupOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AsyncBulkCommitGroupOpAdaptor : public AsyncBulkCommitGroupOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AsyncBulkCommitGroupOpGenericAdaptor::AsyncBulkCommitGroupOpGenericAdaptor;
  AsyncBulkCommitGroupOpAdaptor(AsyncBulkCommitGroupOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AsyncBulkCommitGroupOp : public ::mlir::Op<AsyncBulkCommitGroupOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AsyncBulkCommitGroupOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AsyncBulkCommitGroupOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_gpu.async_bulk_commit_group");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  static bool isSupported(int computeCapability) {
    return computeCapability >= 90;
  }
};
} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::AsyncBulkCommitGroupOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::AsyncBulkWaitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AsyncBulkWaitOpGenericAdaptorBase {
public:
  struct Properties {
    using numTy = ::mlir::IntegerAttr;
    numTy num;

    auto getNum() {
      auto &propStorage = this->num;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setNum(const ::mlir::IntegerAttr &propValue) {
      this->num = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.num == this->num &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  AsyncBulkWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  AsyncBulkWaitOpGenericAdaptorBase(AsyncBulkWaitOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getNumAttr();
  uint32_t getNum();
};
} // namespace detail
template <typename RangeT>
class AsyncBulkWaitOpGenericAdaptor : public detail::AsyncBulkWaitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AsyncBulkWaitOpGenericAdaptorBase;
public:
  AsyncBulkWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AsyncBulkWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AsyncBulkWaitOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = AsyncBulkWaitOp, typename = std::enable_if_t<std::is_same_v<LateInst, AsyncBulkWaitOp>>>
  AsyncBulkWaitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AsyncBulkWaitOpAdaptor : public AsyncBulkWaitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AsyncBulkWaitOpGenericAdaptor::AsyncBulkWaitOpGenericAdaptor;
  AsyncBulkWaitOpAdaptor(AsyncBulkWaitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AsyncBulkWaitOp : public ::mlir::Op<AsyncBulkWaitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AsyncBulkWaitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AsyncBulkWaitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("num")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getNumAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getNumAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_gpu.async_bulk_wait");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getNumAttr();
  uint32_t getNum();
  void setNumAttr(::mlir::IntegerAttr attr);
  void setNum(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t num);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  static bool isSupported(int computeCapability) {
    return computeCapability >= 90;
  }
};
} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::AsyncBulkWaitOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::AsyncCommitGroupOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AsyncCommitGroupOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  AsyncCommitGroupOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  AsyncCommitGroupOpGenericAdaptorBase(AsyncCommitGroupOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class AsyncCommitGroupOpGenericAdaptor : public detail::AsyncCommitGroupOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AsyncCommitGroupOpGenericAdaptorBase;
public:
  AsyncCommitGroupOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AsyncCommitGroupOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AsyncCommitGroupOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = AsyncCommitGroupOp, typename = std::enable_if_t<std::is_same_v<LateInst, AsyncCommitGroupOp>>>
  AsyncCommitGroupOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AsyncCommitGroupOpAdaptor : public AsyncCommitGroupOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AsyncCommitGroupOpGenericAdaptor::AsyncCommitGroupOpGenericAdaptor;
  AsyncCommitGroupOpAdaptor(AsyncCommitGroupOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AsyncCommitGroupOp : public ::mlir::Op<AsyncCommitGroupOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AsyncCommitGroupOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AsyncCommitGroupOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_gpu.async_commit_group");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
  static bool isSupported(int computeCapability) {
    return computeCapability >= 80;
  }
};
} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::AsyncCommitGroupOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::AsyncWaitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class AsyncWaitOpGenericAdaptorBase {
public:
  struct Properties {
    using numTy = ::mlir::IntegerAttr;
    numTy num;

    auto getNum() {
      auto &propStorage = this->num;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setNum(const ::mlir::IntegerAttr &propValue) {
      this->num = propValue;
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.num == this->num &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  AsyncWaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  AsyncWaitOpGenericAdaptorBase(AsyncWaitOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getNumAttr();
  uint32_t getNum();
};
} // namespace detail
template <typename RangeT>
class AsyncWaitOpGenericAdaptor : public detail::AsyncWaitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::AsyncWaitOpGenericAdaptorBase;
public:
  AsyncWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  AsyncWaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : AsyncWaitOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = AsyncWaitOp, typename = std::enable_if_t<std::is_same_v<LateInst, AsyncWaitOp>>>
  AsyncWaitOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class AsyncWaitOpAdaptor : public AsyncWaitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using AsyncWaitOpGenericAdaptor::AsyncWaitOpGenericAdaptor;
  AsyncWaitOpAdaptor(AsyncWaitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class AsyncWaitOp : public ::mlir::Op<AsyncWaitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = AsyncWaitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = AsyncWaitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("num")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getNumAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getNumAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_gpu.async_wait");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::IntegerAttr getNumAttr();
  uint32_t getNum();
  void setNumAttr(::mlir::IntegerAttr attr);
  void setNum(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::IntegerAttr num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::IntegerAttr num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, uint32_t num);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, uint32_t num);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  static bool isSupported(int computeCapability) {
    return computeCapability >= 80;
  }
};
} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::AsyncWaitOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::ConvertLayoutOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ConvertLayoutOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  ConvertLayoutOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  ConvertLayoutOpGenericAdaptorBase(ConvertLayoutOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ConvertLayoutOpGenericAdaptor : public detail::ConvertLayoutOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ConvertLayoutOpGenericAdaptorBase;
public:
  ConvertLayoutOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ConvertLayoutOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ConvertLayoutOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = ConvertLayoutOp, typename = std::enable_if_t<std::is_same_v<LateInst, ConvertLayoutOp>>>
  ConvertLayoutOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSrc() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ConvertLayoutOpAdaptor : public ConvertLayoutOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ConvertLayoutOpGenericAdaptor::ConvertLayoutOpGenericAdaptor;
  ConvertLayoutOpAdaptor(ConvertLayoutOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ConvertLayoutOp : public ::mlir::Op<ConvertLayoutOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::SameOperandsAndResultShape, ::mlir::OpTrait::SameOperandsAndResultElementType, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ConvertLayoutOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ConvertLayoutOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_gpu.convert_layout");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getSrc();
  ::mlir::OpOperand &getSrcMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::ConvertLayoutOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::DeallocTensorOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DeallocTensorOpGenericAdaptorBase {
public:
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  ::mlir::RegionRange odsRegions;
public:
  DeallocTensorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {});

  DeallocTensorOpGenericAdaptorBase(DeallocTensorOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class DeallocTensorOpGenericAdaptor : public detail::DeallocTensorOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DeallocTensorOpGenericAdaptorBase;
public:
  DeallocTensorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, const ::mlir::EmptyProperties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  DeallocTensorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : DeallocTensorOpGenericAdaptor(values, attrs, (properties ? *properties.as<::mlir::EmptyProperties *>() : ::mlir::EmptyProperties{}), regions) {}

  template <typename LateInst = DeallocTensorOp, typename = std::enable_if_t<std::is_same_v<LateInst, DeallocTensorOp>>>
  DeallocTensorOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSrc() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DeallocTensorOpAdaptor : public DeallocTensorOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DeallocTensorOpGenericAdaptor::DeallocTensorOpGenericAdaptor;
  DeallocTensorOpAdaptor(DeallocTensorOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DeallocTensorOp : public ::mlir::Op<DeallocTensorOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::OperandsAreSharedEncoding, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DeallocTensorOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DeallocTensorOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_gpu.dealloc_tensor");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getSrc();
  ::mlir::OpOperand &getSrcMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value src);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::DeallocTensorOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::ExtractSliceOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ExtractSliceOpGenericAdaptorBase {
public:
  struct Properties {
    using static_offsetsTy = ::mlir::DenseI64ArrayAttr;
    static_offsetsTy static_offsets;

    auto getStaticOffsets() {
      auto &propStorage = this->static_offsets;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticOffsets(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_offsets = propValue;
    }
    using static_sizesTy = ::mlir::DenseI64ArrayAttr;
    static_sizesTy static_sizes;

    auto getStaticSizes() {
      auto &propStorage = this->static_sizes;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticSizes(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_sizes = propValue;
    }
    using static_stridesTy = ::mlir::DenseI64ArrayAttr;
    static_stridesTy static_strides;

    auto getStaticStrides() {
      auto &propStorage = this->static_strides;
      return ::llvm::cast<::mlir::DenseI64ArrayAttr>(propStorage);
    }
    void setStaticStrides(const ::mlir::DenseI64ArrayAttr &propValue) {
      this->static_strides = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 4>;
    operandSegmentSizesTy operandSegmentSizes;
    ::llvm::ArrayRef<int32_t> getOperandSegmentSizes() {
      auto &propStorage = this->operandSegmentSizes;
      return propStorage;
    }
    void setOperandSegmentSizes(const ::llvm::ArrayRef<int32_t> &propValue) {
      auto &propStorage = this->operandSegmentSizes;
      ::llvm::copy(propValue, propStorage.begin());
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.static_offsets == this->static_offsets &&
        rhs.static_sizes == this->static_sizes &&
        rhs.static_strides == this->static_strides &&
        rhs.operandSegmentSizes == this->operandSegmentSizes &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  ExtractSliceOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  ExtractSliceOpGenericAdaptorBase(ExtractSliceOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::DenseI64ArrayAttr getStaticOffsetsAttr();
  ::llvm::ArrayRef<int64_t> getStaticOffsets();
  ::mlir::DenseI64ArrayAttr getStaticSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticSizes();
  ::mlir::DenseI64ArrayAttr getStaticStridesAttr();
  ::llvm::ArrayRef<int64_t> getStaticStrides();
};
} // namespace detail
template <typename RangeT>
class ExtractSliceOpGenericAdaptor : public detail::ExtractSliceOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ExtractSliceOpGenericAdaptorBase;
public:
  ExtractSliceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  ExtractSliceOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : ExtractSliceOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = ExtractSliceOp, typename = std::enable_if_t<std::is_same_v<LateInst, ExtractSliceOp>>>
  ExtractSliceOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSource() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOffsets() {
    return getODSOperands(1);
  }

  RangeT getSizes() {
    return getODSOperands(2);
  }

  RangeT getStrides() {
    return getODSOperands(3);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ExtractSliceOpAdaptor : public ExtractSliceOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ExtractSliceOpGenericAdaptor::ExtractSliceOpGenericAdaptor;
  ExtractSliceOpAdaptor(ExtractSliceOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ExtractSliceOp : public ::mlir::Op<ExtractSliceOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::RankedTensorType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpTrait::ResultsAreSharedEncoding, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OffsetSizeAndStrideOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ExtractSliceOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ExtractSliceOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("static_offsets"), ::llvm::StringRef("static_sizes"), ::llvm::StringRef("static_strides"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getStaticOffsetsAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getStaticOffsetsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getStaticSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getStaticSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getStaticStridesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getStaticStridesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_gpu.extract_slice");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::RankedTensorType> getSource();
  ::mlir::Operation::operand_range getOffsets();
  ::mlir::Operation::operand_range getSizes();
  ::mlir::Operation::operand_range getStrides();
  ::mlir::OpOperand &getSourceMutable();
  ::mlir::MutableOperandRange getOffsetsMutable();
  ::mlir::MutableOperandRange getSizesMutable();
  ::mlir::MutableOperandRange getStridesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::RankedTensorType> getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::DenseI64ArrayAttr getStaticOffsetsAttr();
  ::llvm::ArrayRef<int64_t> getStaticOffsets();
  ::mlir::DenseI64ArrayAttr getStaticSizesAttr();
  ::llvm::ArrayRef<int64_t> getStaticSizes();
  ::mlir::DenseI64ArrayAttr getStaticStridesAttr();
  ::llvm::ArrayRef<int64_t> getStaticStrides();
  void setStaticOffsetsAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticOffsets(::llvm::ArrayRef<int64_t> attrValue);
  void setStaticSizesAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticSizes(::llvm::ArrayRef<int64_t> attrValue);
  void setStaticStridesAttr(::mlir::DenseI64ArrayAttr attr);
  void setStaticStrides(::llvm::ArrayRef<int64_t> attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, RankedTensorType resultType, Value source, ArrayRef<OpFoldResult> offsets, ArrayRef<OpFoldResult> sizes, ArrayRef<OpFoldResult> strides, ArrayRef<NamedAttribute> attrs = {});
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source, ::mlir::ValueRange offsets, ::mlir::ValueRange sizes, ::mlir::ValueRange strides, ::mlir::DenseI64ArrayAttr static_offsets, ::mlir::DenseI64ArrayAttr static_sizes, ::mlir::DenseI64ArrayAttr static_strides);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::ValueRange offsets, ::mlir::ValueRange sizes, ::mlir::ValueRange strides, ::mlir::DenseI64ArrayAttr static_offsets, ::mlir::DenseI64ArrayAttr static_sizes, ::mlir::DenseI64ArrayAttr static_strides);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value source, ::mlir::ValueRange offsets, ::mlir::ValueRange sizes, ::mlir::ValueRange strides, ::llvm::ArrayRef<int64_t> static_offsets, ::llvm::ArrayRef<int64_t> static_sizes, ::llvm::ArrayRef<int64_t> static_strides);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value source, ::mlir::ValueRange offsets, ::mlir::ValueRange sizes, ::mlir::ValueRange strides, ::llvm::ArrayRef<int64_t> static_offsets, ::llvm::ArrayRef<int64_t> static_sizes, ::llvm::ArrayRef<int64_t> static_strides);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  /// Return the number of leading operands before the `offsets`, `sizes` and
  /// and `strides` operands.
  static unsigned getOffsetSizeAndStrideStartOperandIndex() { return 1; }

  /// Returns the type of the base tensor operand.
  RankedTensorType getSourceType() {
    return getSource().getType().cast<RankedTensorType>();
  }

  std::array<unsigned, 3> getArrayAttrMaxRanks() {
    unsigned rank = getSourceType().getRank();
    return {rank, rank, rank};
  }
};
} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::ExtractSliceOp)

namespace mlir {
namespace triton {
namespace gpu {

//===----------------------------------------------------------------------===//
// ::mlir::triton::gpu::InsertSliceAsyncOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class InsertSliceAsyncOpGenericAdaptorBase {
public:
  struct Properties {
    using axisTy = ::mlir::IntegerAttr;
    axisTy axis;

    auto getAxis() {
      auto &propStorage = this->axis;
      return ::llvm::cast<::mlir::IntegerAttr>(propStorage);
    }
    void setAxis(const ::mlir::IntegerAttr &propValue) {
      this->axis = propValue;
    }
    using cacheTy = ::mlir::triton::CacheModifierAttr;
    cacheTy cache;

    auto getCache() {
      auto &propStorage = this->cache;
      return ::llvm::cast<::mlir::triton::CacheModifierAttr>(propStorage);
    }
    void setCache(const ::mlir::triton::CacheModifierAttr &propValue) {
      this->cache = propValue;
    }
    using evictTy = ::mlir::triton::EvictionPolicyAttr;
    evictTy evict;

    auto getEvict() {
      auto &propStorage = this->evict;
      return ::llvm::cast<::mlir::triton::EvictionPolicyAttr>(propStorage);
    }
    void setEvict(const ::mlir::triton::EvictionPolicyAttr &propValue) {
      this->evict = propValue;
    }
    using isVolatileTy = ::mlir::BoolAttr;
    isVolatileTy isVolatile;

    auto getIsVolatile() {
      auto &propStorage = this->isVolatile;
      return ::llvm::cast<::mlir::BoolAttr>(propStorage);
    }
    void setIsVolatile(const ::mlir::BoolAttr &propValue) {
      this->isVolatile = propValue;
    }
    using operandSegmentSizesTy = std::array<int32_t, 5>;
    operandSegmentSizesTy operandSegmentSizes;
    ::llvm::ArrayRef<int32_t> getOperandSegmentSizes() {
      auto &propStorage = this->operandSegmentSizes;
      return propStorage;
    }
    void setOperandSegmentSizes(const ::llvm::ArrayRef<int32_t> &propValue) {
      auto &propStorage = this->operandSegmentSizes;
      ::llvm::copy(propValue, propStorage.begin());
    }
    bool operator==(const Properties &rhs) const {
      return 
        rhs.axis == this->axis &&
        rhs.cache == this->cache &&
        rhs.evict == this->evict &&
        rhs.isVolatile == this->isVolatile &&
        rhs.operandSegmentSizes == this->operandSegmentSizes &&
        true;
    }
    bool operator!=(const Properties &rhs) const {
      return !(*this == rhs);
    }
  };
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::std::optional<::mlir::OperationName> odsOpName;
  Properties properties;
  ::mlir::RegionRange odsRegions;
public:
  InsertSliceAsyncOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {});

  InsertSliceAsyncOpGenericAdaptorBase(InsertSliceAsyncOp op);

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  const Properties &getProperties() {
    return properties;
  }

  ::mlir::DictionaryAttr getAttributes();
  ::mlir::triton::CacheModifierAttr getCacheAttr();
  ::mlir::triton::CacheModifier getCache();
  ::mlir::triton::EvictionPolicyAttr getEvictAttr();
  ::mlir::triton::EvictionPolicy getEvict();
  ::mlir::BoolAttr getIsVolatileAttr();
  bool getIsVolatile();
  ::mlir::IntegerAttr getAxisAttr();
  uint32_t getAxis();
};
} // namespace detail
template <typename RangeT>
class InsertSliceAsyncOpGenericAdaptor : public detail::InsertSliceAsyncOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::InsertSliceAsyncOpGenericAdaptorBase;
public:
  InsertSliceAsyncOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, const Properties &properties = {}, ::mlir::RegionRange regions = {}) : Base(attrs, properties, regions), odsOperands(values) {}

  InsertSliceAsyncOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::OpaqueProperties properties, ::mlir::RegionRange regions = {}) : InsertSliceAsyncOpGenericAdaptor(values, attrs, (properties ? *properties.as<Properties *>() : Properties{}), regions) {}

  template <typename LateInst = InsertSliceAsyncOp, typename = std::enable_if_t<std::is_same_v<LateInst, InsertSliceAsyncOp>>>
  InsertSliceAsyncOpGenericAdaptor(RangeT values, LateInst op) : Base(op), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getSrc() {
    return (*getODSOperands(0).begin());
  }

  ValueT getDst() {
    return (*getODSOperands(1).begin());
  }

  ValueT getIndex() {
    return (*getODSOperands(2).begin());
  }

  ValueT getMask() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getOther() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class InsertSliceAsyncOpAdaptor : public InsertSliceAsyncOpGenericAdaptor<::mlir::ValueRange> {
public:
  using InsertSliceAsyncOpGenericAdaptor::InsertSliceAsyncOpGenericAdaptor;
  InsertSliceAsyncOpAdaptor(InsertSliceAsyncOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class InsertSliceAsyncOp : public ::mlir::Op<InsertSliceAsyncOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<3>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::BytecodeOpInterface::Trait, ::mlir::OpTrait::ResultsAreSharedEncoding, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::VerifyTensorLayoutsTrait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = InsertSliceAsyncOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = InsertSliceAsyncOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  using Properties = FoldAdaptor::Properties;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("axis"), ::llvm::StringRef("cache"), ::llvm::StringRef("evict"), ::llvm::StringRef("isVolatile"), ::llvm::StringRef("operandSegmentSizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAxisAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAxisAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getCacheAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getCacheAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getEvictAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getEvictAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getIsVolatileAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getIsVolatileAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
   return (*this)->getName().getAttributeNames().back();
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
   return name.getAttributeNames().back();
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("triton_gpu.insert_slice_async");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getSrc();
  ::mlir::Value getDst();
  ::mlir::TypedValue<::mlir::IntegerType> getIndex();
  ::mlir::TypedValue<::mlir::TensorType> getMask();
  ::mlir::Value getOther();
  ::mlir::OpOperand &getSrcMutable();
  ::mlir::OpOperand &getDstMutable();
  ::mlir::OpOperand &getIndexMutable();
  ::mlir::MutableOperandRange getMaskMutable();
  ::mlir::MutableOperandRange getOtherMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  static ::mlir::LogicalResult setPropertiesFromAttr(Properties &prop, ::mlir::Attribute attr, ::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::Attribute getPropertiesAsAttr(::mlir::MLIRContext *ctx, const Properties &prop);
  static llvm::hash_code computePropertiesHash(const Properties &prop);
  static std::optional<mlir::Attribute> getInherentAttr(::mlir::MLIRContext *ctx, const Properties &prop, llvm::StringRef name);
  static void setInherentAttr(Properties &prop, llvm::StringRef name, mlir::Attribute value);
  static void populateInherentAttrs(::mlir::MLIRContext *ctx, const Properties &prop, ::mlir::NamedAttrList &attrs);
  static ::mlir::LogicalResult verifyInherentAttrs(::mlir::OperationName opName, ::mlir::NamedAttrList &attrs, llvm::function_ref<::mlir::InFlightDiagnostic()> emitError);
  static ::mlir::LogicalResult readProperties(::mlir::DialectBytecodeReader &reader, ::mlir::OperationState &state);
  void writeProperties(::mlir::DialectBytecodeWriter &writer);
  ::mlir::triton::CacheModifierAttr getCacheAttr();
  ::mlir::triton::CacheModifier getCache();
  ::mlir::triton::EvictionPolicyAttr getEvictAttr();
  ::mlir::triton::EvictionPolicy getEvict();
  ::mlir::BoolAttr getIsVolatileAttr();
  bool getIsVolatile();
  ::mlir::IntegerAttr getAxisAttr();
  uint32_t getAxis();
  void setCacheAttr(::mlir::triton::CacheModifierAttr attr);
  void setCache(::mlir::triton::CacheModifier attrValue);
  void setEvictAttr(::mlir::triton::EvictionPolicyAttr attr);
  void setEvict(::mlir::triton::EvictionPolicy attrValue);
  void setIsVolatileAttr(::mlir::BoolAttr attr);
  void setIsVolatile(bool attrValue);
  void setAxisAttr(::mlir::IntegerAttr attr);
  void setAxis(uint32_t attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value src, Value dst, Value index, triton::CacheModifier cache, triton::EvictionPolicy evict, bool isVolatile, int axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value src, Value dst, Value index, Value mask, triton::CacheModifier cache, triton::EvictionPolicy evict, bool isVolatile, int axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, Value src, Value dst, Value index, Value mask, Value other, triton::CacheModifier cache, triton::EvictionPolicy evict, bool isVolatile, int axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src, ::mlir::Value dst, ::mlir::Value index, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value other, ::mlir::triton::CacheModifierAttr cache, ::mlir::triton::EvictionPolicyAttr evict, ::mlir::BoolAttr isVolatile, ::mlir::IntegerAttr axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value dst, ::mlir::Value index, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value other, ::mlir::triton::CacheModifierAttr cache, ::mlir::triton::EvictionPolicyAttr evict, ::mlir::BoolAttr isVolatile, ::mlir::IntegerAttr axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value src, ::mlir::Value dst, ::mlir::Value index, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value other, ::mlir::triton::CacheModifier cache, ::mlir::triton::EvictionPolicy evict, bool isVolatile, uint32_t axis);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value src, ::mlir::Value dst, ::mlir::Value index, /*optional*/::mlir::Value mask, /*optional*/::mlir::Value other, ::mlir::triton::CacheModifier cache, ::mlir::triton::EvictionPolicy evict, bool isVolatile, uint32_t axis);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 4 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    assert(name.isRegistered() && "Operation isn't registered, missing a "
          "dependent dialect loading?");
    return name.getAttributeNames()[index];
  }

public:
  static DenseSet<unsigned> getEligibleLoadByteWidth(int computeCapability) {
    DenseSet<unsigned> validLoadBytes;
    if (computeCapability >= 80) {
      validLoadBytes = {4, 8, 16};
    }
    return validLoadBytes;
  }
};
} // namespace gpu
} // namespace triton
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::triton::gpu::InsertSliceAsyncOp)


#endif  // GET_OP_CLASSES

