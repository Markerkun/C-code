#include "Point.h"
#include "Vector.h"
#include <iostream>
using namespace std;

int main()
{
	Point p1(1, 1);
	Point p2(15, 21);
	p1.Print();
	p2.Print();
	++p1;
	p1.Print();
	--p2;
	p2.Print();
	if (p1 > p2)
	{
		cout << "p1 is greater than p2" << endl;
	}
	else
	{
		cout << "p1 is less than p2" << endl;
	}
	if (p1 < p2)
	{
		cout << "p1 is less than p2" << endl;
	}
	else
	{
		cout << "p1 is greater than p2" << endl;
	}
	!p1;
	p1.Print();
	Vector v;
	v.AddPoint(p1);
	v.AddPoint(p2);
	v.Print();
	v.gotoxy();
}
