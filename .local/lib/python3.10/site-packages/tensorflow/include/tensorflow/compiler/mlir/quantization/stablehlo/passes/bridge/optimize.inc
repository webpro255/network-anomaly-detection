/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: optimize.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

static ::mlir::LogicalResult static_dag_matcher_0(::mlir::PatternRewriter &rewriter, ::mlir::Operation *op0, ::llvm::SmallVector<::mlir::Operation *, 4> &tblgen_ops, ::mlir::ArrayAttr &precision_config, ::mlir::IntegerAttr &batch_group_count, ::mlir::mhlo::ConvDimensionNumbersAttr &dimension_numbers, ::mlir::DenseIntElementsAttr &rhs_dilation, ::mlir::DenseIntElementsAttr &padding, ::mlir::DenseIntElementsAttr &window_strides, ::mlir::DenseElementsAttr &window_reversal, ::mlir::DenseIntElementsAttr &lhs_dilation, ::mlir::Operation::operand_range &rhs, ::mlir::IntegerAttr &feature_group_count, ::mlir::Operation::operand_range &lhs, ::mlir::mhlo::ConvolutionOp &conv) {
  (void)tblgen_ops;
  auto castedOp1 = ::llvm::dyn_cast<::mlir::mhlo::ConvolutionOp>(op0); (void)castedOp1;
  if (!(castedOp1)){
    return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
      diag << "castedOp1 is not ::mlir::mhlo::ConvolutionOp type";
    });
  }
  conv = castedOp1;
  lhs = castedOp1.getODSOperands(0);
  rhs = castedOp1.getODSOperands(1);
  {
    auto tblgen_attr = op0->getAttrOfType<::mlir::DenseIntElementsAttr>("window_strides");(void)tblgen_attr;
    window_strides = tblgen_attr;
  }
  {
    auto tblgen_attr = op0->getAttrOfType<::mlir::DenseIntElementsAttr>("padding");(void)tblgen_attr;
    padding = tblgen_attr;
  }
  {
    auto tblgen_attr = op0->getAttrOfType<::mlir::DenseIntElementsAttr>("lhs_dilation");(void)tblgen_attr;
    lhs_dilation = tblgen_attr;
  }
  {
    auto tblgen_attr = op0->getAttrOfType<::mlir::DenseIntElementsAttr>("rhs_dilation");(void)tblgen_attr;
    rhs_dilation = tblgen_attr;
  }
  {
    auto tblgen_attr = op0->getAttrOfType<::mlir::DenseElementsAttr>("window_reversal");(void)tblgen_attr;
    window_reversal = tblgen_attr;
  }
  {
    auto tblgen_attr = op0->getAttrOfType<::mlir::mhlo::ConvDimensionNumbersAttr>("dimension_numbers");(void)tblgen_attr;
    if (!(tblgen_attr)){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "expected op 'mhlo.convolution' to have attribute 'dimension_numbers' of type '::mlir::mhlo::ConvDimensionNumbersAttr'";
      });
    }
    dimension_numbers = tblgen_attr;
  }
  {
    auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("feature_group_count");(void)tblgen_attr;
    if (!(tblgen_attr)){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "expected op 'mhlo.convolution' to have attribute 'feature_group_count' of type '::mlir::IntegerAttr'";
      });
    }
    feature_group_count = tblgen_attr;
  }
  {
    auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("batch_group_count");(void)tblgen_attr;
    if (!(tblgen_attr)){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "expected op 'mhlo.convolution' to have attribute 'batch_group_count' of type '::mlir::IntegerAttr'";
      });
    }
    batch_group_count = tblgen_attr;
  }
  {
    auto tblgen_attr = op0->getAttrOfType<::mlir::ArrayAttr>("precision_config");(void)tblgen_attr;
    precision_config = tblgen_attr;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult static_dag_matcher_1(::mlir::PatternRewriter &rewriter, ::mlir::Operation *op0, ::llvm::SmallVector<::mlir::Operation *, 4> &tblgen_ops, ::mlir::Operation::operand_range &zp_offset, ::mlir::ArrayAttr &precision_config, ::mlir::IntegerAttr &batch_group_count, ::mlir::mhlo::ConvDimensionNumbersAttr &dimension_numbers, ::mlir::DenseIntElementsAttr &rhs_dilation, ::mlir::DenseIntElementsAttr &padding, ::mlir::DenseIntElementsAttr &window_strides, ::mlir::DenseElementsAttr &window_reversal, ::mlir::DenseIntElementsAttr &lhs_dilation, ::mlir::Operation::operand_range &rhs, ::mlir::IntegerAttr &feature_group_count, ::mlir::Operation::operand_range &lhs, ::mlir::mhlo::ConvolutionOp &conv) {
  (void)tblgen_ops;
  auto castedOp1 = ::llvm::dyn_cast<::mlir::mhlo::AddOp>(op0); (void)castedOp1;
  if (!(castedOp1)){
    return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
      diag << "castedOp1 is not ::mlir::mhlo::AddOp type";
    });
  }
  {
    auto *op2 = (*castedOp1.getODSOperands(0).begin()).getDefiningOp();
    if (!(op2)){
      return rewriter.notifyMatchFailure(castedOp1, [&](::mlir::Diagnostic &diag) {
        diag << "There's no operation that defines operand 0 of castedOp1";
      });
    }
    if(::mlir::failed(static_dag_matcher_0(rewriter, op2, tblgen_ops, precision_config, batch_group_count, dimension_numbers, rhs_dilation, padding, window_strides, window_reversal, lhs_dilation, rhs, feature_group_count, lhs, conv))) {
      return ::mlir::failure();
    }
    tblgen_ops.push_back(op2);
  }
  zp_offset = castedOp1.getODSOperands(1);
  return ::mlir::success();
}

