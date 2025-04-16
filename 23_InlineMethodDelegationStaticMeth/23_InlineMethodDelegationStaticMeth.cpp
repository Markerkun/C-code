#include <iostream>
using namespace std;

struct PIB 
{
	string name;
	string surname;
	string lastname;
};

struct Phones
{
	string home;
	string work;
	string mobile;
};

class Abonent
{
	PIB pib;
	Phones phones;
	string info;
	static int Counter;
	
public:
	
	Abonent()
	{

		pib.name = "no name";
		pib.surname = "no surname";
		pib.lastname = "no lastname";
		info = "no info";
		phones.home = "000-000-0000";
		phones.work = "111-111-1111";
		phones.mobile = "222-222-2222";
		Counter++;
		
	}
	Abonent(string name):Abonent()
	{
		pib.name = name;
	}
	Abonent(string name, string surname) :Abonent()
	{
		pib.name = name;
		pib.surname = surname;
	}
	Abonent(string name, string surname, string lastname) :Abonent()
	{
		pib.name = name;
		pib.surname = surname;
		pib.lastname = lastname;
	}
	Abonent(string name, string surname, string lastname, string info) :Abonent()
	{
		pib.name = name;
		pib.surname = surname;
		pib.lastname = lastname;
		this->info = info;
	}
	Abonent(string name, string surname, string lastname, string info, string home) :Abonent(name, surname, lastname, info)
	{
		phones.home = home;
		phones.work = "111-111-1111";
		phones.mobile = "222-222-2222";
	}
	Abonent(string name, string surname, string lastname, string info, string home, string work) :Abonent(name, surname, lastname, info)
	{
		phones.home = home;
		phones.work = work;
		phones.mobile = "222-222-2222";		
	}
	Abonent(string name, string surname, string lastname, string info, string home, string work, string mobile) :Abonent(name, surname, lastname, info)
	{
		phones.home = home;
		phones.work = work;
		phones.mobile = mobile;
	}
	void Show()
	{
		cout << "Name: " << pib.name << endl;
		cout << "Surname: " << pib.surname << endl;
		cout << "Lastname: " << pib.lastname << endl;
		cout << "Home: " << phones.home << endl;
		cout << "Work: " << phones.work << endl;
		cout << "Mobile: " << phones.mobile << endl;
		cout << "Info: " << info << endl;
		cout << "\n";
	}
	~Abonent()
	{
		Counter--;
	}
	string GetName()
	{
		return pib.name;
	}
	string GetSurname()
	{
		return pib.surname;
	}
	string GetLastname()
	{
		return pib.lastname;
	}
	string GetInfo()
	{
		return info;
	}
	string GetHome()
	{
		return phones.home;
	}
	string GetWork()
	{
		return phones.work;
	}
	string GetMobile()
	{
		return phones.mobile;
	}
	static int GetCounter()
	{
		return Counter;
	}
	
};
int Abonent::Counter = 0;
class PhoneBook
{
	Abonent* abonents;
	int AbonentsAmount;
	
public:
	PhoneBook()
	{
		abonents = nullptr;
		AbonentsAmount = 0;
	}
	void AddAbonent(Abonent& ab)
	{
		AbonentsAmount++;
		Abonent* temp = new Abonent[AbonentsAmount];
		for (int i = 0; i < AbonentsAmount - 1; i++)
		{
			temp[i] = abonents[i];
		}
		temp[AbonentsAmount - 1] = ab;
		Delete();
		abonents = temp;
	}
	void Show()
	{
		for (int i = 0; i < AbonentsAmount; i++)
		{
			cout << "Abonent " << i + 1 << endl;
			abonents[i].Show();
			cout << endl;
		}
	}
	void Delete()
	{
		if (abonents != nullptr)
			delete[] abonents;
	}
	~PhoneBook()
	{
		Delete();
	}
};



int main()
{
	Abonent a1;
	a1.Show();
	Abonent a2("Ivan1");
	a2.Show();
	Abonent a3("Ivan2", "Ivanov");
	a3.Show();
	Abonent a4("Ivan3", "Ivanov", "Ivanovich");
	a4.Show();
	Abonent a5("Ivan4", "Ivanov", "Ivanovich", "Don't distarb");
	a5.Show();
	Abonent a6("Ivan5", "Ivanov", "Ivanovich", "Don't distarb", "123-456-7890");
	a6.Show();
	Abonent a7("Ivan6", "Ivanov", "Ivanovich", "Don't distarb", "123-456-7890", "098-765-4321");
	a7.Show();
	Abonent a8("Ivan7", "Ivanov", "Ivanovich", "Don't distarb", "123-456-7890", "098-765-4321", "555-555-5555");
	a8.Show();


	

	PhoneBook p1;
	p1.AddAbonent(a1);
	p1.AddAbonent(a2);
	p1.AddAbonent(a3);
	p1.AddAbonent(a4);
	p1.AddAbonent(a5);
	p1.AddAbonent(a6);
	p1.AddAbonent(a7);
	p1.AddAbonent(a8);
	p1.Show();


}
