/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_LIST
#undef GET_ATTRDEF_LIST

::mlir::spirv::VersionAttr,
::mlir::spirv::DeviceTypeAttr,
::mlir::spirv::VendorAttr,
::mlir::spirv::ClientAPIAttr,
::mlir::spirv::ExtensionAttr,
::mlir::spirv::CapabilityAttr,
::mlir::spirv::AddressingModelAttr,
::mlir::spirv::BuiltInAttr,
::mlir::spirv::DecorationAttr,
::mlir::spirv::DimAttr,
::mlir::spirv::ExecutionModeAttr,
::mlir::spirv::ExecutionModelAttr,
::mlir::spirv::FunctionControlAttr,
::mlir::spirv::GroupOperationAttr,
::mlir::spirv::ImageFormatAttr,
::mlir::spirv::ImageOperandsAttr,
::mlir::spirv::LinkageTypeAttr,
::mlir::spirv::LoopControlAttr,
::mlir::spirv::MemoryAccessAttr,
::mlir::spirv::MemoryModelAttr,
::mlir::spirv::MemorySemanticsAttr,
::mlir::spirv::ScopeAttr,
::mlir::spirv::SelectionControlAttr,
::mlir::spirv::StorageClassAttr,
::mlir::spirv::PackedVectorFormatAttr,
::mlir::spirv::ImageDepthInfoAttr,
::mlir::spirv::ImageArrayedInfoAttr,
::mlir::spirv::ImageSamplingInfoAttr,
::mlir::spirv::ImageSamplerUseInfoAttr,
::mlir::spirv::MatrixLayoutAttr,
::mlir::spirv::CooperativeMatrixUseKHRAttr,
::mlir::spirv::CooperativeMatrixLayoutKHRAttr,
::mlir::spirv::CooperativeMatrixOperandsKHRAttr,
::mlir::spirv::OpcodeAttr,
::mlir::spirv::FPFastMathModeAttr,
::mlir::spirv::EntryPointABIAttr,
::mlir::spirv::LinkageAttributesAttr,
::mlir::spirv::CooperativeMatrixPropertiesKHRAttr,
::mlir::spirv::CooperativeMatrixPropertiesNVAttr,
::mlir::spirv::JointMatrixPropertiesINTELAttr,
::mlir::spirv::ResourceLimitsAttr

#endif  // GET_ATTRDEF_LIST

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES

