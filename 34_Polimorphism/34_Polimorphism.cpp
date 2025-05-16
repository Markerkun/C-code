#include <iostream>
using namespace std;


class Shape
{
protected:
    int S;
	int P;
	int corners;
	int sides;
public:
	Shape() : S(0), P(0), corners(0), sides(0) {}
	Shape(int s, int p, int c, int si) : S(s), P(p), corners(c), sides(si) {}

	virtual int Area() 
	{
		return S;
	}
	virtual int Perimeter()
	{
		return P;
	}
	virtual void Print()
	{
		cout << "Area: " << S << endl;
		cout << "Perimeter: " << P << endl;
		cout << "Corners: " << corners << endl;
		cout << "Sides: " << sides << endl;
	}
};

class Rectangle : public Shape
{
	int a;
	int b;
public:
	Rectangle() : Shape(Area(), Perimeter(), 4, 4), a(0), b(0) {}
	Rectangle(int a, int b) : Shape(Area(), Perimeter(), 4, 4), a(a), b(b) {}

	int Area() override
	{
		return S = a * b;
	}
	int Perimeter() override
	{
		return P = 2 * (a + b);
	}
	void Print()
	{
		cout << "Area: " << S << endl;
		cout << "Perimeter: " << P << endl;
		cout << "Corners: " << corners << endl;
		cout << "Sides: " << sides << endl;
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
	}
};

class Circle : public Shape
{
	int r;
public:
	Circle() : Shape(Area(), Perimeter(), 0, 0), r(0) {}
	Circle(int r) : Shape(Area(), Perimeter(), 0, 1), r(r) {}
	int Area()  override
	{
		return S = 3.14 * r * r;
	}
	int Perimeter() override
	{
		return P = 2 * 3.14 * r;
	}
	void Print()
	{
		cout << "Area: " << S << endl;
		cout << "Perimeter: " << P << endl;
		cout << "Corners: " << corners << endl;
		cout << "Sides: " << sides << endl;
		cout << "r: " << r << endl;
	}
};
class Triangle : public Shape
{
protected:
	int a;
	int b;
	int c;
public:
	Triangle() : Shape(Area(), Perimeter(), 3, 3), a(0), b(0), c(0) {}
	Triangle(int a, int b, int c) : Shape(Area(), Perimeter(), 3, 3), a(a), b(b), c(c) {}
	int Area() override
	{
		return S = (a + b + c) / 2;
	}
	int Perimeter() override
	{
		return P = a + b + c;
	}
	void Print()
	{
		cout << "Area: " << S << endl;
		cout << "Perimeter: " << P << endl;
		cout << "Corners: " << corners << endl;
		cout << "Sides: " << sides << endl;
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
		cout << "c: " << c << endl;
	}
};
class right_triangle : public Triangle
{
public:
	right_triangle() : Triangle(0, 0, 0) {}
	right_triangle(int a, int b, int c) : Triangle(a, b, c) {}
	int Area() override
	{
		return S = (a * b) / 2;
	}
	int Perimeter() override
	{
		return P = a + b + c;
	}
	void Print()
	{
		cout << "Area: " << S << endl;
		cout << "Perimeter: " << P << endl;
		cout << "Corners: " << corners << endl;
		cout << "Sides: " << sides << endl;
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
		cout << "c: " << c << endl;
	}
};

class trapeze : public Shape
{
	int a;
	int b;
	int h;
public:
	trapeze() : Shape(Area(), Perimeter(), 4, 4), a(0), b(0), h(0) {}
	trapeze(int a, int b, int h) : Shape(Area(), Perimeter(), 4, 4), a(a), b(b), h(h) {}
	int Area() override
	{
		return S = ((a + b) * h) / 2;
	}
	int Perimeter() override
	{
		return P = a + b + h;
	}
	void Print()
	{
		cout << "Area: " << S << endl;
		cout << "Perimeter: " << P << endl;
		cout << "Corners: " << corners << endl;
		cout << "Sides: " << sides << endl;
		cout << "a: " << a << endl;
		cout << "b: " << b << endl;
		cout << "h: " << h << endl;
	}
};

void TestShape(Shape* s)
{
	cout << s->Area() << endl;
	cout << s->Perimeter() << endl;
	s->Print();
	cout << "------------------------" << endl;
}

int main()
{
	Shape* s;
	Rectangle r(5, 10);
	Circle c(5);
	Triangle t(3, 4, 5);
	right_triangle rt(3, 4, 5);
	trapeze tr(3, 4, 5);
	s = &r;
	TestShape(s);
	s = &c;
	TestShape(s);
	s = &t;
	TestShape(s);
	s = &rt;
	TestShape(s);
	s = &tr;
	TestShape(s);
	return 0;
}
