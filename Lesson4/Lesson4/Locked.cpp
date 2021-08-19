#include"Locked.h"
#include"Closed.h"
#include<iostream>

using namespace std;

void Locked::open(Door* door)
{
	cout << "-THE DOOR IS LOCKED YOU CANNOT OPEN IT " << endl;
}
void Locked::close(Door* door)
{
	cout << "THE DOOR IS LOCKED AND IT ALREADY CLOSED " << endl;
}
void Locked::unlock(Door* door)
{
	cout << "*****NOW THE DOOR IS UNLOCKED*****"<< endl;
	door->setState(new Closed);
}
void Locked::lock(Door* door)
{
	cout << "THE DOOR IS ALREADY LOCKED" << endl;
}