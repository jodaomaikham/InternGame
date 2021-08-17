#include"BaseObject.h"
#include"StaticObject.h"
#include"Tree.h"
#include"House.h"
#include"DynamicObject.h"
#include"Motorbike.h"
#include"Car.h"
#include<crtdbg.h>
#include<list>


int main() {
	int count = 0;
	list<BaseObject*> listObj;

	BaseObject* tree = new Tree("Tree01", "Maple", 0, 1);
	listObj.push_back(tree);
	BaseObject* house = new House("House02", "Cottage", 2, 3);
	listObj.push_back(house);
	BaseObject* car = new Car("911", "Porsche", 4, 5);
	listObj.push_back(car);
	BaseObject* motorbike = new Motorbike("Z1000", "BMW", 6, 7);
	listObj.push_back(motorbike);

	cout << "-----ID and Name of object on list-----" << endl;
	for (auto i : listObj) {
		std::string name = i->getname();
		std::string id = i->getid();
		std::cout << id << " : " << name << std::endl;
	}
	cout << "\n-----Position of object on list-----";
	for (auto i : listObj) {
		i->printPosition();
	}
	cout << "\n-----Object move-----\n";
	
	int x, y;
	for (auto i : listObj) {
		x = i->getPosx();
		y = i->getPosy();
		i->move(x, y);
	}
	
	
	for (auto i : listObj)
	{
		delete i;
	}
	listObj.clear();
	
	
}