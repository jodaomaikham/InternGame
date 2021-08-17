#pragma once
#include "StaticObject.h"
#include<iostream>
#include<string>
using namespace std;

class House :
    public StaticObject
{
public:
    House();
    House(string id, string name, int pos_x, int posY);
    ~House();
};
