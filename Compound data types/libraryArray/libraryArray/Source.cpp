// container library array
#include <iostream>
#include <array>
using namespace std;

int main()
{
	array<int, 3> myArray{ 10, 20, 30 };

	for (int i = 0; i < myArray.size(); ++i)
		++myArray[i];

	for (int elem : myArray)
		cout << elem << '\n';

	getchar();
	return 0;
}