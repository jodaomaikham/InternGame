#pragma once
#include "DynamicObject.h"
#include<iostream>
#include<string>
using namespace std;

class Motorbike : public DynamicObject
{
public:
    Motorbike();
    Motorbike(string id, string name, int Pos_x, int Pos_y);
    ~Motorbike();
};