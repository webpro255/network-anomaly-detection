/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* AttrDef Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_ATTRDEF_LIST
#undef GET_ATTRDEF_LIST

::mlir::acc::ClauseDefaultValueAttr,
::mlir::acc::ReductionOperatorAttr,
::mlir::acc::DataClauseAttr,
::mlir::acc::DeclareAttr,
::mlir::acc::DeclareActionAttr,
::mlir::acc::DeviceTypeAttr,
::mlir::acc::GangArgTypeAttr,
::mlir::acc::RoutineInfoAttr

#endif  // GET_ATTRDEF_LIST

#ifdef GET_ATTRDEF_CLASSES
#undef GET_ATTRDEF_CLASSES

static ::mlir::OptionalParseResult generatedAttributeParser(::mlir::AsmParser &parser, ::llvm::StringRef *mnemonic, ::mlir::Type type, ::mlir::Attribute &value) {
  return ::mlir::AsmParser::KeywordSwitch<::mlir::OptionalParseResult>(parser)
    .Case(::mlir::acc::ClauseDefaultValueAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::ClauseDefaultValueAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::acc::ReductionOperatorAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::ReductionOperatorAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::acc::DataClauseAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::DataClauseAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::acc::DeclareAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::DeclareAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::acc::DeclareActionAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::DeclareActionAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::acc::DeviceTypeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::DeviceTypeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::acc::GangArgTypeAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::GangArgTypeAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Case(::mlir::acc::RoutineInfoAttr::getMnemonic(), [&](llvm::StringRef, llvm::SMLoc) {
      value = ::mlir::acc::RoutineInfoAttr::parse(parser, type);
      return ::mlir::success(!!value);
    })
    .Default([&](llvm::StringRef keyword, llvm::SMLoc) {
      *mnemonic = keyword;
      return std::nullopt;
    });
}

static ::mlir::LogicalResult generatedAttributePrinter(::mlir::Attribute def, ::mlir::AsmPrinter &printer) {
  return ::llvm::TypeSwitch<::mlir::Attribute, ::mlir::LogicalResult>(def)    .Case<::mlir::acc::ClauseDefaultValueAttr>([&](auto t) {
      printer << ::mlir::acc::ClauseDefaultValueAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::acc::ReductionOperatorAttr>([&](auto t) {
      printer << ::mlir::acc::ReductionOperatorAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::acc::DataClauseAttr>([&](auto t) {
      printer << ::mlir::acc::DataClauseAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::acc::DeclareAttr>([&](auto t) {
      printer << ::mlir::acc::DeclareAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::acc::DeclareActionAttr>([&](auto t) {
      printer << ::mlir::acc::DeclareActionAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::acc::DeviceTypeAttr>([&](auto t) {
      printer << ::mlir::acc::DeviceTypeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::acc::GangArgTypeAttr>([&](auto t) {
      printer << ::mlir::acc::GangArgTypeAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Case<::mlir::acc::RoutineInfoAttr>([&](auto t) {
      printer << ::mlir::acc::RoutineInfoAttr::getMnemonic();
t.print(printer);
      return ::mlir::success();
    })
    .Default([](auto) { return ::mlir::failure(); });
}

namespace mlir {
namespace acc {
namespace detail {
struct ClauseDefaultValueAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::acc::ClauseDefaultValue>;
  ClauseDefaultValueAttrStorage(::mlir::acc::ClauseDefaultValue value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ClauseDefaultValueAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ClauseDefaultValueAttrStorage>()) ClauseDefaultValueAttrStorage(std::move(value));
  }

  ::mlir::acc::ClauseDefaultValue value;
};
} // namespace detail
ClauseDefaultValueAttr ClauseDefaultValueAttr::get(::mlir::MLIRContext *context, ::mlir::acc::ClauseDefaultValue value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ClauseDefaultValueAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::acc::ClauseDefaultValue> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::acc::ClauseDefaultValue> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::acc::symbolizeClauseDefaultValue(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::acc::ClauseDefaultValue" << " to be one of: " << "present" << ", " << "none")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse DefaultValueAttr parameter 'value' which is to be a `::mlir::acc::ClauseDefaultValue`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return ClauseDefaultValueAttr::get(odsParser.getContext(),
      ::mlir::acc::ClauseDefaultValue((*_result_value)));
}

void ClauseDefaultValueAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifyClauseDefaultValue(getValue());
}

::mlir::acc::ClauseDefaultValue ClauseDefaultValueAttr::getValue() const {
  return getImpl()->value;
}

} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::ClauseDefaultValueAttr)
namespace mlir {
namespace acc {
namespace detail {
struct ReductionOperatorAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::acc::ReductionOperator>;
  ReductionOperatorAttrStorage(::mlir::acc::ReductionOperator value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static ReductionOperatorAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<ReductionOperatorAttrStorage>()) ReductionOperatorAttrStorage(std::move(value));
  }

  ::mlir::acc::ReductionOperator value;
};
} // namespace detail
ReductionOperatorAttr ReductionOperatorAttr::get(::mlir::MLIRContext *context, ::mlir::acc::ReductionOperator value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute ReductionOperatorAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::acc::ReductionOperator> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::acc::ReductionOperator> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::acc::symbolizeReductionOperator(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::acc::ReductionOperator" << " to be one of: " << "add" << ", " << "mul" << ", " << "max" << ", " << "min" << ", " << "iand" << ", " << "ior" << ", " << "xor" << ", " << "eqv" << ", " << "neqv" << ", " << "land" << ", " << "lor")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse OpenACC_ReductionOperatorAttr parameter 'value' which is to be a `::mlir::acc::ReductionOperator`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return ReductionOperatorAttr::get(odsParser.getContext(),
      ::mlir::acc::ReductionOperator((*_result_value)));
}

void ReductionOperatorAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyReductionOperator(getValue());
  odsPrinter << ">";
}

::mlir::acc::ReductionOperator ReductionOperatorAttr::getValue() const {
  return getImpl()->value;
}

} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::ReductionOperatorAttr)
namespace mlir {
namespace acc {
namespace detail {
struct DataClauseAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::acc::DataClause>;
  DataClauseAttrStorage(::mlir::acc::DataClause value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static DataClauseAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<DataClauseAttrStorage>()) DataClauseAttrStorage(std::move(value));
  }

  ::mlir::acc::DataClause value;
};
} // namespace detail
DataClauseAttr DataClauseAttr::get(::mlir::MLIRContext *context, ::mlir::acc::DataClause value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute DataClauseAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::acc::DataClause> _result_value;

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::acc::DataClause> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::acc::symbolizeDataClause(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::acc::DataClause" << " to be one of: " << "acc_copyin" << ", " << "acc_copyin_readonly" << ", " << "acc_copy" << ", " << "acc_copyout" << ", " << "acc_copyout_zero" << ", " << "acc_present" << ", " << "acc_create" << ", " << "acc_create_zero" << ", " << "acc_delete" << ", " << "acc_attach" << ", " << "acc_detach" << ", " << "acc_no_create" << ", " << "acc_private" << ", " << "acc_firstprivate" << ", " << "acc_deviceptr" << ", " << "acc_getdeviceptr" << ", " << "acc_update_host" << ", " << "acc_update_self" << ", " << "acc_update_device" << ", " << "acc_use_device" << ", " << "acc_reduction" << ", " << "acc_declare_device_resident" << ", " << "acc_declare_link" << ", " << "acc_cache" << ", " << "acc_cache_readonly")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse OpenACC_DataClauseAttr parameter 'value' which is to be a `::mlir::acc::DataClause`");
    return {};
  }
  assert(::mlir::succeeded(_result_value));
  return DataClauseAttr::get(odsParser.getContext(),
      ::mlir::acc::DataClause((*_result_value)));
}

void DataClauseAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << ' ';
  odsPrinter << stringifyDataClause(getValue());
}

::mlir::acc::DataClause DataClauseAttr::getValue() const {
  return getImpl()->value;
}

} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::DataClauseAttr)
namespace mlir {
namespace acc {
namespace detail {
struct DeclareAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<DataClauseAttr, bool>;
  DeclareAttrStorage(DataClauseAttr dataClause, bool implicit) : dataClause(std::move(dataClause)), implicit(std::move(implicit)) {}

  KeyTy getAsKey() const {
    return KeyTy(dataClause, implicit);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (dataClause == std::get<0>(tblgenKey)) && (implicit == std::get<1>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey));
  }

  static DeclareAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto dataClause = std::move(std::get<0>(tblgenKey));
    auto implicit = std::move(std::get<1>(tblgenKey));
    return new (allocator.allocate<DeclareAttrStorage>()) DeclareAttrStorage(std::move(dataClause), std::move(implicit));
  }

  DataClauseAttr dataClause;
  bool implicit;
};
} // namespace detail
DeclareAttr DeclareAttr::get(::mlir::MLIRContext *context, DataClauseAttr dataClause, bool implicit) {
  return Base::get(context, std::move(dataClause), std::move(implicit));
}

DeclareAttr DeclareAttr::get(::mlir::MLIRContext *context, DataClauseAttr dataClause) {
  return Base::get(context, dataClause, /*implicit=*/false);
}

::mlir::Attribute DeclareAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<DataClauseAttr> _result_dataClause;
  ::mlir::FailureOr<bool> _result_implicit;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter struct
  bool _seen_dataClause = false;
  bool _seen_implicit = false;
  {
    const auto _loop_body = [&](::llvm::StringRef _paramKey) -> bool {
      // Parse literal '='
      if (odsParser.parseEqual()) return {};
      if (!_seen_dataClause && _paramKey == "dataClause") {
        _seen_dataClause = true;

        // Parse variable 'dataClause'
        _result_dataClause = ::mlir::FieldParser<DataClauseAttr>::parse(odsParser);
        if (::mlir::failed(_result_dataClause)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse DeclareAttr parameter 'dataClause' which is to be a `DataClauseAttr`");
          return {};
        }
      } else if (!_seen_implicit && _paramKey == "implicit") {
        _seen_implicit = true;

        // Parse variable 'implicit'
        _result_implicit = ::mlir::FieldParser<bool>::parse(odsParser);
        if (::mlir::failed(_result_implicit)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse DeclareAttr parameter 'implicit' which is to be a `bool`");
          return {};
        }
      } else {
        odsParser.emitError(odsParser.getCurrentLocation(), "duplicate or unknown struct parameter name: ") << _paramKey;
        return {};
      }
      return true;
    };
    do {
      ::llvm::StringRef _paramKey;
      if (odsParser.parseKeyword(&_paramKey)) {
        odsParser.emitError(odsParser.getCurrentLocation(),
                           "expected a parameter name in struct");
        return {};
      }
      if (!_loop_body(_paramKey)) return {};
    } while(!odsParser.parseOptionalComma());
    if (!_seen_dataClause) {
      odsParser.emitError(odsParser.getCurrentLocation(), "struct is missing required parameter: ") << "dataClause";
      return {};
    }
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_dataClause));
  return DeclareAttr::get(odsParser.getContext(),
      DataClauseAttr((*_result_dataClause)),
      bool((_result_implicit.value_or(false))));
}

void DeclareAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!_firstPrinted) odsPrinter << ", ";
    _firstPrinted = false;
    odsPrinter << "dataClause = ";
    odsPrinter.printStrippedAttrOrType(getDataClause());
    if (!(getImplicit() == false)) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "implicit = ";
      if (!(getImplicit() == false)) {
        odsPrinter.printStrippedAttrOrType(getImplicit());
      }
    }
  }
  odsPrinter << ">";
}

