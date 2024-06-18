/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES


namespace mlir {
class AsmParser;
class AsmPrinter;
} // namespace mlir
namespace mlir {
namespace spirv {
class VersionAttr;
class DeviceTypeAttr;
class VendorAttr;
class ClientAPIAttr;
class ExtensionAttr;
class CapabilityAttr;
class AddressingModelAttr;
class BuiltInAttr;
class DecorationAttr;
class DimAttr;
class ExecutionModeAttr;
class ExecutionModelAttr;
class FunctionControlAttr;
class GroupOperationAttr;
class ImageFormatAttr;
class ImageOperandsAttr;
class LinkageTypeAttr;
class LoopControlAttr;
class MemoryAccessAttr;
class MemoryModelAttr;
class MemorySemanticsAttr;
class ScopeAttr;
class SelectionControlAttr;
class StorageClassAttr;
class PackedVectorFormatAttr;
class ImageDepthInfoAttr;
class ImageArrayedInfoAttr;
class ImageSamplingInfoAttr;
class ImageSamplerUseInfoAttr;
class MatrixLayoutAttr;
class CooperativeMatrixUseKHRAttr;
class CooperativeMatrixLayoutKHRAttr;
class CooperativeMatrixOperandsKHRAttr;
class OpcodeAttr;
class FPFastMathModeAttr;
class EntryPointABIAttr;
class LinkageAttributesAttr;
class CooperativeMatrixPropertiesKHRAttr;
class CooperativeMatrixPropertiesNVAttr;
class JointMatrixPropertiesINTELAttr;
class ResourceLimitsAttr;
namespace detail {
struct VersionAttrStorage;
} // namespace detail
class VersionAttr : public ::mlir::Attribute::AttrBase<VersionAttr, ::mlir::Attribute, detail::VersionAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.version";
  static VersionAttr get(::mlir::MLIRContext *context, ::mlir::spirv::Version value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"version"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::Version getValue() const;
};
namespace detail {
struct DeviceTypeAttrStorage;
} // namespace detail
class DeviceTypeAttr : public ::mlir::Attribute::AttrBase<DeviceTypeAttr, ::mlir::Attribute, detail::DeviceTypeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.device_type";
  static DeviceTypeAttr get(::mlir::MLIRContext *context, ::mlir::spirv::DeviceType value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"device_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::DeviceType getValue() const;
};
namespace detail {
struct VendorAttrStorage;
} // namespace detail
class VendorAttr : public ::mlir::Attribute::AttrBase<VendorAttr, ::mlir::Attribute, detail::VendorAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.vendor";
  static VendorAttr get(::mlir::MLIRContext *context, ::mlir::spirv::Vendor value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"vendor"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::Vendor getValue() const;
};
namespace detail {
struct ClientAPIAttrStorage;
} // namespace detail
class ClientAPIAttr : public ::mlir::Attribute::AttrBase<ClientAPIAttr, ::mlir::Attribute, detail::ClientAPIAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.client_api";
  static ClientAPIAttr get(::mlir::MLIRContext *context, ::mlir::spirv::ClientAPI value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"client_api"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::ClientAPI getValue() const;
};
namespace detail {
struct ExtensionAttrStorage;
} // namespace detail
class ExtensionAttr : public ::mlir::Attribute::AttrBase<ExtensionAttr, ::mlir::Attribute, detail::ExtensionAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.ext";
  static ExtensionAttr get(::mlir::MLIRContext *context, ::mlir::spirv::Extension value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"ext"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::Extension getValue() const;
};
namespace detail {
struct CapabilityAttrStorage;
} // namespace detail
class CapabilityAttr : public ::mlir::Attribute::AttrBase<CapabilityAttr, ::mlir::Attribute, detail::CapabilityAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.capability";
  static CapabilityAttr get(::mlir::MLIRContext *context, ::mlir::spirv::Capability value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"capability"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::Capability getValue() const;
};
namespace detail {
struct AddressingModelAttrStorage;
} // namespace detail
class AddressingModelAttr : public ::mlir::Attribute::AttrBase<AddressingModelAttr, ::mlir::Attribute, detail::AddressingModelAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.addressing_model";
  static AddressingModelAttr get(::mlir::MLIRContext *context, ::mlir::spirv::AddressingModel value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"addressing_model"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::AddressingModel getValue() const;
};
namespace detail {
struct BuiltInAttrStorage;
} // namespace detail
class BuiltInAttr : public ::mlir::Attribute::AttrBase<BuiltInAttr, ::mlir::Attribute, detail::BuiltInAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.built_in";
  static BuiltInAttr get(::mlir::MLIRContext *context, ::mlir::spirv::BuiltIn value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"built_in"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::BuiltIn getValue() const;
};
namespace detail {
struct DecorationAttrStorage;
} // namespace detail
class DecorationAttr : public ::mlir::Attribute::AttrBase<DecorationAttr, ::mlir::Attribute, detail::DecorationAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.decoration";
  static DecorationAttr get(::mlir::MLIRContext *context, ::mlir::spirv::Decoration value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"decoration"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::Decoration getValue() const;
};
namespace detail {
struct DimAttrStorage;
} // namespace detail
class DimAttr : public ::mlir::Attribute::AttrBase<DimAttr, ::mlir::Attribute, detail::DimAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.dim";
  static DimAttr get(::mlir::MLIRContext *context, ::mlir::spirv::Dim value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"dim"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::Dim getValue() const;
};
namespace detail {
struct ExecutionModeAttrStorage;
} // namespace detail
class ExecutionModeAttr : public ::mlir::Attribute::AttrBase<ExecutionModeAttr, ::mlir::Attribute, detail::ExecutionModeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.execution_mode";
  static ExecutionModeAttr get(::mlir::MLIRContext *context, ::mlir::spirv::ExecutionMode value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"execution_mode"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::ExecutionMode getValue() const;
};
namespace detail {
struct ExecutionModelAttrStorage;
} // namespace detail
class ExecutionModelAttr : public ::mlir::Attribute::AttrBase<ExecutionModelAttr, ::mlir::Attribute, detail::ExecutionModelAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.execution_model";
  static ExecutionModelAttr get(::mlir::MLIRContext *context, ::mlir::spirv::ExecutionModel value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"execution_model"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::ExecutionModel getValue() const;
};
namespace detail {
struct FunctionControlAttrStorage;
} // namespace detail
class FunctionControlAttr : public ::mlir::Attribute::AttrBase<FunctionControlAttr, ::mlir::Attribute, detail::FunctionControlAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.function_control";
  static FunctionControlAttr get(::mlir::MLIRContext *context, ::mlir::spirv::FunctionControl value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"function_control"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::FunctionControl getValue() const;
};
namespace detail {
struct GroupOperationAttrStorage;
} // namespace detail
class GroupOperationAttr : public ::mlir::Attribute::AttrBase<GroupOperationAttr, ::mlir::Attribute, detail::GroupOperationAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.group_operation";
  static GroupOperationAttr get(::mlir::MLIRContext *context, ::mlir::spirv::GroupOperation value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"group_operation"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::GroupOperation getValue() const;
};
namespace detail {
struct ImageFormatAttrStorage;
} // namespace detail
class ImageFormatAttr : public ::mlir::Attribute::AttrBase<ImageFormatAttr, ::mlir::Attribute, detail::ImageFormatAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.image_format";
  static ImageFormatAttr get(::mlir::MLIRContext *context, ::mlir::spirv::ImageFormat value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"image_format"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::ImageFormat getValue() const;
};
namespace detail {
struct ImageOperandsAttrStorage;
} // namespace detail
class ImageOperandsAttr : public ::mlir::Attribute::AttrBase<ImageOperandsAttr, ::mlir::Attribute, detail::ImageOperandsAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.image_operands";
  static ImageOperandsAttr get(::mlir::MLIRContext *context, ::mlir::spirv::ImageOperands value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"image_operands"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::ImageOperands getValue() const;
};
namespace detail {
struct LinkageTypeAttrStorage;
} // namespace detail
class LinkageTypeAttr : public ::mlir::Attribute::AttrBase<LinkageTypeAttr, ::mlir::Attribute, detail::LinkageTypeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.linkage_type";
  static LinkageTypeAttr get(::mlir::MLIRContext *context, ::mlir::spirv::LinkageType value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"linkage_type"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::LinkageType getValue() const;
};
namespace detail {
struct LoopControlAttrStorage;
} // namespace detail
class LoopControlAttr : public ::mlir::Attribute::AttrBase<LoopControlAttr, ::mlir::Attribute, detail::LoopControlAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.loop_control";
  static LoopControlAttr get(::mlir::MLIRContext *context, ::mlir::spirv::LoopControl value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"loop_control"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::LoopControl getValue() const;
};
namespace detail {
struct MemoryAccessAttrStorage;
} // namespace detail
class MemoryAccessAttr : public ::mlir::Attribute::AttrBase<MemoryAccessAttr, ::mlir::Attribute, detail::MemoryAccessAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.memory_access";
  static MemoryAccessAttr get(::mlir::MLIRContext *context, ::mlir::spirv::MemoryAccess value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"memory_access"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::MemoryAccess getValue() const;
};
namespace detail {
struct MemoryModelAttrStorage;
} // namespace detail
class MemoryModelAttr : public ::mlir::Attribute::AttrBase<MemoryModelAttr, ::mlir::Attribute, detail::MemoryModelAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.memory_model";
  static MemoryModelAttr get(::mlir::MLIRContext *context, ::mlir::spirv::MemoryModel value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"memory_model"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::MemoryModel getValue() const;
};
namespace detail {
struct MemorySemanticsAttrStorage;
} // namespace detail
class MemorySemanticsAttr : public ::mlir::Attribute::AttrBase<MemorySemanticsAttr, ::mlir::Attribute, detail::MemorySemanticsAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.memory_semantics";
  static MemorySemanticsAttr get(::mlir::MLIRContext *context, ::mlir::spirv::MemorySemantics value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"memory_semantics"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::MemorySemantics getValue() const;
};
namespace detail {
struct ScopeAttrStorage;
} // namespace detail
class ScopeAttr : public ::mlir::Attribute::AttrBase<ScopeAttr, ::mlir::Attribute, detail::ScopeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.scope";
  static ScopeAttr get(::mlir::MLIRContext *context, ::mlir::spirv::Scope value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"scope"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::Scope getValue() const;
};
namespace detail {
struct SelectionControlAttrStorage;
} // namespace detail
class SelectionControlAttr : public ::mlir::Attribute::AttrBase<SelectionControlAttr, ::mlir::Attribute, detail::SelectionControlAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.selection_control";
  static SelectionControlAttr get(::mlir::MLIRContext *context, ::mlir::spirv::SelectionControl value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"selection_control"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::SelectionControl getValue() const;
};
namespace detail {
struct StorageClassAttrStorage;
} // namespace detail
class StorageClassAttr : public ::mlir::Attribute::AttrBase<StorageClassAttr, ::mlir::Attribute, detail::StorageClassAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.storage_class";
  static StorageClassAttr get(::mlir::MLIRContext *context, ::mlir::spirv::StorageClass value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"storage_class"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::StorageClass getValue() const;
};
namespace detail {
struct PackedVectorFormatAttrStorage;
} // namespace detail
class PackedVectorFormatAttr : public ::mlir::Attribute::AttrBase<PackedVectorFormatAttr, ::mlir::Attribute, detail::PackedVectorFormatAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.packed_vector_format";
  static PackedVectorFormatAttr get(::mlir::MLIRContext *context, ::mlir::spirv::PackedVectorFormat value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"packed_vector_format"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::PackedVectorFormat getValue() const;
};
namespace detail {
struct ImageDepthInfoAttrStorage;
} // namespace detail
class ImageDepthInfoAttr : public ::mlir::Attribute::AttrBase<ImageDepthInfoAttr, ::mlir::Attribute, detail::ImageDepthInfoAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.image_depth_info";
  static ImageDepthInfoAttr get(::mlir::MLIRContext *context, ::mlir::spirv::ImageDepthInfo value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"image_depth_info"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::ImageDepthInfo getValue() const;
};
namespace detail {
struct ImageArrayedInfoAttrStorage;
} // namespace detail
class ImageArrayedInfoAttr : public ::mlir::Attribute::AttrBase<ImageArrayedInfoAttr, ::mlir::Attribute, detail::ImageArrayedInfoAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.image_arrayed_info";
  static ImageArrayedInfoAttr get(::mlir::MLIRContext *context, ::mlir::spirv::ImageArrayedInfo value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"image_arrayed_info"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::ImageArrayedInfo getValue() const;
};
namespace detail {
struct ImageSamplingInfoAttrStorage;
} // namespace detail
class ImageSamplingInfoAttr : public ::mlir::Attribute::AttrBase<ImageSamplingInfoAttr, ::mlir::Attribute, detail::ImageSamplingInfoAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.image_sampling_info";
  static ImageSamplingInfoAttr get(::mlir::MLIRContext *context, ::mlir::spirv::ImageSamplingInfo value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"image_sampling_info"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::ImageSamplingInfo getValue() const;
};
namespace detail {
struct ImageSamplerUseInfoAttrStorage;
} // namespace detail
class ImageSamplerUseInfoAttr : public ::mlir::Attribute::AttrBase<ImageSamplerUseInfoAttr, ::mlir::Attribute, detail::ImageSamplerUseInfoAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.image_sampler_use_info";
  static ImageSamplerUseInfoAttr get(::mlir::MLIRContext *context, ::mlir::spirv::ImageSamplerUseInfo value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"image_sampler_use_info"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::ImageSamplerUseInfo getValue() const;
};
namespace detail {
struct MatrixLayoutAttrStorage;
} // namespace detail
class MatrixLayoutAttr : public ::mlir::Attribute::AttrBase<MatrixLayoutAttr, ::mlir::Attribute, detail::MatrixLayoutAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.matrixLayout";
  static MatrixLayoutAttr get(::mlir::MLIRContext *context, ::mlir::spirv::MatrixLayout value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"matrixLayout"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::MatrixLayout getValue() const;
};
namespace detail {
struct CooperativeMatrixUseKHRAttrStorage;
} // namespace detail
class CooperativeMatrixUseKHRAttr : public ::mlir::Attribute::AttrBase<CooperativeMatrixUseKHRAttr, ::mlir::Attribute, detail::CooperativeMatrixUseKHRAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.coop_matrix_use_khr";
  static CooperativeMatrixUseKHRAttr get(::mlir::MLIRContext *context, ::mlir::spirv::CooperativeMatrixUseKHR value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"coop_matrix_use_khr"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::CooperativeMatrixUseKHR getValue() const;
};
namespace detail {
struct CooperativeMatrixLayoutKHRAttrStorage;
} // namespace detail
class CooperativeMatrixLayoutKHRAttr : public ::mlir::Attribute::AttrBase<CooperativeMatrixLayoutKHRAttr, ::mlir::Attribute, detail::CooperativeMatrixLayoutKHRAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.coop_matrix_layout_khr";
  static CooperativeMatrixLayoutKHRAttr get(::mlir::MLIRContext *context, ::mlir::spirv::CooperativeMatrixLayoutKHR value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"coop_matrix_layout_khr"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::CooperativeMatrixLayoutKHR getValue() const;
};
namespace detail {
struct CooperativeMatrixOperandsKHRAttrStorage;
} // namespace detail
class CooperativeMatrixOperandsKHRAttr : public ::mlir::Attribute::AttrBase<CooperativeMatrixOperandsKHRAttr, ::mlir::Attribute, detail::CooperativeMatrixOperandsKHRAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.cooperative_matrix_operands_khr";
  static CooperativeMatrixOperandsKHRAttr get(::mlir::MLIRContext *context, ::mlir::spirv::CooperativeMatrixOperandsKHR value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"cooperative_matrix_operands_khr"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::CooperativeMatrixOperandsKHR getValue() const;
};
namespace detail {
struct OpcodeAttrStorage;
} // namespace detail
class OpcodeAttr : public ::mlir::Attribute::AttrBase<OpcodeAttr, ::mlir::Attribute, detail::OpcodeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.opcode";
  static OpcodeAttr get(::mlir::MLIRContext *context, ::mlir::spirv::Opcode value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"opcode"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::Opcode getValue() const;
};
namespace detail {
struct FPFastMathModeAttrStorage;
} // namespace detail
class FPFastMathModeAttr : public ::mlir::Attribute::AttrBase<FPFastMathModeAttr, ::mlir::Attribute, detail::FPFastMathModeAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.fastmath_mode";
  static FPFastMathModeAttr get(::mlir::MLIRContext *context, ::mlir::spirv::FPFastMathMode value);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"fastmath_mode"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  ::mlir::spirv::FPFastMathMode getValue() const;
};
namespace detail {
struct EntryPointABIAttrStorage;
} // namespace detail
class EntryPointABIAttr : public ::mlir::Attribute::AttrBase<EntryPointABIAttr, ::mlir::Attribute, detail::EntryPointABIAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.entry_point_abi";
  static EntryPointABIAttr get(::mlir::MLIRContext *context, DenseI32ArrayAttr workgroup_size, std::optional<int> subgroup_size);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"entry_point_abi"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  DenseI32ArrayAttr getWorkgroupSize() const;
  std::optional<int> getSubgroupSize() const;
};
namespace detail {
struct LinkageAttributesAttrStorage;
} // namespace detail
class LinkageAttributesAttr : public ::mlir::Attribute::AttrBase<LinkageAttributesAttr, ::mlir::Attribute, detail::LinkageAttributesAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.linkage_attributes";
  static LinkageAttributesAttr get(::mlir::MLIRContext *context, std::string linkage_name, mlir::spirv::LinkageTypeAttr linkage_type);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"linkage_attributes"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  std::string getLinkageName() const;
  mlir::spirv::LinkageTypeAttr getLinkageType() const;
};
namespace detail {
struct CooperativeMatrixPropertiesKHRAttrStorage;
} // namespace detail
class CooperativeMatrixPropertiesKHRAttr : public ::mlir::Attribute::AttrBase<CooperativeMatrixPropertiesKHRAttr, ::mlir::Attribute, detail::CooperativeMatrixPropertiesKHRAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.coop_matrix_props_khr";
  static CooperativeMatrixPropertiesKHRAttr get(::mlir::MLIRContext *context, uint32_t m_size, uint32_t n_size, uint32_t k_size, mlir::Type a_type, mlir::Type b_type, mlir::Type c_type, mlir::Type result_type, bool acc_sat, mlir::spirv::ScopeAttr scope);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"coop_matrix_props_khr"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  uint32_t getMSize() const;
  uint32_t getNSize() const;
  uint32_t getKSize() const;
  mlir::Type getAType() const;
  mlir::Type getBType() const;
  mlir::Type getCType() const;
  mlir::Type getResultType() const;
  bool getAccSat() const;
  mlir::spirv::ScopeAttr getScope() const;
};
namespace detail {
struct CooperativeMatrixPropertiesNVAttrStorage;
} // namespace detail
class CooperativeMatrixPropertiesNVAttr : public ::mlir::Attribute::AttrBase<CooperativeMatrixPropertiesNVAttr, ::mlir::Attribute, detail::CooperativeMatrixPropertiesNVAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.coop_matrix_props_nv";
  static CooperativeMatrixPropertiesNVAttr get(::mlir::MLIRContext *context, int m_size, int n_size, int k_size, mlir::Type a_type, mlir::Type b_type, mlir::Type c_type, mlir::Type result_type, mlir::spirv::ScopeAttr scope);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"coop_matrix_props_nv"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  int getMSize() const;
  int getNSize() const;
  int getKSize() const;
  mlir::Type getAType() const;
  mlir::Type getBType() const;
  mlir::Type getCType() const;
  mlir::Type getResultType() const;
  mlir::spirv::ScopeAttr getScope() const;
};
namespace detail {
struct JointMatrixPropertiesINTELAttrStorage;
} // namespace detail
class JointMatrixPropertiesINTELAttr : public ::mlir::Attribute::AttrBase<JointMatrixPropertiesINTELAttr, ::mlir::Attribute, detail::JointMatrixPropertiesINTELAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.joint_matrix_props";
  static JointMatrixPropertiesINTELAttr get(::mlir::MLIRContext *context, int m_size, int n_size, int k_size, mlir::Type a_type, mlir::Type b_type, mlir::Type c_type, mlir::Type result_type, mlir::spirv::ScopeAttr scope);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"joint_matrix_props"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  int getMSize() const;
  int getNSize() const;
  int getKSize() const;
  mlir::Type getAType() const;
  mlir::Type getBType() const;
  mlir::Type getCType() const;
  mlir::Type getResultType() const;
  mlir::spirv::ScopeAttr getScope() const;
};
namespace detail {
struct ResourceLimitsAttrStorage;
} // namespace detail
class ResourceLimitsAttr : public ::mlir::Attribute::AttrBase<ResourceLimitsAttr, ::mlir::Attribute, detail::ResourceLimitsAttrStorage> {
public:
  using Base::Base;
  static constexpr ::llvm::StringLiteral name = "spirv.resource_limits";
  static ResourceLimitsAttr get(::mlir::MLIRContext *context, int max_compute_shared_memory_size, int max_compute_workgroup_invocations, ArrayAttr max_compute_workgroup_size, int subgroup_size, std::optional<int> min_subgroup_size, std::optional<int> max_subgroup_size, ArrayAttr cooperative_matrix_properties_khr, ArrayAttr cooperative_matrix_properties_nv);
  static constexpr ::llvm::StringLiteral getMnemonic() {
    return {"resource_limits"};
  }

