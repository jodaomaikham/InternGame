#include <stdio.h>
#include <iostream>

using namespace std;
//Referent
void swap1(int& num1, int& num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
//Pointers
void swap2(int* num1, int* num2)
{
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

int main()
{
	int a, b;
	cout << "Enter number to swap" << endl;
	swap1(a,b);
	cin >> a >> b;
	cout << "Before swap" << endl;
	cout << "a :" << a << endl;
	cout << "b :" << b << endl;
	swap2(&a, &b);
	cout << "After swap" << endl;
	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	return 0;
}
