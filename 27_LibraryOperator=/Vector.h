#pragma once
#include <iostream>
#include "Point.h"
class Vector

{
	Point* points;
	int countPoint;
public:
	Vector();
	Vector(int countPoint);
	Vector(const Vector& other);
	Vector(Vector&& other);
};