  static ::mlir::Attribute parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType);
  void print(::mlir::AsmPrinter &odsPrinter) const;
  int getMaxComputeSharedMemorySize() const;
  int getMaxComputeWorkgroupInvocations() const;
  ArrayAttr getMaxComputeWorkgroupSize() const;
  int getSubgroupSize() const;
  std::optional<int> getMinSubgroupSize() const;
  std::optional<int> getMaxSubgroupSize() const;
  ArrayAttr getCooperativeMatrixPropertiesKhr() const;
  ArrayAttr getCooperativeMatrixPropertiesNv() const;
};
} // namespace spirv
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::VersionAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::DeviceTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::VendorAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::ClientAPIAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::ExtensionAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::CapabilityAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::AddressingModelAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::BuiltInAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::DecorationAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::DimAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::ExecutionModeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::ExecutionModelAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::FunctionControlAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::GroupOperationAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::ImageFormatAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::ImageOperandsAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::LinkageTypeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::LoopControlAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::MemoryAccessAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::MemoryModelAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::MemorySemanticsAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::ScopeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::SelectionControlAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::StorageClassAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::PackedVectorFormatAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::ImageDepthInfoAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::ImageArrayedInfoAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::ImageSamplingInfoAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::ImageSamplerUseInfoAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::MatrixLayoutAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::CooperativeMatrixUseKHRAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::CooperativeMatrixLayoutKHRAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::CooperativeMatrixOperandsKHRAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::OpcodeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::FPFastMathModeAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::EntryPointABIAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::LinkageAttributesAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::CooperativeMatrixPropertiesKHRAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::CooperativeMatrixPropertiesNVAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::JointMatrixPropertiesINTELAttr)
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::spirv::ResourceLimitsAttr)

#endif  // GET_ATTRDEF_CLASSES

