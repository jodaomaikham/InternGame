#include "DynamicObject.h"
#include <iostream>

using namespace std;

void DynamicObject::move(int& Pos_x, int& Pos_y) {
	Pos_x++;
	Pos_y++;
	cout << this->getname() << " " << " After move" <<" " << Pos_x << " " << Pos_y << endl;
}