static ::mlir::OptionalParseResult generatedAttributeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type type, ::mlir::Attribute &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::mlir::spirv::VersionAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::VersionAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::DeviceTypeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::DeviceTypeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::VendorAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::VendorAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::ClientAPIAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::ClientAPIAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::ExtensionAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::ExtensionAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::CapabilityAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::CapabilityAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::AddressingModelAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::AddressingModelAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::BuiltInAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::BuiltInAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::DecorationAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::DecorationAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::DimAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::DimAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::ExecutionModeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::ExecutionModeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::ExecutionModelAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::ExecutionModelAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::FunctionControlAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::FunctionControlAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::GroupOperationAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::GroupOperationAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::ImageFormatAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::ImageFormatAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::ImageOperandsAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::ImageOperandsAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::LinkageTypeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::LinkageTypeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::LoopControlAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::LoopControlAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::MemoryAccessAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::MemoryAccessAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::MemoryModelAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::MemoryModelAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::MemorySemanticsAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::MemorySemanticsAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::ScopeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::ScopeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::SelectionControlAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::SelectionControlAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::StorageClassAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::StorageClassAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::PackedVectorFormatAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::PackedVectorFormatAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::ImageDepthInfoAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::ImageDepthInfoAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::ImageArrayedInfoAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::ImageArrayedInfoAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::ImageSamplingInfoAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::ImageSamplingInfoAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::ImageSamplerUseInfoAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::ImageSamplerUseInfoAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::MatrixLayoutAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::MatrixLayoutAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::CooperativeMatrixUseKHRAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::CooperativeMatrixUseKHRAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::CooperativeMatrixLayoutKHRAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::CooperativeMatrixLayoutKHRAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::CooperativeMatrixOperandsKHRAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::CooperativeMatrixOperandsKHRAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::OpcodeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::OpcodeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::FPFastMathModeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::FPFastMathModeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::EntryPointABIAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::EntryPointABIAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::LinkageAttributesAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::LinkageAttributesAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::CooperativeMatrixPropertiesKHRAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::CooperativeMatrixPropertiesKHRAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::CooperativeMatrixPropertiesNVAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::CooperativeMatrixPropertiesNVAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::JointMatrixPropertiesINTELAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::JointMatrixPropertiesINTELAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::spirv::ResourceLimitsAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::spirv::ResourceLimitsAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::mlir::LogicalResult generatedAttributePrinter(::mlir::Attribute def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Attribute, ::mlir::LogicalResult>(def)    .Case<::mlir::spirv::VersionAttr>([&](auto t) {
      printer << ::mlir::spirv::VersionAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::DeviceTypeAttr>([&](auto t) {
      printer << ::mlir::spirv::DeviceTypeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::VendorAttr>([&](auto t) {
      printer << ::mlir::spirv::VendorAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::ClientAPIAttr>([&](auto t) {
      printer << ::mlir::spirv::ClientAPIAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::ExtensionAttr>([&](auto t) {
      printer << ::mlir::spirv::ExtensionAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::CapabilityAttr>([&](auto t) {
      printer << ::mlir::spirv::CapabilityAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::AddressingModelAttr>([&](auto t) {
      printer << ::mlir::spirv::AddressingModelAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::BuiltInAttr>([&](auto t) {
      printer << ::mlir::spirv::BuiltInAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::DecorationAttr>([&](auto t) {
      printer << ::mlir::spirv::DecorationAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::DimAttr>([&](auto t) {
      printer << ::mlir::spirv::DimAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::ExecutionModeAttr>([&](auto t) {
      printer << ::mlir::spirv::ExecutionModeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::ExecutionModelAttr>([&](auto t) {
      printer << ::mlir::spirv::ExecutionModelAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::FunctionControlAttr>([&](auto t) {
      printer << ::mlir::spirv::FunctionControlAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::GroupOperationAttr>([&](auto t) {
      printer << ::mlir::spirv::GroupOperationAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::ImageFormatAttr>([&](auto t) {
      printer << ::mlir::spirv::ImageFormatAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::ImageOperandsAttr>([&](auto t) {
      printer << ::mlir::spirv::ImageOperandsAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::LinkageTypeAttr>([&](auto t) {
      printer << ::mlir::spirv::LinkageTypeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::LoopControlAttr>([&](auto t) {
      printer << ::mlir::spirv::LoopControlAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::MemoryAccessAttr>([&](auto t) {
      printer << ::mlir::spirv::MemoryAccessAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::MemoryModelAttr>([&](auto t) {
      printer << ::mlir::spirv::MemoryModelAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::MemorySemanticsAttr>([&](auto t) {
      printer << ::mlir::spirv::MemorySemanticsAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::ScopeAttr>([&](auto t) {
      printer << ::mlir::spirv::ScopeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::SelectionControlAttr>([&](auto t) {
      printer << ::mlir::spirv::SelectionControlAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::StorageClassAttr>([&](auto t) {
      printer << ::mlir::spirv::StorageClassAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::PackedVectorFormatAttr>([&](auto t) {
      printer << ::mlir::spirv::PackedVectorFormatAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::ImageDepthInfoAttr>([&](auto t) {
      printer << ::mlir::spirv::ImageDepthInfoAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::ImageArrayedInfoAttr>([&](auto t) {
      printer << ::mlir::spirv::ImageArrayedInfoAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::ImageSamplingInfoAttr>([&](auto t) {
      printer << ::mlir::spirv::ImageSamplingInfoAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::ImageSamplerUseInfoAttr>([&](auto t) {
      printer << ::mlir::spirv::ImageSamplerUseInfoAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::MatrixLayoutAttr>([&](auto t) {
      printer << ::mlir::spirv::MatrixLayoutAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::CooperativeMatrixUseKHRAttr>([&](auto t) {
      printer << ::mlir::spirv::CooperativeMatrixUseKHRAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::CooperativeMatrixLayoutKHRAttr>([&](auto t) {
      printer << ::mlir::spirv::CooperativeMatrixLayoutKHRAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::CooperativeMatrixOperandsKHRAttr>([&](auto t) {
      printer << ::mlir::spirv::CooperativeMatrixOperandsKHRAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::OpcodeAttr>([&](auto t) {
      printer << ::mlir::spirv::OpcodeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::FPFastMathModeAttr>([&](auto t) {
      printer << ::mlir::spirv::FPFastMathModeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::EntryPointABIAttr>([&](auto t) {
      printer << ::mlir::spirv::EntryPointABIAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::LinkageAttributesAttr>([&](auto t) {
      printer << ::mlir::spirv::LinkageAttributesAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::CooperativeMatrixPropertiesKHRAttr>([&](auto t) {
      printer << ::mlir::spirv::CooperativeMatrixPropertiesKHRAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::CooperativeMatrixPropertiesNVAttr>([&](auto t) {
      printer << ::mlir::spirv::CooperativeMatrixPropertiesNVAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::JointMatrixPropertiesINTELAttr>([&](auto t) {
      printer << ::mlir::spirv::JointMatrixPropertiesINTELAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::spirv::ResourceLimitsAttr>([&](auto t) {
      printer << ::mlir::spirv::ResourceLimitsAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace mlir {
namespace spirv {
namespace detail {
struct VersionAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::Version>;
  VersionAttrStorage(::mlir::spirv::Version value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static VersionAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<VersionAttrStorage>()) VersionAttrStorage(std::move(value));
  }

  ::mlir::spirv::Version value;
};
} // namespace detail
VersionAttr VersionAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::Version value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute VersionAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::Version> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::Version> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeVersion(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::Version" << " to be one of: " << "v1.0" << ", " << "v1.1" << ", " << "v1.2" << ", " << "v1.3" << ", " << "v1.4" << ", " << "v1.5" << ", " << "v1.6")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_VersionAttr parameter 'value' which is to be a `::mlir::spirv::Version`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return VersionAttr::get(odsParser.getContext(),
      ::mlir::spirv::Version((*_result_value)));
}

void VersionAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyVersion(getValue());
  odsPrinter << ">";
}

::mlir::spirv::Version VersionAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::VersionAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct DeviceTypeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::DeviceType>;
  DeviceTypeAttrStorage(::mlir::spirv::DeviceType value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static DeviceTypeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<DeviceTypeAttrStorage>()) DeviceTypeAttrStorage(std::move(value));
  }

  ::mlir::spirv::DeviceType value;
};
} // namespace detail
DeviceTypeAttr DeviceTypeAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::DeviceType value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute DeviceTypeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::DeviceType> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::DeviceType> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeDeviceType(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::DeviceType" << " to be one of: " << "Other" << ", " << "IntegratedGPU" << ", " << "DiscreteGPU" << ", " << "CPU" << ", " << "Unknown")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_DeviceTypeAttr parameter 'value' which is to be a `::mlir::spirv::DeviceType`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return DeviceTypeAttr::get(odsParser.getContext(),
      ::mlir::spirv::DeviceType((*_result_value)));
}

void DeviceTypeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyDeviceType(getValue());
  odsPrinter << ">";
}

::mlir::spirv::DeviceType DeviceTypeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::DeviceTypeAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct VendorAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::Vendor>;
  VendorAttrStorage(::mlir::spirv::Vendor value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static VendorAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<VendorAttrStorage>()) VendorAttrStorage(std::move(value));
  }

  ::mlir::spirv::Vendor value;
};
} // namespace detail
VendorAttr VendorAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::Vendor value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute VendorAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::Vendor> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::Vendor> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeVendor(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::Vendor" << " to be one of: " << "AMD" << ", " << "Apple" << ", " << "ARM" << ", " << "Imagination" << ", " << "Intel" << ", " << "NVIDIA" << ", " << "Qualcomm" << ", " << "SwiftShader" << ", " << "Unknown")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_VendorAttr parameter 'value' which is to be a `::mlir::spirv::Vendor`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return VendorAttr::get(odsParser.getContext(),
      ::mlir::spirv::Vendor((*_result_value)));
}

void VendorAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyVendor(getValue());
  odsPrinter << ">";
}

::mlir::spirv::Vendor VendorAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::VendorAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct ClientAPIAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::ClientAPI>;
  ClientAPIAttrStorage(::mlir::spirv::ClientAPI value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ClientAPIAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ClientAPIAttrStorage>()) ClientAPIAttrStorage(std::move(value));
  }

  ::mlir::spirv::ClientAPI value;
};
} // namespace detail
ClientAPIAttr ClientAPIAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::ClientAPI value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ClientAPIAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::ClientAPI> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::ClientAPI> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeClientAPI(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::ClientAPI" << " to be one of: " << "Metal" << ", " << "OpenCL" << ", " << "Vulkan" << ", " << "WebGPU" << ", " << "Unknown")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ClientAPIAttr parameter 'value' which is to be a `::mlir::spirv::ClientAPI`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return ClientAPIAttr::get(odsParser.getContext(),
      ::mlir::spirv::ClientAPI((*_result_value)));
}

void ClientAPIAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyClientAPI(getValue());
  odsPrinter << ">";
}

::mlir::spirv::ClientAPI ClientAPIAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::ClientAPIAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct ExtensionAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::Extension>;
  ExtensionAttrStorage(::mlir::spirv::Extension value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ExtensionAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ExtensionAttrStorage>()) ExtensionAttrStorage(std::move(value));
  }

  ::mlir::spirv::Extension value;
};
} // namespace detail
ExtensionAttr ExtensionAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::Extension value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ExtensionAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::Extension> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::Extension> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeExtension(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::Extension" << " to be one of: " << "SPV_KHR_16bit_storage" << ", " << "SPV_KHR_8bit_storage" << ", " << "SPV_KHR_device_group" << ", " << "SPV_KHR_float_controls" << ", " << "SPV_KHR_physical_storage_buffer" << ", " << "SPV_KHR_multiview" << ", " << "SPV_KHR_no_integer_wrap_decoration" << ", " << "SPV_KHR_post_depth_coverage" << ", " << "SPV_KHR_shader_atomic_counter_ops" << ", " << "SPV_KHR_shader_ballot" << ", " << "SPV_KHR_shader_clock" << ", " << "SPV_KHR_shader_draw_parameters" << ", " << "SPV_KHR_storage_buffer_storage_class" << ", " << "SPV_KHR_subgroup_vote" << ", " << "SPV_KHR_variable_pointers" << ", " << "SPV_KHR_vulkan_memory_model" << ", " << "SPV_KHR_expect_assume" << ", " << "SPV_KHR_integer_dot_product" << ", " << "SPV_KHR_bit_instructions" << ", " << "SPV_KHR_fragment_shading_rate" << ", " << "SPV_KHR_workgroup_memory_explicit_layout" << ", " << "SPV_KHR_ray_query" << ", " << "SPV_KHR_ray_tracing" << ", " << "SPV_KHR_subgroup_uniform_control_flow" << ", " << "SPV_KHR_linkonce_odr" << ", " << "SPV_KHR_fragment_shader_barycentric" << ", " << "SPV_KHR_ray_cull_mask" << ", " << "SPV_KHR_uniform_group_instructions" << ", " << "SPV_KHR_subgroup_rotate" << ", " << "SPV_KHR_non_semantic_info" << ", " << "SPV_KHR_terminate_invocation" << ", " << "SPV_KHR_cooperative_matrix" << ", " << "SPV_EXT_demote_to_helper_invocation" << ", " << "SPV_EXT_descriptor_indexing" << ", " << "SPV_EXT_fragment_fully_covered" << ", " << "SPV_EXT_fragment_invocation_density" << ", " << "SPV_EXT_fragment_shader_interlock" << ", " << "SPV_EXT_physical_storage_buffer" << ", " << "SPV_EXT_shader_stencil_export" << ", " << "SPV_EXT_shader_viewport_index_layer" << ", " << "SPV_EXT_shader_atomic_float_add" << ", " << "SPV_EXT_shader_atomic_float_min_max" << ", " << "SPV_EXT_shader_image_int64" << ", " << "SPV_EXT_shader_atomic_float16_add" << ", " << "SPV_AMD_gpu_shader_half_float_fetch" << ", " << "SPV_AMD_shader_ballot" << ", " << "SPV_AMD_shader_explicit_vertex_parameter" << ", " << "SPV_AMD_shader_fragment_mask" << ", " << "SPV_AMD_shader_image_load_store_lod" << ", " << "SPV_AMD_texture_gather_bias_lod" << ", " << "SPV_AMD_shader_early_and_late_fragment_tests" << ", " << "SPV_GOOGLE_decorate_string" << ", " << "SPV_GOOGLE_hlsl_functionality1" << ", " << "SPV_GOOGLE_user_type" << ", " << "SPV_INTEL_device_side_avc_motion_estimation" << ", " << "SPV_INTEL_media_block_io" << ", " << "SPV_INTEL_shader_integer_functions2" << ", " << "SPV_INTEL_subgroups" << ", " << "SPV_INTEL_vector_compute" << ", " << "SPV_INTEL_float_controls2" << ", " << "SPV_INTEL_function_pointers" << ", " << "SPV_INTEL_inline_assembly" << ", " << "SPV_INTEL_variable_length_array" << ", " << "SPV_INTEL_fpga_memory_attributes" << ", " << "SPV_INTEL_unstructured_loop_controls" << ", " << "SPV_INTEL_fpga_loop_controls" << ", " << "SPV_INTEL_arbitrary_precision_integers" << ", " << "SPV_INTEL_arbitrary_precision_floating_point" << ", " << "SPV_INTEL_kernel_attributes" << ", " << "SPV_INTEL_fpga_memory_accesses" << ", " << "SPV_INTEL_fpga_cluster_attributes" << ", " << "SPV_INTEL_loop_fuse" << ", " << "SPV_INTEL_fpga_buffer_location" << ", " << "SPV_INTEL_arbitrary_precision_fixed_point" << ", " << "SPV_INTEL_usm_storage_classes" << ", " << "SPV_INTEL_io_pipes" << ", " << "SPV_INTEL_blocking_pipes" << ", " << "SPV_INTEL_fpga_reg" << ", " << "SPV_INTEL_long_constant_composite" << ", " << "SPV_INTEL_optnone" << ", " << "SPV_INTEL_debug_module" << ", " << "SPV_INTEL_fp_fast_math_mode" << ", " << "SPV_INTEL_memory_access_aliasing" << ", " << "SPV_INTEL_split_barrier" << ", " << "SPV_INTEL_joint_matrix" << ", " << "SPV_INTEL_bfloat16_conversion" << ", " << "SPV_NV_compute_shader_derivatives" << ", " << "SPV_NV_cooperative_matrix" << ", " << "SPV_NV_fragment_shader_barycentric" << ", " << "SPV_NV_geometry_shader_passthrough" << ", " << "SPV_NV_mesh_shader" << ", " << "SPV_NV_ray_tracing" << ", " << "SPV_NV_sample_mask_override_coverage" << ", " << "SPV_NV_shader_image_footprint" << ", " << "SPV_NV_shader_sm_builtins" << ", " << "SPV_NV_shader_subgroup_partitioned" << ", " << "SPV_NV_shading_rate" << ", " << "SPV_NV_stereo_view_rendering" << ", " << "SPV_NV_viewport_array2" << ", " << "SPV_NV_bindless_texture" << ", " << "SPV_NV_ray_tracing_motion_blur" << ", " << "SPV_NVX_multiview_per_view_attributes")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ExtensionAttr parameter 'value' which is to be a `::mlir::spirv::Extension`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return ExtensionAttr::get(odsParser.getContext(),
      ::mlir::spirv::Extension((*_result_value)));
}

void ExtensionAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyExtension(getValue());
  odsPrinter << ">";
}

::mlir::spirv::Extension ExtensionAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::ExtensionAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct CapabilityAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::Capability>;
  CapabilityAttrStorage(::mlir::spirv::Capability value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static CapabilityAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<CapabilityAttrStorage>()) CapabilityAttrStorage(std::move(value));
  }

  ::mlir::spirv::Capability value;
};
} // namespace detail
CapabilityAttr CapabilityAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::Capability value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute CapabilityAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::Capability> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::Capability> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeCapability(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::Capability" << " to be one of: " << "Matrix" << ", " << "Addresses" << ", " << "Linkage" << ", " << "Kernel" << ", " << "Float16" << ", " << "Float64" << ", " << "Int64" << ", " << "Groups" << ", " << "Int16" << ", " << "Int8" << ", " << "Sampled1D" << ", " << "SampledBuffer" << ", " << "GroupNonUniform" << ", " << "ShaderLayer" << ", " << "ShaderViewportIndex" << ", " << "UniformDecoration" << ", " << "SubgroupBallotKHR" << ", " << "SubgroupVoteKHR" << ", " << "StorageBuffer16BitAccess" << ", " << "StoragePushConstant16" << ", " << "StorageInputOutput16" << ", " << "DeviceGroup" << ", " << "AtomicStorageOps" << ", " << "SampleMaskPostDepthCoverage" << ", " << "StorageBuffer8BitAccess" << ", " << "StoragePushConstant8" << ", " << "DenormPreserve" << ", " << "DenormFlushToZero" << ", " << "SignedZeroInfNanPreserve" << ", " << "RoundingModeRTE" << ", " << "RoundingModeRTZ" << ", " << "ImageFootprintNV" << ", " << "FragmentBarycentricKHR" << ", " << "ComputeDerivativeGroupQuadsNV" << ", " << "GroupNonUniformPartitionedNV" << ", " << "VulkanMemoryModel" << ", " << "VulkanMemoryModelDeviceScope" << ", " << "ComputeDerivativeGroupLinearNV" << ", " << "BindlessTextureNV" << ", " << "SubgroupShuffleINTEL" << ", " << "SubgroupBufferBlockIOINTEL" << ", " << "SubgroupImageBlockIOINTEL" << ", " << "SubgroupImageMediaBlockIOINTEL" << ", " << "RoundToInfinityINTEL" << ", " << "FloatingPointModeINTEL" << ", " << "FunctionPointersINTEL" << ", " << "IndirectReferencesINTEL" << ", " << "AsmINTEL" << ", " << "AtomicFloat32MinMaxEXT" << ", " << "AtomicFloat64MinMaxEXT" << ", " << "AtomicFloat16MinMaxEXT" << ", " << "VectorAnyINTEL" << ", " << "ExpectAssumeKHR" << ", " << "SubgroupAvcMotionEstimationINTEL" << ", " << "SubgroupAvcMotionEstimationIntraINTEL" << ", " << "SubgroupAvcMotionEstimationChromaINTEL" << ", " << "VariableLengthArrayINTEL" << ", " << "FunctionFloatControlINTEL" << ", " << "FPGAMemoryAttributesINTEL" << ", " << "ArbitraryPrecisionIntegersINTEL" << ", " << "ArbitraryPrecisionFloatingPointINTEL" << ", " << "UnstructuredLoopControlsINTEL" << ", " << "FPGALoopControlsINTEL" << ", " << "KernelAttributesINTEL" << ", " << "FPGAKernelAttributesINTEL" << ", " << "FPGAMemoryAccessesINTEL" << ", " << "FPGAClusterAttributesINTEL" << ", " << "LoopFuseINTEL" << ", " << "MemoryAccessAliasingINTEL" << ", " << "FPGABufferLocationINTEL" << ", " << "ArbitraryPrecisionFixedPointINTEL" << ", " << "USMStorageClassesINTEL" << ", " << "IOPipesINTEL" << ", " << "BlockingPipesINTEL" << ", " << "FPGARegINTEL" << ", " << "DotProductInputAll" << ", " << "DotProductInput4x8BitPacked" << ", " << "DotProduct" << ", " << "RayCullMaskKHR" << ", " << "CooperativeMatrixKHR" << ", " << "BitInstructions" << ", " << "AtomicFloat32AddEXT" << ", " << "AtomicFloat64AddEXT" << ", " << "LongConstantCompositeINTEL" << ", " << "OptNoneINTEL" << ", " << "AtomicFloat16AddEXT" << ", " << "DebugInfoModuleINTEL" << ", " << "SplitBarrierINTEL" << ", " << "GroupUniformArithmeticKHR" << ", " << "Shader" << ", " << "Vector16" << ", " << "Float16Buffer" << ", " << "Int64Atomics" << ", " << "ImageBasic" << ", " << "Pipes" << ", " << "DeviceEnqueue" << ", " << "LiteralSampler" << ", " << "GenericPointer" << ", " << "Image1D" << ", " << "ImageBuffer" << ", " << "NamedBarrier" << ", " << "GroupNonUniformVote" << ", " << "GroupNonUniformArithmetic" << ", " << "GroupNonUniformBallot" << ", " << "GroupNonUniformShuffle" << ", " << "GroupNonUniformShuffleRelative" << ", " << "GroupNonUniformClustered" << ", " << "GroupNonUniformQuad" << ", " << "StorageUniform16" << ", " << "UniformAndStorageBuffer8BitAccess" << ", " << "UniformTexelBufferArrayDynamicIndexing" << ", " << "VectorComputeINTEL" << ", " << "FPFastMathModeINTEL" << ", " << "DotProductInput4x8Bit" << ", " << "GroupNonUniformRotateKHR" << ", " << "Geometry" << ", " << "Tessellation" << ", " << "ImageReadWrite" << ", " << "ImageMipmap" << ", " << "AtomicStorage" << ", " << "ImageGatherExtended" << ", " << "StorageImageMultisample" << ", " << "UniformBufferArrayDynamicIndexing" << ", " << "SampledImageArrayDynamicIndexing" << ", " << "StorageBufferArrayDynamicIndexing" << ", " << "StorageImageArrayDynamicIndexing" << ", " << "ClipDistance" << ", " << "CullDistance" << ", " << "SampleRateShading" << ", " << "SampledRect" << ", " << "InputAttachment" << ", " << "SparseResidency" << ", " << "MinLod" << ", " << "SampledCubeArray" << ", " << "ImageMSArray" << ", " << "StorageImageExtendedFormats" << ", " << "ImageQuery" << ", " << "DerivativeControl" << ", " << "InterpolationFunction" << ", " << "TransformFeedback" << ", " << "StorageImageReadWithoutFormat" << ", " << "StorageImageWriteWithoutFormat" << ", " << "SubgroupDispatch" << ", " << "PipeStorage" << ", " << "FragmentShadingRateKHR" << ", " << "DrawParameters" << ", " << "WorkgroupMemoryExplicitLayoutKHR" << ", " << "WorkgroupMemoryExplicitLayout16BitAccessKHR" << ", " << "MultiView" << ", " << "VariablePointersStorageBuffer" << ", " << "RayQueryProvisionalKHR" << ", " << "RayQueryKHR" << ", " << "RayTracingKHR" << ", " << "Float16ImageAMD" << ", " << "ImageGatherBiasLodAMD" << ", " << "FragmentMaskAMD" << ", " << "StencilExportEXT" << ", " << "ImageReadWriteLodAMD" << ", " << "Int64ImageEXT" << ", " << "ShaderClockKHR" << ", " << "FragmentFullyCoveredEXT" << ", " << "MeshShadingNV" << ", " << "FragmentDensityEXT" << ", " << "ShaderNonUniform" << ", " << "RuntimeDescriptorArray" << ", " << "StorageTexelBufferArrayDynamicIndexing" << ", " << "RayTracingNV" << ", " << "RayTracingMotionBlurNV" << ", " << "PhysicalStorageBufferAddresses" << ", " << "RayTracingProvisionalKHR" << ", " << "FragmentShaderSampleInterlockEXT" << ", " << "FragmentShaderShadingRateInterlockEXT" << ", " << "ShaderSMBuiltinsNV" << ", " << "FragmentShaderPixelInterlockEXT" << ", " << "DemoteToHelperInvocation" << ", " << "IntegerFunctions2INTEL" << ", " << "TessellationPointSize" << ", " << "GeometryPointSize" << ", " << "ImageCubeArray" << ", " << "ImageRect" << ", " << "GeometryStreams" << ", " << "MultiViewport" << ", " << "WorkgroupMemoryExplicitLayout8BitAccessKHR" << ", " << "VariablePointers" << ", " << "RayTraversalPrimitiveCullingKHR" << ", " << "SampleMaskOverrideCoverageNV" << ", " << "GeometryShaderPassthroughNV" << ", " << "PerViewAttributesNV" << ", " << "InputAttachmentArrayDynamicIndexing" << ", " << "UniformBufferArrayNonUniformIndexing" << ", " << "SampledImageArrayNonUniformIndexing" << ", " << "StorageBufferArrayNonUniformIndexing" << ", " << "StorageImageArrayNonUniformIndexing" << ", " << "InputAttachmentArrayNonUniformIndexing" << ", " << "UniformTexelBufferArrayNonUniformIndexing" << ", " << "StorageTexelBufferArrayNonUniformIndexing" << ", " << "ShaderViewportIndexLayerEXT" << ", " << "ShaderViewportMaskNV" << ", " << "ShaderStereoViewNV" << ", " << "JointMatrixINTEL" << ", " << "Bfloat16ConversionINTEL")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CapabilityAttr parameter 'value' which is to be a `::mlir::spirv::Capability`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return CapabilityAttr::get(odsParser.getContext(),
      ::mlir::spirv::Capability((*_result_value)));
}

void CapabilityAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyCapability(getValue());
  odsPrinter << ">";
}

::mlir::spirv::Capability CapabilityAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::CapabilityAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct AddressingModelAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::AddressingModel>;
  AddressingModelAttrStorage(::mlir::spirv::AddressingModel value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static AddressingModelAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<AddressingModelAttrStorage>()) AddressingModelAttrStorage(std::move(value));
  }

  ::mlir::spirv::AddressingModel value;
};
} // namespace detail
AddressingModelAttr AddressingModelAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::AddressingModel value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute AddressingModelAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::AddressingModel> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::AddressingModel> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeAddressingModel(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::AddressingModel" << " to be one of: " << "Logical" << ", " << "Physical32" << ", " << "Physical64" << ", " << "PhysicalStorageBuffer64")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_AddressingModelAttr parameter 'value' which is to be a `::mlir::spirv::AddressingModel`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return AddressingModelAttr::get(odsParser.getContext(),
      ::mlir::spirv::AddressingModel((*_result_value)));
}

void AddressingModelAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyAddressingModel(getValue());
  odsPrinter << ">";
}

::mlir::spirv::AddressingModel AddressingModelAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::AddressingModelAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct BuiltInAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::BuiltIn>;
  BuiltInAttrStorage(::mlir::spirv::BuiltIn value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static BuiltInAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<BuiltInAttrStorage>()) BuiltInAttrStorage(std::move(value));
  }

  ::mlir::spirv::BuiltIn value;
};
} // namespace detail
BuiltInAttr BuiltInAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::BuiltIn value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute BuiltInAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::BuiltIn> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::BuiltIn> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeBuiltIn(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::BuiltIn" << " to be one of: " << "Position" << ", " << "PointSize" << ", " << "ClipDistance" << ", " << "CullDistance" << ", " << "VertexId" << ", " << "InstanceId" << ", " << "PrimitiveId" << ", " << "InvocationId" << ", " << "Layer" << ", " << "ViewportIndex" << ", " << "TessLevelOuter" << ", " << "TessLevelInner" << ", " << "TessCoord" << ", " << "PatchVertices" << ", " << "FragCoord" << ", " << "PointCoord" << ", " << "FrontFacing" << ", " << "SampleId" << ", " << "SamplePosition" << ", " << "SampleMask" << ", " << "FragDepth" << ", " << "HelperInvocation" << ", " << "NumWorkgroups" << ", " << "WorkgroupSize" << ", " << "WorkgroupId" << ", " << "LocalInvocationId" << ", " << "GlobalInvocationId" << ", " << "LocalInvocationIndex" << ", " << "WorkDim" << ", " << "GlobalSize" << ", " << "EnqueuedWorkgroupSize" << ", " << "GlobalOffset" << ", " << "GlobalLinearId" << ", " << "SubgroupSize" << ", " << "SubgroupMaxSize" << ", " << "NumSubgroups" << ", " << "NumEnqueuedSubgroups" << ", " << "SubgroupId" << ", " << "SubgroupLocalInvocationId" << ", " << "VertexIndex" << ", " << "InstanceIndex" << ", " << "SubgroupEqMask" << ", " << "SubgroupGeMask" << ", " << "SubgroupGtMask" << ", " << "SubgroupLeMask" << ", " << "SubgroupLtMask" << ", " << "BaseVertex" << ", " << "BaseInstance" << ", " << "DrawIndex" << ", " << "PrimitiveShadingRateKHR" << ", " << "DeviceIndex" << ", " << "ViewIndex" << ", " << "ShadingRateKHR" << ", " << "BaryCoordNoPerspAMD" << ", " << "BaryCoordNoPerspCentroidAMD" << ", " << "BaryCoordNoPerspSampleAMD" << ", " << "BaryCoordSmoothAMD" << ", " << "BaryCoordSmoothCentroidAMD" << ", " << "BaryCoordSmoothSampleAMD" << ", " << "BaryCoordPullModelAMD" << ", " << "FragStencilRefEXT" << ", " << "ViewportMaskNV" << ", " << "SecondaryPositionNV" << ", " << "SecondaryViewportMaskNV" << ", " << "PositionPerViewNV" << ", " << "ViewportMaskPerViewNV" << ", " << "FullyCoveredEXT" << ", " << "TaskCountNV" << ", " << "PrimitiveCountNV" << ", " << "PrimitiveIndicesNV" << ", " << "ClipDistancePerViewNV" << ", " << "CullDistancePerViewNV" << ", " << "LayerPerViewNV" << ", " << "MeshViewCountNV" << ", " << "MeshViewIndicesNV" << ", " << "BaryCoordKHR" << ", " << "BaryCoordNoPerspKHR" << ", " << "FragSizeEXT" << ", " << "FragInvocationCountEXT" << ", " << "LaunchIdKHR" << ", " << "LaunchSizeKHR" << ", " << "WorldRayOriginKHR" << ", " << "WorldRayDirectionKHR" << ", " << "ObjectRayOriginKHR" << ", " << "ObjectRayDirectionKHR" << ", " << "RayTminKHR" << ", " << "RayTmaxKHR" << ", " << "InstanceCustomIndexKHR" << ", " << "ObjectToWorldKHR" << ", " << "WorldToObjectKHR" << ", " << "HitTNV" << ", " << "HitKindKHR" << ", " << "CurrentRayTimeNV" << ", " << "IncomingRayFlagsKHR" << ", " << "RayGeometryIndexKHR" << ", " << "WarpsPerSMNV" << ", " << "SMCountNV" << ", " << "WarpIDNV" << ", " << "SMIDNV" << ", " << "CullMaskKHR")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_BuiltInAttr parameter 'value' which is to be a `::mlir::spirv::BuiltIn`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return BuiltInAttr::get(odsParser.getContext(),
      ::mlir::spirv::BuiltIn((*_result_value)));
}

void BuiltInAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyBuiltIn(getValue());
  odsPrinter << ">";
}

::mlir::spirv::BuiltIn BuiltInAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::BuiltInAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct DecorationAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::Decoration>;
  DecorationAttrStorage(::mlir::spirv::Decoration value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static DecorationAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<DecorationAttrStorage>()) DecorationAttrStorage(std::move(value));
  }

  ::mlir::spirv::Decoration value;
};
} // namespace detail
DecorationAttr DecorationAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::Decoration value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute DecorationAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::Decoration> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::Decoration> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeDecoration(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::Decoration" << " to be one of: " << "RelaxedPrecision" << ", " << "SpecId" << ", " << "Block" << ", " << "BufferBlock" << ", " << "RowMajor" << ", " << "ColMajor" << ", " << "ArrayStride" << ", " << "MatrixStride" << ", " << "GLSLShared" << ", " << "GLSLPacked" << ", " << "CPacked" << ", " << "BuiltIn" << ", " << "NoPerspective" << ", " << "Flat" << ", " << "Patch" << ", " << "Centroid" << ", " << "Sample" << ", " << "Invariant" << ", " << "Restrict" << ", " << "Aliased" << ", " << "Volatile" << ", " << "Constant" << ", " << "Coherent" << ", " << "NonWritable" << ", " << "NonReadable" << ", " << "Uniform" << ", " << "UniformId" << ", " << "SaturatedConversion" << ", " << "Stream" << ", " << "Location" << ", " << "Component" << ", " << "Index" << ", " << "Binding" << ", " << "DescriptorSet" << ", " << "Offset" << ", " << "XfbBuffer" << ", " << "XfbStride" << ", " << "FuncParamAttr" << ", " << "FPRoundingMode" << ", " << "FPFastMathMode" << ", " << "LinkageAttributes" << ", " << "NoContraction" << ", " << "InputAttachmentIndex" << ", " << "Alignment" << ", " << "MaxByteOffset" << ", " << "AlignmentId" << ", " << "MaxByteOffsetId" << ", " << "NoSignedWrap" << ", " << "NoUnsignedWrap" << ", " << "ExplicitInterpAMD" << ", " << "OverrideCoverageNV" << ", " << "PassthroughNV" << ", " << "ViewportRelativeNV" << ", " << "SecondaryViewportRelativeNV" << ", " << "PerPrimitiveNV" << ", " << "PerViewNV" << ", " << "PerTaskNV" << ", " << "PerVertexKHR" << ", " << "NonUniform" << ", " << "RestrictPointer" << ", " << "AliasedPointer" << ", " << "BindlessSamplerNV" << ", " << "BindlessImageNV" << ", " << "BoundSamplerNV" << ", " << "BoundImageNV" << ", " << "SIMTCallINTEL" << ", " << "ReferencedIndirectlyINTEL" << ", " << "ClobberINTEL" << ", " << "SideEffectsINTEL" << ", " << "VectorComputeVariableINTEL" << ", " << "FuncParamIOKindINTEL" << ", " << "VectorComputeFunctionINTEL" << ", " << "StackCallINTEL" << ", " << "GlobalVariableOffsetINTEL" << ", " << "CounterBuffer" << ", " << "UserSemantic" << ", " << "UserTypeGOOGLE" << ", " << "FunctionRoundingModeINTEL" << ", " << "FunctionDenormModeINTEL" << ", " << "RegisterINTEL" << ", " << "MemoryINTEL" << ", " << "NumbanksINTEL" << ", " << "BankwidthINTEL" << ", " << "MaxPrivateCopiesINTEL" << ", " << "SinglepumpINTEL" << ", " << "DoublepumpINTEL" << ", " << "MaxReplicatesINTEL" << ", " << "SimpleDualPortINTEL" << ", " << "MergeINTEL" << ", " << "BankBitsINTEL" << ", " << "ForcePow2DepthINTEL" << ", " << "BurstCoalesceINTEL" << ", " << "CacheSizeINTEL" << ", " << "DontStaticallyCoalesceINTEL" << ", " << "PrefetchINTEL" << ", " << "StallEnableINTEL" << ", " << "FuseLoopsInFunctionINTEL" << ", " << "AliasScopeINTEL" << ", " << "NoAliasINTEL" << ", " << "BufferLocationINTEL" << ", " << "IOPipeStorageINTEL" << ", " << "FunctionFloatingPointModeINTEL" << ", " << "SingleElementVectorINTEL" << ", " << "VectorComputeCallableFunctionINTEL" << ", " << "MediaBlockIOINTEL")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_DecorationAttr parameter 'value' which is to be a `::mlir::spirv::Decoration`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return DecorationAttr::get(odsParser.getContext(),
      ::mlir::spirv::Decoration((*_result_value)));
}

void DecorationAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyDecoration(getValue());
  odsPrinter << ">";
}

::mlir::spirv::Decoration DecorationAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::DecorationAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct DimAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::Dim>;
  DimAttrStorage(::mlir::spirv::Dim value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static DimAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<DimAttrStorage>()) DimAttrStorage(std::move(value));
  }

  ::mlir::spirv::Dim value;
};
} // namespace detail
DimAttr DimAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::Dim value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute DimAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::Dim> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::Dim> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeDim(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::Dim" << " to be one of: " << "Dim1D" << ", " << "Dim2D" << ", " << "Dim3D" << ", " << "Cube" << ", " << "Rect" << ", " << "Buffer" << ", " << "SubpassData")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_DimAttr parameter 'value' which is to be a `::mlir::spirv::Dim`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return DimAttr::get(odsParser.getContext(),
      ::mlir::spirv::Dim((*_result_value)));
}

void DimAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyDim(getValue());
  odsPrinter << ">";
}

::mlir::spirv::Dim DimAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::DimAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct ExecutionModeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::ExecutionMode>;
  ExecutionModeAttrStorage(::mlir::spirv::ExecutionMode value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ExecutionModeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ExecutionModeAttrStorage>()) ExecutionModeAttrStorage(std::move(value));
  }

  ::mlir::spirv::ExecutionMode value;
};
} // namespace detail
ExecutionModeAttr ExecutionModeAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::ExecutionMode value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ExecutionModeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::ExecutionMode> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::ExecutionMode> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeExecutionMode(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::ExecutionMode" << " to be one of: " << "Invocations" << ", " << "SpacingEqual" << ", " << "SpacingFractionalEven" << ", " << "SpacingFractionalOdd" << ", " << "VertexOrderCw" << ", " << "VertexOrderCcw" << ", " << "PixelCenterInteger" << ", " << "OriginUpperLeft" << ", " << "OriginLowerLeft" << ", " << "EarlyFragmentTests" << ", " << "PointMode" << ", " << "Xfb" << ", " << "DepthReplacing" << ", " << "DepthGreater" << ", " << "DepthLess" << ", " << "DepthUnchanged" << ", " << "LocalSize" << ", " << "LocalSizeHint" << ", " << "InputPoints" << ", " << "InputLines" << ", " << "InputLinesAdjacency" << ", " << "Triangles" << ", " << "InputTrianglesAdjacency" << ", " << "Quads" << ", " << "Isolines" << ", " << "OutputVertices" << ", " << "OutputPoints" << ", " << "OutputLineStrip" << ", " << "OutputTriangleStrip" << ", " << "VecTypeHint" << ", " << "ContractionOff" << ", " << "Initializer" << ", " << "Finalizer" << ", " << "SubgroupSize" << ", " << "SubgroupsPerWorkgroup" << ", " << "SubgroupsPerWorkgroupId" << ", " << "LocalSizeId" << ", " << "LocalSizeHintId" << ", " << "SubgroupUniformControlFlowKHR" << ", " << "PostDepthCoverage" << ", " << "DenormPreserve" << ", " << "DenormFlushToZero" << ", " << "SignedZeroInfNanPreserve" << ", " << "RoundingModeRTE" << ", " << "RoundingModeRTZ" << ", " << "EarlyAndLateFragmentTestsAMD" << ", " << "StencilRefReplacingEXT" << ", " << "StencilRefUnchangedFrontAMD" << ", " << "StencilRefGreaterFrontAMD" << ", " << "StencilRefLessFrontAMD" << ", " << "StencilRefUnchangedBackAMD" << ", " << "StencilRefGreaterBackAMD" << ", " << "StencilRefLessBackAMD" << ", " << "OutputLinesNV" << ", " << "OutputPrimitivesNV" << ", " << "DerivativeGroupQuadsNV" << ", " << "DerivativeGroupLinearNV" << ", " << "OutputTrianglesNV" << ", " << "PixelInterlockOrderedEXT" << ", " << "PixelInterlockUnorderedEXT" << ", " << "SampleInterlockOrderedEXT" << ", " << "SampleInterlockUnorderedEXT" << ", " << "ShadingRateInterlockOrderedEXT" << ", " << "ShadingRateInterlockUnorderedEXT" << ", " << "SharedLocalMemorySizeINTEL" << ", " << "RoundingModeRTPINTEL" << ", " << "RoundingModeRTNINTEL" << ", " << "FloatingPointModeALTINTEL" << ", " << "FloatingPointModeIEEEINTEL" << ", " << "MaxWorkgroupSizeINTEL" << ", " << "MaxWorkDimINTEL" << ", " << "NoGlobalOffsetINTEL" << ", " << "NumSIMDWorkitemsINTEL" << ", " << "SchedulerTargetFmaxMhzINTEL" << ", " << "StreamingInterfaceINTEL" << ", " << "NamedBarrierCountINTEL")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ExecutionModeAttr parameter 'value' which is to be a `::mlir::spirv::ExecutionMode`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return ExecutionModeAttr::get(odsParser.getContext(),
      ::mlir::spirv::ExecutionMode((*_result_value)));
}

void ExecutionModeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyExecutionMode(getValue());
  odsPrinter << ">";
}

::mlir::spirv::ExecutionMode ExecutionModeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::ExecutionModeAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct ExecutionModelAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::ExecutionModel>;
  ExecutionModelAttrStorage(::mlir::spirv::ExecutionModel value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ExecutionModelAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ExecutionModelAttrStorage>()) ExecutionModelAttrStorage(std::move(value));
  }

  ::mlir::spirv::ExecutionModel value;
};
} // namespace detail
ExecutionModelAttr ExecutionModelAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::ExecutionModel value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ExecutionModelAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::ExecutionModel> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::ExecutionModel> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeExecutionModel(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::ExecutionModel" << " to be one of: " << "Vertex" << ", " << "TessellationControl" << ", " << "TessellationEvaluation" << ", " << "Geometry" << ", " << "Fragment" << ", " << "GLCompute" << ", " << "Kernel" << ", " << "TaskNV" << ", " << "MeshNV" << ", " << "RayGenerationKHR" << ", " << "IntersectionKHR" << ", " << "AnyHitKHR" << ", " << "ClosestHitKHR" << ", " << "MissKHR" << ", " << "CallableKHR")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ExecutionModelAttr parameter 'value' which is to be a `::mlir::spirv::ExecutionModel`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return ExecutionModelAttr::get(odsParser.getContext(),
      ::mlir::spirv::ExecutionModel((*_result_value)));
}

void ExecutionModelAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyExecutionModel(getValue());
  odsPrinter << ">";
}

::mlir::spirv::ExecutionModel ExecutionModelAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::ExecutionModelAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct FunctionControlAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::FunctionControl>;
  FunctionControlAttrStorage(::mlir::spirv::FunctionControl value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static FunctionControlAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<FunctionControlAttrStorage>()) FunctionControlAttrStorage(std::move(value));
  }

  ::mlir::spirv::FunctionControl value;
};
} // namespace detail
FunctionControlAttr FunctionControlAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::FunctionControl value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute FunctionControlAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::FunctionControl> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::FunctionControl> {
      ::mlir::spirv::FunctionControl flags = {};
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      do {
        if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
          return ::mlir::failure();
        auto maybeEnum = ::mlir::spirv::symbolizeFunctionControl(enumKeyword);
        if (!maybeEnum) {
            return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::FunctionControl" << " to be one of: " << "None" << ", " << "Inline" << ", " << "DontInline" << ", " << "Pure" << ", " << "Const" << ", " << "OptNoneINTEL")};
        }
        flags = flags | *maybeEnum;
      } while(::mlir::succeeded(odsParser.parseOptionalVerticalBar()));
      return flags;
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_FunctionControlAttr parameter 'value' which is to be a `::mlir::spirv::FunctionControl`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return FunctionControlAttr::get(odsParser.getContext(),
      ::mlir::spirv::FunctionControl((*_result_value)));
}

void FunctionControlAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyFunctionControl(getValue());
  odsPrinter << ">";
}

::mlir::spirv::FunctionControl FunctionControlAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::FunctionControlAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct GroupOperationAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::GroupOperation>;
  GroupOperationAttrStorage(::mlir::spirv::GroupOperation value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static GroupOperationAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<GroupOperationAttrStorage>()) GroupOperationAttrStorage(std::move(value));
  }

  ::mlir::spirv::GroupOperation value;
};
} // namespace detail
GroupOperationAttr GroupOperationAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::GroupOperation value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute GroupOperationAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::GroupOperation> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::GroupOperation> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeGroupOperation(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::GroupOperation" << " to be one of: " << "Reduce" << ", " << "InclusiveScan" << ", " << "ExclusiveScan" << ", " << "ClusteredReduce" << ", " << "PartitionedReduceNV" << ", " << "PartitionedInclusiveScanNV" << ", " << "PartitionedExclusiveScanNV")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_GroupOperationAttr parameter 'value' which is to be a `::mlir::spirv::GroupOperation`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return GroupOperationAttr::get(odsParser.getContext(),
      ::mlir::spirv::GroupOperation((*_result_value)));
}

void GroupOperationAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyGroupOperation(getValue());
  odsPrinter << ">";
}

::mlir::spirv::GroupOperation GroupOperationAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::GroupOperationAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct ImageFormatAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::ImageFormat>;
  ImageFormatAttrStorage(::mlir::spirv::ImageFormat value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ImageFormatAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ImageFormatAttrStorage>()) ImageFormatAttrStorage(std::move(value));
  }

  ::mlir::spirv::ImageFormat value;
};
} // namespace detail
ImageFormatAttr ImageFormatAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::ImageFormat value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ImageFormatAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::ImageFormat> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::ImageFormat> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeImageFormat(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::ImageFormat" << " to be one of: " << "Unknown" << ", " << "Rgba32f" << ", " << "Rgba16f" << ", " << "R32f" << ", " << "Rgba8" << ", " << "Rgba8Snorm" << ", " << "Rg32f" << ", " << "Rg16f" << ", " << "R11fG11fB10f" << ", " << "R16f" << ", " << "Rgba16" << ", " << "Rgb10A2" << ", " << "Rg16" << ", " << "Rg8" << ", " << "R16" << ", " << "R8" << ", " << "Rgba16Snorm" << ", " << "Rg16Snorm" << ", " << "Rg8Snorm" << ", " << "R16Snorm" << ", " << "R8Snorm" << ", " << "Rgba32i" << ", " << "Rgba16i" << ", " << "Rgba8i" << ", " << "R32i" << ", " << "Rg32i" << ", " << "Rg16i" << ", " << "Rg8i" << ", " << "R16i" << ", " << "R8i" << ", " << "Rgba32ui" << ", " << "Rgba16ui" << ", " << "Rgba8ui" << ", " << "R32ui" << ", " << "Rgb10a2ui" << ", " << "Rg32ui" << ", " << "Rg16ui" << ", " << "Rg8ui" << ", " << "R16ui" << ", " << "R8ui" << ", " << "R64ui" << ", " << "R64i")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ImageFormatAttr parameter 'value' which is to be a `::mlir::spirv::ImageFormat`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return ImageFormatAttr::get(odsParser.getContext(),
      ::mlir::spirv::ImageFormat((*_result_value)));
}

void ImageFormatAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyImageFormat(getValue());
  odsPrinter << ">";
}

::mlir::spirv::ImageFormat ImageFormatAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::ImageFormatAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct ImageOperandsAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::ImageOperands>;
  ImageOperandsAttrStorage(::mlir::spirv::ImageOperands value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ImageOperandsAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ImageOperandsAttrStorage>()) ImageOperandsAttrStorage(std::move(value));
  }

  ::mlir::spirv::ImageOperands value;
};
} // namespace detail
ImageOperandsAttr ImageOperandsAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::ImageOperands value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ImageOperandsAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::ImageOperands> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::ImageOperands> {
      ::mlir::spirv::ImageOperands flags = {};
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      do {
        if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
          return ::mlir::failure();
        auto maybeEnum = ::mlir::spirv::symbolizeImageOperands(enumKeyword);
        if (!maybeEnum) {
            return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::ImageOperands" << " to be one of: " << "None" << ", " << "Bias" << ", " << "Lod" << ", " << "Grad" << ", " << "ConstOffset" << ", " << "Offset" << ", " << "ConstOffsets" << ", " << "Sample" << ", " << "MinLod" << ", " << "MakeTexelAvailable" << ", " << "MakeTexelVisible" << ", " << "NonPrivateTexel" << ", " << "VolatileTexel" << ", " << "SignExtend" << ", " << "Offsets" << ", " << "ZeroExtend" << ", " << "Nontemporal")};
        }
        flags = flags | *maybeEnum;
      } while(::mlir::succeeded(odsParser.parseOptionalVerticalBar()));
      return flags;
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ImageOperandsAttr parameter 'value' which is to be a `::mlir::spirv::ImageOperands`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return ImageOperandsAttr::get(odsParser.getContext(),
      ::mlir::spirv::ImageOperands((*_result_value)));
}

void ImageOperandsAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyImageOperands(getValue());
  odsPrinter << ">";
}

::mlir::spirv::ImageOperands ImageOperandsAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::ImageOperandsAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct LinkageTypeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::LinkageType>;
  LinkageTypeAttrStorage(::mlir::spirv::LinkageType value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static LinkageTypeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<LinkageTypeAttrStorage>()) LinkageTypeAttrStorage(std::move(value));
  }

  ::mlir::spirv::LinkageType value;
};
} // namespace detail
LinkageTypeAttr LinkageTypeAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::LinkageType value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute LinkageTypeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::LinkageType> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::LinkageType> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeLinkageType(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::LinkageType" << " to be one of: " << "Export" << ", " << "Import" << ", " << "LinkOnceODR")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_LinkageTypeAttr parameter 'value' which is to be a `::mlir::spirv::LinkageType`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return LinkageTypeAttr::get(odsParser.getContext(),
      ::mlir::spirv::LinkageType((*_result_value)));
}

void LinkageTypeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyLinkageType(getValue());
  odsPrinter << ">";
}

::mlir::spirv::LinkageType LinkageTypeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::LinkageTypeAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct LoopControlAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::LoopControl>;
  LoopControlAttrStorage(::mlir::spirv::LoopControl value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static LoopControlAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<LoopControlAttrStorage>()) LoopControlAttrStorage(std::move(value));
  }

  ::mlir::spirv::LoopControl value;
};
} // namespace detail
LoopControlAttr LoopControlAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::LoopControl value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute LoopControlAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::LoopControl> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::LoopControl> {
      ::mlir::spirv::LoopControl flags = {};
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      do {
        if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
          return ::mlir::failure();
        auto maybeEnum = ::mlir::spirv::symbolizeLoopControl(enumKeyword);
        if (!maybeEnum) {
            return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::LoopControl" << " to be one of: " << "None" << ", " << "Unroll" << ", " << "DontUnroll" << ", " << "DependencyInfinite" << ", " << "DependencyLength" << ", " << "MinIterations" << ", " << "MaxIterations" << ", " << "IterationMultiple" << ", " << "PeelCount" << ", " << "PartialCount" << ", " << "InitiationIntervalINTEL" << ", " << "LoopCoalesceINTEL" << ", " << "MaxConcurrencyINTEL" << ", " << "MaxInterleavingINTEL" << ", " << "DependencyArrayINTEL" << ", " << "SpeculatedIterationsINTEL" << ", " << "PipelineEnableINTEL" << ", " << "NoFusionINTEL")};
        }
        flags = flags | *maybeEnum;
      } while(::mlir::succeeded(odsParser.parseOptionalVerticalBar()));
      return flags;
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_LoopControlAttr parameter 'value' which is to be a `::mlir::spirv::LoopControl`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return LoopControlAttr::get(odsParser.getContext(),
      ::mlir::spirv::LoopControl((*_result_value)));
}

void LoopControlAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyLoopControl(getValue());
  odsPrinter << ">";
}

::mlir::spirv::LoopControl LoopControlAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::LoopControlAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct MemoryAccessAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::MemoryAccess>;
  MemoryAccessAttrStorage(::mlir::spirv::MemoryAccess value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static MemoryAccessAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<MemoryAccessAttrStorage>()) MemoryAccessAttrStorage(std::move(value));
  }

  ::mlir::spirv::MemoryAccess value;
};
} // namespace detail
MemoryAccessAttr MemoryAccessAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::MemoryAccess value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute MemoryAccessAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::MemoryAccess> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::MemoryAccess> {
      ::mlir::spirv::MemoryAccess flags = {};
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      do {
        if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
          return ::mlir::failure();
        auto maybeEnum = ::mlir::spirv::symbolizeMemoryAccess(enumKeyword);
        if (!maybeEnum) {
            return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::MemoryAccess" << " to be one of: " << "None" << ", " << "Volatile" << ", " << "Aligned" << ", " << "Nontemporal" << ", " << "MakePointerAvailable" << ", " << "MakePointerVisible" << ", " << "NonPrivatePointer" << ", " << "AliasScopeINTELMask" << ", " << "NoAliasINTELMask")};
        }
        flags = flags | *maybeEnum;
      } while(::mlir::succeeded(odsParser.parseOptionalVerticalBar()));
      return flags;
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_MemoryAccessAttr parameter 'value' which is to be a `::mlir::spirv::MemoryAccess`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return MemoryAccessAttr::get(odsParser.getContext(),
      ::mlir::spirv::MemoryAccess((*_result_value)));
}

void MemoryAccessAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyMemoryAccess(getValue());
  odsPrinter << ">";
}

::mlir::spirv::MemoryAccess MemoryAccessAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::MemoryAccessAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct MemoryModelAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::MemoryModel>;
  MemoryModelAttrStorage(::mlir::spirv::MemoryModel value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static MemoryModelAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<MemoryModelAttrStorage>()) MemoryModelAttrStorage(std::move(value));
  }

  ::mlir::spirv::MemoryModel value;
};
} // namespace detail
MemoryModelAttr MemoryModelAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::MemoryModel value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute MemoryModelAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::MemoryModel> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::MemoryModel> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeMemoryModel(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::MemoryModel" << " to be one of: " << "Simple" << ", " << "GLSL450" << ", " << "OpenCL" << ", " << "Vulkan")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_MemoryModelAttr parameter 'value' which is to be a `::mlir::spirv::MemoryModel`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return MemoryModelAttr::get(odsParser.getContext(),
      ::mlir::spirv::MemoryModel((*_result_value)));
}

void MemoryModelAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyMemoryModel(getValue());
  odsPrinter << ">";
}

::mlir::spirv::MemoryModel MemoryModelAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::MemoryModelAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct MemorySemanticsAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::MemorySemantics>;
  MemorySemanticsAttrStorage(::mlir::spirv::MemorySemantics value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static MemorySemanticsAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<MemorySemanticsAttrStorage>()) MemorySemanticsAttrStorage(std::move(value));
  }

  ::mlir::spirv::MemorySemantics value;
};
} // namespace detail
MemorySemanticsAttr MemorySemanticsAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::MemorySemantics value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute MemorySemanticsAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::MemorySemantics> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::MemorySemantics> {
      ::mlir::spirv::MemorySemantics flags = {};
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      do {
        if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
          return ::mlir::failure();
        auto maybeEnum = ::mlir::spirv::symbolizeMemorySemantics(enumKeyword);
        if (!maybeEnum) {
            return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::MemorySemantics" << " to be one of: " << "None" << ", " << "Acquire" << ", " << "Release" << ", " << "AcquireRelease" << ", " << "SequentiallyConsistent" << ", " << "UniformMemory" << ", " << "SubgroupMemory" << ", " << "WorkgroupMemory" << ", " << "CrossWorkgroupMemory" << ", " << "AtomicCounterMemory" << ", " << "ImageMemory" << ", " << "OutputMemory" << ", " << "MakeAvailable" << ", " << "MakeVisible" << ", " << "Volatile")};
        }
        flags = flags | *maybeEnum;
      } while(::mlir::succeeded(odsParser.parseOptionalVerticalBar()));
      return flags;
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_MemorySemanticsAttr parameter 'value' which is to be a `::mlir::spirv::MemorySemantics`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return MemorySemanticsAttr::get(odsParser.getContext(),
      ::mlir::spirv::MemorySemantics((*_result_value)));
}

void MemorySemanticsAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyMemorySemantics(getValue());
  odsPrinter << ">";
}

::mlir::spirv::MemorySemantics MemorySemanticsAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::MemorySemanticsAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct ScopeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::Scope>;
  ScopeAttrStorage(::mlir::spirv::Scope value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ScopeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ScopeAttrStorage>()) ScopeAttrStorage(std::move(value));
  }

  ::mlir::spirv::Scope value;
};
} // namespace detail
ScopeAttr ScopeAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::Scope value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ScopeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::Scope> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::Scope> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeScope(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::Scope" << " to be one of: " << "CrossDevice" << ", " << "Device" << ", " << "Workgroup" << ", " << "Subgroup" << ", " << "Invocation" << ", " << "QueueFamily" << ", " << "ShaderCallKHR")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ScopeAttr parameter 'value' which is to be a `::mlir::spirv::Scope`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return ScopeAttr::get(odsParser.getContext(),
      ::mlir::spirv::Scope((*_result_value)));
}

void ScopeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyScope(getValue());
  odsPrinter << ">";
}

::mlir::spirv::Scope ScopeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::ScopeAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct SelectionControlAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::SelectionControl>;
  SelectionControlAttrStorage(::mlir::spirv::SelectionControl value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static SelectionControlAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<SelectionControlAttrStorage>()) SelectionControlAttrStorage(std::move(value));
  }

  ::mlir::spirv::SelectionControl value;
};
} // namespace detail
SelectionControlAttr SelectionControlAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::SelectionControl value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute SelectionControlAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::SelectionControl> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::SelectionControl> {
      ::mlir::spirv::SelectionControl flags = {};
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      do {
        if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
          return ::mlir::failure();
        auto maybeEnum = ::mlir::spirv::symbolizeSelectionControl(enumKeyword);
        if (!maybeEnum) {
            return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::SelectionControl" << " to be one of: " << "None" << ", " << "Flatten" << ", " << "DontFlatten")};
        }
        flags = flags | *maybeEnum;
      } while(::mlir::succeeded(odsParser.parseOptionalVerticalBar()));
      return flags;
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_SelectionControlAttr parameter 'value' which is to be a `::mlir::spirv::SelectionControl`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return SelectionControlAttr::get(odsParser.getContext(),
      ::mlir::spirv::SelectionControl((*_result_value)));
}

void SelectionControlAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifySelectionControl(getValue());
  odsPrinter << ">";
}

::mlir::spirv::SelectionControl SelectionControlAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::SelectionControlAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct StorageClassAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::StorageClass>;
  StorageClassAttrStorage(::mlir::spirv::StorageClass value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static StorageClassAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<StorageClassAttrStorage>()) StorageClassAttrStorage(std::move(value));
  }

  ::mlir::spirv::StorageClass value;
};
} // namespace detail
StorageClassAttr StorageClassAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::StorageClass value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute StorageClassAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::StorageClass> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::StorageClass> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeStorageClass(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::StorageClass" << " to be one of: " << "UniformConstant" << ", " << "Input" << ", " << "Uniform" << ", " << "Output" << ", " << "Workgroup" << ", " << "CrossWorkgroup" << ", " << "Private" << ", " << "Function" << ", " << "Generic" << ", " << "PushConstant" << ", " << "AtomicCounter" << ", " << "Image" << ", " << "StorageBuffer" << ", " << "CallableDataKHR" << ", " << "IncomingCallableDataKHR" << ", " << "RayPayloadKHR" << ", " << "HitAttributeKHR" << ", " << "IncomingRayPayloadKHR" << ", " << "ShaderRecordBufferKHR" << ", " << "PhysicalStorageBuffer" << ", " << "CodeSectionINTEL" << ", " << "DeviceOnlyINTEL" << ", " << "HostOnlyINTEL")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_StorageClassAttr parameter 'value' which is to be a `::mlir::spirv::StorageClass`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return StorageClassAttr::get(odsParser.getContext(),
      ::mlir::spirv::StorageClass((*_result_value)));
}

void StorageClassAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyStorageClass(getValue());
  odsPrinter << ">";
}

::mlir::spirv::StorageClass StorageClassAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::StorageClassAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct PackedVectorFormatAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::PackedVectorFormat>;
  PackedVectorFormatAttrStorage(::mlir::spirv::PackedVectorFormat value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static PackedVectorFormatAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<PackedVectorFormatAttrStorage>()) PackedVectorFormatAttrStorage(std::move(value));
  }

  ::mlir::spirv::PackedVectorFormat value;
};
} // namespace detail
PackedVectorFormatAttr PackedVectorFormatAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::PackedVectorFormat value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute PackedVectorFormatAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::PackedVectorFormat> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::PackedVectorFormat> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizePackedVectorFormat(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::PackedVectorFormat" << " to be one of: " << "PackedVectorFormat4x8Bit")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_PackedVectorFormatAttr parameter 'value' which is to be a `::mlir::spirv::PackedVectorFormat`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return PackedVectorFormatAttr::get(odsParser.getContext(),
      ::mlir::spirv::PackedVectorFormat((*_result_value)));
}

void PackedVectorFormatAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyPackedVectorFormat(getValue());
  odsPrinter << ">";
}

::mlir::spirv::PackedVectorFormat PackedVectorFormatAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::PackedVectorFormatAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct ImageDepthInfoAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::ImageDepthInfo>;
  ImageDepthInfoAttrStorage(::mlir::spirv::ImageDepthInfo value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ImageDepthInfoAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ImageDepthInfoAttrStorage>()) ImageDepthInfoAttrStorage(std::move(value));
  }

  ::mlir::spirv::ImageDepthInfo value;
};
} // namespace detail
ImageDepthInfoAttr ImageDepthInfoAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::ImageDepthInfo value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ImageDepthInfoAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::ImageDepthInfo> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::ImageDepthInfo> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeImageDepthInfo(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::ImageDepthInfo" << " to be one of: " << "NoDepth" << ", " << "IsDepth" << ", " << "DepthUnknown")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_DepthAttr parameter 'value' which is to be a `::mlir::spirv::ImageDepthInfo`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return ImageDepthInfoAttr::get(odsParser.getContext(),
      ::mlir::spirv::ImageDepthInfo((*_result_value)));
}

void ImageDepthInfoAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyImageDepthInfo(getValue());
  odsPrinter << ">";
}

::mlir::spirv::ImageDepthInfo ImageDepthInfoAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::ImageDepthInfoAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct ImageArrayedInfoAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::ImageArrayedInfo>;
  ImageArrayedInfoAttrStorage(::mlir::spirv::ImageArrayedInfo value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ImageArrayedInfoAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ImageArrayedInfoAttrStorage>()) ImageArrayedInfoAttrStorage(std::move(value));
  }

  ::mlir::spirv::ImageArrayedInfo value;
};
} // namespace detail
ImageArrayedInfoAttr ImageArrayedInfoAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::ImageArrayedInfo value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ImageArrayedInfoAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::ImageArrayedInfo> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::ImageArrayedInfo> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeImageArrayedInfo(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::ImageArrayedInfo" << " to be one of: " << "NonArrayed" << ", " << "Arrayed")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ArrayedAttr parameter 'value' which is to be a `::mlir::spirv::ImageArrayedInfo`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return ImageArrayedInfoAttr::get(odsParser.getContext(),
      ::mlir::spirv::ImageArrayedInfo((*_result_value)));
}

void ImageArrayedInfoAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyImageArrayedInfo(getValue());
  odsPrinter << ">";
}

::mlir::spirv::ImageArrayedInfo ImageArrayedInfoAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::ImageArrayedInfoAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct ImageSamplingInfoAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::ImageSamplingInfo>;
  ImageSamplingInfoAttrStorage(::mlir::spirv::ImageSamplingInfo value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ImageSamplingInfoAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ImageSamplingInfoAttrStorage>()) ImageSamplingInfoAttrStorage(std::move(value));
  }

  ::mlir::spirv::ImageSamplingInfo value;
};
} // namespace detail
ImageSamplingInfoAttr ImageSamplingInfoAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::ImageSamplingInfo value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ImageSamplingInfoAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::ImageSamplingInfo> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::ImageSamplingInfo> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeImageSamplingInfo(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::ImageSamplingInfo" << " to be one of: " << "SingleSampled" << ", " << "MultiSampled")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_SamplingAttr parameter 'value' which is to be a `::mlir::spirv::ImageSamplingInfo`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return ImageSamplingInfoAttr::get(odsParser.getContext(),
      ::mlir::spirv::ImageSamplingInfo((*_result_value)));
}

void ImageSamplingInfoAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyImageSamplingInfo(getValue());
  odsPrinter << ">";
}

::mlir::spirv::ImageSamplingInfo ImageSamplingInfoAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::ImageSamplingInfoAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct ImageSamplerUseInfoAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::ImageSamplerUseInfo>;
  ImageSamplerUseInfoAttrStorage(::mlir::spirv::ImageSamplerUseInfo value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ImageSamplerUseInfoAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ImageSamplerUseInfoAttrStorage>()) ImageSamplerUseInfoAttrStorage(std::move(value));
  }

  ::mlir::spirv::ImageSamplerUseInfo value;
};
} // namespace detail
ImageSamplerUseInfoAttr ImageSamplerUseInfoAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::ImageSamplerUseInfo value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ImageSamplerUseInfoAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::ImageSamplerUseInfo> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::ImageSamplerUseInfo> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeImageSamplerUseInfo(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::ImageSamplerUseInfo" << " to be one of: " << "SamplerUnknown" << ", " << "NeedSampler" << ", " << "NoSampler")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_SamplerUseAttr parameter 'value' which is to be a `::mlir::spirv::ImageSamplerUseInfo`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return ImageSamplerUseInfoAttr::get(odsParser.getContext(),
      ::mlir::spirv::ImageSamplerUseInfo((*_result_value)));
}

void ImageSamplerUseInfoAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyImageSamplerUseInfo(getValue());
  odsPrinter << ">";
}

::mlir::spirv::ImageSamplerUseInfo ImageSamplerUseInfoAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::ImageSamplerUseInfoAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct MatrixLayoutAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::MatrixLayout>;
  MatrixLayoutAttrStorage(::mlir::spirv::MatrixLayout value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static MatrixLayoutAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<MatrixLayoutAttrStorage>()) MatrixLayoutAttrStorage(std::move(value));
  }

  ::mlir::spirv::MatrixLayout value;
};
} // namespace detail
MatrixLayoutAttr MatrixLayoutAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::MatrixLayout value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute MatrixLayoutAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::MatrixLayout> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::MatrixLayout> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeMatrixLayout(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::MatrixLayout" << " to be one of: " << "ColumnMajor" << ", " << "RowMajor" << ", " << "PackedA" << ", " << "PackedB")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_MatrixLayoutAttr parameter 'value' which is to be a `::mlir::spirv::MatrixLayout`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return MatrixLayoutAttr::get(odsParser.getContext(),
      ::mlir::spirv::MatrixLayout((*_result_value)));
}

void MatrixLayoutAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyMatrixLayout(getValue());
  odsPrinter << ">";
}

::mlir::spirv::MatrixLayout MatrixLayoutAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::MatrixLayoutAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct CooperativeMatrixUseKHRAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::CooperativeMatrixUseKHR>;
  CooperativeMatrixUseKHRAttrStorage(::mlir::spirv::CooperativeMatrixUseKHR value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static CooperativeMatrixUseKHRAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<CooperativeMatrixUseKHRAttrStorage>()) CooperativeMatrixUseKHRAttrStorage(std::move(value));
  }

  ::mlir::spirv::CooperativeMatrixUseKHR value;
};
} // namespace detail
CooperativeMatrixUseKHRAttr CooperativeMatrixUseKHRAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::CooperativeMatrixUseKHR value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute CooperativeMatrixUseKHRAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::CooperativeMatrixUseKHR> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::CooperativeMatrixUseKHR> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeCooperativeMatrixUseKHR(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::CooperativeMatrixUseKHR" << " to be one of: " << "MatrixA" << ", " << "MatrixB" << ", " << "MatrixAcc")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_KHR_CooperativeMatrixUseAttr parameter 'value' which is to be a `::mlir::spirv::CooperativeMatrixUseKHR`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return CooperativeMatrixUseKHRAttr::get(odsParser.getContext(),
      ::mlir::spirv::CooperativeMatrixUseKHR((*_result_value)));
}

void CooperativeMatrixUseKHRAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyCooperativeMatrixUseKHR(getValue());
  odsPrinter << ">";
}

::mlir::spirv::CooperativeMatrixUseKHR CooperativeMatrixUseKHRAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::CooperativeMatrixUseKHRAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct CooperativeMatrixLayoutKHRAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::CooperativeMatrixLayoutKHR>;
  CooperativeMatrixLayoutKHRAttrStorage(::mlir::spirv::CooperativeMatrixLayoutKHR value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static CooperativeMatrixLayoutKHRAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<CooperativeMatrixLayoutKHRAttrStorage>()) CooperativeMatrixLayoutKHRAttrStorage(std::move(value));
  }

  ::mlir::spirv::CooperativeMatrixLayoutKHR value;
};
} // namespace detail
CooperativeMatrixLayoutKHRAttr CooperativeMatrixLayoutKHRAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::CooperativeMatrixLayoutKHR value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute CooperativeMatrixLayoutKHRAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::CooperativeMatrixLayoutKHR> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::CooperativeMatrixLayoutKHR> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeCooperativeMatrixLayoutKHR(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::CooperativeMatrixLayoutKHR" << " to be one of: " << "RowMajor" << ", " << "ColumnMajor")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_KHR_CooperativeMatrixLayoutAttr parameter 'value' which is to be a `::mlir::spirv::CooperativeMatrixLayoutKHR`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return CooperativeMatrixLayoutKHRAttr::get(odsParser.getContext(),
      ::mlir::spirv::CooperativeMatrixLayoutKHR((*_result_value)));
}

void CooperativeMatrixLayoutKHRAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyCooperativeMatrixLayoutKHR(getValue());
  odsPrinter << ">";
}

::mlir::spirv::CooperativeMatrixLayoutKHR CooperativeMatrixLayoutKHRAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::CooperativeMatrixLayoutKHRAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct CooperativeMatrixOperandsKHRAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::CooperativeMatrixOperandsKHR>;
  CooperativeMatrixOperandsKHRAttrStorage(::mlir::spirv::CooperativeMatrixOperandsKHR value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static CooperativeMatrixOperandsKHRAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<CooperativeMatrixOperandsKHRAttrStorage>()) CooperativeMatrixOperandsKHRAttrStorage(std::move(value));
  }

  ::mlir::spirv::CooperativeMatrixOperandsKHR value;
};
} // namespace detail
CooperativeMatrixOperandsKHRAttr CooperativeMatrixOperandsKHRAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::CooperativeMatrixOperandsKHR value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute CooperativeMatrixOperandsKHRAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::CooperativeMatrixOperandsKHR> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::CooperativeMatrixOperandsKHR> {
      ::mlir::spirv::CooperativeMatrixOperandsKHR flags = {};
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      do {
        if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
          return ::mlir::failure();
        auto maybeEnum = ::mlir::spirv::symbolizeCooperativeMatrixOperandsKHR(enumKeyword);
        if (!maybeEnum) {
            return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::CooperativeMatrixOperandsKHR" << " to be one of: " << "None" << ", " << "ASigned" << ", " << "BSigned" << ", " << "CSigned" << ", " << "ResultSigned" << ", " << "AccSat")};
        }
        flags = flags | *maybeEnum;
      } while(::mlir::succeeded(odsParser.parseOptionalVerticalBar()));
      return flags;
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_KHR_CooperativeMatrixOperandsAttr parameter 'value' which is to be a `::mlir::spirv::CooperativeMatrixOperandsKHR`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return CooperativeMatrixOperandsKHRAttr::get(odsParser.getContext(),
      ::mlir::spirv::CooperativeMatrixOperandsKHR((*_result_value)));
}

void CooperativeMatrixOperandsKHRAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyCooperativeMatrixOperandsKHR(getValue());
  odsPrinter << ">";
}

::mlir::spirv::CooperativeMatrixOperandsKHR CooperativeMatrixOperandsKHRAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::CooperativeMatrixOperandsKHRAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct OpcodeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::Opcode>;
  OpcodeAttrStorage(::mlir::spirv::Opcode value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static OpcodeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<OpcodeAttrStorage>()) OpcodeAttrStorage(std::move(value));
  }

  ::mlir::spirv::Opcode value;
};
} // namespace detail
OpcodeAttr OpcodeAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::Opcode value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute OpcodeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::Opcode> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::Opcode> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::spirv::symbolizeOpcode(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::Opcode" << " to be one of: " << "OpNop" << ", " << "OpUndef" << ", " << "OpSourceContinued" << ", " << "OpSource" << ", " << "OpSourceExtension" << ", " << "OpName" << ", " << "OpMemberName" << ", " << "OpString" << ", " << "OpLine" << ", " << "OpExtension" << ", " << "OpExtInstImport" << ", " << "OpExtInst" << ", " << "OpMemoryModel" << ", " << "OpEntryPoint" << ", " << "OpExecutionMode" << ", " << "OpCapability" << ", " << "OpTypeVoid" << ", " << "OpTypeBool" << ", " << "OpTypeInt" << ", " << "OpTypeFloat" << ", " << "OpTypeVector" << ", " << "OpTypeMatrix" << ", " << "OpTypeImage" << ", " << "OpTypeSampledImage" << ", " << "OpTypeArray" << ", " << "OpTypeRuntimeArray" << ", " << "OpTypeStruct" << ", " << "OpTypePointer" << ", " << "OpTypeFunction" << ", " << "OpTypeForwardPointer" << ", " << "OpConstantTrue" << ", " << "OpConstantFalse" << ", " << "OpConstant" << ", " << "OpConstantComposite" << ", " << "OpConstantNull" << ", " << "OpSpecConstantTrue" << ", " << "OpSpecConstantFalse" << ", " << "OpSpecConstant" << ", " << "OpSpecConstantComposite" << ", " << "OpSpecConstantOp" << ", " << "OpFunction" << ", " << "OpFunctionParameter" << ", " << "OpFunctionEnd" << ", " << "OpFunctionCall" << ", " << "OpVariable" << ", " << "OpLoad" << ", " << "OpStore" << ", " << "OpCopyMemory" << ", " << "OpAccessChain" << ", " << "OpPtrAccessChain" << ", " << "OpInBoundsPtrAccessChain" << ", " << "OpDecorate" << ", " << "OpMemberDecorate" << ", " << "OpVectorExtractDynamic" << ", " << "OpVectorInsertDynamic" << ", " << "OpVectorShuffle" << ", " << "OpCompositeConstruct" << ", " << "OpCompositeExtract" << ", " << "OpCompositeInsert" << ", " << "OpTranspose" << ", " << "OpImageDrefGather" << ", " << "OpImage" << ", " << "OpImageQuerySize" << ", " << "OpConvertFToU" << ", " << "OpConvertFToS" << ", " << "OpConvertSToF" << ", " << "OpConvertUToF" << ", " << "OpUConvert" << ", " << "OpSConvert" << ", " << "OpFConvert" << ", " << "OpConvertPtrToU" << ", " << "OpConvertUToPtr" << ", " << "OpPtrCastToGeneric" << ", " << "OpGenericCastToPtr" << ", " << "OpGenericCastToPtrExplicit" << ", " << "OpBitcast" << ", " << "OpSNegate" << ", " << "OpFNegate" << ", " << "OpIAdd" << ", " << "OpFAdd" << ", " << "OpISub" << ", " << "OpFSub" << ", " << "OpIMul" << ", " << "OpFMul" << ", " << "OpUDiv" << ", " << "OpSDiv" << ", " << "OpFDiv" << ", " << "OpUMod" << ", " << "OpSRem" << ", " << "OpSMod" << ", " << "OpFRem" << ", " << "OpFMod" << ", " << "OpVectorTimesScalar" << ", " << "OpMatrixTimesScalar" << ", " << "OpDot" << ", " << "OpMatrixTimesMatrix" << ", " << "OpIAddCarry" << ", " << "OpISubBorrow" << ", " << "OpUMulExtended" << ", " << "OpSMulExtended" << ", " << "OpIsNan" << ", " << "OpIsInf" << ", " << "OpOrdered" << ", " << "OpUnordered" << ", " << "OpLogicalEqual" << ", " << "OpLogicalNotEqual" << ", " << "OpLogicalOr" << ", " << "OpLogicalAnd" << ", " << "OpLogicalNot" << ", " << "OpSelect" << ", " << "OpIEqual" << ", " << "OpINotEqual" << ", " << "OpUGreaterThan" << ", " << "OpSGreaterThan" << ", " << "OpUGreaterThanEqual" << ", " << "OpSGreaterThanEqual" << ", " << "OpULessThan" << ", " << "OpSLessThan" << ", " << "OpULessThanEqual" << ", " << "OpSLessThanEqual" << ", " << "OpFOrdEqual" << ", " << "OpFUnordEqual" << ", " << "OpFOrdNotEqual" << ", " << "OpFUnordNotEqual" << ", " << "OpFOrdLessThan" << ", " << "OpFUnordLessThan" << ", " << "OpFOrdGreaterThan" << ", " << "OpFUnordGreaterThan" << ", " << "OpFOrdLessThanEqual" << ", " << "OpFUnordLessThanEqual" << ", " << "OpFOrdGreaterThanEqual" << ", " << "OpFUnordGreaterThanEqual" << ", " << "OpShiftRightLogical" << ", " << "OpShiftRightArithmetic" << ", " << "OpShiftLeftLogical" << ", " << "OpBitwiseOr" << ", " << "OpBitwiseXor" << ", " << "OpBitwiseAnd" << ", " << "OpNot" << ", " << "OpBitFieldInsert" << ", " << "OpBitFieldSExtract" << ", " << "OpBitFieldUExtract" << ", " << "OpBitReverse" << ", " << "OpBitCount" << ", " << "OpControlBarrier" << ", " << "OpMemoryBarrier" << ", " << "OpAtomicExchange" << ", " << "OpAtomicCompareExchange" << ", " << "OpAtomicCompareExchangeWeak" << ", " << "OpAtomicIIncrement" << ", " << "OpAtomicIDecrement" << ", " << "OpAtomicIAdd" << ", " << "OpAtomicISub" << ", " << "OpAtomicSMin" << ", " << "OpAtomicUMin" << ", " << "OpAtomicSMax" << ", " << "OpAtomicUMax" << ", " << "OpAtomicAnd" << ", " << "OpAtomicOr" << ", " << "OpAtomicXor" << ", " << "OpPhi" << ", " << "OpLoopMerge" << ", " << "OpSelectionMerge" << ", " << "OpLabel" << ", " << "OpBranch" << ", " << "OpBranchConditional" << ", " << "OpReturn" << ", " << "OpReturnValue" << ", " << "OpUnreachable" << ", " << "OpGroupBroadcast" << ", " << "OpGroupIAdd" << ", " << "OpGroupFAdd" << ", " << "OpGroupFMin" << ", " << "OpGroupUMin" << ", " << "OpGroupSMin" << ", " << "OpGroupFMax" << ", " << "OpGroupUMax" << ", " << "OpGroupSMax" << ", " << "OpNoLine" << ", " << "OpModuleProcessed" << ", " << "OpGroupNonUniformElect" << ", " << "OpGroupNonUniformBroadcast" << ", " << "OpGroupNonUniformBallot" << ", " << "OpGroupNonUniformShuffle" << ", " << "OpGroupNonUniformShuffleXor" << ", " << "OpGroupNonUniformShuffleUp" << ", " << "OpGroupNonUniformShuffleDown" << ", " << "OpGroupNonUniformIAdd" << ", " << "OpGroupNonUniformFAdd" << ", " << "OpGroupNonUniformIMul" << ", " << "OpGroupNonUniformFMul" << ", " << "OpGroupNonUniformSMin" << ", " << "OpGroupNonUniformUMin" << ", " << "OpGroupNonUniformFMin" << ", " << "OpGroupNonUniformSMax" << ", " << "OpGroupNonUniformUMax" << ", " << "OpGroupNonUniformFMax" << ", " << "OpGroupNonUniformBitwiseAnd" << ", " << "OpGroupNonUniformBitwiseOr" << ", " << "OpGroupNonUniformBitwiseXor" << ", " << "OpGroupNonUniformLogicalAnd" << ", " << "OpGroupNonUniformLogicalOr" << ", " << "OpGroupNonUniformLogicalXor" << ", " << "OpSubgroupBallotKHR" << ", " << "OpSDot" << ", " << "OpUDot" << ", " << "OpSUDot" << ", " << "OpSDotAccSat" << ", " << "OpUDotAccSat" << ", " << "OpSUDotAccSat" << ", " << "OpTypeCooperativeMatrixKHR" << ", " << "OpCooperativeMatrixLoadKHR" << ", " << "OpCooperativeMatrixStoreKHR" << ", " << "OpCooperativeMatrixMulAddKHR" << ", " << "OpCooperativeMatrixLengthKHR" << ", " << "OpSubgroupBlockReadINTEL" << ", " << "OpSubgroupBlockWriteINTEL" << ", " << "OpAssumeTrueKHR" << ", " << "OpAtomicFAddEXT" << ", " << "OpGroupIMulKHR" << ", " << "OpGroupFMulKHR" << ", " << "OpTypeJointMatrixINTEL" << ", " << "OpJointMatrixLoadINTEL" << ", " << "OpJointMatrixStoreINTEL" << ", " << "OpJointMatrixMadINTEL" << ", " << "OpJointMatrixWorkItemLengthINTEL" << ", " << "OpConvertFToBF16INTEL" << ", " << "OpConvertBF16ToFINTEL")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_OpcodeAttr parameter 'value' which is to be a `::mlir::spirv::Opcode`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return OpcodeAttr::get(odsParser.getContext(),
      ::mlir::spirv::Opcode((*_result_value)));
}

void OpcodeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyOpcode(getValue());
  odsPrinter << ">";
}

::mlir::spirv::Opcode OpcodeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::OpcodeAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct FPFastMathModeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::spirv::FPFastMathMode>;
  FPFastMathModeAttrStorage(::mlir::spirv::FPFastMathMode value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static FPFastMathModeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<FPFastMathModeAttrStorage>()) FPFastMathModeAttrStorage(std::move(value));
  }

  ::mlir::spirv::FPFastMathMode value;
};
} // namespace detail
FPFastMathModeAttr FPFastMathModeAttr::get(::mlir::MLIRContext *context, ::mlir::spirv::FPFastMathMode value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute FPFastMathModeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::spirv::FPFastMathMode> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::spirv::FPFastMathMode> {
      ::mlir::spirv::FPFastMathMode flags = {};
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      do {
        if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
          return ::mlir::failure();
        auto maybeEnum = ::mlir::spirv::symbolizeFPFastMathMode(enumKeyword);
        if (!maybeEnum) {
            return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::spirv::FPFastMathMode" << " to be one of: " << "None" << ", " << "NotNaN" << ", " << "NotInf" << ", " << "NSZ" << ", " << "AllowRecip" << ", " << "Fast" << ", " << "AllowContractFastINTEL" << ", " << "AllowReassocINTEL")};
        }
        flags = flags | *maybeEnum;
      } while(::mlir::succeeded(odsParser.parseOptionalVerticalBar()));
      return flags;
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_FPFastMathModeAttr parameter 'value' which is to be a `::mlir::spirv::FPFastMathMode`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return FPFastMathModeAttr::get(odsParser.getContext(),
      ::mlir::spirv::FPFastMathMode((*_result_value)));
}

void FPFastMathModeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyFPFastMathMode(getValue());
  odsPrinter << ">";
}

::mlir::spirv::FPFastMathMode FPFastMathModeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::FPFastMathModeAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct EntryPointABIAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<DenseI32ArrayAttr, std::optional<int>>;
  EntryPointABIAttrStorage(DenseI32ArrayAttr workgroup_size, std::optional<int> subgroup_size) : workgroup_size(std::move(workgroup_size)), subgroup_size(std::move(subgroup_size)) {}

  KeyTy getAsKey() const {
    return KeyTy(workgroup_size, subgroup_size);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (workgroup_size == std::get<0>(tblgenKey)) && (subgroup_size == std::get<1>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey));
  }

  static EntryPointABIAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto workgroup_size = std::move(std::get<0>(tblgenKey));
    auto subgroup_size = std::move(std::get<1>(tblgenKey));
    return new (allocator.allocate<EntryPointABIAttrStorage>()) EntryPointABIAttrStorage(std::move(workgroup_size), std::move(subgroup_size));
  }

  DenseI32ArrayAttr workgroup_size;
  std::optional<int> subgroup_size;
};
} // namespace detail
EntryPointABIAttr EntryPointABIAttr::get(::mlir::MLIRContext *context, DenseI32ArrayAttr workgroup_size, std::optional<int> subgroup_size) {
  return Base::get(context, std::move(workgroup_size), std::move(subgroup_size));
}

