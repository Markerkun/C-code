#include <iostream>
#include <Windows.h>
using namespace std;

void SetPos(int x, int y)
{
	COORD C;
	C.X = x;
	C.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), C);
}

void gotoxy( int x, int y)
{
	//system("cls");
	SetPos(x, y);
	cout << "*";
}

struct Point
{
	int x;
	int y;
	Point() :x(0), y(0) {}
	Point( int x, int y) :x(x), y(y) {}
};

class Shape
{
public:
	virtual void Draw() = 0;
};

class line : public Shape
{
	Point p1;
	Point p2;
public:
	line() :p1(0, 0), p2(0, 0) {}
	line(int x1, int y1, int x2, int y2) :p1(x1, y1), p2(x2, y2) {}
	void Draw() override
	{
		gotoxy(p1.x, p1.y);
		gotoxy(p2.x, p2.y);
	}
};

class rectangle : public Shape
{
	Point p;
	int w;
	int h;
public:
	rectangle() :p(0, 0), w(0), h(0) {}
	rectangle(int x, int y, int w, int h) :p(x, y), w(w), h(h) {}
	void Draw() override
	{
		for (int i = 0; i <= h; i++)
		{
			for (int j = 0; j <= w; j++)
			{
				gotoxy(p.x + j, p.y + i);
			}
		}
	}
};

class Polylines : public Shape
{
	Point* points;
	int countPoint;
public:
	Polylines() :points(nullptr), countPoint(0) {};

	void AddPoint(Point p)
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

	void Draw() override
	{
		for (int i = 0; i < countPoint; i++)
		{
			gotoxy(points[i].x, points[i].y);
		}
	}

	~Polylines()
	{	
		if(points != nullptr)
		delete[] points;
	}
};


int main()
{
	line l(1, 1, 10, 10);
	l.Draw();
	Sleep(3000);
	system("cls");
	rectangle r(5, 5, 10, 10);
	r.Draw();
	Sleep(3000);
	system("cls");
	Polylines p;
	p.AddPoint(Point(1, 1));
	p.AddPoint(Point(2, 2));
	p.AddPoint(Point(3, 3));
	p.Draw();
    
}