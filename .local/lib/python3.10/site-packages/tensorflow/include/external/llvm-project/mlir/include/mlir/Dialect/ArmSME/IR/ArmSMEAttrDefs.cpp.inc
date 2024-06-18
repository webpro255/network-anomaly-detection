/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_LIST
#undef GET_ATTRDEF_LIST

::mlir::arm_sme::TileSliceLayoutAttr,
::mlir::arm_sme::CombiningKindAttr,
::mlir::arm_sme::TypeSizeAttr

#endif  // GET_ATTRDEF_LIST

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES

static ::mlir::OptionalParseResult generatedAttributeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type type, ::mlir::Attribute &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::mlir::arm_sme::TileSliceLayoutAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::arm_sme::TileSliceLayoutAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::arm_sme::CombiningKindAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::arm_sme::CombiningKindAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::arm_sme::TypeSizeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::arm_sme::TypeSizeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::mlir::LogicalResult generatedAttributePrinter(::mlir::Attribute def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Attribute, ::mlir::LogicalResult>(def)    .Case<::mlir::arm_sme::TileSliceLayoutAttr>([&](auto t) {
      printer << ::mlir::arm_sme::TileSliceLayoutAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::arm_sme::CombiningKindAttr>([&](auto t) {
      printer << ::mlir::arm_sme::CombiningKindAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::arm_sme::TypeSizeAttr>([&](auto t) {
      printer << ::mlir::arm_sme::TypeSizeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace mlir {
namespace arm_sme {
namespace detail {
struct TileSliceLayoutAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::arm_sme::TileSliceLayout>;
  TileSliceLayoutAttrStorage(::mlir::arm_sme::TileSliceLayout value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static TileSliceLayoutAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<TileSliceLayoutAttrStorage>()) TileSliceLayoutAttrStorage(std::move(value));
  }

  ::mlir::arm_sme::TileSliceLayout value;
};
} // namespace detail
TileSliceLayoutAttr TileSliceLayoutAttr::get(::mlir::MLIRContext *context, ::mlir::arm_sme::TileSliceLayout value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute TileSliceLayoutAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::arm_sme::TileSliceLayout> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::arm_sme::TileSliceLayout> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::arm_sme::symbolizeTileSliceLayout(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::arm_sme::TileSliceLayout" << " to be one of: " << "horizontal" << ", " << "vertical")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse ArmSME_TileSliceLayoutAttr parameter 'value' which is to be a `::mlir::arm_sme::TileSliceLayout`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return TileSliceLayoutAttr::get(odsParser.getContext(),
      ::mlir::arm_sme::TileSliceLayout((*_result_value)));
}

void TileSliceLayoutAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyTileSliceLayout(getValue());
  odsPrinter << ">";
}

::mlir::arm_sme::TileSliceLayout TileSliceLayoutAttr::getValue() const {
  return getImpl()->value;
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::TileSliceLayoutAttr)
namespace mlir {
namespace arm_sme {
namespace detail {
struct CombiningKindAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::arm_sme::CombiningKind>;
  CombiningKindAttrStorage(::mlir::arm_sme::CombiningKind value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static CombiningKindAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<CombiningKindAttrStorage>()) CombiningKindAttrStorage(std::move(value));
  }

  ::mlir::arm_sme::CombiningKind value;
};
} // namespace detail
CombiningKindAttr CombiningKindAttr::get(::mlir::MLIRContext *context, ::mlir::arm_sme::CombiningKind value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute CombiningKindAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::arm_sme::CombiningKind> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::arm_sme::CombiningKind> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::arm_sme::symbolizeCombiningKind(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::arm_sme::CombiningKind" << " to be one of: " << "add" << ", " << "sub")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse ArmSME_CombiningKindAttr parameter 'value' which is to be a `::mlir::arm_sme::CombiningKind`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return CombiningKindAttr::get(odsParser.getContext(),
      ::mlir::arm_sme::CombiningKind((*_result_value)));
}

void CombiningKindAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyCombiningKind(getValue());
  odsPrinter << ">";
}

::mlir::arm_sme::CombiningKind CombiningKindAttr::getValue() const {
  return getImpl()->value;
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::CombiningKindAttr)
namespace mlir {
namespace arm_sme {
namespace detail {
struct TypeSizeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::arm_sme::TypeSize>;
  TypeSizeAttrStorage(::mlir::arm_sme::TypeSize value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static TypeSizeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<TypeSizeAttrStorage>()) TypeSizeAttrStorage(std::move(value));
  }

  ::mlir::arm_sme::TypeSize value;
};
} // namespace detail
TypeSizeAttr TypeSizeAttr::get(::mlir::MLIRContext *context, ::mlir::arm_sme::TypeSize value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute TypeSizeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::arm_sme::TypeSize> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::arm_sme::TypeSize> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::arm_sme::symbolizeTypeSize(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::arm_sme::TypeSize" << " to be one of: " << "byte" << ", " << "half" << ", " << "word" << ", " << "double")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse ArmSME_TypeSizeAttr parameter 'value' which is to be a `::mlir::arm_sme::TypeSize`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return TypeSizeAttr::get(odsParser.getContext(),
      ::mlir::arm_sme::TypeSize((*_result_value)));
}

void TypeSizeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyTypeSize(getValue());
  odsPrinter << ">";
}

::mlir::arm_sme::TypeSize TypeSizeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace arm_sme
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::arm_sme::TypeSizeAttr)
namespace mlir {
namespace arm_sme {

/// Parse an attribute registered to this dialect.
::mlir::Attribute ArmSMEDialect::parseAttribute(::mlir::DialectAsmParser &parser,
                                      ::mlir::Type type) const {
  ::llvm::SMLoc typeLoc = parser.getCurrentLocation();
  ::llvm::StringRef attrTag;
  {
    ::mlir::Attribute attr;
    auto parseResult = generatedAttributeParser(parser, &attrTag, type, attr);
    if (parseResult.has_value())
      return attr;
  }
  
  parser.emitError(typeLoc) << "unknown attribute `"
      << attrTag << "` in dialect `" << getNamespace() << "`";
  return {};
}
/// Print an attribute registered to this dialect.
void ArmSMEDialect::printAttribute(::mlir::Attribute attr,
                         ::mlir::DialectAsmPrinter &printer) const {
  if (::mlir::succeeded(generatedAttributePrinter(attr, printer)))
    return;
  
}
} // namespace arm_sme
} // namespace mlir

#endif  // GET_ATTRDEF_CLASSES

