// my first pointer
#include <iostream>
using namespace std;

int main()
{
	int firstValue, secondValue;
	int * myPointer;

	myPointer = &firstValue;
	*myPointer = 10;
	myPointer = &secondValue;
	*myPointer = 20;
	cout << "firstValue is " << firstValue << '\n';
	cout << "secondValue is " << secondValue << '\n';
	getchar();
	return 0;
}