DataClauseAttr DeclareAttr::getDataClause() const {
  return getImpl()->dataClause;
}

bool DeclareAttr::getImplicit() const {
  return getImpl()->implicit;
}

} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::DeclareAttr)
namespace mlir {
namespace acc {
namespace detail {
struct DeclareActionAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<SymbolRefAttr, SymbolRefAttr, SymbolRefAttr, SymbolRefAttr>;
  DeclareActionAttrStorage(SymbolRefAttr preAlloc, SymbolRefAttr postAlloc, SymbolRefAttr preDealloc, SymbolRefAttr postDealloc) : preAlloc(std::move(preAlloc)), postAlloc(std::move(postAlloc)), preDealloc(std::move(preDealloc)), postDealloc(std::move(postDealloc)) {}

  KeyTy getAsKey() const {
    return KeyTy(preAlloc, postAlloc, preDealloc, postDealloc);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (preAlloc == std::get<0>(tblgenKey)) && (postAlloc == std::get<1>(tblgenKey)) && (preDealloc == std::get<2>(tblgenKey)) && (postDealloc == std::get<3>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey), std::get<1>(tblgenKey), std::get<2>(tblgenKey), std::get<3>(tblgenKey));
  }

  static DeclareActionAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto preAlloc = std::move(std::get<0>(tblgenKey));
    auto postAlloc = std::move(std::get<1>(tblgenKey));
    auto preDealloc = std::move(std::get<2>(tblgenKey));
    auto postDealloc = std::move(std::get<3>(tblgenKey));
    return new (allocator.allocate<DeclareActionAttrStorage>()) DeclareActionAttrStorage(std::move(preAlloc), std::move(postAlloc), std::move(preDealloc), std::move(postDealloc));
  }

