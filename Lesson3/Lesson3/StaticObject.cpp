#include "StaticObject.h"
#include <iostream>

using namespace std;


void StaticObject::move(int& Pos_x, int& pos_y) {
	std::cout <<this->getname()<<" " << " is static Object cannot move!!!\n";
}
