#pragma once
#include "BaseObject.h"
class DynamicObject : public BaseObject
{
public:
    DynamicObject() {}
    DynamicObject(string id, string name, int Pos_x, int Pos_y) :BaseObject(id, name, Pos_x, Pos_y) {};
    void move(int& Pos_x, int& Pos_y) override;
};
