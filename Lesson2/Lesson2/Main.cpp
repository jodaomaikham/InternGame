#include<iostream>
#include<stdio.h>
using namespace std;
long long Factorial(long n)
{
	if (n == 0)
		return 1;
	return n * Factorial(n - 1);
}
int main() 
{
	long n;
	cout << "Enter a value: \n";
	cin >> n;
	

	while (n <= 0 || n > 20)
	{
		if (!cin >> n ) {
			cout << "****Please enter number only : ****\n";
			cin.clear();
			cin.ignore(100,'\n');
		}
		else 
			cout << "****The value must be betweem 0 > && <=20 ****\n";
			cout << "Let's try again: \n";
			cin >> n;
	}
	cout << "Factorial of" << " " << n << " " << "is" << " " << Factorial(n);
	return 0;
}