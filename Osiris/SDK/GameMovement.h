#pragma once

#include "VirtualMethod.h"

class Entity;
class MoveData;

class GameMovement {
public:
    VIRTUAL_METHOD_V(void, processMovement, 1, (Entity* localPlayer, MoveData* moveData), (this, localPlayer, moveData))
    VIRTUAL_METHOD(Vector&, getPlayerViewOffset, 8, (bool ducked), (this, ducked))
};
