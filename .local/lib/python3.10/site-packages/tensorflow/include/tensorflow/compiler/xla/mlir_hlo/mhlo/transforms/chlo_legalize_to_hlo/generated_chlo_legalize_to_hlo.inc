/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: chlo_legalize_to_hlo_patterns.td                                     *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


static ::mlir::LogicalResult __mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns0(
    ::mlir::PatternRewriter &rewriter, ::mlir::Operation *op, ::mlir::Type type,
    ::llvm::StringRef failureStr) {
  if (!((!type.cast<ShapedType>().getElementType().isa<ComplexType>()))) {
    return rewriter.notifyMatchFailure(op, [&](::mlir::Diagnostic &diag) {
      diag << failureStr << ": Non-complex element type";
    });
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns1(
    ::mlir::PatternRewriter &rewriter, ::mlir::Operation *op, ::mlir::Type type,
    ::llvm::StringRef failureStr) {
  if (!((type.cast<ShapedType>().getElementType().isa<ComplexType>()))) {
    return rewriter.notifyMatchFailure(op, [&](::mlir::Diagnostic &diag) {
      diag << failureStr << ": Complex element type";
    });
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns2(
    ::mlir::PatternRewriter &rewriter, ::mlir::Operation *op, ::mlir::Type type,
    ::llvm::StringRef failureStr) {
  if (!(((::llvm::isa<::mlir::RankedTensorType>(type))) && ([](::mlir::Type elementType) { return (true); }(::llvm::cast<::mlir::ShapedType>(type).getElementType())))) {
    return rewriter.notifyMatchFailure(op, [&](::mlir::Diagnostic &diag) {
      diag << failureStr << ": ranked tensor of any type values";
    });
  }
  return ::mlir::success();
}
/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:41
*/
struct GeneratedConvert0 : public ::mlir::RewritePattern {
  GeneratedConvert0(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.acos", 1, context, {"mhlo.add", "mhlo.atan2", "mhlo.compare", "mhlo.multiply", "mhlo.select", "mhlo.sqrt", "mhlo.subtract"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::AcosOp>(op0); (void)castedOp0;
    if(::mlir::failed(__mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns0(rewriter, castedOp0, (*castedOp0.getODSOperands(0).begin()).getType(), "operand 0 of op 'chlo.acos' failed to satisfy constraint: 'Non-complex element type'"))) {
      return ::mlir::failure();
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    auto nativeVar_0 = chlo::getConstantLike(rewriter, odsLoc, -1, (*input.begin())); (void)nativeVar_0;
    auto nativeVar_1 = ::mlir::mhlo::ComparisonTypeAttr(); (void)nativeVar_1;
    ::mlir::mhlo::CompareOp tblgen_CompareOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = nativeVar_0;
      tblgen_CompareOp_2 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        ::mlir::mhlo::ComparisonDirectionAttr::get(rewriter.getContext(), ::mlir::mhlo::ComparisonDirection::NE),
        /*compare_type=*/nativeVar_1
      );
    }
    auto nativeVar_3 = chlo::getConstantLike(rewriter, odsLoc, 2, (*input.begin())); (void)nativeVar_3;
    auto nativeVar_4 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_4;
    ::mlir::mhlo::MulOp tblgen_MulOp_5;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = (*input.begin());
      tblgen_MulOp_5 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SubtractOp tblgen_SubtractOp_6;
    {
      ::mlir::Value tblgen_value_0 = nativeVar_4;
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_5.getODSResults(0).begin());
      tblgen_SubtractOp_6 = rewriter.create<::mlir::mhlo::SubtractOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_7;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SubtractOp_6.getODSResults(0).begin());
      tblgen_SqrtOp_7 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    auto nativeVar_8 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_8;
    ::mlir::mhlo::AddOp tblgen_AddOp_9;
    {
      ::mlir::Value tblgen_value_0 = nativeVar_8;
      ::mlir::Value tblgen_value_1 = (*input.begin());
      tblgen_AddOp_9 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::Atan2Op tblgen_Atan2Op_10;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SqrtOp_7.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddOp_9.getODSResults(0).begin());
      tblgen_Atan2Op_10 = rewriter.create<::mlir::mhlo::Atan2Op>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_11;
    {
      ::mlir::Value tblgen_value_0 = nativeVar_3;
      ::mlir::Value tblgen_value_1 = (*tblgen_Atan2Op_10.getODSResults(0).begin());
      tblgen_MulOp_11 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    auto nativeVar_12 = chlo::getConstantLike(rewriter, odsLoc, M_PI, (*input.begin())); (void)nativeVar_12;
    ::mlir::mhlo::SelectOp tblgen_SelectOp_13;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_CompareOp_2.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_MulOp_11.getODSResults(0).begin()));
      tblgen_values.push_back(nativeVar_12);
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectOp_13 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectOp_13.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:75
*/
struct GeneratedConvert1 : public ::mlir::RewritePattern {
  GeneratedConvert1(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.acosh", 1, context, {"mhlo.add", "mhlo.compare", "mhlo.log", "mhlo.multiply", "mhlo.select", "mhlo.sqrt"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::AcoshOp>(op0); (void)castedOp0;
    if(::mlir::failed(__mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns0(rewriter, castedOp0, (*castedOp0.getODSOperands(0).begin()).getType(), "operand 0 of op 'chlo.acosh' failed to satisfy constraint: 'Non-complex element type'"))) {
      return ::mlir::failure();
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    auto nativeVar_0 = chlo::getConstantLike(rewriter, odsLoc, -1, (*input.begin())); (void)nativeVar_0;
    auto nativeVar_1 = ::mlir::mhlo::ComparisonTypeAttr(); (void)nativeVar_1;
    ::mlir::mhlo::CompareOp tblgen_CompareOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = nativeVar_0;
      tblgen_CompareOp_2 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        ::mlir::mhlo::ComparisonDirectionAttr::get(rewriter.getContext(), ::mlir::mhlo::ComparisonDirection::LT),
        /*compare_type=*/nativeVar_1
      );
    }
    auto nativeVar_3 = chlo::getConstantLike(rewriter, odsLoc, NAN, (*input.begin())); (void)nativeVar_3;
    auto nativeVar_4 = chlo::getConstantLikeMaxFiniteValue(rewriter, odsLoc, (*input.begin())); (void)nativeVar_4;
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_5;
    {
      ::mlir::Value tblgen_value_0 = nativeVar_4;
      tblgen_SqrtOp_5 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    auto nativeVar_6 = ::mlir::mhlo::ComparisonTypeAttr(); (void)nativeVar_6;
    ::mlir::mhlo::CompareOp tblgen_CompareOp_7;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SqrtOp_5.getODSResults(0).begin());
      tblgen_CompareOp_7 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        ::mlir::mhlo::ComparisonDirectionAttr::get(rewriter.getContext(), ::mlir::mhlo::ComparisonDirection::GE),
        /*compare_type=*/nativeVar_6
      );
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_8;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_LogOp_8 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    auto nativeVar_9 = chlo::getConstantLike(rewriter, odsLoc, 2, (*input.begin())); (void)nativeVar_9;
    ::mlir::mhlo::LogOp tblgen_LogOp_10;
    {
      ::mlir::Value tblgen_value_0 = nativeVar_9;
      tblgen_LogOp_10 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_11;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_LogOp_8.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_LogOp_10.getODSResults(0).begin());
      tblgen_AddOp_11 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    auto nativeVar_12 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_12;
    ::mlir::mhlo::AddOp tblgen_AddOp_13;
    {
      ::mlir::Value tblgen_value_0 = nativeVar_12;
      ::mlir::Value tblgen_value_1 = (*input.begin());
      tblgen_AddOp_13 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    auto nativeVar_14 = chlo::getConstantLike(rewriter, odsLoc, -1, (*input.begin())); (void)nativeVar_14;
    ::mlir::mhlo::AddOp tblgen_AddOp_15;
    {
      ::mlir::Value tblgen_value_0 = nativeVar_14;
      ::mlir::Value tblgen_value_1 = (*input.begin());
      tblgen_AddOp_15 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_16;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AddOp_13.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddOp_15.getODSResults(0).begin());
      tblgen_MulOp_16 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_17;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_16.getODSResults(0).begin());
      tblgen_SqrtOp_17 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_18;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SqrtOp_17.getODSResults(0).begin());
      tblgen_AddOp_18 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_19;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AddOp_18.getODSResults(0).begin());
      tblgen_LogOp_19 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_20;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_CompareOp_7.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddOp_11.getODSResults(0).begin());
      ::mlir::Value tblgen_value_2 = (*tblgen_LogOp_19.getODSResults(0).begin());
      tblgen_SelectOp_20 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc,
        /*pred=*/tblgen_value_0,
        /*on_true=*/tblgen_value_1,
        /*on_false=*/tblgen_value_2
      );
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_21;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_CompareOp_2.getODSResults(0).begin()));
      tblgen_values.push_back(nativeVar_3);
      tblgen_values.push_back((*tblgen_SelectOp_20.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectOp_21 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectOp_21.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:126
*/
struct GeneratedConvert2 : public ::mlir::RewritePattern {
  GeneratedConvert2(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.acosh", 1, context, {"mhlo.add", "mhlo.log", "mhlo.multiply", "mhlo.sqrt", "mhlo.subtract"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::AcoshOp>(op0); (void)castedOp0;
    if(::mlir::failed(__mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns1(rewriter, castedOp0, (*castedOp0.getODSOperands(0).begin()).getType(), "operand 0 of op 'chlo.acosh' failed to satisfy constraint: 'Complex element type'"))) {
      return ::mlir::failure();
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    auto nativeVar_0 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_0;
    ::mlir::mhlo::AddOp tblgen_AddOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = nativeVar_0;
      tblgen_AddOp_1 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    auto nativeVar_2 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_2;
    ::mlir::mhlo::SubtractOp tblgen_SubtractOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = nativeVar_2;
      tblgen_SubtractOp_3 = rewriter.create<::mlir::mhlo::SubtractOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_4;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AddOp_1.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SubtractOp_3.getODSResults(0).begin());
      tblgen_MulOp_4 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_5;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_4.getODSResults(0).begin());
      tblgen_SqrtOp_5 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_6;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SqrtOp_5.getODSResults(0).begin());
      tblgen_AddOp_6 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_7;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AddOp_6.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_LogOp_7 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_LogOp_7.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:148
*/
struct GeneratedConvert3 : public ::mlir::RewritePattern {
  GeneratedConvert3(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.asin", 1, context, {"mhlo.add", "mhlo.atan2", "mhlo.multiply", "mhlo.sqrt", "mhlo.subtract"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::AsinOp>(op0); (void)castedOp0;
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    auto nativeVar_0 = chlo::getConstantLike(rewriter, odsLoc, 2, (*input.begin())); (void)nativeVar_0;
    auto nativeVar_1 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_1;
    auto nativeVar_2 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_2;
    ::mlir::mhlo::MulOp tblgen_MulOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = (*input.begin());
      tblgen_MulOp_3 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SubtractOp tblgen_SubtractOp_4;
    {
      ::mlir::Value tblgen_value_0 = nativeVar_2;
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_3.getODSResults(0).begin());
      tblgen_SubtractOp_4 = rewriter.create<::mlir::mhlo::SubtractOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_5;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SubtractOp_4.getODSResults(0).begin());
      tblgen_SqrtOp_5 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_6;
    {
      ::mlir::Value tblgen_value_0 = nativeVar_1;
      ::mlir::Value tblgen_value_1 = (*tblgen_SqrtOp_5.getODSResults(0).begin());
      tblgen_AddOp_6 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::Atan2Op tblgen_Atan2Op_7;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddOp_6.getODSResults(0).begin());
      tblgen_Atan2Op_7 = rewriter.create<::mlir::mhlo::Atan2Op>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_8;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back(nativeVar_0);
      tblgen_values.push_back((*tblgen_Atan2Op_7.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_MulOp_8 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MulOp_8.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:185
*/
struct GeneratedConvert4 : public ::mlir::RewritePattern {
  GeneratedConvert4(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.asinh", 1, context, {"mhlo.abs", "mhlo.add", "mhlo.compare", "mhlo.divide", "mhlo.log", "mhlo.log_plus_one", "mhlo.multiply", "mhlo.select", "mhlo.sign", "mhlo.sqrt"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::AsinhOp>(op0); (void)castedOp0;
    if(::mlir::failed(__mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns0(rewriter, castedOp0, (*castedOp0.getODSOperands(0).begin()).getType(), "operand 0 of op 'chlo.asinh' failed to satisfy constraint: 'Non-complex element type'"))) {
      return ::mlir::failure();
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::SignOp tblgen_SignOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_SignOp_0 = rewriter.create<::mlir::mhlo::SignOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_1 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    auto nativeVar_2 = chlo::getConstantLikeMaxFiniteValue(rewriter, odsLoc, (*input.begin())); (void)nativeVar_2;
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_3;
    {
      ::mlir::Value tblgen_value_0 = nativeVar_2;
      tblgen_SqrtOp_3 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    auto nativeVar_4 = ::mlir::mhlo::ComparisonTypeAttr(); (void)nativeVar_4;
    ::mlir::mhlo::CompareOp tblgen_CompareOp_5;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_1.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SqrtOp_3.getODSResults(0).begin());
      tblgen_CompareOp_5 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        ::mlir::mhlo::ComparisonDirectionAttr::get(rewriter.getContext(), ::mlir::mhlo::ComparisonDirection::GE),
        /*compare_type=*/nativeVar_4
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_6;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_6 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_7;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_6.getODSResults(0).begin());
      tblgen_LogOp_7 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    auto nativeVar_8 = chlo::getConstantLike(rewriter, odsLoc, 2, (*input.begin())); (void)nativeVar_8;
    ::mlir::mhlo::LogOp tblgen_LogOp_9;
    {
      ::mlir::Value tblgen_value_0 = nativeVar_8;
      tblgen_LogOp_9 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_10;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_LogOp_7.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_LogOp_9.getODSResults(0).begin());
      tblgen_AddOp_10 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_11;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_11 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    auto nativeVar_12 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_12;
    auto nativeVar_13 = ::mlir::mhlo::ComparisonTypeAttr(); (void)nativeVar_13;
    ::mlir::mhlo::CompareOp tblgen_CompareOp_14;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_11.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = nativeVar_12;
      tblgen_CompareOp_14 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        ::mlir::mhlo::ComparisonDirectionAttr::get(rewriter.getContext(), ::mlir::mhlo::ComparisonDirection::LE),
        /*compare_type=*/nativeVar_13
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_15;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_15 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_16;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_16 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_17;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_17 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    auto nativeVar_18 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_18;
    ::mlir::mhlo::AbsOp tblgen_AbsOp_19;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_19 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_20;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_20 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_21;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_19.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AbsOp_20.getODSResults(0).begin());
      tblgen_MulOp_21 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    auto nativeVar_22 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_22;
    ::mlir::mhlo::AddOp tblgen_AddOp_23;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_21.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = nativeVar_22;
      tblgen_AddOp_23 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_24;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AddOp_23.getODSResults(0).begin());
      tblgen_SqrtOp_24 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_25;
    {
      ::mlir::Value tblgen_value_0 = nativeVar_18;
      ::mlir::Value tblgen_value_1 = (*tblgen_SqrtOp_24.getODSResults(0).begin());
      tblgen_AddOp_25 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::DivOp tblgen_DivOp_26;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_17.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddOp_25.getODSResults(0).begin());
      tblgen_DivOp_26 = rewriter.create<::mlir::mhlo::DivOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_27;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_16.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_DivOp_26.getODSResults(0).begin());
      tblgen_MulOp_27 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_28;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_15.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_MulOp_27.getODSResults(0).begin());
      tblgen_AddOp_28 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::Log1pOp tblgen_Log1pOp_29;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AddOp_28.getODSResults(0).begin());
      tblgen_Log1pOp_29 = rewriter.create<::mlir::mhlo::Log1pOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_30;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_30 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_31;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_31 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AbsOp tblgen_AbsOp_32;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_32 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_33;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_31.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AbsOp_32.getODSResults(0).begin());
      tblgen_MulOp_33 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    auto nativeVar_34 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_34;
    ::mlir::mhlo::AddOp tblgen_AddOp_35;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_33.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = nativeVar_34;
      tblgen_AddOp_35 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_36;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AddOp_35.getODSResults(0).begin());
      tblgen_SqrtOp_36 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_37;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_30.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SqrtOp_36.getODSResults(0).begin());
      tblgen_AddOp_37 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_38;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AddOp_37.getODSResults(0).begin());
      tblgen_LogOp_38 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_39;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_CompareOp_14.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_Log1pOp_29.getODSResults(0).begin());
      ::mlir::Value tblgen_value_2 = (*tblgen_LogOp_38.getODSResults(0).begin());
      tblgen_SelectOp_39 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc,
        /*pred=*/tblgen_value_0,
        /*on_true=*/tblgen_value_1,
        /*on_false=*/tblgen_value_2
      );
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_40;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_CompareOp_5.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_AddOp_10.getODSResults(0).begin());
      ::mlir::Value tblgen_value_2 = (*tblgen_SelectOp_39.getODSResults(0).begin());
      tblgen_SelectOp_40 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc,
        /*pred=*/tblgen_value_0,
        /*on_true=*/tblgen_value_1,
        /*on_false=*/tblgen_value_2
      );
    }
    ::mlir::mhlo::MulOp tblgen_MulOp_41;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SignOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_SelectOp_40.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_MulOp_41 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MulOp_41.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:260