  SymbolRefAttr preAlloc;
  SymbolRefAttr postAlloc;
  SymbolRefAttr preDealloc;
  SymbolRefAttr postDealloc;
};
} // namespace detail
DeclareActionAttr DeclareActionAttr::get(::mlir::MLIRContext *context, SymbolRefAttr preAlloc, SymbolRefAttr postAlloc, SymbolRefAttr preDealloc, SymbolRefAttr postDealloc) {
  return Base::get(context, std::move(preAlloc), std::move(postAlloc), std::move(preDealloc), std::move(postDealloc));
}

::mlir::Attribute DeclareActionAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<SymbolRefAttr> _result_preAlloc;
  ::mlir::FailureOr<SymbolRefAttr> _result_postAlloc;
  ::mlir::FailureOr<SymbolRefAttr> _result_preDealloc;
  ::mlir::FailureOr<SymbolRefAttr> _result_postDealloc;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse parameter struct
  bool _seen_preAlloc = false;
  bool _seen_postAlloc = false;
  bool _seen_preDealloc = false;
  bool _seen_postDealloc = false;
  {
    const auto _loop_body = [&](::llvm::StringRef _paramKey) -> bool {
      // Parse literal '='
      if (odsParser.parseEqual()) return {};
      if (!_seen_preAlloc && _paramKey == "preAlloc") {
        _seen_preAlloc = true;

        // Parse variable 'preAlloc'
        _result_preAlloc = ::mlir::FieldParser<SymbolRefAttr>::parse(odsParser);
        if (::mlir::failed(_result_preAlloc)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse DeclareActionAttr parameter 'preAlloc' which is to be a `SymbolRefAttr`");
          return {};
        }
      } else if (!_seen_postAlloc && _paramKey == "postAlloc") {
        _seen_postAlloc = true;

        // Parse variable 'postAlloc'
        _result_postAlloc = ::mlir::FieldParser<SymbolRefAttr>::parse(odsParser);
        if (::mlir::failed(_result_postAlloc)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse DeclareActionAttr parameter 'postAlloc' which is to be a `SymbolRefAttr`");
          return {};
        }
      } else if (!_seen_preDealloc && _paramKey == "preDealloc") {
        _seen_preDealloc = true;

        // Parse variable 'preDealloc'
        _result_preDealloc = ::mlir::FieldParser<SymbolRefAttr>::parse(odsParser);
        if (::mlir::failed(_result_preDealloc)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse DeclareActionAttr parameter 'preDealloc' which is to be a `SymbolRefAttr`");
          return {};
        }
      } else if (!_seen_postDealloc && _paramKey == "postDealloc") {
        _seen_postDealloc = true;

        // Parse variable 'postDealloc'
        _result_postDealloc = ::mlir::FieldParser<SymbolRefAttr>::parse(odsParser);
        if (::mlir::failed(_result_postDealloc)) {
          odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse DeclareActionAttr parameter 'postDealloc' which is to be a `SymbolRefAttr`");
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
  return DeclareActionAttr::get(odsParser.getContext(),
      SymbolRefAttr((_result_preAlloc.value_or(SymbolRefAttr()))),
      SymbolRefAttr((_result_postAlloc.value_or(SymbolRefAttr()))),
      SymbolRefAttr((_result_preDealloc.value_or(SymbolRefAttr()))),
      SymbolRefAttr((_result_postDealloc.value_or(SymbolRefAttr()))));
}

void DeclareActionAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  {
    bool _firstPrinted = true;
    if (!(getPreAlloc() == SymbolRefAttr())) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "preAlloc = ";
      if (!(getPreAlloc() == SymbolRefAttr())) {
        odsPrinter.printStrippedAttrOrType(getPreAlloc());
      }
    }
    if (!(getPostAlloc() == SymbolRefAttr())) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "postAlloc = ";
      if (!(getPostAlloc() == SymbolRefAttr())) {
        odsPrinter.printStrippedAttrOrType(getPostAlloc());
      }
    }
    if (!(getPreDealloc() == SymbolRefAttr())) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "preDealloc = ";
      if (!(getPreDealloc() == SymbolRefAttr())) {
        odsPrinter.printStrippedAttrOrType(getPreDealloc());
      }
    }
    if (!(getPostDealloc() == SymbolRefAttr())) {
      if (!_firstPrinted) odsPrinter << ", ";
      _firstPrinted = false;
      odsPrinter << "postDealloc = ";
      if (!(getPostDealloc() == SymbolRefAttr())) {
        odsPrinter.printStrippedAttrOrType(getPostDealloc());
      }
    }
  }
  odsPrinter << ">";
}