::mlir::Attribute EntryPointABIAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<DenseI32ArrayAttr> _result_workgroup_size;
  ::mlir::FailureOr<std::optional<int>> _result_subgroup_size;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter struct
  bool _seen_workgroup_size = false;
  bool _seen_subgroup_size = false;
  {
    const auto _loop_body = [&](::llvm::StringRef _paramKey) -> bool {
      // Parse literal '='
      if (odsParser.parseEqual()) return {};
      if (!_seen_workgroup_size && _paramKey == "workgroup_size") {
        _seen_workgroup_size = true;

        // Parse variable 'workgroup_size'
        _result_workgroup_size = ::mlir::FieldParser<DenseI32ArrayAttr>::parse(odsParser);
        if (::mlir::failed(_result_workgroup_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_EntryPointABIAttr parameter 'workgroup_size' which is to be a `DenseI32ArrayAttr`");
          return {};
        }
      } else if (!_seen_subgroup_size && _paramKey == "subgroup_size") {
        _seen_subgroup_size = true;

        // Parse variable 'subgroup_size'
        _result_subgroup_size = ::mlir::FieldParser<std::optional<int>>::parse(odsParser);
        if (::mlir::failed(_result_subgroup_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_EntryPointABIAttr parameter 'subgroup_size' which is to be a `std::optional<int>`");
          return {};
        }
      } else {
        odsParser.emitError(odsParser.getCurrentLocation(), "duplicate or unknown struct parameter name: ") << _paramKey;
        return {};
      }
      return true;
    };
    ::llvm::StringRef _paramKey;
    if (!odsParser.parseOptionalKeyword(&_paramKey)) {
      if (!_loop_body(_paramKey)) return {};
      while (!odsParser.parseOptionalComma()) {
        ::llvm::StringRef _paramKey;
        if (odsParser.parseKeyword(&_paramKey)) {
          odsParser.emitError(odsParser.getCurrentLocation(),
                             "expected a parameter name in struct");
          return {};
        }
        if (!_loop_body(_paramKey)) return {};
      }
    }
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  return EntryPointABIAttr::get(odsParser.getContext(),
      DenseI32ArrayAttr((_result_workgroup_size.value_or(DenseI32ArrayAttr()))),
      std::optional<int>((_result_subgroup_size.value_or(std::optional<int>()))));
}

void EntryPointABIAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!(getWorkgroupSize() == DenseI32ArrayAttr())) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "workgroup_size = ";
      if (!(getWorkgroupSize() == DenseI32ArrayAttr())) {
        odsPrinter.printStrippedAttrOrType(getWorkgroupSize());
      }
    }
    if (!(getSubgroupSize() == std::optional<int>())) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "subgroup_size = ";
      if (!(getSubgroupSize() == std::optional<int>())) {
        odsPrinter.printStrippedAttrOrType(getSubgroupSize());
      }
    }
  }
  odsPrinter << ">";
}

DenseI32ArrayAttr EntryPointABIAttr::getWorkgroupSize() const {
  return getImpl()->workgroup_size;
}

std::optional<int> EntryPointABIAttr::getSubgroupSize() const {
  return getImpl()->subgroup_size;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::EntryPointABIAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct LinkageAttributesAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<std::string, mlir::spirv::LinkageTypeAttr>;
  LinkageAttributesAttrStorage(std::string linkage_name, mlir::spirv::LinkageTypeAttr linkage_type) : linkage_name(std::move(linkage_name)), linkage_type(std::move(linkage_type)) {}

  KeyTy getAsKey() const {
    return KeyTy(linkage_name, linkage_type);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (linkage_name == std::get<0>(tblgenKey)) && (linkage_type == std::get<1>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey));
  }

  static LinkageAttributesAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto linkage_name = std::move(std::get<0>(tblgenKey));
    auto linkage_type = std::move(std::get<1>(tblgenKey));
    return new (allocator.allocate<LinkageAttributesAttrStorage>()) LinkageAttributesAttrStorage(std::move(linkage_name), std::move(linkage_type));
  }

  std::string linkage_name;
  mlir::spirv::LinkageTypeAttr linkage_type;
};
} // namespace detail
LinkageAttributesAttr LinkageAttributesAttr::get(::mlir::MLIRContext *context, std::string linkage_name, mlir::spirv::LinkageTypeAttr linkage_type) {
  return Base::get(context, std::move(linkage_name), std::move(linkage_type));
}

::mlir::Attribute LinkageAttributesAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<std::string> _result_linkage_name;
  ::mlir::FailureOr<mlir::spirv::LinkageTypeAttr> _result_linkage_type;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter struct
  bool _seen_linkage_name = false;
  bool _seen_linkage_type = false;
  {
    const auto _loop_body = [&](::llvm::StringRef _paramKey) -> bool {
      // Parse literal '='
      if (odsParser.parseEqual()) return {};
      if (!_seen_linkage_name && _paramKey == "linkage_name") {
        _seen_linkage_name = true;

        // Parse variable 'linkage_name'
        _result_linkage_name = ::mlir::FieldParser<std::string>::parse(odsParser);
        if (::mlir::failed(_result_linkage_name)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_LinkageAttributesAttr parameter 'linkage_name' which is to be a `std::string`");
          return {};
        }
      } else if (!_seen_linkage_type && _paramKey == "linkage_type") {
        _seen_linkage_type = true;

        // Parse variable 'linkage_type'
        _result_linkage_type = ::mlir::FieldParser<mlir::spirv::LinkageTypeAttr>::parse(odsParser);
        if (::mlir::failed(_result_linkage_type)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_LinkageAttributesAttr parameter 'linkage_type' which is to be a `mlir::spirv::LinkageTypeAttr`");
          return {};
        }
      } else {
        odsParser.emitError(odsParser.getCurrentLocation(), "duplicate or unknown struct parameter name: ") << _paramKey;
        return {};
      }
      return true;
    };
    for (unsigned odsStructIndex = 0; odsStructIndex < 2; ++odsStructIndex) {
      ::llvm::StringRef _paramKey;
      if (odsParser.parseKeyword(&_paramKey)) {
        odsParser.emitError(odsParser.getCurrentLocation(),
                           "expected a parameter name in struct");
        return {};
      }
      if (!_loop_body(_paramKey)) return {};
      if ((odsStructIndex != 2 - 1) && odsParser.parseComma())
        return {};
    }
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_linkage_name));
  assert(::mlir::succeeded(_result_linkage_type));
  return LinkageAttributesAttr::get(odsParser.getContext(),
      std::string((*_result_linkage_name)),
      mlir::spirv::LinkageTypeAttr((*_result_linkage_type)));
}

void LinkageAttributesAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "linkage_name = ";
    odsPrinter.printStrippedAttrOrType(getLinkageName());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "linkage_type = ";
    odsPrinter.printStrippedAttrOrType(getLinkageType());
  }
  odsPrinter << ">";
}

std::string LinkageAttributesAttr::getLinkageName() const {
  return getImpl()->linkage_name;
}

mlir::spirv::LinkageTypeAttr LinkageAttributesAttr::getLinkageType() const {
  return getImpl()->linkage_type;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::LinkageAttributesAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct CooperativeMatrixPropertiesKHRAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<uint32_t, uint32_t, uint32_t, mlir::Type, mlir::Type, mlir::Type, mlir::Type, bool, mlir::spirv::ScopeAttr>;
  CooperativeMatrixPropertiesKHRAttrStorage(uint32_t m_size, uint32_t n_size, uint32_t k_size, mlir::Type a_type, mlir::Type b_type, mlir::Type c_type, mlir::Type result_type, bool acc_sat, mlir::spirv::ScopeAttr scope) : m_size(std::move(m_size)), n_size(std::move(n_size)), k_size(std::move(k_size)), a_type(std::move(a_type)), b_type(std::move(b_type)), c_type(std::move(c_type)), result_type(std::move(result_type)), acc_sat(std::move(acc_sat)), scope(std::move(scope)) {}

  KeyTy getAsKey() const {
    return KeyTy(m_size, n_size, k_size, a_type, b_type, c_type, result_type, acc_sat, scope);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (m_size == std::get<0>(tblgenKey)) && (n_size == std::get<1>(tblgenKey)) && (k_size == std::get<2>(tblgenKey)) && (a_type == std::get<3>(tblgenKey)) && (b_type == std::get<4>(tblgenKey)) && (c_type == std::get<5>(tblgenKey)) && (result_type == std::get<6>(tblgenKey)) && (acc_sat == std::get<7>(tblgenKey)) && (scope == std::get<8>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey), std::get<3>(tblgenKey), std::get<4>(tblgenKey), std::get<5>(tblgenKey), std::get<6>(tblgenKey), std::get<7>(tblgenKey), std::get<8>(tblgenKey));
  }

  static CooperativeMatrixPropertiesKHRAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto m_size = std::move(std::get<0>(tblgenKey));
    auto n_size = std::move(std::get<1>(tblgenKey));
    auto k_size = std::move(std::get<2>(tblgenKey));
    auto a_type = std::move(std::get<3>(tblgenKey));
    auto b_type = std::move(std::get<4>(tblgenKey));
    auto c_type = std::move(std::get<5>(tblgenKey));
    auto result_type = std::move(std::get<6>(tblgenKey));
    auto acc_sat = std::move(std::get<7>(tblgenKey));
    auto scope = std::move(std::get<8>(tblgenKey));
    return new (allocator.allocate<CooperativeMatrixPropertiesKHRAttrStorage>()) CooperativeMatrixPropertiesKHRAttrStorage(std::move(m_size), std::move(n_size), std::move(k_size), std::move(a_type), std::move(b_type), std::move(c_type), std::move(result_type), std::move(acc_sat), std::move(scope));
  }

  uint32_t m_size;
  uint32_t n_size;
  uint32_t k_size;
  mlir::Type a_type;
  mlir::Type b_type;
  mlir::Type c_type;
  mlir::Type result_type;
  bool acc_sat;
  mlir::spirv::ScopeAttr scope;
};
} // namespace detail
CooperativeMatrixPropertiesKHRAttr CooperativeMatrixPropertiesKHRAttr::get(::mlir::MLIRContext *context, uint32_t m_size, uint32_t n_size, uint32_t k_size, mlir::Type a_type, mlir::Type b_type, mlir::Type c_type, mlir::Type result_type, bool acc_sat, mlir::spirv::ScopeAttr scope) {
  return Base::get(context, std::move(m_size), std::move(n_size), std::move(k_size), std::move(a_type), std::move(b_type), std::move(c_type), std::move(result_type), std::move(acc_sat), std::move(scope));
}

::mlir::Attribute CooperativeMatrixPropertiesKHRAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<uint32_t> _result_m_size;
  ::mlir::FailureOr<uint32_t> _result_n_size;
  ::mlir::FailureOr<uint32_t> _result_k_size;
  ::mlir::FailureOr<mlir::Type> _result_a_type;
  ::mlir::FailureOr<mlir::Type> _result_b_type;
  ::mlir::FailureOr<mlir::Type> _result_c_type;
  ::mlir::FailureOr<mlir::Type> _result_result_type;
  ::mlir::FailureOr<bool> _result_acc_sat;
  ::mlir::FailureOr<mlir::spirv::ScopeAttr> _result_scope;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter struct
  bool _seen_m_size = false;
  bool _seen_n_size = false;
  bool _seen_k_size = false;
  bool _seen_a_type = false;
  bool _seen_b_type = false;
  bool _seen_c_type = false;
  bool _seen_result_type = false;
  bool _seen_acc_sat = false;
  bool _seen_scope = false;
  {
    const auto _loop_body = [&](::llvm::StringRef _paramKey) -> bool {
      // Parse literal '='
      if (odsParser.parseEqual()) return {};
      if (!_seen_m_size && _paramKey == "m_size") {
        _seen_m_size = true;

        // Parse variable 'm_size'
        _result_m_size = ::mlir::FieldParser<uint32_t>::parse(odsParser);
        if (::mlir::failed(_result_m_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesKHRAttr parameter 'm_size' which is to be a `uint32_t`");
          return {};
        }
      } else if (!_seen_n_size && _paramKey == "n_size") {
        _seen_n_size = true;

        // Parse variable 'n_size'
        _result_n_size = ::mlir::FieldParser<uint32_t>::parse(odsParser);
        if (::mlir::failed(_result_n_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesKHRAttr parameter 'n_size' which is to be a `uint32_t`");
          return {};
        }
      } else if (!_seen_k_size && _paramKey == "k_size") {
        _seen_k_size = true;

        // Parse variable 'k_size'
        _result_k_size = ::mlir::FieldParser<uint32_t>::parse(odsParser);
        if (::mlir::failed(_result_k_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesKHRAttr parameter 'k_size' which is to be a `uint32_t`");
          return {};
        }
      } else if (!_seen_a_type && _paramKey == "a_type") {
        _seen_a_type = true;

        // Parse variable 'a_type'
        _result_a_type = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
        if (::mlir::failed(_result_a_type)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesKHRAttr parameter 'a_type' which is to be a `mlir::Type`");
          return {};
        }
      } else if (!_seen_b_type && _paramKey == "b_type") {
        _seen_b_type = true;

        // Parse variable 'b_type'
        _result_b_type = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
        if (::mlir::failed(_result_b_type)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesKHRAttr parameter 'b_type' which is to be a `mlir::Type`");
          return {};
        }
      } else if (!_seen_c_type && _paramKey == "c_type") {
        _seen_c_type = true;

        // Parse variable 'c_type'
        _result_c_type = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
        if (::mlir::failed(_result_c_type)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesKHRAttr parameter 'c_type' which is to be a `mlir::Type`");
          return {};
        }
      } else if (!_seen_result_type && _paramKey == "result_type") {
        _seen_result_type = true;

        // Parse variable 'result_type'
        _result_result_type = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
        if (::mlir::failed(_result_result_type)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesKHRAttr parameter 'result_type' which is to be a `mlir::Type`");
          return {};
        }
      } else if (!_seen_acc_sat && _paramKey == "acc_sat") {
        _seen_acc_sat = true;

        // Parse variable 'acc_sat'
        _result_acc_sat = ::mlir::FieldParser<bool>::parse(odsParser);
        if (::mlir::failed(_result_acc_sat)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesKHRAttr parameter 'acc_sat' which is to be a `bool`");
          return {};
        }
      } else if (!_seen_scope && _paramKey == "scope") {
        _seen_scope = true;

        // Parse variable 'scope'
        _result_scope = ::mlir::FieldParser<mlir::spirv::ScopeAttr>::parse(odsParser);
        if (::mlir::failed(_result_scope)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesKHRAttr parameter 'scope' which is to be a `mlir::spirv::ScopeAttr`");
          return {};
        }
      } else {
        odsParser.emitError(odsParser.getCurrentLocation(), "duplicate or unknown struct parameter name: ") << _paramKey;
        return {};
      }
      return true;
    };
    for (unsigned odsStructIndex = 0; odsStructIndex < 9; ++odsStructIndex) {
      ::llvm::StringRef _paramKey;
      if (odsParser.parseKeyword(&_paramKey)) {
        odsParser.emitError(odsParser.getCurrentLocation(),
                           "expected a parameter name in struct");
        return {};
      }
      if (!_loop_body(_paramKey)) return {};
      if ((odsStructIndex != 9 - 1) && odsParser.parseComma())
        return {};
    }
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_m_size));
  assert(::mlir::succeeded(_result_n_size));
  assert(::mlir::succeeded(_result_k_size));
  assert(::mlir::succeeded(_result_a_type));
  assert(::mlir::succeeded(_result_b_type));
  assert(::mlir::succeeded(_result_c_type));
  assert(::mlir::succeeded(_result_result_type));
  assert(::mlir::succeeded(_result_acc_sat));
  assert(::mlir::succeeded(_result_scope));
  return CooperativeMatrixPropertiesKHRAttr::get(odsParser.getContext(),
      uint32_t((*_result_m_size)),
      uint32_t((*_result_n_size)),
      uint32_t((*_result_k_size)),
      mlir::Type((*_result_a_type)),
      mlir::Type((*_result_b_type)),
      mlir::Type((*_result_c_type)),
      mlir::Type((*_result_result_type)),
      bool((*_result_acc_sat)),
      mlir::spirv::ScopeAttr((*_result_scope)));
}

void CooperativeMatrixPropertiesKHRAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "m_size = ";
    odsPrinter.printStrippedAttrOrType(getMSize());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "n_size = ";
    odsPrinter.printStrippedAttrOrType(getNSize());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "k_size = ";
    odsPrinter.printStrippedAttrOrType(getKSize());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "a_type = ";
    odsPrinter.printStrippedAttrOrType(getAType());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "b_type = ";
    odsPrinter.printStrippedAttrOrType(getBType());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "c_type = ";
    odsPrinter.printStrippedAttrOrType(getCType());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "result_type = ";
    odsPrinter.printStrippedAttrOrType(getResultType());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "acc_sat = ";
    odsPrinter.printStrippedAttrOrType(getAccSat());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "scope = ";
    odsPrinter.printStrippedAttrOrType(getScope());
  }
  odsPrinter << ">";
}

uint32_t CooperativeMatrixPropertiesKHRAttr::getMSize() const {
  return getImpl()->m_size;
}