static ::mlir::LogicalResult static_dag_matcher_2(::mlir::PatternRewriter &rewriter, ::mlir::Operation *op0, ::llvm::SmallVector<::mlir::Operation *, 4> &tblgen_ops, ::mlir::Operation::operand_range &zp_offset, ::mlir::ArrayAttr &precision_config, ::mlir::IntegerAttr &batch_group_count, ::mlir::mhlo::ConvDimensionNumbersAttr &dimension_numbers, ::mlir::DenseIntElementsAttr &rhs_dilation, ::mlir::DenseIntElementsAttr &padding, ::mlir::DenseIntElementsAttr &window_strides, ::mlir::DenseElementsAttr &window_reversal, ::mlir::DenseIntElementsAttr &lhs_dilation, ::mlir::Operation::operand_range &rhs, ::mlir::IntegerAttr &feature_group_count, ::mlir::Operation::operand_range &lhs, ::mlir::mhlo::ConvolutionOp &conv) {
  (void)tblgen_ops;
  auto castedOp1 = ::llvm::dyn_cast<::mlir::mhlo::SubtractOp>(op0); (void)castedOp1;
  if (!(castedOp1)){
    return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
      diag << "castedOp1 is not ::mlir::mhlo::SubtractOp type";
    });
  }
  {
    auto *op2 = (*castedOp1.getODSOperands(0).begin()).getDefiningOp();
    if (!(op2)){
      return rewriter.notifyMatchFailure(castedOp1, [&](::mlir::Diagnostic &diag) {
        diag << "There's no operation that defines operand 0 of castedOp1";
      });
    }
    if(::mlir::failed(static_dag_matcher_0(rewriter, op2, tblgen_ops, precision_config, batch_group_count, dimension_numbers, rhs_dilation, padding, window_strides, window_reversal, lhs_dilation, rhs, feature_group_count, lhs, conv))) {
      return ::mlir::failure();
    }
    tblgen_ops.push_back(op2);
  }
  zp_offset = castedOp1.getODSOperands(1);
  return ::mlir::success();
}

static ::mlir::LogicalResult static_dag_matcher_3(::mlir::PatternRewriter &rewriter, ::mlir::Operation *op0, ::llvm::SmallVector<::mlir::Operation *, 4> &tblgen_ops, ::mlir::ArrayAttr &precision_config, ::mlir::mhlo::DotDimensionNumbersAttr &dimension_numbers, ::mlir::Operation::operand_range &rhs, ::mlir::Operation::operand_range &lhs, ::mlir::mhlo::DotGeneralOp &dot) {
  (void)tblgen_ops;
  auto castedOp1 = ::llvm::dyn_cast<::mlir::mhlo::DotGeneralOp>(op0); (void)castedOp1;
  if (!(castedOp1)){
    return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
      diag << "castedOp1 is not ::mlir::mhlo::DotGeneralOp type";
    });
  }
  dot = castedOp1;
  lhs = castedOp1.getODSOperands(0);
  rhs = castedOp1.getODSOperands(1);
  {
    auto tblgen_attr = op0->getAttrOfType<::mlir::mhlo::DotDimensionNumbersAttr>("dot_dimension_numbers");(void)tblgen_attr;
    if (!(tblgen_attr)){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "expected op 'mhlo.dot_general' to have attribute 'dot_dimension_numbers' of type '::mlir::mhlo::DotDimensionNumbersAttr'";
      });
    }
    dimension_numbers = tblgen_attr;
  }
  {
    auto tblgen_attr = op0->getAttrOfType<::mlir::ArrayAttr>("precision_config");(void)tblgen_attr;
    precision_config = tblgen_attr;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult static_dag_matcher_4(::mlir::PatternRewriter &rewriter, ::mlir::Operation *op0, ::llvm::SmallVector<::mlir::Operation *, 4> &tblgen_ops, ::mlir::Operation::operand_range &zp_offset, ::mlir::ArrayAttr &precision_config, ::mlir::mhlo::DotDimensionNumbersAttr &dimension_numbers, ::mlir::Operation::operand_range &rhs, ::mlir::Operation::operand_range &lhs, ::mlir::mhlo::DotGeneralOp &dot) {
  (void)tblgen_ops;
  auto castedOp1 = ::llvm::dyn_cast<::mlir::mhlo::AddOp>(op0); (void)castedOp1;
  if (!(castedOp1)){
    return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
      diag << "castedOp1 is not ::mlir::mhlo::AddOp type";
    });
  }
  {
    auto *op2 = (*castedOp1.getODSOperands(0).begin()).getDefiningOp();
    if (!(op2)){
      return rewriter.notifyMatchFailure(castedOp1, [&](::mlir::Diagnostic &diag) {
        diag << "There's no operation that defines operand 0 of castedOp1";
      });
    }
    if(::mlir::failed(static_dag_matcher_3(rewriter, op2, tblgen_ops, precision_config, dimension_numbers, rhs, lhs, dot))) {
      return ::mlir::failure();
    }
    tblgen_ops.push_back(op2);
  }
  zp_offset = castedOp1.getODSOperands(1);
  return ::mlir::success();
}

