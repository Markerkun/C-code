//#include <iostream>
//using namespace std;
//
//class Student {
//protected:
//	string name;
//	string surname;
//	int group;
//	float average;
//	bool happiness;
//public:
//	Student() :name("no name"), surname("no surname"), group(0) {}
//	Student(string name, string s, int g, float a, bool h): name(name), surname(s), group(g), average(a), happiness(h) {}
//	void Print()
//	{
//		cout << "Name : " << name << endl;
//		cout << "Surname : " << surname << endl;
//		cout << "Group : " << group << endl;
//		cout << "Average : " << average << endl;
//		cout << "Happy? : " << happiness << endl;
//	}
//};
//class Aspirant : public Student
//{
//	string theme;
//	string work;
//	int pages;
//public:
//	Aspirant() :work("Work is missing"), theme("No theme"), pages(0), Student() {}
//	Aspirant(string w, string t, int p, string n, string s, int g, float a, bool h) :work(w), theme(t), pages(p), Student(n, s, g, a, h) {}
//	void Print()
//	{
//		Student::Print();
//		cout << "Theme : " << theme << endl;
//		cout << "Work : " << work << endl;
//		cout << "Pages : " << pages << endl;
//	}
//	void AddPages(int p)
//	{
//		pages += p;
//	}
//};
//
//int main()
//{
//	Student s("Name", "Surname", 1, 4.5, true);
//	s.Print();
//	cout << endl;
//	Aspirant a("Work", "Theme", 10, "Name", "Surname", 1, 4.5, true);
//	a.Print();
//	a.AddPages(5);
//}