SymbolRefAttr DeclareActionAttr::getPreAlloc() const {
  return getImpl()->preAlloc;
}

SymbolRefAttr DeclareActionAttr::getPostAlloc() const {
  return getImpl()->postAlloc;
}

SymbolRefAttr DeclareActionAttr::getPreDealloc() const {
  return getImpl()->preDealloc;
}

SymbolRefAttr DeclareActionAttr::getPostDealloc() const {
  return getImpl()->postDealloc;
}

} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::DeclareActionAttr)
namespace mlir {
namespace acc {
namespace detail {
struct DeviceTypeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::acc::DeviceType>;
  DeviceTypeAttrStorage(::mlir::acc::DeviceType value) : value(std::move(value)) {}

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

  ::mlir::acc::DeviceType value;
};
} // namespace detail
DeviceTypeAttr DeviceTypeAttr::get(::mlir::MLIRContext *context, ::mlir::acc::DeviceType value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute DeviceTypeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::acc::DeviceType> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::acc::DeviceType> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::acc::symbolizeDeviceType(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::acc::DeviceType" << " to be one of: " << "none" << ", " << "star" << ", " << "default" << ", " << "host" << ", " << "multicore" << ", " << "nvidia" << ", " << "radeon")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse OpenACC_DeviceTypeAttr parameter 'value' which is to be a `::mlir::acc::DeviceType`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return DeviceTypeAttr::get(odsParser.getContext(),
      ::mlir::acc::DeviceType((*_result_value)));
}

void DeviceTypeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyDeviceType(getValue());
  odsPrinter << ">";
}

