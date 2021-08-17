#pragma once
#include<iostream>
#include<string>
using namespace std;

class BaseObject
{
protected:
	string mID;
	string mName;
	int mPos_x = 0;
	int mPos_y = 0;

public:
	BaseObject();
	BaseObject(string mID, string mName, int mPos_x, int mPos_y);
	~BaseObject();
	
	string getid();
	string getname();
	int getPosx();
	int getPosy();

	virtual void move(int& Pos_x, int& Pos_y);
	void printPosition();

};