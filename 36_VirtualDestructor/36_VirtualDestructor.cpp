#include <iostream>

using namespace std;

// something
class Pizza
{
public:
	virtual void CreatePizza() = 0;
};

class Souse
{
public:
	virtual void CreateSouse() = 0;
};

class MilanPizza : public Pizza
{
public:
	void CreatePizza() override
	{
		cout << "Milan Pizza" << endl;
	}
};

class GreecePizza : public Pizza
{
public:
	void CreatePizza() override
	{
		cout << "Greece Pizza" << endl;
	}
};

class MilanSouse : public Souse
{
public:
	void CreateSouse() override
	{
		cout << "Milan Souse" << endl;
	}
};

class GreeceSouse : public Souse
{
public:
	void CreateSouse() override
	{
		cout << "Greece Souse" << endl;
	}
};

class Factory
{
public:
	virtual Pizza* CreatePizza() = 0;
	virtual Souse* CreateSouse() = 0;

};
class MilanFactory : public Factory
{

	Pizza* CreatePizza()
	{
		return new MilanPizza();
	}
	Souse* CreateSouse()
	{
		return new MilanSouse();
	}
};

class GreeceFactory : public Factory
{

	Pizza* CreatePizza()
	{
		return new GreecePizza();
	}
	Souse* CreateSouse()
	{
		return new GreeceSouse();
	}
};




void main()
{
	Factory* factory = nullptr;
	int choice;

	do
	{
		cout << "1. Milan" << endl;
		cout << "2. Greece" << endl;
		cout << "3. Exit" << endl;
		cout << "Enter your choice: ";
		cin >> choice;

		Pizza* pizza1 = nullptr;
		Souse* souse1 = nullptr;

		switch (choice)
		{
		case 1:
			factory = new MilanFactory();
			pizza1 = factory->CreatePizza();
			souse1 = factory->CreateSouse();
			pizza1->CreatePizza();
			souse1->CreateSouse();
			break;
		case 2:
			factory = new GreeceFactory();
			pizza1 = factory->CreatePizza();
			souse1 = factory->CreateSouse();
			pizza1->CreatePizza();
			souse1->CreateSouse();
			break;
		case 3:
			cout << "Exiting..." << endl;
			return;
		default:
			cout << "Invalid choice" << endl;
			continue;
		}
	} while (choice != 3);
}
