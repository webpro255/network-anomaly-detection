static Attribute readAttribute(MLIRContext* context, DialectBytecodeReader &reader) {
  return reader.emitError() << "unknown attribute", Attribute();
}

static LogicalResult writeAttribute(Attribute attribute,
                                DialectBytecodeWriter &writer) {
  return TypeSwitch<Attribute, LogicalResult>(attribute)
    .Default([&](Attribute) { return failure(); });
}

static Type readType(MLIRContext* context, DialectBytecodeReader &reader) {
  return reader.emitError() << "unknown attribute", Type();
}

static LogicalResult writeType(Type type,
                                DialectBytecodeWriter &writer) {
  return TypeSwitch<Type, LogicalResult>(type)
    .Default([&](Type) { return failure(); });
}

