/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* SPIR-V Op Availability Implementations                                     *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|* From: SPIRVOps.td                                                          *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AccessChainOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AccessChainOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AccessChainOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AccessChainOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AddressOfOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AddressOfOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AddressOfOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AddressOfOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicAndOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicAndOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicAndOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicAndOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicCompareExchangeOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getEqualSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getUnequalSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicCompareExchangeOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getEqualSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getUnequalSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicCompareExchangeOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getEqualSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getUnequalSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicCompareExchangeOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicCompareExchangeWeakOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getEqualSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getUnequalSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicCompareExchangeWeakOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getEqualSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getUnequalSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicCompareExchangeWeakOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getEqualSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getUnequalSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicCompareExchangeWeakOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicExchangeOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicExchangeOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicExchangeOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicExchangeOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicIAddOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicIAddOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicIAddOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicIAddOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicIDecrementOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicIDecrementOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicIDecrementOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicIDecrementOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicIIncrementOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicIIncrementOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicIIncrementOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicIIncrementOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicISubOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicISubOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicISubOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicISubOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicOrOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicOrOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicOrOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicOrOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicSMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicSMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicSMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicSMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicSMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicSMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicSMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicSMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicUMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicUMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicUMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicUMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicUMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicUMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicUMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicUMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> AtomicXorOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> AtomicXorOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicXorOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> AtomicXorOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> BitCountOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> BitCountOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitCountOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitCountOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> BitFieldInsertOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::BitInstructions, ::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> BitFieldInsertOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitFieldInsertOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitFieldInsertOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> BitFieldSExtractOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::BitInstructions, ::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> BitFieldSExtractOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitFieldSExtractOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitFieldSExtractOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> BitFieldUExtractOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::BitInstructions, ::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> BitFieldUExtractOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitFieldUExtractOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitFieldUExtractOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> BitReverseOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::BitInstructions, ::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> BitReverseOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitReverseOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitReverseOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> BitcastOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> BitcastOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitcastOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitcastOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> BitwiseAndOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> BitwiseAndOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitwiseAndOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitwiseAndOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> BitwiseOrOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> BitwiseOrOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitwiseOrOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitwiseOrOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> BitwiseXorOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> BitwiseXorOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitwiseXorOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BitwiseXorOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> BranchConditionalOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> BranchConditionalOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BranchConditionalOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BranchConditionalOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> BranchOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> BranchOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BranchOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> BranchOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLAcosOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLAcosOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAcosOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAcosOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLAcoshOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLAcoshOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAcoshOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAcoshOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLAsinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLAsinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAsinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAsinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLAsinhOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLAsinhOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAsinhOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAsinhOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLAtan2Op::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLAtan2Op::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAtan2Op::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAtan2Op::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLAtanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLAtanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAtanOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAtanOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLAtanhOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLAtanhOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAtanhOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLAtanhOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLCeilOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLCeilOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLCeilOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLCeilOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLCosOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLCosOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLCosOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLCosOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLCoshOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLCoshOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLCoshOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLCoshOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLErfOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLErfOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLErfOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLErfOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLExpOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLExpOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLExpOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLExpOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLFAbsOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLFAbsOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLFAbsOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLFAbsOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLFMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLFMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLFMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLFMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLFMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLFMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLFMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLFMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLFloorOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLFloorOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLFloorOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLFloorOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLFmaOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLFmaOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLFmaOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLFmaOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLLogOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLLogOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLLogOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLLogOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLMixOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLMixOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLMixOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLMixOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLPowOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLPowOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLPowOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLPowOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLPrintfOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLPrintfOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLPrintfOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLPrintfOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLRintOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLRintOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLRintOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLRintOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLRoundOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLRoundOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLRoundOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLRoundOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLRsqrtOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLRsqrtOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLRsqrtOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLRsqrtOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLSAbsOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLSAbsOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLSAbsOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLSAbsOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLSMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLSMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLSMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLSMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLSMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLSMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLSMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLSMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLSinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLSinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLSinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLSinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLSinhOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLSinhOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLSinhOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLSinhOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLSqrtOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLSqrtOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLSqrtOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLSqrtOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLTanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLTanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLTanOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLTanOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLTanhOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLTanhOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLTanhOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLTanhOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLUMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLUMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLUMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLUMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CLUMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CLUMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLUMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CLUMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CompositeConstructOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CompositeConstructOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CompositeConstructOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CompositeConstructOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CompositeExtractOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CompositeExtractOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CompositeExtractOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CompositeExtractOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CompositeInsertOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CompositeInsertOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CompositeInsertOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CompositeInsertOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ConstantOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ConstantOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConstantOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConstantOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ControlBarrierOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getMemorySemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ControlBarrierOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getMemorySemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ControlBarrierOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getMemorySemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ControlBarrierOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ConvertFToSOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ConvertFToSOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConvertFToSOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConvertFToSOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ConvertFToUOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ConvertFToUOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConvertFToUOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConvertFToUOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ConvertPtrToUOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Addresses, ::mlir::spirv::Capability::PhysicalStorageBufferAddresses}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ConvertPtrToUOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConvertPtrToUOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConvertPtrToUOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ConvertSToFOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ConvertSToFOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConvertSToFOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConvertSToFOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ConvertUToFOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ConvertUToFOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConvertUToFOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConvertUToFOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ConvertUToPtrOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Addresses, ::mlir::spirv::Capability::PhysicalStorageBufferAddresses}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ConvertUToPtrOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConvertUToPtrOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ConvertUToPtrOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> CopyMemoryOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> CopyMemoryOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CopyMemoryOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> CopyMemoryOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> DotOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> DotOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> DotOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> DotOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> EXTAtomicFAddOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::AtomicFloat16AddEXT, ::mlir::spirv::Capability::AtomicFloat32AddEXT, ::mlir::spirv::Capability::AtomicFloat64AddEXT}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> EXTAtomicFAddOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_EXT_shader_atomic_float_add}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> EXTAtomicFAddOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getSemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> EXTAtomicFAddOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> EntryPointOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getExecutionModel();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> EntryPointOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> EntryPointOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> EntryPointOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ExecutionModeOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getExecutionMode();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ExecutionModeOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getExecutionMode();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ExecutionModeOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionMode();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ExecutionModeOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FAddOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FAddOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FAddOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FAddOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FConvertOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FConvertOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FConvertOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FConvertOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FDivOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FDivOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FDivOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FDivOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FModOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FModOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FModOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FModOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FMulOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FMulOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FMulOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FMulOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FNegateOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FNegateOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FNegateOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FNegateOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FOrdEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FOrdEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FOrdEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FOrdEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FOrdGreaterThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FOrdGreaterThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FOrdGreaterThanEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FOrdGreaterThanEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FOrdGreaterThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FOrdGreaterThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FOrdGreaterThanOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FOrdGreaterThanOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FOrdLessThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FOrdLessThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FOrdLessThanEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FOrdLessThanEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FOrdLessThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FOrdLessThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FOrdLessThanOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FOrdLessThanOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FOrdNotEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FOrdNotEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FOrdNotEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FOrdNotEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FRemOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FRemOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FRemOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FRemOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FSubOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FSubOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FSubOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FSubOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FUnordEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FUnordEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FUnordEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FUnordEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FUnordGreaterThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FUnordGreaterThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FUnordGreaterThanEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FUnordGreaterThanEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FUnordGreaterThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FUnordGreaterThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FUnordGreaterThanOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FUnordGreaterThanOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FUnordLessThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FUnordLessThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FUnordLessThanEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FUnordLessThanEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FUnordLessThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FUnordLessThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FUnordLessThanOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FUnordLessThanOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FUnordNotEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FUnordNotEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FUnordNotEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FUnordNotEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FuncOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::FunctionControl tblgen_attrVal = this->getFunctionControl() & static_cast<::mlir::spirv::FunctionControl>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FuncOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FuncOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FuncOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> FunctionCallOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> FunctionCallOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FunctionCallOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> FunctionCallOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLAcosOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLAcosOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLAcosOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLAcosOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLAsinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLAsinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLAsinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLAsinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLAtanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLAtanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLAtanOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLAtanOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLCeilOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLCeilOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLCeilOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLCeilOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLCosOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLCosOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLCosOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLCosOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLCoshOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLCoshOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLCoshOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLCoshOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLExpOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLExpOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLExpOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLExpOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLFAbsOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLFAbsOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFAbsOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFAbsOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLFClampOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLFClampOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFClampOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFClampOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLFMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLFMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLFMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLFMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLFMixOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLFMixOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFMixOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFMixOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLFSignOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLFSignOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFSignOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFSignOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLFindUMsbOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLFindUMsbOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFindUMsbOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFindUMsbOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLFloorOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLFloorOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFloorOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFloorOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLFmaOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLFmaOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFmaOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFmaOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLFrexpStructOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLFrexpStructOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFrexpStructOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLFrexpStructOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLInverseSqrtOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLInverseSqrtOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLInverseSqrtOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLInverseSqrtOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLLdexpOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLLdexpOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLLdexpOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLLdexpOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLLogOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLLogOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLLogOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLLogOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLPowOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLPowOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLPowOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLPowOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLRoundEvenOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLRoundEvenOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLRoundEvenOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLRoundEvenOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLRoundOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLRoundOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLRoundOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLRoundOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLSAbsOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLSAbsOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSAbsOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSAbsOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLSClampOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLSClampOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSClampOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSClampOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLSMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLSMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLSMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLSMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLSSignOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLSSignOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSSignOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSSignOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLSinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLSinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLSinhOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLSinhOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSinhOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSinhOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLSqrtOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLSqrtOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSqrtOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLSqrtOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLTanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLTanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLTanOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLTanOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLTanhOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLTanhOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLTanhOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLTanhOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLUClampOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLUClampOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLUClampOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLUClampOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLUMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLUMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLUMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLUMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GLUMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GLUMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLUMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GLUMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GenericCastToPtrExplicitOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GenericCastToPtrExplicitOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GenericCastToPtrExplicitOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GenericCastToPtrExplicitOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GenericCastToPtrOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GenericCastToPtrOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GenericCastToPtrOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GenericCastToPtrOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GlobalVariableOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GlobalVariableOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GlobalVariableOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GlobalVariableOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupBroadcastOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Groups}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupBroadcastOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupBroadcastOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupBroadcastOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupFAddOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Groups}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupFAddOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupFAddOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupFAddOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupFMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Groups}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupFMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupFMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupFMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupFMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Groups}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupFMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupFMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupFMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupFMulKHROp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupUniformArithmeticKHR}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupFMulKHROp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupFMulKHROp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupFMulKHROp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupIAddOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Groups}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupIAddOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupIAddOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupIAddOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupIMulKHROp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupUniformArithmeticKHR}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupIMulKHROp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupIMulKHROp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupIMulKHROp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformBallotOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformBallot}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformBallotOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformBallotOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformBallotOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformBitwiseAndOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformBitwiseAndOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformBitwiseAndOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformBitwiseAndOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformBitwiseOrOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformBitwiseOrOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformBitwiseOrOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformBitwiseOrOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformBitwiseXorOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformBitwiseXorOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformBitwiseXorOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformBitwiseXorOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformBroadcastOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformBallot}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformBroadcastOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformBroadcastOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformBroadcastOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformElectOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniform}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformElectOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformElectOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformElectOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformFAddOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformFAddOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformFAddOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformFAddOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformFMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformFMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformFMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformFMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformFMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformFMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformFMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformFMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformFMulOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformFMulOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformFMulOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformFMulOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformIAddOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformIAddOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformIAddOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformIAddOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformIMulOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformIMulOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformIMulOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformIMulOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformLogicalAndOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformLogicalAndOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformLogicalAndOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformLogicalAndOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformLogicalOrOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformLogicalOrOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformLogicalOrOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformLogicalOrOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformLogicalXorOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformLogicalXorOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformLogicalXorOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformLogicalXorOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformSMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformSMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformSMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformSMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformSMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformSMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformSMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformSMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformShuffleDownOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformShuffleRelative}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformShuffleDownOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformShuffleDownOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformShuffleDownOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformShuffleOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformShuffle}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformShuffleOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformShuffleOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformShuffleOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformShuffleUpOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformShuffleRelative}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformShuffleUpOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformShuffleUpOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformShuffleUpOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformShuffleXorOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformShuffle}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformShuffleXorOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformShuffleXorOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformShuffleXorOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformUMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformUMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformUMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformUMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupNonUniformUMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::GroupNonUniformArithmetic, ::mlir::spirv::Capability::GroupNonUniformClustered, ::mlir::spirv::Capability::GroupNonUniformPartitionedNV}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupNonUniformUMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformUMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_3)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_3; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupNonUniformUMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupSMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Groups}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupSMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupSMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupSMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupSMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Groups}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupSMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupSMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupSMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupUMaxOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Groups}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupUMaxOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupUMaxOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupUMaxOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> GroupUMinOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Groups}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> GroupUMinOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupUMinOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getExecutionScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  {
    auto tblgen_attrVal = this->getGroupOperation();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> GroupUMinOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> IAddCarryOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> IAddCarryOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> IAddCarryOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> IAddCarryOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> IAddOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> IAddOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> IAddOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> IAddOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> IEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> IEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> IEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> IEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> IMulOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> IMulOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> IMulOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> IMulOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> INTELConvertBF16ToFOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Bfloat16ConversionINTEL}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> INTELConvertBF16ToFOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_INTEL_bfloat16_conversion}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELConvertBF16ToFOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELConvertBF16ToFOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> INTELConvertFToBF16Op::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Bfloat16ConversionINTEL}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> INTELConvertFToBF16Op::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_INTEL_bfloat16_conversion}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELConvertFToBF16Op::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELConvertFToBF16Op::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> INTELJointMatrixLoadOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::JointMatrixINTEL}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> INTELJointMatrixLoadOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_INTEL_joint_matrix}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELJointMatrixLoadOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELJointMatrixLoadOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> INTELJointMatrixMadOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::JointMatrixINTEL}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> INTELJointMatrixMadOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_INTEL_joint_matrix}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELJointMatrixMadOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELJointMatrixMadOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> INTELJointMatrixStoreOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::JointMatrixINTEL}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  {
    auto tblgen_attrVal = this->getScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> INTELJointMatrixStoreOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_INTEL_joint_matrix}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELJointMatrixStoreOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELJointMatrixStoreOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> INTELJointMatrixWorkItemLengthOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::JointMatrixINTEL}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> INTELJointMatrixWorkItemLengthOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_INTEL_joint_matrix}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELJointMatrixWorkItemLengthOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELJointMatrixWorkItemLengthOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> INTELSubgroupBlockReadOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::SubgroupBufferBlockIOINTEL}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> INTELSubgroupBlockReadOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_INTEL_subgroups}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELSubgroupBlockReadOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELSubgroupBlockReadOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> INTELSubgroupBlockWriteOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::SubgroupBufferBlockIOINTEL}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> INTELSubgroupBlockWriteOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_INTEL_subgroups}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELSubgroupBlockWriteOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INTELSubgroupBlockWriteOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> INotEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> INotEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INotEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> INotEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ISubBorrowOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ISubBorrowOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ISubBorrowOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ISubBorrowOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ISubOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ISubOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ISubOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ISubOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ImageDrefGatherOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Shader}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ImageDrefGatherOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ImageDrefGatherOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ImageDrefGatherOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ImageOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ImageOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ImageOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ImageOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ImageQuerySizeOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::ImageQuery, ::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ImageQuerySizeOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ImageQuerySizeOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ImageQuerySizeOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> InBoundsPtrAccessChainOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Addresses}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> InBoundsPtrAccessChainOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> InBoundsPtrAccessChainOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> InBoundsPtrAccessChainOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> IsInfOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> IsInfOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> IsInfOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> IsInfOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> IsNanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> IsNanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> IsNanOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> IsNanOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> KHRAssumeTrueOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::ExpectAssumeKHR}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> KHRAssumeTrueOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_KHR_expect_assume}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> KHRAssumeTrueOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> KHRAssumeTrueOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> KHRCooperativeMatrixLengthOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::CooperativeMatrixKHR}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> KHRCooperativeMatrixLengthOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_KHR_cooperative_matrix}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> KHRCooperativeMatrixLengthOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> KHRCooperativeMatrixLengthOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> KHRCooperativeMatrixLoadOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::CooperativeMatrixKHR}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> KHRCooperativeMatrixLoadOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_KHR_cooperative_matrix}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> KHRCooperativeMatrixLoadOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> KHRCooperativeMatrixLoadOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> KHRCooperativeMatrixMulAddOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::CooperativeMatrixKHR}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> KHRCooperativeMatrixMulAddOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_KHR_cooperative_matrix}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> KHRCooperativeMatrixMulAddOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> KHRCooperativeMatrixMulAddOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> KHRCooperativeMatrixStoreOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::CooperativeMatrixKHR}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> KHRCooperativeMatrixStoreOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_KHR_cooperative_matrix}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> KHRCooperativeMatrixStoreOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> KHRCooperativeMatrixStoreOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> KHRSubgroupBallotOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::SubgroupBallotKHR}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> KHRSubgroupBallotOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Extension exts[] = {::mlir::spirv::Extension::SPV_KHR_shader_ballot}; ArrayRef<::mlir::spirv::Extension> ref(exts, std::size(exts));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> KHRSubgroupBallotOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> KHRSubgroupBallotOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> LoadOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> LoadOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LoadOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LoadOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> LogicalAndOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> LogicalAndOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LogicalAndOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LogicalAndOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> LogicalEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> LogicalEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LogicalEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LogicalEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> LogicalNotEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> LogicalNotEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LogicalNotEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LogicalNotEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> LogicalNotOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> LogicalNotOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LogicalNotOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LogicalNotOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> LogicalOrOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> LogicalOrOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LogicalOrOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LogicalOrOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> LoopOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::LoopControl tblgen_attrVal = this->getLoopControl() & static_cast<::mlir::spirv::LoopControl>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> LoopOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::LoopControl tblgen_attrVal = this->getLoopControl() & static_cast<::mlir::spirv::LoopControl>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LoopOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::LoopControl tblgen_attrVal = this->getLoopControl() & static_cast<::mlir::spirv::LoopControl>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> LoopOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> MatrixTimesMatrixOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Matrix}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> MatrixTimesMatrixOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> MatrixTimesMatrixOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> MatrixTimesMatrixOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> MatrixTimesScalarOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Matrix}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> MatrixTimesScalarOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> MatrixTimesScalarOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> MatrixTimesScalarOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> MemoryBarrierOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getMemorySemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> MemoryBarrierOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getMemorySemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> MemoryBarrierOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  {
    auto tblgen_attrVal = this->getMemoryScope();
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  for (unsigned i = 0; i < std::numeric_limits<uint32_t>::digits; ++i) {
    ::mlir::spirv::MemorySemantics tblgen_attrVal = this->getMemorySemantics() & static_cast<::mlir::spirv::MemorySemantics>(1 << i);
    if (static_cast<uint32_t>(tblgen_attrVal) == 0) continue;
    auto tblgen_instance = ::mlir::spirv::getMinVersion(tblgen_attrVal);
    if (tblgen_instance) { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, *tblgen_instance)); } else { tblgen_overall = *tblgen_instance; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> MemoryBarrierOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> MergeOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> MergeOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> MergeOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> MergeOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ModuleOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getAddressingModel();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getMemoryModel();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ModuleOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getAddressingModel();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  {
    auto tblgen_attrVal = this->getMemoryModel();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ModuleOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ModuleOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> NotOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> NotOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> NotOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> NotOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> OrderedOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> OrderedOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> OrderedOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> OrderedOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> PtrAccessChainOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Addresses, ::mlir::spirv::Capability::PhysicalStorageBufferAddresses, ::mlir::spirv::Capability::VariablePointers, ::mlir::spirv::Capability::VariablePointersStorageBuffer}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> PtrAccessChainOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> PtrAccessChainOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> PtrAccessChainOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> PtrCastToGenericOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> PtrCastToGenericOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> PtrCastToGenericOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> PtrCastToGenericOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ReferenceOfOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ReferenceOfOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ReferenceOfOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ReferenceOfOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ReturnOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ReturnOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ReturnOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ReturnOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ReturnValueOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ReturnValueOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ReturnValueOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ReturnValueOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SConvertOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SConvertOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SConvertOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SConvertOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SDivOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SDivOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SDivOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SDivOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SGreaterThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SGreaterThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SGreaterThanEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SGreaterThanEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SGreaterThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SGreaterThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SGreaterThanOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SGreaterThanOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SLessThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SLessThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SLessThanEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SLessThanEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SLessThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SLessThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SLessThanOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SLessThanOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SModOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SModOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SModOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SModOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SMulExtendedOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SMulExtendedOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SMulExtendedOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SMulExtendedOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SNegateOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SNegateOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SNegateOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SNegateOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SRemOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SRemOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SRemOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SRemOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SelectionOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SelectionOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SelectionOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SelectionOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ShiftLeftLogicalOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ShiftLeftLogicalOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ShiftLeftLogicalOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ShiftLeftLogicalOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ShiftRightArithmeticOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ShiftRightArithmeticOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ShiftRightArithmeticOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ShiftRightArithmeticOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ShiftRightLogicalOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ShiftRightLogicalOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ShiftRightLogicalOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ShiftRightLogicalOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SpecConstantCompositeOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SpecConstantCompositeOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SpecConstantCompositeOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SpecConstantCompositeOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SpecConstantOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SpecConstantOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SpecConstantOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SpecConstantOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> SpecConstantOperationOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> SpecConstantOperationOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SpecConstantOperationOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> SpecConstantOperationOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> StoreOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> StoreOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> StoreOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> StoreOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> TransposeOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Matrix}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> TransposeOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> TransposeOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> TransposeOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> UConvertOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> UConvertOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UConvertOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UConvertOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> UDivOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> UDivOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UDivOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UDivOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> UGreaterThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> UGreaterThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UGreaterThanEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UGreaterThanEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> UGreaterThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> UGreaterThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UGreaterThanOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UGreaterThanOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ULessThanEqualOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ULessThanEqualOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ULessThanEqualOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ULessThanEqualOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> ULessThanOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> ULessThanOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ULessThanOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> ULessThanOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> UModOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> UModOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UModOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UModOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> UMulExtendedOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> UMulExtendedOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UMulExtendedOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UMulExtendedOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> UndefOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> UndefOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UndefOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UndefOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> UnorderedOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    static const ::mlir::spirv::Capability caps[] = {::mlir::spirv::Capability::Kernel}; ArrayRef<::mlir::spirv::Capability> ref(caps, std::size(caps));
    tblgen_overall.emplace_back(ref);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> UnorderedOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UnorderedOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UnorderedOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> UnreachableOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> UnreachableOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UnreachableOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> UnreachableOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> VariableOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getStorageClass();
    auto tblgen_instance = ::mlir::spirv::getCapabilities(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> VariableOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  {
    auto tblgen_attrVal = this->getStorageClass();
    auto tblgen_instance = ::mlir::spirv::getExtensions(tblgen_attrVal);
    if (tblgen_instance) tblgen_overall.emplace_back(*tblgen_instance);
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> VariableOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> VariableOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> VectorExtractDynamicOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> VectorExtractDynamicOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> VectorExtractDynamicOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> VectorExtractDynamicOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> VectorInsertDynamicOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> VectorInsertDynamicOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> VectorInsertDynamicOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> VectorInsertDynamicOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> VectorShuffleOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> VectorShuffleOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> VectorShuffleOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> VectorShuffleOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> VectorTimesScalarOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> VectorTimesScalarOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> VectorTimesScalarOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> VectorTimesScalarOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> YieldOp::getCapabilities() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Capability>, 1> tblgen_overall = {};
  return tblgen_overall;
}
::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> YieldOp::getExtensions() {
  ::llvm::SmallVector<::llvm::ArrayRef<::mlir::spirv::Extension>, 1> tblgen_overall = {};
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> YieldOp::getMinVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::max(*tblgen_overall, ::mlir::spirv::Version::V_1_0)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_0; }};
  }
  return tblgen_overall;
}
std::optional<::mlir::spirv::Version> YieldOp::getMaxVersion() {
  std::optional<::mlir::spirv::Version> tblgen_overall = ::std::nullopt;
  {
    
    { if (tblgen_overall) { tblgen_overall = static_cast<::mlir::spirv::Version>(std::min(*tblgen_overall, ::mlir::spirv::Version::V_1_6)); } else { tblgen_overall = ::mlir::spirv::Version::V_1_6; }};
  }
  return tblgen_overall;
}
