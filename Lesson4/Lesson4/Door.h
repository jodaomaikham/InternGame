#pragma once
#include"StateBase.h"
#include<iostream>

class Statebase;
class Door
{
protected:
	StateBase* CurrentState;
	
public:
	Door();
	~Door();
	void setState(StateBase * state);
	void open();
	void close();
	void unlock();
	void lock();
	

};