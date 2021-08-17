#include "BaseObject.h"
#include <string>
#include <iostream>
using namespace std;

BaseObject::BaseObject() {}
BaseObject::BaseObject(string mID, string mName, int mPos_x, int mPos_y)
	: mID(mID),mName(mName),mPos_x(mPos_x),mPos_y(mPos_y){
	
}
BaseObject::~BaseObject() {
}

string BaseObject::getid() {
	return this->mID;
}
string BaseObject::getname() {
	return this->mName;
}
int BaseObject::getPosx() {
	return this->mPos_x;
}
int BaseObject::getPosy() {
	return this->mPos_y;
}

void BaseObject::move(int& Pos_x, int& Pos_y) {}
void BaseObject::printPosition() {
	std::cout << this->getname() << ": " << this->mPos_x << " " << this->mPos_y << std::endl;
}