static ::mlir::LogicalResult static_dag_matcher_5(::mlir::PatternRewriter &rewriter, ::mlir::Operation *op0, ::llvm::SmallVector<::mlir::Operation *, 4> &tblgen_ops, ::mlir::Operation::operand_range &zp_offset, ::mlir::ArrayAttr &precision_config, ::mlir::mhlo::DotDimensionNumbersAttr &dimension_numbers, ::mlir::Operation::operand_range &rhs, ::mlir::Operation::operand_range &lhs, ::mlir::mhlo::DotGeneralOp &dot) {
  (void)tblgen_ops;
  auto castedOp1 = ::llvm::dyn_cast<::mlir::mhlo::SubtractOp>(op0); (void)castedOp1;
  if (!(castedOp1)){
    return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
      diag << "castedOp1 is not ::mlir::mhlo::SubtractOp type";
    });
  }
  {
    auto *op2 = (*castedOp1.getODSOperands(0).begin()).getDefiningOp();
    if (!(op2)){
      return rewriter.notifyMatchFailure(castedOp1, [&](::mlir::Diagnostic &diag) {
        diag << "There's no operation that defines operand 0 of castedOp1";
      });
    }
    if(::mlir::failed(static_dag_matcher_3(rewriter, op2, tblgen_ops, precision_config, dimension_numbers, rhs, lhs, dot))) {
      return ::mlir::failure();
    }
    tblgen_ops.push_back(op2);
  }
  zp_offset = castedOp1.getODSOperands(1);
  return ::mlir::success();
}

