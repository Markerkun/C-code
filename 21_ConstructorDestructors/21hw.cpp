#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

class Student
{
	string name;
	short age;
	int* marks;
	int markCount;
	float average;
	void SetAverageMark()
	{
		float sum = 0;
		for (int i = 0; i < markCount; i++)
		{
			sum += marks[i];
		}
		average = sum / markCount;
	}
	void Delete()
	{
		if (marks != nullptr)
			delete[] marks;
	}
public:
	Student()
	{
		name = "noname";
		age = 0;
		marks = nullptr;
		markCount = 0;
		average = 0;
	}
	Student(string name, int age)
	{
		this->name = name;
		this->age = age;
		marks = nullptr;
		markCount = 0;
		average = 0;
	}
	void Print()
	{
		cout << "Name:" << name << endl;
		cout << "Age: " << age << endl;
		cout << "Marks: " << endl;
		for (int i = 0; i < markCount; i++)
		{
			cout << marks[i] << " ";
		}
		cout << endl << "Amount of marks: " << markCount << endl;
		cout << "Average: " << average << endl;
	}
	void AddMark(int mark)
	{
		markCount++;
		int* temp = new int[markCount];
		for (int i = 0; i < markCount - 1; i++)
		{
			temp[i] = marks[i];
		}
		temp[markCount - 1] = mark;
		Delete();
		marks = temp;
		SetAverageMark();
	}
	void SaveToFile(const string filename)
	{
		ofstream tof(filename, ios_base::app);
		if (!tof)
		{
			cout << "Can't open file\n";
			return;
		}
		tof << name << '\n' << age << '\n' << markCount << '\n' << average << '\n';
		for (int i = 0; i < markCount; i++)
		{
			tof << marks[i] << "\n";
		}
		tof.close();
		cout << "Successfully added!" << endl;
	}
	void ShowFromFile(const string filename)
	{
		ifstream fromf(filename);
		if (!fromf)
		{
			cout << "Error with opening file" << endl; return;
		}
		string name;
		short age;
		int markCount;
		while (getline(fromf, name))
		{
			fromf >> age >> markCount;
			fromf.ignore();

			Student s(name, age);
			for (int i = 0; i < markCount; i++)
			{
				int m;
				fromf >> m;
				s.AddMark(m);
			}
			fromf.ignore();
			cout << "-------------------------\n";
			s.Print();
		}
		fromf.close();
	}


	~Student()
	{
		cout << "Destructor" << name << endl;
		if (marks != nullptr)
			delete[] marks;
	}
};

void main()
{
	const string file = "Students.txt";
	Student s("Oleh", 18);
	s.AddMark(12);
	s.AddMark(10);
	s.AddMark(9);
	s.Print();
	s.SaveToFile(file);
	s.ShowFromFile(file);
}