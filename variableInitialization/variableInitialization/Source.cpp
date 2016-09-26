// initialization of variables

#include <iostream>
using namespace std;

int main()
{
	int a = 5;		// c-like initialization
	int b(3);		// constructor initialization
	int c{ 2 };		// uniform initialization

	int result;		// initial value undetermined

	a = a + b;
	result = a - c;
	cout << result;

	getchar();
	return 0;
}