/* Generated from:
    tensorflow/compiler/mlir/quantization/stablehlo/passes/bridge/optimize.td:30
*/
struct optimizeConsecutiveConvMHLO_AddOpMHLO_AddOp : public ::mlir::RewritePattern {
  optimizeConsecutiveConvMHLO_AddOpMHLO_AddOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.add", 3, context, {"mhlo.add", "mhlo.convolution"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range bias(op0->getOperands());
    ::mlir::mhlo::ConvolutionOp conv;
    ::mlir::Operation::operand_range lhs(op0->getOperands());
    ::mlir::IntegerAttr feature_group_count;
    ::mlir::Operation::operand_range rhs(op0->getOperands());
    ::mlir::DenseElementsAttr window_reversal;
    ::mlir::DenseIntElementsAttr window_strides;
    ::mlir::DenseIntElementsAttr padding;
    ::mlir::DenseIntElementsAttr rhs_dilation;
    ::mlir::DenseIntElementsAttr lhs_dilation;
    ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers;
    ::mlir::Operation::operand_range zp_offset(op0->getOperands());
    ::mlir::ArrayAttr precision_config;
    ::mlir::IntegerAttr batch_group_count;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::mhlo::AddOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 0 of castedOp0";
        });
      }
      if(::mlir::failed(static_dag_matcher_1(rewriter, op1, tblgen_ops, zp_offset, precision_config, batch_group_count, dimension_numbers, rhs_dilation, padding, window_strides, window_reversal, lhs_dilation, rhs, feature_group_count, lhs, conv))) {
        return ::mlir::failure();
      }
      tblgen_ops.push_back(op1);
    }
    bias = castedOp0.getODSOperands(1);
    if (!(((::llvm::isa<::mlir::TensorType>(((*conv.getODSResults(0).begin()).getType())))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::IntegerType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(((*conv.getODSResults(0).begin()).getType())).getElementType())))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'conv' failed to satisfy constraint: 'tensor of integer values'";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc(), tblgen_ops[2]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConvolutionOp tblgen_ConvolutionOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*lhs.begin()));
      tblgen_values.push_back((*rhs.begin()));
      if (auto tmpAttr = window_strides) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("window_strides"), tmpAttr);
      }
      if (auto tmpAttr = padding) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("padding"), tmpAttr);
      }
      if (auto tmpAttr = lhs_dilation) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("lhs_dilation"), tmpAttr);
      }
      if (auto tmpAttr = rhs_dilation) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("rhs_dilation"), tmpAttr);
      }
      if (auto tmpAttr = window_reversal) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("window_reversal"), tmpAttr);
      }
      if (auto tmpAttr = dimension_numbers) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("dimension_numbers"), tmpAttr);
      }
      if (auto tmpAttr = feature_group_count) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("feature_group_count"), tmpAttr);
      }
      if (auto tmpAttr = batch_group_count) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("batch_group_count"), tmpAttr);
      }
      if (auto tmpAttr = precision_config) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("precision_config"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_types.push_back((*conv.getODSResults(0).begin()).getType());
      tblgen_ConvolutionOp_0 = rewriter.create<::mlir::mhlo::ConvolutionOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*zp_offset.begin());
      ::mlir::Value tblgen_value_1 = (*bias.begin());
      tblgen_AddOp_1 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_2;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConvolutionOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_AddOp_1.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_AddOp_2 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AddOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/quantization/stablehlo/passes/bridge/optimize.td:30
*/
struct optimizeConsecutiveConvMHLO_AddOpMHLO_SubtractOp : public ::mlir::RewritePattern {
  optimizeConsecutiveConvMHLO_AddOpMHLO_SubtractOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.subtract", 3, context, {"mhlo.add", "mhlo.convolution", "mhlo.subtract"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range bias(op0->getOperands());
    ::mlir::mhlo::ConvolutionOp conv;
    ::mlir::Operation::operand_range lhs(op0->getOperands());
    ::mlir::IntegerAttr feature_group_count;
    ::mlir::Operation::operand_range rhs(op0->getOperands());
    ::mlir::DenseElementsAttr window_reversal;
    ::mlir::DenseIntElementsAttr window_strides;
    ::mlir::DenseIntElementsAttr padding;
    ::mlir::DenseIntElementsAttr rhs_dilation;
    ::mlir::DenseIntElementsAttr lhs_dilation;
    ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers;
    ::mlir::Operation::operand_range zp_offset(op0->getOperands());
    ::mlir::ArrayAttr precision_config;
    ::mlir::IntegerAttr batch_group_count;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::mhlo::SubtractOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 0 of castedOp0";
        });
      }
      if(::mlir::failed(static_dag_matcher_1(rewriter, op1, tblgen_ops, zp_offset, precision_config, batch_group_count, dimension_numbers, rhs_dilation, padding, window_strides, window_reversal, lhs_dilation, rhs, feature_group_count, lhs, conv))) {
        return ::mlir::failure();
      }
      tblgen_ops.push_back(op1);
    }
    bias = castedOp0.getODSOperands(1);
    if (!(((::llvm::isa<::mlir::TensorType>(((*conv.getODSResults(0).begin()).getType())))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::IntegerType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(((*conv.getODSResults(0).begin()).getType())).getElementType())))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'conv' failed to satisfy constraint: 'tensor of integer values'";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc(), tblgen_ops[2]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConvolutionOp tblgen_ConvolutionOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*lhs.begin()));
      tblgen_values.push_back((*rhs.begin()));
      if (auto tmpAttr = window_strides) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("window_strides"), tmpAttr);
      }
      if (auto tmpAttr = padding) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("padding"), tmpAttr);
      }
      if (auto tmpAttr = lhs_dilation) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("lhs_dilation"), tmpAttr);
      }
      if (auto tmpAttr = rhs_dilation) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("rhs_dilation"), tmpAttr);
      }
      if (auto tmpAttr = window_reversal) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("window_reversal"), tmpAttr);
      }
      if (auto tmpAttr = dimension_numbers) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("dimension_numbers"), tmpAttr);
      }
      if (auto tmpAttr = feature_group_count) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("feature_group_count"), tmpAttr);
      }
      if (auto tmpAttr = batch_group_count) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("batch_group_count"), tmpAttr);
      }
      if (auto tmpAttr = precision_config) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("precision_config"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_types.push_back((*conv.getODSResults(0).begin()).getType());
      tblgen_ConvolutionOp_0 = rewriter.create<::mlir::mhlo::ConvolutionOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SubtractOp tblgen_SubtractOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*zp_offset.begin());
      ::mlir::Value tblgen_value_1 = (*bias.begin());
      tblgen_SubtractOp_1 = rewriter.create<::mlir::mhlo::SubtractOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_2;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConvolutionOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_SubtractOp_1.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_AddOp_2 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AddOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/quantization/stablehlo/passes/bridge/optimize.td:30
