#pragma once

#include "../StructurePiece.h"
class BoundingBox;
class BlockSource;
class CompoundTag;
class Random;

class DesertPyramidPiece : public StructurePiece {
public:
	DesertPyramidPiece(Random&, int, int);

	virtual ~DesertPyramidPiece();
	virtual void postProcess(BlockSource*, Random&, const BoundingBox&);
	virtual void addAdditionalSaveData(CompoundTag&);
	virtual void readAdditionalSaveData(CompoundTag&);

	//Custom functions
	void genPyramidMineshaftCorridor(BlockSource*, Random&, const BoundingBox&);
};