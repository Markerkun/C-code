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
	void SetAbonent(Abonent ab[])
	{
		Delete();
		AbonentsAmount = sizeof(ab);
		abonents = ab;
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
	void SearchByName(const string& name) {
		bool found = false;
		for (int i = 0; i < Count; ++i) {
			if (abonents[i].GetName() == name) {
				abonents[i].Show();
				found = true;
			}
		}
		if (!found)
			cout << "No such abonent." << endl;
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
											Abonent a2("Ivan");
												a2.Show();
										Abonent a3("Ivan", "Ivanov");
												a3.Show();
								Abonent a4("Ivan", "Ivanov", "Ivanovich");
												a4.Show();
						Abonent a5("Ivan", "Ivanov", "Ivanovich", "Don't distarb");
												a5.Show();
				Abonent a6("Ivan", "Ivanov", "Ivanovich", "Don't distarb", "123-456-7890");
												a6.Show();
		Abonent a7("Ivan", "Ivanov", "Ivanovich", "Don't distarb", "123-456-7890", "098-765-4321");
												a7.Show();
	Abonent a8("Ivan", "Ivanov", "Ivanovich", "Don't distarb", "123-456-7890", "098-765-4321", "555-555-5555");
												a8.Show();



	Abonent abonents[] = {a1, a2, a3, a4, a5, a6, a7, a8};
	PhoneBook p1;
	p1.AddAbonent(*abonents);
	p1.Show();

}
