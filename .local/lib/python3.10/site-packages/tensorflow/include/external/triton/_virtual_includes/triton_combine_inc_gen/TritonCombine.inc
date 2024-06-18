/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Rewriters                                                                  *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: Combine.td                                                           *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

static ::mlir::LogicalResult static_dag_matcher_0(::mlir::PatternRewriter &rewriter, ::mlir::Operation *op0, ::llvm::SmallVector<::mlir::Operation *, 4> &tblgen_ops, ::mlir::IntegerAttr &maxNumImpreciseAcc, ::mlir::BoolAttr &allowTF32, ::mlir::Operation::operand_range &c, ::mlir::Operation::operand_range &b, ::mlir::Operation::operand_range &a, ::mlir::triton::DotOp &res) {
  (void)tblgen_ops;
  auto castedOp1 = ::llvm::dyn_cast<::mlir::triton::DotOp>(op0); (void)castedOp1;
  if (!(castedOp1)){
    return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
      diag << "castedOp1 is not ::mlir::triton::DotOp type";
    });
  }
  res = castedOp1;
  a = castedOp1.getODSOperands(0);
  b = castedOp1.getODSOperands(1);
  c = castedOp1.getODSOperands(2);
  {
    auto tblgen_attr = op0->getAttrOfType<::mlir::BoolAttr>("allowTF32");(void)tblgen_attr;
    if (!(tblgen_attr)){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "expected op 'tt.dot' to have attribute 'allowTF32' of type '::mlir::BoolAttr'";
      });
    }
    allowTF32 = tblgen_attr;
  }
  {
    auto tblgen_attr = op0->getAttrOfType<::mlir::IntegerAttr>("maxNumImpreciseAcc");(void)tblgen_attr;
    if (!(tblgen_attr)){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "expected op 'tt.dot' to have attribute 'maxNumImpreciseAcc' of type '::mlir::IntegerAttr'";
      });
    }
    maxNumImpreciseAcc = tblgen_attr;
  }
  return ::mlir::success();
}

