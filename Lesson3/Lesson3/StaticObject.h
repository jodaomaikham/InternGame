#pragma once
#include "BaseObject.h"
class StaticObject :
    public BaseObject
{
public:
    StaticObject() {};
    StaticObject(string id, string name, int Pos_x, int Pos_y) :BaseObject(id, name, Pos_x, Pos_y) {};
    void move(int& Pos_x, int& Pos_y) override;
};
