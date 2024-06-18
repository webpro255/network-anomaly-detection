/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Interface Definitions                                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

/// Sets the tile ID for this operation.
void ArmSMETileOpInterface::setTileId(mlir::IntegerAttr tileId) {
      return getImpl()->setTileId(getImpl(), getOperation(), tileId);
  }
/// Returns the tile ID assigned to this operation. This will be null before
/// tile allocation.
mlir::IntegerAttr ArmSMETileOpInterface::getTileId() {
      return getImpl()->getTileId(getImpl(), getOperation());
  }
/// The type of tile this operation allocates. Returns none (std::nullopt)
/// if this operation does not allocate a tile.
std::optional<::mlir::arm_sme::ArmSMETileType> ArmSMETileOpInterface::getAllocatedTileType() {
      return getImpl()->getAllocatedTileType(getImpl(), getOperation());
  }
/// Returns the VectorType of the tile used by this operation.
VectorType ArmSMETileOpInterface::getTileType() {
      return getImpl()->getTileType(getImpl(), getOperation());
  }
