#pragma once
#include "StaticObject.h"
#include<iostream>
#include<string>
using namespace std;

class Tree :
    public StaticObject
{
public:
    Tree();
    Tree(string id, string name, int Pos_x, int Pos_y);
    ~Tree();
};