*/
struct optimizeConsecutiveConvMHLO_SubtractOpMHLO_AddOp : public ::mlir::RewritePattern {
  optimizeConsecutiveConvMHLO_SubtractOpMHLO_AddOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.add", 3, context, {"mhlo.convolution", "mhlo.subtract"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range bias(op0->getOperands());
    ::mlir::mhlo::ConvolutionOp conv;
    ::mlir::Operation::operand_range lhs(op0->getOperands());
    ::mlir::IntegerAttr feature_group_count;
    ::mlir::Operation::operand_range rhs(op0->getOperands());
    ::mlir::DenseElementsAttr window_reversal;
    ::mlir::DenseIntElementsAttr window_strides;
    ::mlir::DenseIntElementsAttr padding;
    ::mlir::DenseIntElementsAttr rhs_dilation;
    ::mlir::DenseIntElementsAttr lhs_dilation;
    ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers;
    ::mlir::Operation::operand_range zp_offset(op0->getOperands());
    ::mlir::ArrayAttr precision_config;
    ::mlir::IntegerAttr batch_group_count;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::mhlo::AddOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 0 of castedOp0";
        });
      }
      if(::mlir::failed(static_dag_matcher_2(rewriter, op1, tblgen_ops, zp_offset, precision_config, batch_group_count, dimension_numbers, rhs_dilation, padding, window_strides, window_reversal, lhs_dilation, rhs, feature_group_count, lhs, conv))) {
        return ::mlir::failure();
      }
      tblgen_ops.push_back(op1);
    }
    bias = castedOp0.getODSOperands(1);
    if (!(((::llvm::isa<::mlir::TensorType>(((*conv.getODSResults(0).begin()).getType())))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::IntegerType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(((*conv.getODSResults(0).begin()).getType())).getElementType())))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'conv' failed to satisfy constraint: 'tensor of integer values'";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc(), tblgen_ops[2]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConvolutionOp tblgen_ConvolutionOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*lhs.begin()));
      tblgen_values.push_back((*rhs.begin()));
      if (auto tmpAttr = window_strides) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("window_strides"), tmpAttr);
      }
      if (auto tmpAttr = padding) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("padding"), tmpAttr);
      }
      if (auto tmpAttr = lhs_dilation) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("lhs_dilation"), tmpAttr);
      }
      if (auto tmpAttr = rhs_dilation) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("rhs_dilation"), tmpAttr);
      }
      if (auto tmpAttr = window_reversal) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("window_reversal"), tmpAttr);
      }
      if (auto tmpAttr = dimension_numbers) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("dimension_numbers"), tmpAttr);
      }
      if (auto tmpAttr = feature_group_count) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("feature_group_count"), tmpAttr);
      }
      if (auto tmpAttr = batch_group_count) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("batch_group_count"), tmpAttr);
      }
      if (auto tmpAttr = precision_config) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("precision_config"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_types.push_back((*conv.getODSResults(0).begin()).getType());
      tblgen_ConvolutionOp_0 = rewriter.create<::mlir::mhlo::ConvolutionOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SubtractOp tblgen_SubtractOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*zp_offset.begin());
      ::mlir::Value tblgen_value_1 = (*bias.begin());
      tblgen_SubtractOp_1 = rewriter.create<::mlir::mhlo::SubtractOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SubtractOp tblgen_SubtractOp_2;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConvolutionOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_SubtractOp_1.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SubtractOp_2 = rewriter.create<::mlir::mhlo::SubtractOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SubtractOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/quantization/stablehlo/passes/bridge/optimize.td:30
