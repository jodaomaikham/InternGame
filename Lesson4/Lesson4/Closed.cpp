#include"Locked.h"
#include"Closed.h"
#include"Openned.h"
#include<iostream>

using namespace std;

void Closed::open(Door* door)
{
	cout << "*****NOW THE DOOR IS OPEN*****" << endl;
	door->setState(new Openned);
}
void Closed::close(Door* door)
{
	cout << "THE DOOR IS ALREADY CLOSED " << endl;
}
void Closed::unlock(Door* door)
{
	cout << "THE DOOR IS OPEN IT ALREADY UNLOCK"<<endl;
}
void Closed::lock(Door* door)
{
	cout << "*****NOW THE DOOR IS LOCK*****" << endl;
	door->setState(new Locked);
}