// inner block scopes
#include <iostream>
using namespace std;

int main()
{
	int x = 10;
	int y = 20;
	{
		int x;		// inner scope
		x = 50;		// sets value to inner x
		y = 50;		// sets value to (outer) y
		cout << "inner block: \n";
		cout << "x: " << x << '\n';
		cout << "y: " << y << '\n';
	}
	cout << "outer block: \n";
	cout << "x: " << x << '\n';
	cout << "y: " << y << '\n';

	getchar();
	return 0;
}