uint32_t CooperativeMatrixPropertiesKHRAttr::getNSize() const {
  return getImpl()->n_size;
}

uint32_t CooperativeMatrixPropertiesKHRAttr::getKSize() const {
  return getImpl()->k_size;
}

mlir::Type CooperativeMatrixPropertiesKHRAttr::getAType() const {
  return getImpl()->a_type;
}

mlir::Type CooperativeMatrixPropertiesKHRAttr::getBType() const {
  return getImpl()->b_type;
}

mlir::Type CooperativeMatrixPropertiesKHRAttr::getCType() const {
  return getImpl()->c_type;
}

mlir::Type CooperativeMatrixPropertiesKHRAttr::getResultType() const {
  return getImpl()->result_type;
}

bool CooperativeMatrixPropertiesKHRAttr::getAccSat() const {
  return getImpl()->acc_sat;
}

mlir::spirv::ScopeAttr CooperativeMatrixPropertiesKHRAttr::getScope() const {
  return getImpl()->scope;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::CooperativeMatrixPropertiesKHRAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct CooperativeMatrixPropertiesNVAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<int, int, int, mlir::Type, mlir::Type, mlir::Type, mlir::Type, mlir::spirv::ScopeAttr>;
  CooperativeMatrixPropertiesNVAttrStorage(int m_size, int n_size, int k_size, mlir::Type a_type, mlir::Type b_type, mlir::Type c_type, mlir::Type result_type, mlir::spirv::ScopeAttr scope) : m_size(std::move(m_size)), n_size(std::move(n_size)), k_size(std::move(k_size)), a_type(std::move(a_type)), b_type(std::move(b_type)), c_type(std::move(c_type)), result_type(std::move(result_type)), scope(std::move(scope)) {}

  KeyTy getAsKey() const {
    return KeyTy(m_size, n_size, k_size, a_type, b_type, c_type, result_type, scope);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (m_size == std::get<0>(tblgenKey)) && (n_size == std::get<1>(tblgenKey)) && (k_size == std::get<2>(tblgenKey)) && (a_type == std::get<3>(tblgenKey)) && (b_type == std::get<4>(tblgenKey)) && (c_type == std::get<5>(tblgenKey)) && (result_type == std::get<6>(tblgenKey)) && (scope == std::get<7>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey), std::get<3>(tblgenKey), std::get<4>(tblgenKey), std::get<5>(tblgenKey), std::get<6>(tblgenKey), std::get<7>(tblgenKey));
  }

  static CooperativeMatrixPropertiesNVAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto m_size = std::move(std::get<0>(tblgenKey));
    auto n_size = std::move(std::get<1>(tblgenKey));
    auto k_size = std::move(std::get<2>(tblgenKey));
    auto a_type = std::move(std::get<3>(tblgenKey));
    auto b_type = std::move(std::get<4>(tblgenKey));
    auto c_type = std::move(std::get<5>(tblgenKey));
    auto result_type = std::move(std::get<6>(tblgenKey));
    auto scope = std::move(std::get<7>(tblgenKey));
    return new (allocator.allocate<CooperativeMatrixPropertiesNVAttrStorage>()) CooperativeMatrixPropertiesNVAttrStorage(std::move(m_size), std::move(n_size), std::move(k_size), std::move(a_type), std::move(b_type), std::move(c_type), std::move(result_type), std::move(scope));
  }

  int m_size;
  int n_size;
  int k_size;
  mlir::Type a_type;
  mlir::Type b_type;
  mlir::Type c_type;
  mlir::Type result_type;
  mlir::spirv::ScopeAttr scope;
};
} // namespace detail
CooperativeMatrixPropertiesNVAttr CooperativeMatrixPropertiesNVAttr::get(::mlir::MLIRContext *context, int m_size, int n_size, int k_size, mlir::Type a_type, mlir::Type b_type, mlir::Type c_type, mlir::Type result_type, mlir::spirv::ScopeAttr scope) {
  return Base::get(context, std::move(m_size), std::move(n_size), std::move(k_size), std::move(a_type), std::move(b_type), std::move(c_type), std::move(result_type), std::move(scope));
}

::mlir::Attribute CooperativeMatrixPropertiesNVAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<int> _result_m_size;
  ::mlir::FailureOr<int> _result_n_size;
  ::mlir::FailureOr<int> _result_k_size;
  ::mlir::FailureOr<mlir::Type> _result_a_type;
  ::mlir::FailureOr<mlir::Type> _result_b_type;
  ::mlir::FailureOr<mlir::Type> _result_c_type;
  ::mlir::FailureOr<mlir::Type> _result_result_type;
  ::mlir::FailureOr<mlir::spirv::ScopeAttr> _result_scope;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter struct
  bool _seen_m_size = false;
  bool _seen_n_size = false;
  bool _seen_k_size = false;
  bool _seen_a_type = false;
  bool _seen_b_type = false;
  bool _seen_c_type = false;
  bool _seen_result_type = false;
  bool _seen_scope = false;
  {
    const auto _loop_body = [&](::llvm::StringRef _paramKey) -> bool {
      // Parse literal '='
      if (odsParser.parseEqual()) return {};
      if (!_seen_m_size && _paramKey == "m_size") {
        _seen_m_size = true;

        // Parse variable 'm_size'
        _result_m_size = ::mlir::FieldParser<int>::parse(odsParser);
        if (::mlir::failed(_result_m_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesNVAttr parameter 'm_size' which is to be a `int`");
          return {};
        }
      } else if (!_seen_n_size && _paramKey == "n_size") {
        _seen_n_size = true;

        // Parse variable 'n_size'
        _result_n_size = ::mlir::FieldParser<int>::parse(odsParser);
        if (::mlir::failed(_result_n_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesNVAttr parameter 'n_size' which is to be a `int`");
          return {};
        }
      } else if (!_seen_k_size && _paramKey == "k_size") {
        _seen_k_size = true;

        // Parse variable 'k_size'
        _result_k_size = ::mlir::FieldParser<int>::parse(odsParser);
        if (::mlir::failed(_result_k_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesNVAttr parameter 'k_size' which is to be a `int`");
          return {};
        }
      } else if (!_seen_a_type && _paramKey == "a_type") {
        _seen_a_type = true;

        // Parse variable 'a_type'
        _result_a_type = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
        if (::mlir::failed(_result_a_type)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesNVAttr parameter 'a_type' which is to be a `mlir::Type`");
          return {};
        }
      } else if (!_seen_b_type && _paramKey == "b_type") {
        _seen_b_type = true;

        // Parse variable 'b_type'
        _result_b_type = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
        if (::mlir::failed(_result_b_type)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesNVAttr parameter 'b_type' which is to be a `mlir::Type`");
          return {};
        }
      } else if (!_seen_c_type && _paramKey == "c_type") {
        _seen_c_type = true;

        // Parse variable 'c_type'
        _result_c_type = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
        if (::mlir::failed(_result_c_type)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesNVAttr parameter 'c_type' which is to be a `mlir::Type`");
          return {};
        }
      } else if (!_seen_result_type && _paramKey == "result_type") {
        _seen_result_type = true;

        // Parse variable 'result_type'
        _result_result_type = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
        if (::mlir::failed(_result_result_type)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesNVAttr parameter 'result_type' which is to be a `mlir::Type`");
          return {};
        }
      } else if (!_seen_scope && _paramKey == "scope") {
        _seen_scope = true;

        // Parse variable 'scope'
        _result_scope = ::mlir::FieldParser<mlir::spirv::ScopeAttr>::parse(odsParser);
        if (::mlir::failed(_result_scope)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_CooperativeMatrixPropertiesNVAttr parameter 'scope' which is to be a `mlir::spirv::ScopeAttr`");
          return {};
        }
      } else {
        odsParser.emitError(odsParser.getCurrentLocation(), "duplicate or unknown struct parameter name: ") << _paramKey;
        return {};
      }
      return true;
    };
    for (unsigned odsStructIndex = 0; odsStructIndex < 8; ++odsStructIndex) {
      ::llvm::StringRef _paramKey;
      if (odsParser.parseKeyword(&_paramKey)) {
        odsParser.emitError(odsParser.getCurrentLocation(),
                           "expected a parameter name in struct");
        return {};
      }
      if (!_loop_body(_paramKey)) return {};
      if ((odsStructIndex != 8 - 1) && odsParser.parseComma())
        return {};
    }
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_m_size));
  assert(::mlir::succeeded(_result_n_size));
  assert(::mlir::succeeded(_result_k_size));
  assert(::mlir::succeeded(_result_a_type));
  assert(::mlir::succeeded(_result_b_type));
  assert(::mlir::succeeded(_result_c_type));
  assert(::mlir::succeeded(_result_result_type));
  assert(::mlir::succeeded(_result_scope));
  return CooperativeMatrixPropertiesNVAttr::get(odsParser.getContext(),
      int((*_result_m_size)),
      int((*_result_n_size)),
      int((*_result_k_size)),
      mlir::Type((*_result_a_type)),
      mlir::Type((*_result_b_type)),
      mlir::Type((*_result_c_type)),
      mlir::Type((*_result_result_type)),
      mlir::spirv::ScopeAttr((*_result_scope)));
}

void CooperativeMatrixPropertiesNVAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "m_size = ";
    odsPrinter.printStrippedAttrOrType(getMSize());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "n_size = ";
    odsPrinter.printStrippedAttrOrType(getNSize());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "k_size = ";
    odsPrinter.printStrippedAttrOrType(getKSize());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "a_type = ";
    odsPrinter.printStrippedAttrOrType(getAType());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "b_type = ";
    odsPrinter.printStrippedAttrOrType(getBType());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "c_type = ";
    odsPrinter.printStrippedAttrOrType(getCType());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "result_type = ";
    odsPrinter.printStrippedAttrOrType(getResultType());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "scope = ";
    odsPrinter.printStrippedAttrOrType(getScope());
  }
  odsPrinter << ">";
}

int CooperativeMatrixPropertiesNVAttr::getMSize() const {
  return getImpl()->m_size;
}

int CooperativeMatrixPropertiesNVAttr::getNSize() const {
  return getImpl()->n_size;
}

int CooperativeMatrixPropertiesNVAttr::getKSize() const {
  return getImpl()->k_size;
}

mlir::Type CooperativeMatrixPropertiesNVAttr::getAType() const {
  return getImpl()->a_type;
}

mlir::Type CooperativeMatrixPropertiesNVAttr::getBType() const {
  return getImpl()->b_type;
}

mlir::Type CooperativeMatrixPropertiesNVAttr::getCType() const {
  return getImpl()->c_type;
}

mlir::Type CooperativeMatrixPropertiesNVAttr::getResultType() const {
  return getImpl()->result_type;
}

mlir::spirv::ScopeAttr CooperativeMatrixPropertiesNVAttr::getScope() const {
  return getImpl()->scope;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::CooperativeMatrixPropertiesNVAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct JointMatrixPropertiesINTELAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<int, int, int, mlir::Type, mlir::Type, mlir::Type, mlir::Type, mlir::spirv::ScopeAttr>;
  JointMatrixPropertiesINTELAttrStorage(int m_size, int n_size, int k_size, mlir::Type a_type, mlir::Type b_type, mlir::Type c_type, mlir::Type result_type, mlir::spirv::ScopeAttr scope) : m_size(std::move(m_size)), n_size(std::move(n_size)), k_size(std::move(k_size)), a_type(std::move(a_type)), b_type(std::move(b_type)), c_type(std::move(c_type)), result_type(std::move(result_type)), scope(std::move(scope)) {}

  KeyTy getAsKey() const {
    return KeyTy(m_size, n_size, k_size, a_type, b_type, c_type, result_type, scope);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (m_size == std::get<0>(tblgenKey)) && (n_size == std::get<1>(tblgenKey)) && (k_size == std::get<2>(tblgenKey)) && (a_type == std::get<3>(tblgenKey)) && (b_type == std::get<4>(tblgenKey)) && (c_type == std::get<5>(tblgenKey)) && (result_type == std::get<6>(tblgenKey)) && (scope == std::get<7>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey), std::get<3>(tblgenKey), std::get<4>(tblgenKey), std::get<5>(tblgenKey), std::get<6>(tblgenKey), std::get<7>(tblgenKey));
  }

  static JointMatrixPropertiesINTELAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto m_size = std::move(std::get<0>(tblgenKey));
    auto n_size = std::move(std::get<1>(tblgenKey));
    auto k_size = std::move(std::get<2>(tblgenKey));
    auto a_type = std::move(std::get<3>(tblgenKey));
    auto b_type = std::move(std::get<4>(tblgenKey));
    auto c_type = std::move(std::get<5>(tblgenKey));
    auto result_type = std::move(std::get<6>(tblgenKey));
    auto scope = std::move(std::get<7>(tblgenKey));
    return new (allocator.allocate<JointMatrixPropertiesINTELAttrStorage>()) JointMatrixPropertiesINTELAttrStorage(std::move(m_size), std::move(n_size), std::move(k_size), std::move(a_type), std::move(b_type), std::move(c_type), std::move(result_type), std::move(scope));
  }

  int m_size;
  int n_size;
  int k_size;
  mlir::Type a_type;
  mlir::Type b_type;
  mlir::Type c_type;
  mlir::Type result_type;
  mlir::spirv::ScopeAttr scope;
};
} // namespace detail
JointMatrixPropertiesINTELAttr JointMatrixPropertiesINTELAttr::get(::mlir::MLIRContext *context, int m_size, int n_size, int k_size, mlir::Type a_type, mlir::Type b_type, mlir::Type c_type, mlir::Type result_type, mlir::spirv::ScopeAttr scope) {
  return Base::get(context, std::move(m_size), std::move(n_size), std::move(k_size), std::move(a_type), std::move(b_type), std::move(c_type), std::move(result_type), std::move(scope));
}

::mlir::Attribute JointMatrixPropertiesINTELAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<int> _result_m_size;
  ::mlir::FailureOr<int> _result_n_size;
  ::mlir::FailureOr<int> _result_k_size;
  ::mlir::FailureOr<mlir::Type> _result_a_type;
  ::mlir::FailureOr<mlir::Type> _result_b_type;
  ::mlir::FailureOr<mlir::Type> _result_c_type;
  ::mlir::FailureOr<mlir::Type> _result_result_type;
  ::mlir::FailureOr<mlir::spirv::ScopeAttr> _result_scope;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter struct
  bool _seen_m_size = false;
  bool _seen_n_size = false;
  bool _seen_k_size = false;
  bool _seen_a_type = false;
  bool _seen_b_type = false;
  bool _seen_c_type = false;
  bool _seen_result_type = false;
  bool _seen_scope = false;
  {
    const auto _loop_body = [&](::llvm::StringRef _paramKey) -> bool {
      // Parse literal '='
      if (odsParser.parseEqual()) return {};
      if (!_seen_m_size && _paramKey == "m_size") {
        _seen_m_size = true;

        // Parse variable 'm_size'
        _result_m_size = ::mlir::FieldParser<int>::parse(odsParser);
        if (::mlir::failed(_result_m_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_JointMatrixPropertiesINTELAttr parameter 'm_size' which is to be a `int`");
          return {};
        }
      } else if (!_seen_n_size && _paramKey == "n_size") {
        _seen_n_size = true;

        // Parse variable 'n_size'
        _result_n_size = ::mlir::FieldParser<int>::parse(odsParser);
        if (::mlir::failed(_result_n_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_JointMatrixPropertiesINTELAttr parameter 'n_size' which is to be a `int`");
          return {};
        }
      } else if (!_seen_k_size && _paramKey == "k_size") {
        _seen_k_size = true;

        // Parse variable 'k_size'
        _result_k_size = ::mlir::FieldParser<int>::parse(odsParser);
        if (::mlir::failed(_result_k_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_JointMatrixPropertiesINTELAttr parameter 'k_size' which is to be a `int`");
          return {};
        }
      } else if (!_seen_a_type && _paramKey == "a_type") {
        _seen_a_type = true;

        // Parse variable 'a_type'
        _result_a_type = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
        if (::mlir::failed(_result_a_type)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_JointMatrixPropertiesINTELAttr parameter 'a_type' which is to be a `mlir::Type`");
          return {};
        }
      } else if (!_seen_b_type && _paramKey == "b_type") {
        _seen_b_type = true;

        // Parse variable 'b_type'
        _result_b_type = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
        if (::mlir::failed(_result_b_type)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_JointMatrixPropertiesINTELAttr parameter 'b_type' which is to be a `mlir::Type`");
          return {};
        }
      } else if (!_seen_c_type && _paramKey == "c_type") {
        _seen_c_type = true;

        // Parse variable 'c_type'
        _result_c_type = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
        if (::mlir::failed(_result_c_type)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_JointMatrixPropertiesINTELAttr parameter 'c_type' which is to be a `mlir::Type`");
          return {};
        }
      } else if (!_seen_result_type && _paramKey == "result_type") {
        _seen_result_type = true;

        // Parse variable 'result_type'
        _result_result_type = ::mlir::FieldParser<mlir::Type>::parse(odsParser);
        if (::mlir::failed(_result_result_type)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_JointMatrixPropertiesINTELAttr parameter 'result_type' which is to be a `mlir::Type`");
          return {};
        }
      } else if (!_seen_scope && _paramKey == "scope") {
        _seen_scope = true;

        // Parse variable 'scope'
        _result_scope = ::mlir::FieldParser<mlir::spirv::ScopeAttr>::parse(odsParser);
        if (::mlir::failed(_result_scope)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_JointMatrixPropertiesINTELAttr parameter 'scope' which is to be a `mlir::spirv::ScopeAttr`");
          return {};
        }
      } else {
        odsParser.emitError(odsParser.getCurrentLocation(), "duplicate or unknown struct parameter name: ") << _paramKey;
        return {};
      }
      return true;
    };
    for (unsigned odsStructIndex = 0; odsStructIndex < 8; ++odsStructIndex) {
      ::llvm::StringRef _paramKey;
      if (odsParser.parseKeyword(&_paramKey)) {
        odsParser.emitError(odsParser.getCurrentLocation(),
                           "expected a parameter name in struct");
        return {};
      }
      if (!_loop_body(_paramKey)) return {};
      if ((odsStructIndex != 8 - 1) && odsParser.parseComma())
        return {};
    }
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_m_size));
  assert(::mlir::succeeded(_result_n_size));
  assert(::mlir::succeeded(_result_k_size));
  assert(::mlir::succeeded(_result_a_type));
  assert(::mlir::succeeded(_result_b_type));
  assert(::mlir::succeeded(_result_c_type));
  assert(::mlir::succeeded(_result_result_type));
  assert(::mlir::succeeded(_result_scope));
  return JointMatrixPropertiesINTELAttr::get(odsParser.getContext(),
      int((*_result_m_size)),
      int((*_result_n_size)),
      int((*_result_k_size)),
      mlir::Type((*_result_a_type)),
      mlir::Type((*_result_b_type)),
      mlir::Type((*_result_c_type)),
      mlir::Type((*_result_result_type)),
      mlir::spirv::ScopeAttr((*_result_scope)));
}

void JointMatrixPropertiesINTELAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "m_size = ";
    odsPrinter.printStrippedAttrOrType(getMSize());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "n_size = ";
    odsPrinter.printStrippedAttrOrType(getNSize());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "k_size = ";
    odsPrinter.printStrippedAttrOrType(getKSize());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "a_type = ";
    odsPrinter.printStrippedAttrOrType(getAType());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "b_type = ";
    odsPrinter.printStrippedAttrOrType(getBType());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "c_type = ";
    odsPrinter.printStrippedAttrOrType(getCType());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "result_type = ";
    odsPrinter.printStrippedAttrOrType(getResultType());
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "scope = ";
    odsPrinter.printStrippedAttrOrType(getScope());
  }
  odsPrinter << ">";
}

