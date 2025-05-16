#include "Point.h"
class Vector
{
	Point* points;
	int countPoint;
public:
	Vector();
	void AddPoint(Point p);
	void Print();
	void gotoxy();

};

