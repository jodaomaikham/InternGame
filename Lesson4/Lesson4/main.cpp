#include"Door.h"
#include"StateBase.h"
#include <iostream>

using namespace std;

int  main() 
{
	Door* door = new Door();
	int n;
	do {
		
		cout << "\n";
		cout << "*****SET DEFAULT THE DOOR IS LOCKED*****\n\n";
		cout << ".....ACTION LIST.....\n" << endl;
		cout << "1 :  OPEN THE DOOR..." << endl;
		cout << "2 :  CLOSE THE DOOR..." << endl;
		cout << "3 :  UNLOCK THE DOOR..." << endl;
		cout << "4 :  LOCK THE DOOR...\n" << endl;
		cout << ".....ENTER ACTION PERFERRED :";
		cin >> n;
		cout << "\n";
		
		switch (n)
		{
		case 1:door->open(); break;
		case 2:door->close(); break;
		case 3:door->unlock(); break;
		case 4:door->lock(); break;
		default:
			cout << "*****PLEASE ENTER NUMBER 1,2,3,4*****"<<endl;	
			cout << "             TRY AGAIN      \n";
			cout << "----------------------------------------------------\n";
		}
	
	} while (n<=0||n>4);

	delete door;
	return 0;
}
