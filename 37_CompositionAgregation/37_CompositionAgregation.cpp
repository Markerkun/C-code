#include <iostream>
using namespace std;
#include <string>

class Body
{
	string color;
public:
	Body() : color("None") {}
	Body(string c) : color(c) {}
	string getColor()const { return color; }
};
class Headlight
{
	string color;
public:
	Headlight() : color("None") {}
	Headlight(string c) : color(c) {}
	string getColor()const { return color; }
};
class Wheel
{
	int size;
public:
	Wheel() : size(0) {}
	Wheel(int s) : size(s) {}
	int getSize()const { return size; }
};
class Door
{
	string color;
public:
	Door() : color("None") {}
	Door(string c) : color(c) {}
	string getColor() const { return color; }
};
class Engine
{
	float V;
public:
	Engine() : V(0) {}
	Engine(float v) : V(v) {}
	float getV()const { return V; }
};


class Driver
{
	string name;
	string surname;
	int age;
	string vehicle;
public:
	Driver(string n, string s, int a, string v) : name(n), surname(s), age(a), vehicle(v) {}
	string getName()const { return name; }
	string getSurname() const { return surname; }
	int getAge()const { return age; }
	string getVehicle()const { return vehicle; }
};

class Car
{
	Engine e;
	Body b;
	Headlight* h;
	int countHL;
	Wheel* w;
	int countW;
	Door* d;
	int countD;

	Driver* dr;
public:
	Car() : e(0), b("None"), h(nullptr), countHL(0), w(nullptr), countW(0), d(nullptr), countD(0), dr(nullptr) {}

	Car(float ce, string cb)
	{
		e = Engine(ce);
		b = Body(cb);
		h = new Headlight[2];
		h[0] = Headlight("yellow");
		h[1] = Headlight("yellow");
		countHL = 2;
		w = new Wheel[4];
		w[0] = Wheel(15);
		w[1] = Wheel(15);
		w[2] = Wheel(15);
		w[3] = Wheel(15);
		countW = 4;
		d = new Door[4];
		d[0] = Door("red");
		d[1] = Door("red");
		d[2] = Door("red");
		d[3] = Door("red");
		countD = 4;
		dr = nullptr;
	}

	Car(float ce, string cb, string name, string surname, int age, string vehicle) : Car(ce, cb)
	{
		dr = new Driver(name, surname, age, vehicle);
	}

	void Print() const
	{
		cout << "Engine: " << e.getV() << endl;
		cout << "Body: " << b.getColor() << endl;
		for (int i = 0; i < countHL; i++)
			cout << "Headlight: " << h[i].getColor() << endl;
		for (int i = 0; i < countW; i++)
			cout << "Wheel: " << w[i].getSize() << endl;
		for (int i = 0; i < countD; i++)
			cout << "Door: " << d[i].getColor() << endl;
		if (dr != nullptr)
		{
			cout << "Driver: " << dr->getName() << " " << dr->getSurname() << ", Age: " << dr->getAge() << ", Vehicle: " << dr->getVehicle() << endl;
		}

	}

	void AggregateDriver(Driver* dr)
	{
		this->dr = dr;
	}

	bool RemoveDriver()
	{
		if (dr != nullptr)
		{
			delete dr;
			dr = nullptr;
			return true;
		}
		return false;
	}

	~Car()
	{
		if (h != nullptr)
			delete[] h;
		if (w != nullptr)
			delete[] w;
		if (d != nullptr)
			delete[] d;
		if (dr != nullptr)
			delete dr;
	}
};




int main()
{
	Car c1(2.0, "red", "John", "Doe", 30, "Car");

	c1.Print();
	Car c2(1.5, "blue");
	c2.Print();
	c2.AggregateDriver(new Driver("Jane", "Smith", 28, "Car"));
	c2.Print();
	c2.RemoveDriver();
	c2.Print();
	Car c3;
	c3.Print();
	c3.AggregateDriver(new Driver("Alice", "Johnson", 25, "Car"));
	c3.Print();
	c3.RemoveDriver();
	c3.Print();
}