*/
struct optimizeConsecutiveConvMHLO_SubtractOpMHLO_SubtractOp : public ::mlir::RewritePattern {
  optimizeConsecutiveConvMHLO_SubtractOpMHLO_SubtractOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.subtract", 3, context, {"mhlo.add", "mhlo.convolution", "mhlo.subtract"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range bias(op0->getOperands());
    ::mlir::mhlo::ConvolutionOp conv;
    ::mlir::Operation::operand_range lhs(op0->getOperands());
    ::mlir::IntegerAttr feature_group_count;
    ::mlir::Operation::operand_range rhs(op0->getOperands());
    ::mlir::DenseElementsAttr window_reversal;
    ::mlir::DenseIntElementsAttr window_strides;
    ::mlir::DenseIntElementsAttr padding;
    ::mlir::DenseIntElementsAttr rhs_dilation;
    ::mlir::DenseIntElementsAttr lhs_dilation;
    ::mlir::mhlo::ConvDimensionNumbersAttr dimension_numbers;
    ::mlir::Operation::operand_range zp_offset(op0->getOperands());
    ::mlir::ArrayAttr precision_config;
    ::mlir::IntegerAttr batch_group_count;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::mhlo::SubtractOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 0 of castedOp0";
        });
      }
      if(::mlir::failed(static_dag_matcher_2(rewriter, op1, tblgen_ops, zp_offset, precision_config, batch_group_count, dimension_numbers, rhs_dilation, padding, window_strides, window_reversal, lhs_dilation, rhs, feature_group_count, lhs, conv))) {
        return ::mlir::failure();
      }
      tblgen_ops.push_back(op1);
    }
    bias = castedOp0.getODSOperands(1);
    if (!(((::llvm::isa<::mlir::TensorType>(((*conv.getODSResults(0).begin()).getType())))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::IntegerType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(((*conv.getODSResults(0).begin()).getType())).getElementType())))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'conv' failed to satisfy constraint: 'tensor of integer values'";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc(), tblgen_ops[2]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::ConvolutionOp tblgen_ConvolutionOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*lhs.begin()));
      tblgen_values.push_back((*rhs.begin()));
      if (auto tmpAttr = window_strides) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("window_strides"), tmpAttr);
      }
      if (auto tmpAttr = padding) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("padding"), tmpAttr);
      }
      if (auto tmpAttr = lhs_dilation) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("lhs_dilation"), tmpAttr);
      }
      if (auto tmpAttr = rhs_dilation) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("rhs_dilation"), tmpAttr);
      }
      if (auto tmpAttr = window_reversal) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("window_reversal"), tmpAttr);
      }
      if (auto tmpAttr = dimension_numbers) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("dimension_numbers"), tmpAttr);
      }
      if (auto tmpAttr = feature_group_count) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("feature_group_count"), tmpAttr);
      }
      if (auto tmpAttr = batch_group_count) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("batch_group_count"), tmpAttr);
      }
      if (auto tmpAttr = precision_config) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("precision_config"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_types.push_back((*conv.getODSResults(0).begin()).getType());
      tblgen_ConvolutionOp_0 = rewriter.create<::mlir::mhlo::ConvolutionOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*zp_offset.begin());
      ::mlir::Value tblgen_value_1 = (*bias.begin());
      tblgen_AddOp_1 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SubtractOp tblgen_SubtractOp_2;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_ConvolutionOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_AddOp_1.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SubtractOp_2 = rewriter.create<::mlir::mhlo::SubtractOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SubtractOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/quantization/stablehlo/passes/bridge/optimize.td:46
*/
struct optimizeConsecutiveDotGeneralMHLO_AddOpMHLO_AddOp : public ::mlir::RewritePattern {
  optimizeConsecutiveDotGeneralMHLO_AddOpMHLO_AddOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.add", 3, context, {"mhlo.add", "mhlo.dot_general"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range bias(op0->getOperands());
    ::mlir::Operation::operand_range zp_offset(op0->getOperands());
    ::mlir::ArrayAttr precision_config;
    ::mlir::mhlo::DotDimensionNumbersAttr dimension_numbers;
    ::mlir::Operation::operand_range rhs(op0->getOperands());
    ::mlir::Operation::operand_range lhs(op0->getOperands());
    ::mlir::mhlo::DotGeneralOp dot;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::mhlo::AddOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 0 of castedOp0";
        });
      }
      if(::mlir::failed(static_dag_matcher_4(rewriter, op1, tblgen_ops, zp_offset, precision_config, dimension_numbers, rhs, lhs, dot))) {
        return ::mlir::failure();
      }
      tblgen_ops.push_back(op1);
    }
    bias = castedOp0.getODSOperands(1);
    if (!(((::llvm::isa<::mlir::TensorType>(((*dot.getODSResults(0).begin()).getType())))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::IntegerType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(((*dot.getODSResults(0).begin()).getType())).getElementType())))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'dot' failed to satisfy constraint: 'tensor of integer values'";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc(), tblgen_ops[2]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::DotGeneralOp tblgen_DotGeneralOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*lhs.begin()));
      tblgen_values.push_back((*rhs.begin()));
      if (auto tmpAttr = dimension_numbers) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("dot_dimension_numbers"), tmpAttr);
      }
      if (auto tmpAttr = precision_config) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("precision_config"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_types.push_back((*dot.getODSResults(0).begin()).getType());
      tblgen_DotGeneralOp_0 = rewriter.create<::mlir::mhlo::DotGeneralOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*zp_offset.begin());
      ::mlir::Value tblgen_value_1 = (*bias.begin());
      tblgen_AddOp_1 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_2;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_DotGeneralOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_AddOp_1.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_AddOp_2 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AddOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/quantization/stablehlo/passes/bridge/optimize.td:46
