#pragma once
#include "DynamicObject.h"
#include<iostream>
#include<string>
using namespace std;

class Car : public DynamicObject
{
public:
    Car();
    Car(string id, string name, int Pos_x, int Pos_y);
    ~Car();
};