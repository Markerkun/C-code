#include <iostream>
using namespace std; 


#pragma region parent classes 
class Animal
{ 
protected:
	string name;
	int age;
	string type;
	int speed;
	float weight;
	string environment;
public:
	
	Animal() : name("Unknown"), age(0), type("Unknown"), speed(0), weight(0.0f), environment("Unknown") {}
	Animal(string n, int a, string t, int s, float w, string e) : name(n), age(a), type(t), speed(s), weight(w), environment(e) {}
	virtual void Move()const
	{
		cout << name << " is moving." << endl;
	}
	virtual void Show()
	{
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Type: " << type << endl;
		cout << "Speed: " << speed << endl;
		cout << "Weight: " << weight << endl;
		cout << "Environment: " << environment << endl;
	}
	virtual void Say()const = 0;
};


class Reptile : public Animal
{
protected:
	string skinType; 
public:
	Reptile() :skinType("None"), Animal() {}
	Reptile(string n, int a, string t, int s, float w, string e, string st ) :skinType(st), Animal(n, a, t, s, w, e) {}
	void Move()const override
	{
		cout << "I am crawling and swimming up to : "  << " m" << endl;
	}
	void Show() override
	{
		Animal::Show();
		cout << "Skin Type: " << skinType << endl;
	}
	void Say()const override
	{
		cout << "Hisss!" << endl;
	}
};
class Fish : public Reptile
{
protected:
	string waterType;
public:
	Fish() :waterType("Freshwater"), Reptile() {}
	Fish(string n, int a, string t, int s, float w, string e, string st, string wt) :waterType(wt), Reptile(n, a, t, s, w, e, st) {}
	void Move()const override
	{
		cout << "I am swimming in the water." << endl;
	}
	void Show() override
	{
		Reptile::Show();
		cout << "Water Type: " << waterType << endl;
	}
	void Say()const override
	{
		cout << "Blub blub!" << endl;
	}
};
class Bird
{
protected:
	string featherColor;
public:
	Bird() : featherColor("Unknown") {}
	Bird(string fc) : featherColor(fc) {}
	virtual void Fly()const
	{
		cout << "I am flying." << endl;
	}
	virtual void Show()const
	{
		cout << "Feather Color: " << featherColor << endl;
	}
	virtual void Say()const = 0;
};
#pragma endregion


#pragma region derived classes
class Sparrow : public Bird
{
protected:
	string beakType;
public:
	Sparrow() : beakType("Short"), Bird() {}
	Sparrow(string fc, string bt) : beakType(bt), Bird(fc) {}
	void Say()const override
	{
		cout << "Chirp chirp!" << endl;
	}
};

class crocodile : public Reptile
{
protected:
	string habitat;
public:
	crocodile() : habitat("River"), Reptile() {}
	crocodile(string n, int a, string t, int s, float w, string e, string st, string h) : habitat(h), Reptile(n, a, t, s, w, e, st) {}
};

class Fugo : public Fish
{
protected:
	string poisonType;
public:
	Fugo() : poisonType("Tetrodotoxin"), Fish() {}
	Fugo(string n, int a, string t, int s, float w, string e, string st, string wt, string pt) : poisonType(pt), Fish(n, a, t, s, w, e, st, wt) {}
};

#pragma endregion

void main()
{
	Sparrow sparrow("Brown", "Short");
	sparrow.Fly();
	sparrow.Show();
	sparrow.Say();
	crocodile croc("Croc", 10, "Reptile", 5, 200.0f, "River", "Scaly", "Swamp");
	croc.Move();
	croc.Show();
	croc.Say();
	Fugo fugo("Fugo", 5, "Fish", 2, 1.5f, "Ocean", "Smooth", "Saltwater", "Tetrodotoxin");
	fugo.Move();
	fugo.Show();
	fugo.Say();


}