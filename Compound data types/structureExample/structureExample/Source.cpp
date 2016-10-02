// example about structures
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t
{
	string title;
	int year;
} mine, yours;

void printMovie(movies_t movie);

int main()
{
	string mystr;

	mine.title = "2001 A Space Odyssey";
	mine.year = 1968;

	cout << "Enter title: ";
	getline(cin, yours.title);
	cout << "Enter year: ";
	getline(cin, mystr);
	stringstream(mystr) >> yours.year;

	cout << "\nMy favourite movie is:\n ";
	printMovie(mine);
	cout << "And yours is:\n ";
	printMovie(yours);
	getchar();
	return 0;
}

void printMovie(movies_t movie)
{
	cout << movie.title;
	cout << " (" << movie.year << ")\n";
}