/* Generated from:
    external/triton/lib/Dialect/Triton/Transforms/Combine.td:45
*/
struct CombineBroadcastConstantPattern : public ::mlir::RewritePattern {
  CombineBroadcastConstantPattern(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("tt.broadcast", 2, context, {"arith.constant"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::TypedAttr value;
    ::mlir::triton::BroadcastOp bcast_res;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::triton::BroadcastOp>(op0); (void)castedOp0;
    bcast_res = castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 0 of castedOp0";
        });
      }
      auto castedOp1 = ::llvm::dyn_cast<::mlir::arith::ConstantOp>(op1); (void)castedOp1;
      if (!(castedOp1)){
        return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
          diag << "castedOp1 is not ::mlir::arith::ConstantOp type";
        });
      }
      {
        auto tblgen_attr = op1->getAttrOfType<::mlir::TypedAttr>("value");(void)tblgen_attr;
        if (!(tblgen_attr)){
          return rewriter.notifyMatchFailure(op1, [&](::mlir::Diagnostic &diag) {
            diag << "expected op 'arith.constant' to have attribute 'value' of type '::mlir::TypedAttr'";
          });
        }
        value = tblgen_attr;
      }
      tblgen_ops.push_back(op1);
    }
    if (!((isBroadcastConstantCombinable(value)))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'value' failed to satisfy constraint: ''";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    auto nativeVar_0 = getConstantValue(rewriter, value, (*bcast_res.getODSResults(0).begin())); (void)nativeVar_0;
    ::mlir::arith::ConstantOp tblgen_ConstantOp_1;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      if (auto tmpAttr = nativeVar_0) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("value"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_ConstantOp_1 = rewriter.create<::mlir::arith::ConstantOp>((*bcast_res.getODSResults(0).begin()).getLoc(), tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_ConstantOp_1.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/triton/lib/Dialect/Triton/Transforms/Combine.td:18
*/
struct CombineDotAddFPattern : public ::mlir::RewritePattern {
  CombineDotAddFPattern(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("arith.addf", 2, context, {"tt.dot"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::arith::FastMathFlagsAttr fastmath;
    ::mlir::IntegerAttr maxNumImpreciseAcc;
    ::mlir::BoolAttr allowTF32;
    ::mlir::Operation::operand_range c(op0->getOperands());
    ::mlir::Operation::operand_range b(op0->getOperands());
    ::mlir::triton::DotOp res;
    ::mlir::Operation::operand_range a(op0->getOperands());
    ::mlir::Operation::operand_range d(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::arith::AddFOp>(op0); (void)castedOp0;
    d = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 1 of castedOp0";
        });
      }
      if(::mlir::failed(static_dag_matcher_0(rewriter, op1, tblgen_ops, maxNumImpreciseAcc, allowTF32, c, b, a, res))) {
        return ::mlir::failure();
      }
      tblgen_ops.push_back(op1);
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::arith::FastMathFlagsAttr>("fastmath");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = ::mlir::arith::FastMathFlagsAttr::get(rewriter.getContext(), ::mlir::arith::FastMathFlags::none);
      fastmath = tblgen_attr;
    }
    if (!((isZero((*c.begin()))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'c' failed to satisfy constraint: ''";
      });
    }
    if (!((::llvm::cast<::mlir::IntegerAttr>(maxNumImpreciseAcc).getInt() == 0))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'maxNumImpreciseAcc' failed to satisfy constraint: ''";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::triton::DotOp tblgen_DotOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*a.begin()));
      tblgen_values.push_back((*b.begin()));
      tblgen_values.push_back((*d.begin()));
      if (auto tmpAttr = allowTF32) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("allowTF32"), tmpAttr);
      }
      if (auto tmpAttr = maxNumImpreciseAcc) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("maxNumImpreciseAcc"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_DotOp_0 = rewriter.create<::mlir::triton::DotOp>((*res.getODSResults(0).begin()).getLoc(), tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DotOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/triton/lib/Dialect/Triton/Transforms/Combine.td:28
*/
struct CombineDotAddFRevPattern : public ::mlir::RewritePattern {
  CombineDotAddFRevPattern(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("arith.addf", 2, context, {"tt.dot"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::arith::FastMathFlagsAttr fastmath;
    ::mlir::IntegerAttr maxNumImpreciseAcc;
    ::mlir::BoolAttr allowTF32;
    ::mlir::Operation::operand_range c(op0->getOperands());
    ::mlir::Operation::operand_range b(op0->getOperands());
    ::mlir::Operation::operand_range d(op0->getOperands());
    ::mlir::Operation::operand_range a(op0->getOperands());
    ::mlir::triton::DotOp res;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::arith::AddFOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 0 of castedOp0";
        });
      }
      if(::mlir::failed(static_dag_matcher_0(rewriter, op1, tblgen_ops, maxNumImpreciseAcc, allowTF32, c, b, a, res))) {
        return ::mlir::failure();
      }
      tblgen_ops.push_back(op1);
    }
    d = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::arith::FastMathFlagsAttr>("fastmath");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = ::mlir::arith::FastMathFlagsAttr::get(rewriter.getContext(), ::mlir::arith::FastMathFlags::none);
      fastmath = tblgen_attr;
    }
    if (!((isZero((*c.begin()))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'c' failed to satisfy constraint: ''";
      });
    }
    if (!((::llvm::cast<::mlir::IntegerAttr>(maxNumImpreciseAcc).getInt() == 0))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'maxNumImpreciseAcc' failed to satisfy constraint: ''";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::triton::DotOp tblgen_DotOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*a.begin()));
      tblgen_values.push_back((*b.begin()));
      tblgen_values.push_back((*d.begin()));
      if (auto tmpAttr = allowTF32) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("allowTF32"), tmpAttr);
      }
      if (auto tmpAttr = maxNumImpreciseAcc) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("maxNumImpreciseAcc"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_DotOp_0 = rewriter.create<::mlir::triton::DotOp>((*res.getODSResults(0).begin()).getLoc(), tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DotOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/triton/lib/Dialect/Triton/Transforms/Combine.td:14
*/
struct CombineDotAddIPattern : public ::mlir::RewritePattern {
  CombineDotAddIPattern(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("arith.addi", 2, context, {"tt.dot"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::arith::IntegerOverflowFlagsAttr overflow;
    ::mlir::IntegerAttr maxNumImpreciseAcc;
    ::mlir::BoolAttr allowTF32;
    ::mlir::Operation::operand_range c(op0->getOperands());
    ::mlir::Operation::operand_range b(op0->getOperands());
    ::mlir::triton::DotOp res;
    ::mlir::Operation::operand_range a(op0->getOperands());
    ::mlir::Operation::operand_range d(op0->getOperands());
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::arith::AddIOp>(op0); (void)castedOp0;
    d = castedOp0.getODSOperands(0);
    {
      auto *op1 = (*castedOp0.getODSOperands(1).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 1 of castedOp0";
        });
      }
      if(::mlir::failed(static_dag_matcher_0(rewriter, op1, tblgen_ops, maxNumImpreciseAcc, allowTF32, c, b, a, res))) {
        return ::mlir::failure();
      }
      tblgen_ops.push_back(op1);
    }
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::arith::IntegerOverflowFlagsAttr>("overflowFlags");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = ::mlir::arith::IntegerOverflowFlagsAttr::get(rewriter.getContext(), ::mlir::arith::IntegerOverflowFlags::none);
      overflow = tblgen_attr;
    }
    if (!((isZero((*c.begin()))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'c' failed to satisfy constraint: ''";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::triton::DotOp tblgen_DotOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*a.begin()));
      tblgen_values.push_back((*b.begin()));
      tblgen_values.push_back((*d.begin()));
      if (auto tmpAttr = allowTF32) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("allowTF32"), tmpAttr);
      }
      if (auto tmpAttr = maxNumImpreciseAcc) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("maxNumImpreciseAcc"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_DotOp_0 = rewriter.create<::mlir::triton::DotOp>((*res.getODSResults(0).begin()).getLoc(), tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DotOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

/* Generated from:
    external/triton/lib/Dialect/Triton/Transforms/Combine.td:24
*/
struct CombineDotAddIRevPattern : public ::mlir::RewritePattern {
  CombineDotAddIRevPattern(::mlir::MLIRContext *context)
      : ::mlir::RewritePattern("arith.addi", 2, context, {"tt.dot"}) {}
  ::mlir::LogicalResult matchAndRewrite(::mlir::Operation *op0,
      ::mlir::PatternRewriter &rewriter) const override {
    // Variables for capturing values and attributes used while creating ops
    ::mlir::arith::IntegerOverflowFlagsAttr overflow;
    ::mlir::IntegerAttr maxNumImpreciseAcc;
    ::mlir::BoolAttr allowTF32;
    ::mlir::Operation::operand_range c(op0->getOperands());
    ::mlir::Operation::operand_range b(op0->getOperands());
    ::mlir::Operation::operand_range d(op0->getOperands());
    ::mlir::Operation::operand_range a(op0->getOperands());
    ::mlir::triton::DotOp res;
    ::llvm::SmallVector<::mlir::Operation *, 4> tblgen_ops;

    // Match
    tblgen_ops.push_back(op0);
    auto castedOp0 = ::llvm::dyn_cast<::mlir::arith::AddIOp>(op0); (void)castedOp0;
    {
      auto *op1 = (*castedOp0.getODSOperands(0).begin()).getDefiningOp();
      if (!(op1)){
        return rewriter.notifyMatchFailure(castedOp0, [&](::mlir::Diagnostic &diag) {
          diag << "There's no operation that defines operand 0 of castedOp0";
        });
      }
      if(::mlir::failed(static_dag_matcher_0(rewriter, op1, tblgen_ops, maxNumImpreciseAcc, allowTF32, c, b, a, res))) {
        return ::mlir::failure();
      }
      tblgen_ops.push_back(op1);
    }
    d = castedOp0.getODSOperands(1);
    {
      auto tblgen_attr = op0->getAttrOfType<::mlir::arith::IntegerOverflowFlagsAttr>("overflowFlags");(void)tblgen_attr;
      if (!tblgen_attr) tblgen_attr = ::mlir::arith::IntegerOverflowFlagsAttr::get(rewriter.getContext(), ::mlir::arith::IntegerOverflowFlags::none);
      overflow = tblgen_attr;
    }
    if (!((isZero((*c.begin()))))){
      return rewriter.notifyMatchFailure(op0, [&](::mlir::Diagnostic &diag) {
        diag << "entities 'c' failed to satisfy constraint: ''";
      });
    }

    // Rewrite
    auto odsLoc = rewriter.getFusedLoc({tblgen_ops[0]->getLoc(), tblgen_ops[1]->getLoc()}); (void)odsLoc;
    ::llvm::SmallVector<::mlir::Value, 4> tblgen_repl_values;
    ::mlir::triton::DotOp tblgen_DotOp_0;
    {
      ::llvm::SmallVector<::mlir::Value, 4> tblgen_values; (void)tblgen_values;
      ::llvm::SmallVector<::mlir::NamedAttribute, 4> tblgen_attrs; (void)tblgen_attrs;
      tblgen_values.push_back((*a.begin()));
      tblgen_values.push_back((*b.begin()));
      tblgen_values.push_back((*d.begin()));
      if (auto tmpAttr = allowTF32) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("allowTF32"), tmpAttr);
      }
      if (auto tmpAttr = maxNumImpreciseAcc) {
        tblgen_attrs.emplace_back(rewriter.getStringAttr("maxNumImpreciseAcc"), tmpAttr);
      }
      ::llvm::SmallVector<::mlir::Type, 4> tblgen_types; (void)tblgen_types;
      for (auto v: castedOp0.getODSResults(0)) {
        tblgen_types.push_back(v.getType());
      }
      tblgen_DotOp_0 = rewriter.create<::mlir::triton::DotOp>((*res.getODSResults(0).begin()).getLoc(), tblgen_types, tblgen_values, tblgen_attrs);
    }

    for (auto v: ::llvm::SmallVector<::mlir::Value, 4>{ tblgen_DotOp_0.getODSResults(0) }) {
      tblgen_repl_values.push_back(v);
    }

    rewriter.replaceOp(op0, tblgen_repl_values);
    return ::mlir::success();
  };
};

void LLVM_ATTRIBUTE_UNUSED populateWithGenerated(::mlir::RewritePatternSet &patterns) {
  patterns.add<CombineBroadcastConstantPattern>(patterns.getContext());
  patterns.add<CombineDotAddFPattern>(patterns.getContext());
  patterns.add<CombineDotAddFRevPattern>(patterns.getContext());
  patterns.add<CombineDotAddIPattern>(patterns.getContext());
  patterns.add<CombineDotAddIRevPattern>(patterns.getContext());
}
