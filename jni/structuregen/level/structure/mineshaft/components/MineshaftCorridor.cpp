#include "mcpe/level/structure/mineshaft/components/MineshaftCorridor.h"

#include "mcpe/level/block/Block.h"

void MineshaftCorridor::genMineshaftCorridor(BlockSource *region, Random &random, const BoundingBox &bounds) {
	generateBox(region, bounds, 0, 0, 0, 5, 10, 5, { Block::mGrass->blockId, 0 }, { Block::mGrass->blockId, 0 }, false);
}