#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

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
    
};
void AppendToFileB(const char& filename)
{
    book b;
    cout << "Enter the name : ";
    cin >> b.name;
    cout << "Enter the author : ";
    cin >> b.author;
    cout << "Enter the edition : ";
    cin >> b.edition;
    cout << "Enter the genre : ";
    cin >> b.genre;
    ofstream tof(&filename, ios_base::app);
    tof << b.name << '\n' << b.author << '\n' << b.edition << '\n' << b.genre << '\n';
    tof.close();
    cout << "Successfully added!" << endl;
}
void ShowFromFileB(const char& filename)
{
    ifstream fromf(&filename);

    if (!fromf)
    {
        cout << "Error with opening file" << endl; return;
    }
    cout << "Books in file: " << endl;
    book w;
    while (fromf >> w.name >> w.author >> w.edition >> w.genre)
    {
        fromf.ignore();
        cout << "-----------------------------\n";
        w.Show();
        cout << "-----------------------------\n";
    }
    fromf.close();
    cout << "Successfully!";
}
void FindInFileB(const char& filename)
{
    ifstream fromf(&filename);

    if (!fromf)
    {
        cout << "Error with opening file" << endl; return;
    }
    string author;
    cout << "Enter the author: ";
    cin >> author;
    int i = 2;
    string line;
    bool found = false;
    getline(fromf, line);
    cout << line;
    book w;
    while (fromf >> w.name >> w.author >> w.edition >> w.genre)
    {
        if (w.author == author) 
        {
            cout << "Book found";
            w.Show();
            found = true;
        }
    }
    if (!found) 
    {
        cout << "There is no \"" << author << "\"." << endl;
    }

    fromf.close();
}



void main()
{
    const char filename[30] = { "Books.txt" };

    int choice;

    do {
        cout << "\nMenu:\n";
        cout << "1. Add book\n";
        cout << "2. Show all books\n";
        cout << "3. Find book by author\n";
        cout << "0. Exit\n";
        cout << "Your choice: ";
        cin >> choice;
        cin.ignore(); // очищення буфера

        switch (choice) {
        case 1:
            AppendToFileB(*filename);
            break;
        case 2:
            ShowFromFileB(*filename);
            break;
        case 3:
            FindInFileB(*filename);
            break;
        case 0:
            cout << "Escaping...\n";
            break;
        default:
            cout << "Wrong choice!\n";
        }
    } while (choice != 0);



}

