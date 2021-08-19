#include"Closed.h"
#include"Openned.h"
#include<iostream>

using namespace std;

void Openned::open(Door* door)
{
	cout << "THE DOOR IS ALREADY OPENNED"<< endl;
}
void Openned::close(Door* door)
{
	cout << "*****NOW THE DOOR IS CLOSED*****";
	cout << endl;
	door->setState(new Closed);
}
void Openned::unlock(Door* door)
{
	cout << "THE DOOR IS OPENNED IT ALREADY UNLOCKED" << endl;
}
void Openned::lock(Door* door)
{
	cout << "THE DOOR IS OPENNED YOU CANNOT LOCK IT"<<endl;
}