int JointMatrixPropertiesINTELAttr::getMSize() const {
  return getImpl()->m_size;
}

int JointMatrixPropertiesINTELAttr::getNSize() const {
  return getImpl()->n_size;
}

int JointMatrixPropertiesINTELAttr::getKSize() const {
  return getImpl()->k_size;
}

mlir::Type JointMatrixPropertiesINTELAttr::getAType() const {
  return getImpl()->a_type;
}

mlir::Type JointMatrixPropertiesINTELAttr::getBType() const {
  return getImpl()->b_type;
}

mlir::Type JointMatrixPropertiesINTELAttr::getCType() const {
  return getImpl()->c_type;
}

mlir::Type JointMatrixPropertiesINTELAttr::getResultType() const {
  return getImpl()->result_type;
}

mlir::spirv::ScopeAttr JointMatrixPropertiesINTELAttr::getScope() const {
  return getImpl()->scope;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::JointMatrixPropertiesINTELAttr)
namespace mlir {
namespace spirv {
namespace detail {
struct ResourceLimitsAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<int, int, ArrayAttr, int, std::optional<int>, std::optional<int>, ArrayAttr, ArrayAttr>;
  ResourceLimitsAttrStorage(int max_compute_shared_memory_size, int max_compute_workgroup_invocations, ArrayAttr max_compute_workgroup_size, int subgroup_size, std::optional<int> min_subgroup_size, std::optional<int> max_subgroup_size, ArrayAttr cooperative_matrix_properties_khr, ArrayAttr cooperative_matrix_properties_nv) : max_compute_shared_memory_size(std::move(max_compute_shared_memory_size)), max_compute_workgroup_invocations(std::move(max_compute_workgroup_invocations)), max_compute_workgroup_size(std::move(max_compute_workgroup_size)), subgroup_size(std::move(subgroup_size)), min_subgroup_size(std::move(min_subgroup_size)), max_subgroup_size(std::move(max_subgroup_size)), cooperative_matrix_properties_khr(std::move(cooperative_matrix_properties_khr)), cooperative_matrix_properties_nv(std::move(cooperative_matrix_properties_nv)) {}

  KeyTy getAsKey() const {
    return KeyTy(max_compute_shared_memory_size, max_compute_workgroup_invocations, max_compute_workgroup_size, subgroup_size, min_subgroup_size, max_subgroup_size, cooperative_matrix_properties_khr, cooperative_matrix_properties_nv);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (max_compute_shared_memory_size == std::get<0>(tblgenKey)) && (max_compute_workgroup_invocations == std::get<1>(tblgenKey)) && (max_compute_workgroup_size == std::get<2>(tblgenKey)) && (subgroup_size == std::get<3>(tblgenKey)) && (min_subgroup_size == std::get<4>(tblgenKey)) && (max_subgroup_size == std::get<5>(tblgenKey)) && (cooperative_matrix_properties_khr == std::get<6>(tblgenKey)) && (cooperative_matrix_properties_nv == std::get<7>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey), std::get<3>(tblgenKey), std::get<4>(tblgenKey), std::get<5>(tblgenKey), std::get<6>(tblgenKey), std::get<7>(tblgenKey));
  }

  static ResourceLimitsAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto max_compute_shared_memory_size = std::move(std::get<0>(tblgenKey));
    auto max_compute_workgroup_invocations = std::move(std::get<1>(tblgenKey));
    auto max_compute_workgroup_size = std::move(std::get<2>(tblgenKey));
    auto subgroup_size = std::move(std::get<3>(tblgenKey));
    auto min_subgroup_size = std::move(std::get<4>(tblgenKey));
    auto max_subgroup_size = std::move(std::get<5>(tblgenKey));
    auto cooperative_matrix_properties_khr = std::move(std::get<6>(tblgenKey));
    auto cooperative_matrix_properties_nv = std::move(std::get<7>(tblgenKey));
    return new (allocator.allocate<ResourceLimitsAttrStorage>()) ResourceLimitsAttrStorage(std::move(max_compute_shared_memory_size), std::move(max_compute_workgroup_invocations), std::move(max_compute_workgroup_size), std::move(subgroup_size), std::move(min_subgroup_size), std::move(max_subgroup_size), std::move(cooperative_matrix_properties_khr), std::move(cooperative_matrix_properties_nv));
  }

  int max_compute_shared_memory_size;
  int max_compute_workgroup_invocations;
  ArrayAttr max_compute_workgroup_size;
  int subgroup_size;
  std::optional<int> min_subgroup_size;
  std::optional<int> max_subgroup_size;
  ArrayAttr cooperative_matrix_properties_khr;
  ArrayAttr cooperative_matrix_properties_nv;
};
} // namespace detail
ResourceLimitsAttr ResourceLimitsAttr::get(::mlir::MLIRContext *context, int max_compute_shared_memory_size, int max_compute_workgroup_invocations, ArrayAttr max_compute_workgroup_size, int subgroup_size, std::optional<int> min_subgroup_size, std::optional<int> max_subgroup_size, ArrayAttr cooperative_matrix_properties_khr, ArrayAttr cooperative_matrix_properties_nv) {
  return Base::get(context, std::move(max_compute_shared_memory_size), std::move(max_compute_workgroup_invocations), std::move(max_compute_workgroup_size), std::move(subgroup_size), std::move(min_subgroup_size), std::move(max_subgroup_size), std::move(cooperative_matrix_properties_khr), std::move(cooperative_matrix_properties_nv));
}

::mlir::Attribute ResourceLimitsAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<int> _result_max_compute_shared_memory_size;
  ::mlir::FailureOr<int> _result_max_compute_workgroup_invocations;
  ::mlir::FailureOr<ArrayAttr> _result_max_compute_workgroup_size;
  ::mlir::FailureOr<int> _result_subgroup_size;
  ::mlir::FailureOr<std::optional<int>> _result_min_subgroup_size;
  ::mlir::FailureOr<std::optional<int>> _result_max_subgroup_size;
  ::mlir::FailureOr<ArrayAttr> _result_cooperative_matrix_properties_khr;
  ::mlir::FailureOr<ArrayAttr> _result_cooperative_matrix_properties_nv;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter struct
  bool _seen_max_compute_shared_memory_size = false;
  bool _seen_max_compute_workgroup_invocations = false;
  bool _seen_max_compute_workgroup_size = false;
  bool _seen_subgroup_size = false;
  bool _seen_min_subgroup_size = false;
  bool _seen_max_subgroup_size = false;
  bool _seen_cooperative_matrix_properties_khr = false;
  bool _seen_cooperative_matrix_properties_nv = false;
  {
    const auto _loop_body = [&](::llvm::StringRef _paramKey) -> bool {
      // Parse literal '='
      if (odsParser.parseEqual()) return {};
      if (!_seen_max_compute_shared_memory_size && _paramKey == "max_compute_shared_memory_size") {
        _seen_max_compute_shared_memory_size = true;

        // Parse variable 'max_compute_shared_memory_size'
        _result_max_compute_shared_memory_size = ::mlir::FieldParser<int>::parse(odsParser);
        if (::mlir::failed(_result_max_compute_shared_memory_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ResourceLimitsAttr parameter 'max_compute_shared_memory_size' which is to be a `int`");
          return {};
        }
      } else if (!_seen_max_compute_workgroup_invocations && _paramKey == "max_compute_workgroup_invocations") {
        _seen_max_compute_workgroup_invocations = true;

        // Parse variable 'max_compute_workgroup_invocations'
        _result_max_compute_workgroup_invocations = ::mlir::FieldParser<int>::parse(odsParser);
        if (::mlir::failed(_result_max_compute_workgroup_invocations)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ResourceLimitsAttr parameter 'max_compute_workgroup_invocations' which is to be a `int`");
          return {};
        }
      } else if (!_seen_max_compute_workgroup_size && _paramKey == "max_compute_workgroup_size") {
        _seen_max_compute_workgroup_size = true;

        // Parse variable 'max_compute_workgroup_size'
        _result_max_compute_workgroup_size = ::mlir::FieldParser<ArrayAttr>::parse(odsParser);
        if (::mlir::failed(_result_max_compute_workgroup_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ResourceLimitsAttr parameter 'max_compute_workgroup_size' which is to be a `ArrayAttr`");
          return {};
        }
      } else if (!_seen_subgroup_size && _paramKey == "subgroup_size") {
        _seen_subgroup_size = true;

        // Parse variable 'subgroup_size'
        _result_subgroup_size = ::mlir::FieldParser<int>::parse(odsParser);
        if (::mlir::failed(_result_subgroup_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ResourceLimitsAttr parameter 'subgroup_size' which is to be a `int`");
          return {};
        }
      } else if (!_seen_min_subgroup_size && _paramKey == "min_subgroup_size") {
        _seen_min_subgroup_size = true;

        // Parse variable 'min_subgroup_size'
        _result_min_subgroup_size = ::mlir::FieldParser<std::optional<int>>::parse(odsParser);
        if (::mlir::failed(_result_min_subgroup_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ResourceLimitsAttr parameter 'min_subgroup_size' which is to be a `std::optional<int>`");
          return {};
        }
      } else if (!_seen_max_subgroup_size && _paramKey == "max_subgroup_size") {
        _seen_max_subgroup_size = true;

        // Parse variable 'max_subgroup_size'
        _result_max_subgroup_size = ::mlir::FieldParser<std::optional<int>>::parse(odsParser);
        if (::mlir::failed(_result_max_subgroup_size)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ResourceLimitsAttr parameter 'max_subgroup_size' which is to be a `std::optional<int>`");
          return {};
        }
      } else if (!_seen_cooperative_matrix_properties_khr && _paramKey == "cooperative_matrix_properties_khr") {
        _seen_cooperative_matrix_properties_khr = true;

        // Parse variable 'cooperative_matrix_properties_khr'
        _result_cooperative_matrix_properties_khr = ::mlir::FieldParser<ArrayAttr>::parse(odsParser);
        if (::mlir::failed(_result_cooperative_matrix_properties_khr)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ResourceLimitsAttr parameter 'cooperative_matrix_properties_khr' which is to be a `ArrayAttr`");
          return {};
        }
      } else if (!_seen_cooperative_matrix_properties_nv && _paramKey == "cooperative_matrix_properties_nv") {
        _seen_cooperative_matrix_properties_nv = true;

        // Parse variable 'cooperative_matrix_properties_nv'
        _result_cooperative_matrix_properties_nv = ::mlir::FieldParser<ArrayAttr>::parse(odsParser);
        if (::mlir::failed(_result_cooperative_matrix_properties_nv)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse SPIRV_ResourceLimitsAttr parameter 'cooperative_matrix_properties_nv' which is to be a `ArrayAttr`");
          return {};
        }
      } else {
        odsParser.emitError(odsParser.getCurrentLocation(), "duplicate or unknown struct parameter name: ") << _paramKey;
        return {};
      }
      return true;
    };
    ::llvm::StringRef _paramKey;
    if (!odsParser.parseOptionalKeyword(&_paramKey)) {
      if (!_loop_body(_paramKey)) return {};
      while (!odsParser.parseOptionalComma()) {
        ::llvm::StringRef _paramKey;
        if (odsParser.parseKeyword(&_paramKey)) {
          odsParser.emitError(odsParser.getCurrentLocation(),
                             "expected a parameter name in struct");
          return {};
        }
        if (!_loop_body(_paramKey)) return {};
      }
    }
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  return ResourceLimitsAttr::get(odsParser.getContext(),
      int((_result_max_compute_shared_memory_size.value_or(16384))),
      int((_result_max_compute_workgroup_invocations.value_or(128))),
      ArrayAttr((_result_max_compute_workgroup_size.value_or(odsBuilder.getI32ArrayAttr({128, 128, 64})))),
      int((_result_subgroup_size.value_or(32))),
      std::optional<int>((_result_min_subgroup_size.value_or(std::optional<int>()))),
      std::optional<int>((_result_max_subgroup_size.value_or(std::optional<int>()))),
      ArrayAttr((_result_cooperative_matrix_properties_khr.value_or(nullptr))),
      ArrayAttr((_result_cooperative_matrix_properties_nv.value_or(nullptr))));
}

void ResourceLimitsAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!(getMaxComputeSharedMemorySize() == 16384)) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "max_compute_shared_memory_size = ";
      if (!(getMaxComputeSharedMemorySize() == 16384)) {
        odsPrinter.printStrippedAttrOrType(getMaxComputeSharedMemorySize());
      }
    }
    if (!(getMaxComputeWorkgroupInvocations() == 128)) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "max_compute_workgroup_invocations = ";
      if (!(getMaxComputeWorkgroupInvocations() == 128)) {
        odsPrinter.printStrippedAttrOrType(getMaxComputeWorkgroupInvocations());
      }
    }
    if (!(getMaxComputeWorkgroupSize() == odsBuilder.getI32ArrayAttr({128, 128, 64}))) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "max_compute_workgroup_size = ";
      if (!(getMaxComputeWorkgroupSize() == odsBuilder.getI32ArrayAttr({128, 128, 64}))) {
        odsPrinter.printStrippedAttrOrType(getMaxComputeWorkgroupSize());
      }
    }
    if (!(getSubgroupSize() == 32)) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "subgroup_size = ";
      if (!(getSubgroupSize() == 32)) {
        odsPrinter.printStrippedAttrOrType(getSubgroupSize());
      }
    }
    if (!(getMinSubgroupSize() == std::optional<int>())) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "min_subgroup_size = ";
      if (!(getMinSubgroupSize() == std::optional<int>())) {
        odsPrinter.printStrippedAttrOrType(getMinSubgroupSize());
      }
    }
    if (!(getMaxSubgroupSize() == std::optional<int>())) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "max_subgroup_size = ";
      if (!(getMaxSubgroupSize() == std::optional<int>())) {
        odsPrinter.printStrippedAttrOrType(getMaxSubgroupSize());
      }
    }
    if (!(getCooperativeMatrixPropertiesKhr() == nullptr)) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "cooperative_matrix_properties_khr = ";
      if (!(getCooperativeMatrixPropertiesKhr() == nullptr)) {
        odsPrinter.printStrippedAttrOrType(getCooperativeMatrixPropertiesKhr());
      }
    }
    if (!(getCooperativeMatrixPropertiesNv() == nullptr)) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "cooperative_matrix_properties_nv = ";
      if (!(getCooperativeMatrixPropertiesNv() == nullptr)) {
        odsPrinter.printStrippedAttrOrType(getCooperativeMatrixPropertiesNv());
      }
    }
  }
  odsPrinter << ">";
}

int ResourceLimitsAttr::getMaxComputeSharedMemorySize() const {
  return getImpl()->max_compute_shared_memory_size;
}

int ResourceLimitsAttr::getMaxComputeWorkgroupInvocations() const {
  return getImpl()->max_compute_workgroup_invocations;
}

ArrayAttr ResourceLimitsAttr::getMaxComputeWorkgroupSize() const {
  return getImpl()->max_compute_workgroup_size;
}

int ResourceLimitsAttr::getSubgroupSize() const {
  return getImpl()->subgroup_size;
}

std::optional<int> ResourceLimitsAttr::getMinSubgroupSize() const {
  return getImpl()->min_subgroup_size;
}

std::optional<int> ResourceLimitsAttr::getMaxSubgroupSize() const {
  return getImpl()->max_subgroup_size;
}

ArrayAttr ResourceLimitsAttr::getCooperativeMatrixPropertiesKhr() const {
  return getImpl()->cooperative_matrix_properties_khr;
}

ArrayAttr ResourceLimitsAttr::getCooperativeMatrixPropertiesNv() const {
  return getImpl()->cooperative_matrix_properties_nv;
}

} // namespace spirv
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::spirv::ResourceLimitsAttr)

#endif  // GET_ATTRDEF_CLASSES

