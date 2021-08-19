#pragma once
#include <iostream>

class Door;
class StateBase 
{
public:
	virtual void open(Door* door) = 0;
	virtual void close(Door * door) = 0;
	virtual void unlock(Door * door) = 0;
	virtual void lock(Door * door) = 0;
};
