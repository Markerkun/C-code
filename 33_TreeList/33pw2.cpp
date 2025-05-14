#include <iostream>
using namespace std;

class Passport {
protected:
	string country_name;	
	string name;
	string surname;
	string gender;
	string date_of_birth;
	string date_of_issue;
public:
	Passport() :country_name("None"), name("None"), surname("None"), gender("None"), date_of_birth("None"), date_of_issue("None") {}
	Passport(string n, string s, string c, string g, string b, string i) :country_name(c), name(n), surname(s), gender(g), date_of_birth(b), date_of_issue(i) {}
	void print()
	{
		cout << "Country : " << country_name << endl;
		cout << "Name : " << name << endl;
		cout << "Surname : " << surname << endl;
		cout << "Gender : " << gender << endl;
		cout << "Date of birth : " << date_of_birth << endl;
		cout << "Date of issue : " << date_of_issue << endl;
	}
};
class ForeignPassport : public Passport
{
	string visas;
	int fpassnum;
public:
	ForeignPassport() :visas("No visa"), fpassnum(0){}
	ForeignPassport(string v, int num, string n, string s, string c, string g, string b, string i) :visas(v), fpassnum(num), Passport(n, s, c, g, b, i){}
	void Print()
	{
		Passport::print();
		cout << "Visas : " << visas << endl;
		cout << "Foreign passport number : " << fpassnum << endl;
	}
	void AddVisa(int p)
	{
		visas += p;
	}
	void ChangePassportNumber(int p)
	{
		fpassnum = p;
	}
};

int main()
{
	
}
