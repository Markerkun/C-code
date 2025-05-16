#include "Vector.h"
#include <iostream>
#include <Windows.h>
void SetPos(int x, int y)
{
	COORD C;
	C.X = x;
	C.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), C);
}
Vector::Vector() : points(nullptr), countPoint(0) {};
void Vector::Print()
{
	for (int i = 0; i < countPoint; i++)
	{
		points[i].Print();
	}
}
void Vector::AddPoint(Point p)
{
	Point* temp = new Point[countPoint + 1];
	for (int i = 0; i < countPoint; i++)
	{
		temp[i] = points[i];
	}
	temp[countPoint] = p;
	delete[] points;
	points = temp;
	countPoint++;
}
void Vector::gotoxy()
{
	system("cls");
	for (int i = 0; i < countPoint; i++)
	{
		SetPos(points[i].getx(), points[i].gety());
		std::cout << "*";
	}
}

