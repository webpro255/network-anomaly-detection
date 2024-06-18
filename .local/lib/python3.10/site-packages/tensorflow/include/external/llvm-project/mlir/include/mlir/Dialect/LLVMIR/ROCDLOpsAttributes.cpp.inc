/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_LIST
#undef GET_ATTRDEF_LIST

::mlir::ROCDL::ROCDLTargetAttr

#endif  // GET_ATTRDEF_LIST

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES

static ::mlir::OptionalParseResult generatedAttributeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type type, ::mlir::Attribute &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::mlir::ROCDL::ROCDLTargetAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::ROCDL::ROCDLTargetAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::mlir::LogicalResult generatedAttributePrinter(::mlir::Attribute def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Attribute, ::mlir::LogicalResult>(def)    .Case<::mlir::ROCDL::ROCDLTargetAttr>([&](auto t) {
      printer << ::mlir::ROCDL::ROCDLTargetAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace mlir {
namespace ROCDL {
namespace detail {
struct ROCDLTargetAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<int, ::llvm::StringRef, ::llvm::StringRef, ::llvm::StringRef, ::llvm::StringRef, DictionaryAttr, ArrayAttr>;
  ROCDLTargetAttrStorage(int O, ::llvm::StringRef triple, ::llvm::StringRef chip, ::llvm::StringRef features, ::llvm::StringRef abi, DictionaryAttr flags, ArrayAttr link) : O(std::move(O)), triple(std::move(triple)), chip(std::move(chip)), features(std::move(features)), abi(std::move(abi)), flags(std::move(flags)), link(std::move(link)) {}

  KeyTy getAsKey() const {
    return KeyTy(O, triple, chip, features, abi, flags, link);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (O == std::get<0>(tblgenKey)) && (triple == std::get<1>(tblgenKey)) && (chip == std::get<2>(tblgenKey)) && (features == std::get<3>(tblgenKey)) && (abi == std::get<4>(tblgenKey)) && (flags == std::get<5>(tblgenKey)) && (link == std::get<6>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey), std::get<3>(tblgenKey), std::get<4>(tblgenKey), std::get<5>(tblgenKey), std::get<6>(tblgenKey));
  }

  static ROCDLTargetAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto O = std::move(std::get<0>(tblgenKey));
    auto triple = std::move(std::get<1>(tblgenKey));
    auto chip = std::move(std::get<2>(tblgenKey));
    auto features = std::move(std::get<3>(tblgenKey));
    auto abi = std::move(std::get<4>(tblgenKey));
    auto flags = std::move(std::get<5>(tblgenKey));
    auto link = std::move(std::get<6>(tblgenKey));
    triple = allocator.copyInto(triple);
    chip = allocator.copyInto(chip);
    features = allocator.copyInto(features);
    abi = allocator.copyInto(abi);
    return new (allocator.allocate<ROCDLTargetAttrStorage>()) ROCDLTargetAttrStorage(std::move(O), std::move(triple), std::move(chip), std::move(features), std::move(abi), std::move(flags), std::move(link));
  }

  int O;
  ::llvm::StringRef triple;
  ::llvm::StringRef chip;
  ::llvm::StringRef features;
  ::llvm::StringRef abi;
  DictionaryAttr flags;
  ArrayAttr link;
};
} // namespace detail
bool ROCDLTargetAttr::hasFlag(StringRef flag) const {
  if (DictionaryAttr flags = getFlags())
    return flags.get(flag) != nullptr;
  return false;
}
bool ROCDLTargetAttr::hasWave64() const {
  return hasFlag("wave64") || !hasFlag("no_wave64");
}
bool ROCDLTargetAttr::hasFastMath() const {
  return hasFlag("fast");
}
bool ROCDLTargetAttr::hasDaz() const {
  return hasFlag("daz");
}
bool ROCDLTargetAttr::hasFiniteOnly() const {
  return hasFlag("finite_only");
}
bool ROCDLTargetAttr::hasUnsafeMath() const {
  return hasFlag("unsafe_math");
}
bool ROCDLTargetAttr::hasCorrectSqrt() const {
  return !hasFlag("unsafe_sqrt");
}
ROCDLTargetAttr ROCDLTargetAttr::get(::mlir::MLIRContext *context, int optLevel, StringRef triple, StringRef chip, StringRef features, StringRef abiVersion, DictionaryAttr targetFlags, ArrayAttr linkFiles) {
  return Base::get(context, optLevel, triple, chip, features, abiVersion,
                   targetFlags, linkFiles);
}

ROCDLTargetAttr ROCDLTargetAttr::getChecked(::llvm::function_ref<::mlir::InFlightDiagnostic()> emitError, ::mlir::MLIRContext *context, int optLevel, StringRef triple, StringRef chip, StringRef features, StringRef abiVersion, DictionaryAttr targetFlags, ArrayAttr linkFiles) {
  return Base::get(context, optLevel, triple, chip, features, abiVersion,
                   targetFlags, linkFiles);
}

::mlir::Attribute ROCDLTargetAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<int> _result_O;
  ::mlir::FailureOr<std::string> _result_triple;
  ::mlir::FailureOr<std::string> _result_chip;
  ::mlir::FailureOr<std::string> _result_features;
  ::mlir::FailureOr<std::string> _result_abi;
  ::mlir::FailureOr<DictionaryAttr> _result_flags;
  ::mlir::FailureOr<ArrayAttr> _result_link;
  // Parse literal '<'
  if (odsParser.parseOptionalLess()) {
  } else {
    // Parse parameter struct
    bool _seen_O = false;
    bool _seen_triple = false;
    bool _seen_chip = false;
    bool _seen_features = false;
    bool _seen_abi = false;
    bool _seen_flags = false;
    bool _seen_link = false;
    {
      const auto _loop_body = [&](::llvm::StringRef _paramKey) -> bool {
        // Parse literal '='
        if (odsParser.parseEqual()) return {};
        if (!_seen_O && _paramKey == "O") {
          _seen_O = true;

          // Parse variable 'O'
          _result_O = ::mlir::FieldParser<int>::parse(odsParser);
          if (::mlir::failed(_result_O)) {
            odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse ROCDL_TargettAttr parameter 'O' which is to be a `int`");
            return {};
          }
        } else if (!_seen_triple && _paramKey == "triple") {
          _seen_triple = true;

          // Parse variable 'triple'
          _result_triple = ::mlir::FieldParser<std::string>::parse(odsParser);
          if (::mlir::failed(_result_triple)) {
            odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse ROCDL_TargettAttr parameter 'triple' which is to be a `::llvm::StringRef`");
            return {};
          }
        } else if (!_seen_chip && _paramKey == "chip") {
          _seen_chip = true;

          // Parse variable 'chip'
          _result_chip = ::mlir::FieldParser<std::string>::parse(odsParser);
          if (::mlir::failed(_result_chip)) {
            odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse ROCDL_TargettAttr parameter 'chip' which is to be a `::llvm::StringRef`");
            return {};
          }
        } else if (!_seen_features && _paramKey == "features") {
          _seen_features = true;

          // Parse variable 'features'
          _result_features = ::mlir::FieldParser<std::string>::parse(odsParser);
          if (::mlir::failed(_result_features)) {
            odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse ROCDL_TargettAttr parameter 'features' which is to be a `::llvm::StringRef`");
            return {};
          }
        } else if (!_seen_abi && _paramKey == "abi") {
          _seen_abi = true;

          // Parse variable 'abi'
          _result_abi = ::mlir::FieldParser<std::string>::parse(odsParser);
          if (::mlir::failed(_result_abi)) {
            odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse ROCDL_TargettAttr parameter 'abi' which is to be a `::llvm::StringRef`");
            return {};
          }
        } else if (!_seen_flags && _paramKey == "flags") {
          _seen_flags = true;

          // Parse variable 'flags'
          _result_flags = ::mlir::FieldParser<DictionaryAttr>::parse(odsParser);
          if (::mlir::failed(_result_flags)) {
            odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse ROCDL_TargettAttr parameter 'flags' which is to be a `DictionaryAttr`");
            return {};
          }
        } else if (!_seen_link && _paramKey == "link") {
          _seen_link = true;

          // Parse variable 'link'
          _result_link = ::mlir::FieldParser<ArrayAttr>::parse(odsParser);
          if (::mlir::failed(_result_link)) {
            odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse ROCDL_TargettAttr parameter 'link' which is to be a `ArrayAttr`");
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
  }
  return odsParser.getChecked<ROCDLTargetAttr>(odsLoc, odsParser.getContext(),
      int((_result_O.value_or(2))),
      ::llvm::StringRef((_result_triple.value_or("amdgcn-amd-amdhsa"))),
      ::llvm::StringRef((_result_chip.value_or("gfx900"))),
      ::llvm::StringRef((_result_features.value_or(""))),
      ::llvm::StringRef((_result_abi.value_or("500"))),
      DictionaryAttr((_result_flags.value_or(DictionaryAttr()))),
      ArrayAttr((_result_link.value_or(ArrayAttr()))));
}

void ROCDLTargetAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  if (!(getO() == 2) || !(getTriple() == "amdgcn-amd-amdhsa") || !(getChip() == "gfx900") || !(getFeatures() == "") || !(getAbi() == "500") || !(getFlags() == DictionaryAttr()) || !(getLink() == ArrayAttr())) {
    odsPrinter << "<";
    {
      bool _firstPrinted = true;
      if (!(getO() == 2)) {
        if (!_firstPrinted) odsPrinter << ", ";
        _firstPrinted = false;
        odsPrinter << "O = ";
        if (!(getO() == 2)) {
          odsPrinter.printStrippedAttrOrType(getO());
        }
      }
      if (!(getTriple() == "amdgcn-amd-amdhsa")) {
        if (!_firstPrinted) odsPrinter << ", ";
        _firstPrinted = false;
        odsPrinter << "triple = ";
        if (!(getTriple() == "amdgcn-amd-amdhsa")) {
          odsPrinter.printString(getTriple());;
        }
      }
      if (!(getChip() == "gfx900")) {
        if (!_firstPrinted) odsPrinter << ", ";
        _firstPrinted = false;
        odsPrinter << "chip = ";
        if (!(getChip() == "gfx900")) {
          odsPrinter.printString(getChip());;
        }
      }
      if (!(getFeatures() == "")) {
        if (!_firstPrinted) odsPrinter << ", ";
        _firstPrinted = false;
        odsPrinter << "features = ";
        if (!(getFeatures() == "")) {
          odsPrinter.printString(getFeatures());;
        }
      }
      if (!(getAbi() == "500")) {
        if (!_firstPrinted) odsPrinter << ", ";
        _firstPrinted = false;
        odsPrinter << "abi = ";
        if (!(getAbi() == "500")) {
          odsPrinter.printString(getAbi());;
        }
      }
      if (!(getFlags() == DictionaryAttr())) {
        if (!_firstPrinted) odsPrinter << ", ";
        _firstPrinted = false;
        odsPrinter << "flags = ";
        if (!(getFlags() == DictionaryAttr())) {
          odsPrinter.printStrippedAttrOrType(getFlags());
        }
      }
      if (!(getLink() == ArrayAttr())) {
        if (!_firstPrinted) odsPrinter << ", ";
        _firstPrinted = false;
        odsPrinter << "link = ";
        if (!(getLink() == ArrayAttr())) {
          odsPrinter.printStrippedAttrOrType(getLink());
        }
      }
    }
    odsPrinter << ">";
  } else {
  }
}

int ROCDLTargetAttr::getO() const {
  return getImpl()->O;
}

::llvm::StringRef ROCDLTargetAttr::getTriple() const {
  return getImpl()->triple;
}

::llvm::StringRef ROCDLTargetAttr::getChip() const {
  return getImpl()->chip;
}

::llvm::StringRef ROCDLTargetAttr::getFeatures() const {
  return getImpl()->features;
}

::llvm::StringRef ROCDLTargetAttr::getAbi() const {
  return getImpl()->abi;
}

DictionaryAttr ROCDLTargetAttr::getFlags() const {
  return getImpl()->flags;
}

ArrayAttr ROCDLTargetAttr::getLink() const {
  return getImpl()->link;
}

} // namespace ROCDL
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::ROCDL::ROCDLTargetAttr)
namespace mlir {
namespace ROCDL {

/// Parse an attribute registered to this dialect.
::mlir::Attribute ROCDLDialect::parseAttribute(::mlir::DialectAsmParser &parser,
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
void ROCDLDialect::printAttribute(::mlir::Attribute attr,
                         ::mlir::DialectAsmPrinter &printer) const {
  if (::mlir::succeeded(generatedAttributePrinter(attr, printer)))
    return;
  
}
} // namespace ROCDL
} // namespace mlir

#endif  // GET_ATTRDEF_CLASSES

