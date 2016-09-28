// static vs automatic storage
#include <iostream>
using namespace std;

int x;			// static storage - automatically initialized to zero

int main()
{
	static int y;		// automatic storage - undetermined value unless declared as static
	cout << x << '\n';
	cout << y << '\n';
	getchar();
	return 0;
}