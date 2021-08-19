#include "Door.h"
#include "Locked.h"
#include "Closed.h"
#include <iostream>
using namespace std;

Door::Door() : CurrentState (new Locked)  {}
	
Door::~Door() {
	delete CurrentState;
}
void Door::setState(StateBase* state) {
	CurrentState = state;
}
void Door::lock() 
{
	CurrentState-> lock(this);
}
void Door::unlock()
{
	CurrentState-> unlock(this);
}
void Door::close()
{
	CurrentState-> close(this);
}
void Door::open()
{
	CurrentState-> open(this);
}