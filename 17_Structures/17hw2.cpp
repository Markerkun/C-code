#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

struct book
{
	char name[20];
	char author[20];
	char edition[200];
	char genre[20];

	void Show()
	{
		cout << "name : " << name << '\n';
		cout << "author : " << author << '\n';
		cout << "edition : " << edition << '\n';
		cout << "genre : " << genre << '\n';
	}
	void Init()
	{
		cout << "Enter the name : ";
		cin >> name;
		cout << "Enter the author : ";
		cin >> author;
		cout << "Enter the edition : ";
		cin >> edition;
		cout << "Enter the genre : ";
		cin >> genre;

	}

	void Edit()
	{
		char c[25];
		cout << "Enter the characteristic you want to change: ";
		cin >> c;
		if (c == "name") 
		{
			cout << "Enter the new name: ";
			cin >> name;
		}
		else if (c == "author") 
		{
			cout << "Enter the new author: ";
			cin >> author;
		}
		else if (c == "edition") 
		{
			cout << "Enter the new edition: ";
			cin >> edition;
		}
		else if (c == "genre") 
		{
			cout << "Enter the new genre: ";
			cin >> genre;
		}
		else {
			cout << "Unknown characteristic!" << endl;
		}
	}

};






void main()
{
	book book1/* = {"Fire ground", "Richel Wordens", "Fire ground: [novel] / Richel Wordens  - Florida: Orlando, 2012. - 204, [1] p. — (First work)", "Historical Fiction"}*/;
	book1.Init();
	book1.Show();
	book1.Edit();
	book1.Show();

}