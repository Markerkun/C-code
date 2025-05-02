#include "Point.h"
#include <iostream>
using namespace std;

int main()
{
	Point p1(3, 4);
	Point p2(5, 6);
	Point p3;

	p1.Print();
	p2.Print();
	++p1;
	p1.Print();
	--p1;
	p1.Print();
    if (p1 > p2)
    {
		cout << "Point 1 is further from (0,0) than point 2\n";
	}
	else
	{
		cout << "Point 2 is further from (0,0) than point 1\n";
	}
	++p1;
	++p1;
	++p1;
	!p1;
	p1.Print();
	if (p1 > p2)
    {
		cout << "Point 1 is further from (0,0) than point 2\n";
	}
	else
	{
		cout << "Point 2 is further from (0,0) than point 1\n";
	}
}