*/
struct optimizeConsecutiveDotGeneralMHLO_AddOpMHLO_SubtractOp : public ::mlir::RewritePattern {
  optimizeConsecutiveDotGeneralMHLO_AddOpMHLO_SubtractOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.subtract", 3, context, {"mhlo.add", "mhlo.dot_general", "mhlo.subtract"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range bias(op0->getOperands());
    ::mlir::Operation::operand_range zp_offset(op0->getOperands());
    ::mlir::ArrayAttr precision_config;
    ::mlir::mhlo::DotDimensionNumbersAttr dimension_numbers;
    ::mlir::Operation::operand_range rhs(op0->getOperands());
    ::mlir::Operation::operand_range lhs(op0->getOperands());
    ::mlir::mhlo::DotGeneralOp dot;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::mhlo::SubtractOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 0 of castedOp0";
        });
      }
      if(::mlir::failed(static_dag_matcher_4(rewriter, op1, tblgen_ops, zp_offset, precision_config, dimension_numbers, rhs, lhs, dot))) {
        return ::mlir::failure();
      }
      tblgen_ops.push_back(op1);
    }
    bias = castedOp0.getODSOperands(1);
    if (!(((::llvm::isa<::mlir::TensorType>(((*dot.getODSResults(0).begin()).getType())))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::IntegerType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(((*dot.getODSResults(0).begin()).getType())).getElementType())))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'dot' failed to satisfy constraint: 'tensor of integer values'";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc(), tblgen_ops[2]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::DotGeneralOp tblgen_DotGeneralOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*lhs.begin()));
      tblgen_values.push_back((*rhs.begin()));
      if (auto tmpAttr = dimension_numbers) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("dot_dimension_numbers"), tmpAttr);
      }
      if (auto tmpAttr = precision_config) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("precision_config"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_types.push_back((*dot.getODSResults(0).begin()).getType());
      tblgen_DotGeneralOp_0 = rewriter.create<::mlir::mhlo::DotGeneralOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SubtractOp tblgen_SubtractOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*zp_offset.begin());
      ::mlir::Value tblgen_value_1 = (*bias.begin());
      tblgen_SubtractOp_1 = rewriter.create<::mlir::mhlo::SubtractOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_2;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_DotGeneralOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_SubtractOp_1.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_AddOp_2 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_AddOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/quantization/stablehlo/passes/bridge/optimize.td:46
*/
struct optimizeConsecutiveDotGeneralMHLO_SubtractOpMHLO_AddOp : public ::mlir::RewritePattern {
  optimizeConsecutiveDotGeneralMHLO_SubtractOpMHLO_AddOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.add", 3, context, {"mhlo.dot_general", "mhlo.subtract"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range bias(op0->getOperands());
    ::mlir::Operation::operand_range zp_offset(op0->getOperands());
    ::mlir::ArrayAttr precision_config;
    ::mlir::mhlo::DotDimensionNumbersAttr dimension_numbers;
    ::mlir::Operation::operand_range rhs(op0->getOperands());
    ::mlir::Operation::operand_range lhs(op0->getOperands());
    ::mlir::mhlo::DotGeneralOp dot;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::mhlo::AddOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 0 of castedOp0";
        });
      }
      if(::mlir::failed(static_dag_matcher_5(rewriter, op1, tblgen_ops, zp_offset, precision_config, dimension_numbers, rhs, lhs, dot))) {
        return ::mlir::failure();
      }
      tblgen_ops.push_back(op1);
    }
    bias = castedOp0.getODSOperands(1);
    if (!(((::llvm::isa<::mlir::TensorType>(((*dot.getODSResults(0).begin()).getType())))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::IntegerType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(((*dot.getODSResults(0).begin()).getType())).getElementType())))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'dot' failed to satisfy constraint: 'tensor of integer values'";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc(), tblgen_ops[2]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::DotGeneralOp tblgen_DotGeneralOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*lhs.begin()));
      tblgen_values.push_back((*rhs.begin()));
      if (auto tmpAttr = dimension_numbers) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("dot_dimension_numbers"), tmpAttr);
      }
      if (auto tmpAttr = precision_config) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("precision_config"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_types.push_back((*dot.getODSResults(0).begin()).getType());
      tblgen_DotGeneralOp_0 = rewriter.create<::mlir::mhlo::DotGeneralOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::SubtractOp tblgen_SubtractOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*zp_offset.begin());
      ::mlir::Value tblgen_value_1 = (*bias.begin());
      tblgen_SubtractOp_1 = rewriter.create<::mlir::mhlo::SubtractOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SubtractOp tblgen_SubtractOp_2;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_DotGeneralOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_SubtractOp_1.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SubtractOp_2 = rewriter.create<::mlir::mhlo::SubtractOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SubtractOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    tensorflow/compiler/mlir/quantization/stablehlo/passes/bridge/optimize.td:46