*/
struct GeneratedConvert5 : public ::mlir::RewritePattern {
  GeneratedConvert5(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.asinh", 1, context, {"mhlo.add", "mhlo.log", "mhlo.multiply", "mhlo.sqrt"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::AsinhOp>(op0); (void)castedOp0;
    if(::mlir::failed(__mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns1(rewriter, castedOp0, (*castedOp0.getODSOperands(0).begin()).getType(), "operand 0 of op 'chlo.asinh' failed to satisfy constraint: 'Complex element type'"))) {
      return ::mlir::failure();
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::MulOp tblgen_MulOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = (*input.begin());
      tblgen_MulOp_0 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    auto nativeVar_1 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_1;
    ::mlir::mhlo::AddOp tblgen_AddOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_MulOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = nativeVar_1;
      tblgen_AddOp_2 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SqrtOp tblgen_SqrtOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AddOp_2.getODSResults(0).begin());
      tblgen_SqrtOp_3 = rewriter.create<::mlir::mhlo::SqrtOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_4;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_SqrtOp_3.getODSResults(0).begin());
      tblgen_AddOp_4 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::LogOp tblgen_LogOp_5;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AddOp_4.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_LogOp_5 = rewriter.create<::mlir::mhlo::LogOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_LogOp_5.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:275
*/
struct GeneratedConvert6 : public ::mlir::RewritePattern {
  GeneratedConvert6(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.atan", 1, context, {"mhlo.atan2"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::AtanOp>(op0); (void)castedOp0;
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    auto nativeVar_0 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_0;
    ::mlir::mhlo::Atan2Op tblgen_Atan2Op_1;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back(nativeVar_0);
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_Atan2Op_1 = rewriter.create<::mlir::mhlo::Atan2Op>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_Atan2Op_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:284
*/
struct GeneratedConvert7 : public ::mlir::RewritePattern {
  GeneratedConvert7(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.atanh", 1, context, {"mhlo.abs", "mhlo.compare", "mhlo.log_plus_one", "mhlo.multiply", "mhlo.negate", "mhlo.select", "mhlo.subtract"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::AtanhOp>(op0); (void)castedOp0;
    if(::mlir::failed(__mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns0(rewriter, castedOp0, (*castedOp0.getODSOperands(0).begin()).getType(), "operand 0 of op 'chlo.atanh' failed to satisfy constraint: 'Non-complex element type'"))) {
      return ::mlir::failure();
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::AbsOp tblgen_AbsOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_0 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    auto nativeVar_1 = chlo::getConstantLike(rewriter, odsLoc, 1, (*input.begin())); (void)nativeVar_1;
    auto nativeVar_2 = ::mlir::mhlo::ComparisonTypeAttr(); (void)nativeVar_2;
    ::mlir::mhlo::CompareOp tblgen_CompareOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_AbsOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = nativeVar_1;
      tblgen_CompareOp_3 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1,
        ::mlir::mhlo::ComparisonDirectionAttr::get(rewriter.getContext(), ::mlir::mhlo::ComparisonDirection::GT),
        /*compare_type=*/nativeVar_2
      );
    }
    auto nativeVar_4 = chlo::getConstantLike(rewriter, odsLoc, NAN, (*input.begin())); (void)nativeVar_4;
    ::mlir::mhlo::Log1pOp tblgen_Log1pOp_5;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_Log1pOp_5 = rewriter.create<::mlir::mhlo::Log1pOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::NegOp tblgen_NegOp_6;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_NegOp_6 = rewriter.create<::mlir::mhlo::NegOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::Log1pOp tblgen_Log1pOp_7;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_NegOp_6.getODSResults(0).begin());
      tblgen_Log1pOp_7 = rewriter.create<::mlir::mhlo::Log1pOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::SubtractOp tblgen_SubtractOp_8;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_Log1pOp_5.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_Log1pOp_7.getODSResults(0).begin());
      tblgen_SubtractOp_8 = rewriter.create<::mlir::mhlo::SubtractOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    auto nativeVar_9 = chlo::getConstantLike(rewriter, odsLoc, 0.5, (*input.begin())); (void)nativeVar_9;
    ::mlir::mhlo::MulOp tblgen_MulOp_10;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_SubtractOp_8.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = nativeVar_9;
      tblgen_MulOp_10 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SelectOp tblgen_SelectOp_11;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_CompareOp_3.getODSResults(0).begin()));
      tblgen_values.push_back(nativeVar_4);
      tblgen_values.push_back((*tblgen_MulOp_10.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SelectOp_11 = rewriter.create<::mlir::mhlo::SelectOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SelectOp_11.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:310
*/
struct GeneratedConvert8 : public ::mlir::RewritePattern {
  GeneratedConvert8(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.atanh", 1, context, {"mhlo.log_plus_one", "mhlo.multiply", "mhlo.negate", "mhlo.subtract"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::AtanhOp>(op0); (void)castedOp0;
    if(::mlir::failed(__mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns1(rewriter, castedOp0, (*castedOp0.getODSOperands(0).begin()).getType(), "operand 0 of op 'chlo.atanh' failed to satisfy constraint: 'Complex element type'"))) {
      return ::mlir::failure();
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::Log1pOp tblgen_Log1pOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_Log1pOp_0 = rewriter.create<::mlir::mhlo::Log1pOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::NegOp tblgen_NegOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_NegOp_1 = rewriter.create<::mlir::mhlo::NegOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::Log1pOp tblgen_Log1pOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_NegOp_1.getODSResults(0).begin());
      tblgen_Log1pOp_2 = rewriter.create<::mlir::mhlo::Log1pOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::SubtractOp tblgen_SubtractOp_3;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_Log1pOp_0.getODSResults(0).begin());
      ::mlir::Value tblgen_value_1 = (*tblgen_Log1pOp_2.getODSResults(0).begin());
      tblgen_SubtractOp_3 = rewriter.create<::mlir::mhlo::SubtractOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    auto nativeVar_4 = chlo::getConstantLike(rewriter, odsLoc, 0.5, (*input.begin())); (void)nativeVar_4;
    ::mlir::mhlo::MulOp tblgen_MulOp_5;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_SubtractOp_3.getODSResults(0).begin()));
      tblgen_values.push_back(nativeVar_4);
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_MulOp_5 = rewriter.create<::mlir::mhlo::MulOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_MulOp_5.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:323
*/
struct GeneratedConvert9 : public ::mlir::RewritePattern {
  GeneratedConvert9(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.conj", 1, context, {"mhlo.complex", "mhlo.imag", "mhlo.negate", "mhlo.real"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range v(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::ConjOp>(op0); (void)castedOp0;
    v = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::RealOp tblgen_RealOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*v.begin());
      tblgen_RealOp_0 = rewriter.create<::mlir::mhlo::RealOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::ImagOp tblgen_ImagOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*v.begin());
      tblgen_ImagOp_1 = rewriter.create<::mlir::mhlo::ImagOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::NegOp tblgen_NegOp_2;
    {
      ::mlir::Value tblgen_value_0 = (*tblgen_ImagOp_1.getODSResults(0).begin());
      tblgen_NegOp_2 = rewriter.create<::mlir::mhlo::NegOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::mhlo::ComplexOp tblgen_ComplexOp_3;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_RealOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_NegOp_2.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ComplexOp_3 = rewriter.create<::mlir::mhlo::ComplexOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ComplexOp_3.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:328
*/
struct GeneratedConvert10 : public ::mlir::RewritePattern {
  GeneratedConvert10(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.is_inf", 1, context, {"chlo.is_pos_inf", "mhlo.abs"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::IsInfOp>(op0); (void)castedOp0;
    if(::mlir::failed(__mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns0(rewriter, castedOp0, (*castedOp0.getODSOperands(0).begin()).getType(), "operand 0 of op 'chlo.is_inf' failed to satisfy constraint: 'Non-complex element type'"))) {
      return ::mlir::failure();
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::AbsOp tblgen_AbsOp_0;
    {
      ::mlir::Value tblgen_value_0 = (*input.begin());
      tblgen_AbsOp_0 = rewriter.create<::mlir::mhlo::AbsOp>(odsLoc,
        /*operand=*/tblgen_value_0
      );
    }
    ::mlir::chlo::IsPosInfOp tblgen_IsPosInfOp_1;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_AbsOp_0.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_IsPosInfOp_1 = rewriter.create<::mlir::chlo::IsPosInfOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_IsPosInfOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:335
*/
struct GeneratedConvert11 : public ::mlir::RewritePattern {
  GeneratedConvert11(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.is_pos_inf", 1, context, {"mhlo.compare"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::IsPosInfOp>(op0); (void)castedOp0;
    if(::mlir::failed(__mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns0(rewriter, castedOp0, (*castedOp0.getODSOperands(0).begin()).getType(), "operand 0 of op 'chlo.is_pos_inf' failed to satisfy constraint: 'Non-complex element type'"))) {
      return ::mlir::failure();
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    auto nativeVar_0 = chlo::getConstantLikeInfValue(rewriter, odsLoc, (*input.begin()), /*negative=*/false); (void)nativeVar_0;
    auto nativeVar_1 = ::mlir::mhlo::ComparisonTypeAttr(); (void)nativeVar_1;
    ::mlir::mhlo::CompareOp tblgen_CompareOp_2;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back(nativeVar_0);
      if (auto tmpAttr = ::mlir::mhlo::ComparisonDirectionAttr::get(rewriter.getContext(), ::mlir::mhlo::ComparisonDirection::EQ)) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("comparison_direction"), tmpAttr);
      }
      if (auto tmpAttr = nativeVar_1) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("compare_type"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_CompareOp_2 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CompareOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:345
*/
struct GeneratedConvert12 : public ::mlir::RewritePattern {
  GeneratedConvert12(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.is_neg_inf", 1, context, {"mhlo.compare"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range input(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::IsNegInfOp>(op0); (void)castedOp0;
    if(::mlir::failed(__mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns0(rewriter, castedOp0, (*castedOp0.getODSOperands(0).begin()).getType(), "operand 0 of op 'chlo.is_neg_inf' failed to satisfy constraint: 'Non-complex element type'"))) {
      return ::mlir::failure();
    }
    input = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    auto nativeVar_0 = chlo::getConstantLikeInfValue(rewriter, odsLoc, (*input.begin()), /*negative=*/true); (void)nativeVar_0;
    auto nativeVar_1 = ::mlir::mhlo::ComparisonTypeAttr(); (void)nativeVar_1;
    ::mlir::mhlo::CompareOp tblgen_CompareOp_2;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*input.begin()));
      tblgen_values.push_back(nativeVar_0);
      if (auto tmpAttr = ::mlir::mhlo::ComparisonDirectionAttr::get(rewriter.getContext(), ::mlir::mhlo::ComparisonDirection::EQ)) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("comparison_direction"), tmpAttr);
      }
      if (auto tmpAttr = nativeVar_1) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("compare_type"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_CompareOp_2 = rewriter.create<::mlir::mhlo::CompareOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_CompareOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:353
*/
struct GeneratedConvert13 : public ::mlir::RewritePattern {
  GeneratedConvert13(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.constant", 1, context, {"mhlo.constant"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::ElementsAttr v;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::ConstantOp>(op0); (void)castedOp0;
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::ElementsAttr>("value");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'chlo.constant' to have attribute 'value' of type '::mlir::ElementsAttr'";
        });
      }
      v = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConstantOp tblgen_ConstantOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      if (auto tmpAttr = v) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("value"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ConstantOp_0 = rewriter.create<::mlir::mhlo::ConstantOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ConstantOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:356
*/
struct GeneratedConvert14 : public ::mlir::RewritePattern {
  GeneratedConvert14(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.tan", 1, context, {"mhlo.tan"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range v(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::TanOp>(op0); (void)castedOp0;
    v = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::TanOp tblgen_TanOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*v.begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_TanOp_0 = rewriter.create<::mlir::mhlo::TanOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_TanOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:359
*/
struct GeneratedConvert15 : public ::mlir::RewritePattern {
  GeneratedConvert15(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.erf", 1, context, {"mhlo.erf"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range v(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::ErfOp>(op0); (void)castedOp0;
    v = castedOp0.getODSOperands(0);

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ErfOp tblgen_ErfOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*v.begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ErfOp_0 = rewriter.create<::mlir::mhlo::ErfOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ErfOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/local_xla/xla/mlir_hlo/mhlo/transforms/chlo_legalize_to_hlo/chlo_legalize_to_hlo_patterns.td:362
*/
struct GeneratedConvert16 : public ::mlir::RewritePattern {
  GeneratedConvert16(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("chlo.top_k", 1, context, {"mhlo.topk"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::IntegerAttr k;
    ::mlir::Operation::operand_range v(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::chlo::TopKOp>(op0); (void)castedOp0;
    if(::mlir::failed(__mlir_ods_local_type_constraint_chlo_legalize_to_hlo_patterns2(rewriter, castedOp0, (*castedOp0.getODSOperands(0).begin()).getType(), "operand 0 of op 'chlo.top_k' failed to satisfy constraint: 'ranked tensor of any type values'"))) {
      return ::mlir::failure();
    }
    v = castedOp0.getODSOperands(0);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("k");(void)tblgen_attr;
      if (!(tblgen_attr)){
        return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
          diag << "expected op 'chlo.top_k' to have attribute 'k' of type '::mlir::IntegerAttr'";
        });
      }
      k = tblgen_attr;
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::TopKOp tblgen_TopKOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*v.begin()));
      if (auto tmpAttr = k) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("k"), tmpAttr);
      }
      if (auto tmpAttr = rewriter.getBoolAttr(true)) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("largest"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      for (auto v: castedOp0.getODSResults(1)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_TopKOp_0 = rewriter.create<::mlir::mhlo::TopKOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_TopKOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_TopKOp_0.getODSResults(1) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(::mlir::RewritePatternSet &patterns) {
  patterns.add<GeneratedConvert0>(patterns.getContext());
  patterns.add<GeneratedConvert1>(patterns.getContext());
  patterns.add<GeneratedConvert2>(patterns.getContext());
  patterns.add<GeneratedConvert3>(patterns.getContext());
  patterns.add<GeneratedConvert4>(patterns.getContext());
  patterns.add<GeneratedConvert5>(patterns.getContext());
  patterns.add<GeneratedConvert6>(patterns.getContext());
  patterns.add<GeneratedConvert7>(patterns.getContext());
  patterns.add<GeneratedConvert8>(patterns.getContext());
  patterns.add<GeneratedConvert9>(patterns.getContext());
  patterns.add<GeneratedConvert10>(patterns.getContext());
  patterns.add<GeneratedConvert11>(patterns.getContext());
  patterns.add<GeneratedConvert12>(patterns.getContext());
  patterns.add<GeneratedConvert13>(patterns.getContext());
  patterns.add<GeneratedConvert14>(patterns.getContext());
  patterns.add<GeneratedConvert15>(patterns.getContext());
  patterns.add<GeneratedConvert16>(patterns.getContext());
}
