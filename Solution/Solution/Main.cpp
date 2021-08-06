#include <stdio.h>

void swap(int& num1, int& num2)
{
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}
void swap(int*, int*);
void swap(int* num1, int* num2)
{
	int t = *num1;
	*num1 = *num2;
	*num2 = t;
}
int main()
{
	//Swap by Referent.
	printf("Swap function by Referent\n");
	int a;
	int b;

	printf("Enter first number : \n");
	scanf_s("%d", &a);
	printf("Enter second number : \n");
	scanf_s("%d", &b);
	swap(a, b);
	printf("after swap: \n%d \n%d\n", a, b);

	//swap by Referent using pointers.
	printf(" \nSwap by Referent using pointers\n");
	int x;
	int y;
	printf("Enter first number :\n");
	scanf_s("%d", &x);
	printf("Enter second number : \n");
	scanf_s("%d", &y);
	swap(&x, &y);
	printf("Result swap : \n%d\n%d\n", x, y);
	return 0;
}