*/
struct optimizeConsecutiveDotGeneralMHLO_SubtractOpMHLO_SubtractOp : public ::mlir::RewritePattern {
  optimizeConsecutiveDotGeneralMHLO_SubtractOpMHLO_SubtractOp(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("mhlo.subtract", 3, context, {"mhlo.add", "mhlo.dot_general", "mhlo.subtract"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::Operation::operand_range bias(op0->getOperands());
    ::mlir::Operation::operand_range zp_offset(op0->getOperands());
    ::mlir::ArrayAttr precision_config;
    ::mlir::mhlo::DotDimensionNumbersAttr dimension_numbers;
    ::mlir::Operation::operand_range rhs(op0->getOperands());
    ::mlir::Operation::operand_range lhs(op0->getOperands());
    ::mlir::mhlo::DotGeneralOp dot;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::mhlo::SubtractOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 0 of castedOp0";
        });
      }
      if(::mlir::failed(static_dag_matcher_5(rewriter, op1, tblgen_ops, zp_offset, precision_config, dimension_numbers, rhs, lhs, dot))) {
        return ::mlir::failure();
      }
      tblgen_ops.push_back(op1);
    }
    bias = castedOp0.getODSOperands(1);
    if (!(((::llvm::isa<::mlir::TensorType>(((*dot.getODSResults(0).begin()).getType())))) && ([](::mlir::Type elementType) { return (::llvm::isa<::mlir::IntegerType>(elementType)); }(::llvm::cast<::mlir::ShapedType>(((*dot.getODSResults(0).begin()).getType())).getElementType())))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "value entity 'dot' failed to satisfy constraint: 'tensor of integer values'";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc(), tblgen_ops[2]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::mhlo::DotGeneralOp tblgen_DotGeneralOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*lhs.begin()));
      tblgen_values.push_back((*rhs.begin()));
      if (auto tmpAttr = dimension_numbers) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("dot_dimension_numbers"), tmpAttr);
      }
      if (auto tmpAttr = precision_config) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("precision_config"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      tblgen_types.push_back((*dot.getODSResults(0).begin()).getType());
      tblgen_DotGeneralOp_0 = rewriter.create<::mlir::mhlo::DotGeneralOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }
    ::mlir::mhlo::AddOp tblgen_AddOp_1;
    {
      ::mlir::Value tblgen_value_0 = (*zp_offset.begin());
      ::mlir::Value tblgen_value_1 = (*bias.begin());
      tblgen_AddOp_1 = rewriter.create<::mlir::mhlo::AddOp>(odsLoc,
        /*lhs=*/tblgen_value_0,
        /*rhs=*/tblgen_value_1
      );
    }
    ::mlir::mhlo::SubtractOp tblgen_SubtractOp_2;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*tblgen_DotGeneralOp_0.getODSResults(0).begin()));
      tblgen_values.push_back((*tblgen_AddOp_1.getODSResults(0).begin()));
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_SubtractOp_2 = rewriter.create<::mlir::mhlo::SubtractOp>(odsLoc, tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_SubtractOp_2.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(::mlir::RewritePatternSet &patterns) {
  patterns.add<optimizeConsecutiveConvMHLO_AddOpMHLO_AddOp>(patterns.getContext());
  patterns.add<optimizeConsecutiveConvMHLO_AddOpMHLO_SubtractOp>(patterns.getContext());
  patterns.add<optimizeConsecutiveConvMHLO_SubtractOpMHLO_AddOp>(patterns.getContext());
  patterns.add<optimizeConsecutiveConvMHLO_SubtractOpMHLO_SubtractOp>(patterns.getContext());
  patterns.add<optimizeConsecutiveDotGeneralMHLO_AddOpMHLO_AddOp>(patterns.getContext());
  patterns.add<optimizeConsecutiveDotGeneralMHLO_AddOpMHLO_SubtractOp>(patterns.getContext());
  patterns.add<optimizeConsecutiveDotGeneralMHLO_SubtractOpMHLO_AddOp>(patterns.getContext());
  patterns.add<optimizeConsecutiveDotGeneralMHLO_SubtractOpMHLO_SubtractOp>(patterns.getContext());
}
