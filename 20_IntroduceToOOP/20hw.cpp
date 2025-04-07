#include <iostream>
#include <fstream>

using namespace std;

struct date
{
	int day;
	int month;
	int year;
};

class Student
{
	string name;
	string surname;
	string patronymic;
	date birthday;
	string phone;
	string town;
	string country;
	string educ_instit;
	string town_educ_instit;
	string country_educ_instit;
	short group;

public:
	void Init()
	{
		cout << "Enter student's name: "; cin >> name;
		cout << "Enter student's surname: "; cin >> surname;
		cout << "Enter student's patronymic: "; cin >> patronymic;
		cout << "Enter student's birthday day, month, year: "; cin >> birthday.day >> birthday.month >> birthday.year;
		cout << "Enter student's phone: "; cin >> phone;
		cout << "Enter student's town: "; cin >> town;
		cout << "Enter student's country: "; cin >> country;
		cout << "Enter student's educ_instit: "; cin >> educ_instit;
		cout << "Enter student's town_educ_instit: "; cin >> town_educ_instit;
		cout << "Enter student's country_educ_instit: "; cin >> country_educ_instit;
		cout << "Enter student's group: "; cin >> group;
	}
	void Show()
	{
		cout << "Student information\n------------------------\n";
		cout << "Name: " << name << '\n';
		cout << "Surname: " << surname << '\n';
		cout << "Patronymic: " << patronymic << '\n';
		cout << "Birthday : " << birthday.day << "/" << birthday.month << "/" << birthday.year << '\n';
		cout << "Phone: " << phone << '\n';
		cout << "Town: " << town << '\n';
		cout << "Country: " << country << '\n';
		cout << "Education instition: " << educ_instit << '\n';
		cout << "Town education instition: " << town_educ_instit << '\n';
		cout << "Country of education instition: " << country_educ_instit << '\n';
		cout << "Group: " << group << '\n';
	}

	void setName(int x)
	{
		this->name = x;
	}
	void setSurname(int x)
	{
		this->surname = x;
	}
	void setPatronymic(int x)
	{
		this->patronymic = x;
	}

	int getx()
	{
		return x;
	}
	int getz()
	{
		return z;
	}
	int gety()
	{
		return y;
	}
};


int main()
{

}