::mlir::acc::DeviceType DeviceTypeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::DeviceTypeAttr)
namespace mlir {
namespace acc {
namespace detail {
struct GangArgTypeAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::mlir::acc::GangArgType>;
  GangArgTypeAttrStorage(::mlir::acc::GangArgType value) : value(std::move(value)) {}

  KeyTy getAsKey() const {
    return KeyTy(value);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (value == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static GangArgTypeAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto value = std::move(std::get<0>(tblgenKey));
    return new (allocator.allocate<GangArgTypeAttrStorage>()) GangArgTypeAttrStorage(std::move(value));
  }

  ::mlir::acc::GangArgType value;
};
} // namespace detail
GangArgTypeAttr GangArgTypeAttr::get(::mlir::MLIRContext *context, ::mlir::acc::GangArgType value) {
  return Base::get(context, std::move(value));
}

::mlir::Attribute GangArgTypeAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::mlir::acc::GangArgType> _result_value;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};

  // Parse variable 'value'
  _result_value = [&]() -> ::mlir::FailureOr<::mlir::acc::GangArgType> {
      auto loc = odsParser.getCurrentLocation();
      ::llvm::StringRef enumKeyword;
      if (::mlir::failed(odsParser.parseKeyword(&enumKeyword)))
        return ::mlir::failure();
      auto maybeEnum = ::mlir::acc::symbolizeGangArgType(enumKeyword);
      if (maybeEnum)
        return *maybeEnum;
      return {(::mlir::LogicalResult)(odsParser.emitError(loc) << "expected " << "::mlir::acc::GangArgType" << " to be one of: " << "Num" << ", " << "Dim" << ", " << "Static")};
    }();
  if (::mlir::failed(_result_value)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse OpenACC_GangArgTypeAttr parameter 'value' which is to be a `::mlir::acc::GangArgType`");
    return {};
  }
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_value));
  return GangArgTypeAttr::get(odsParser.getContext(),
      ::mlir::acc::GangArgType((*_result_value)));
}

void GangArgTypeAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << stringifyGangArgType(getValue());
  odsPrinter << ">";
}

::mlir::acc::GangArgType GangArgTypeAttr::getValue() const {
  return getImpl()->value;
}

} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::GangArgTypeAttr)
namespace mlir {
namespace acc {
namespace detail {
struct RoutineInfoAttrStorage : public ::mlir::AttributeStorage {
  using KeyTy = std::tuple<::llvm::ArrayRef<SymbolRefAttr>>;
  RoutineInfoAttrStorage(::llvm::ArrayRef<SymbolRefAttr> accRoutines) : accRoutines(std::move(accRoutines)) {}

  KeyTy getAsKey() const {
    return KeyTy(accRoutines);
  }

  bool operator==(const KeyTy &tblgenKey) const {
    return (accRoutines == std::get<0>(tblgenKey));
  }

  static ::llvm::hash_code hashKey(const KeyTy &tblgenKey) {
    return ::llvm::hash_combine(std::get<0>(tblgenKey));
  }

  static RoutineInfoAttrStorage *construct(::mlir::AttributeStorageAllocator &allocator, KeyTy &&tblgenKey) {
    auto accRoutines = std::move(std::get<0>(tblgenKey));
    accRoutines = allocator.copyInto(accRoutines);
    return new (allocator.allocate<RoutineInfoAttrStorage>()) RoutineInfoAttrStorage(std::move(accRoutines));
  }

  ::llvm::ArrayRef<SymbolRefAttr> accRoutines;
};
} // namespace detail
RoutineInfoAttr RoutineInfoAttr::get(::mlir::MLIRContext *context, ::llvm::ArrayRef<SymbolRefAttr> accRoutines) {
  return Base::get(context, std::move(accRoutines));
}

::mlir::Attribute RoutineInfoAttr::parse(::mlir::AsmParser &odsParser, ::mlir::Type odsType) {
  ::mlir::Builder odsBuilder(odsParser.getContext());
  ::llvm::SMLoc odsLoc = odsParser.getCurrentLocation();
  (void) odsLoc;
  ::mlir::FailureOr<::llvm::SmallVector<SymbolRefAttr>> _result_accRoutines;
  // Parse literal '<'
  if (odsParser.parseLess()) return {};
  // Parse literal '['
  if (odsParser.parseLSquare()) return {};

  // Parse variable 'accRoutines'
  _result_accRoutines = ::mlir::FieldParser<::llvm::SmallVector<SymbolRefAttr>>::parse(odsParser);
  if (::mlir::failed(_result_accRoutines)) {
    odsParser.emitError(odsParser.getCurrentLocation(), "failed to parse RoutineInfoAttr parameter 'accRoutines' which is to be a `::llvm::ArrayRef<SymbolRefAttr>`");
    return {};
  }
  // Parse literal ']'
  if (odsParser.parseRSquare()) return {};
  // Parse literal '>'
  if (odsParser.parseGreater()) return {};
  assert(::mlir::succeeded(_result_accRoutines));
  return RoutineInfoAttr::get(odsParser.getContext(),
      ::llvm::ArrayRef<SymbolRefAttr>((*_result_accRoutines)));
}

void RoutineInfoAttr::print(::mlir::AsmPrinter &odsPrinter) const {
  ::mlir::Builder odsBuilder(getContext());
  odsPrinter << "<";
  odsPrinter << "[";
  odsPrinter.printStrippedAttrOrType(getAccRoutines());
  odsPrinter << "]";
  odsPrinter << ">";
}

::llvm::ArrayRef<SymbolRefAttr> RoutineInfoAttr::getAccRoutines() const {
  return getImpl()->accRoutines;
}

} // namespace acc
} // namespace mlir
MLIR_DEFINE_EXPLICIT_TYPE_ID(::mlir::acc::RoutineInfoAttr)
namespace mlir {
namespace acc {

/// Parse an attribute registered to this dialect.
::mlir::Attribute OpenACCDialect::parseAttribute(::mlir::DialectAsmParser &parser,
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
void OpenACCDialect::printAttribute(::mlir::Attribute attr,
                         ::mlir::DialectAsmPrinter &printer) const {
  if (::mlir::succeeded(generatedAttributePrinter(attr, printer)))
    return;
  
}
} // namespace acc
} // namespace mlir

#endif  // GET_ATTRDEF_CLASSES

