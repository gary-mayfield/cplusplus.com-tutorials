// example: class constructor
#include <iostream>
using namespace std;

class Rectangle
{
	int width, height;
public:
	Rectangle(int, int);
	int area() { return (width * height); }
};

Rectangle::Rectangle(int a, int b)
{
	width = a;
	height = b;
}

int main()
{
	Rectangle rect(3, 4);
	Rectangle rectb(5, 6);
	cout << "Rect area: " << rect.area() << endl;
	cout << "Rectb area: " << rectb.area() << endl;

	getchar();
	return 0;
}