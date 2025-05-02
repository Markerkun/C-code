#include <iostream>
#include <string>
using namespace std;

class Abonent {
    string name;
    string homePhone;
    string workPhone;
    string mobilePhone;
    string additionalInfo;

    static int abonentCount;

public:
    Abonent() 
    {
        this->name = "No abonent";
        this->homePhone = "-";
        this->workPhone = "-";
        this->mobilePhone = "-";
        this->additionalInfo = "No info";
    }

    Abonent(string name):Abonent() 
    {
        this->name = name;
    }

    Abonent(string name, string home, string work, string mobile, string info) {
        this->name = name;
        this->homePhone = home;
        this->workPhone = work;
        this->mobilePhone = mobile;
        this->additionalInfo = info;
        abonentCount++;
    }

    void Show() const {
        cout << "Name: " << name << endl;
        cout << "Home: " << homePhone << ", Work: " << workPhone << ", Mobile: " << mobilePhone << endl;
        cout << "Info: " << additionalInfo << endl;
    }

    string GetName() const 
    {return name;}
    string GetHomePhone() const 
    {return homePhone;}
    string GetWorkPhone() const 
    {return workPhone;}
    string GetMobilePhone() const 
    {return mobilePhone;}

    static int GetCount() { return abonentCount; }

    bool HasPhone(const string& phone) const {
        return homePhone == phone || workPhone == phone || mobilePhone == phone;
    }
};

int Abonent::abonentCount = 0;

class PhoneBook 
{
    Abonent* abonents;
    int countAbonent;

public:
    PhoneBook() 
    {
        abonents = nullptr;
        countAbonent = 0;
    }

    void Add(const Abonent& a) 
    {
        Abonent* temp = new Abonent[countAbonent + 1];
        for (int i = 0; i < countAbonent; ++i)
            temp[i] = abonents[i];
        temp[countAbonent] = a;
        if (abonents != nullptr)
        {
            delete[] abonents;
        }
        abonents = temp;
        countAbonent++;
    }

    void Delete(const string& phone) 
    {
        int index = -1;
        for (int i = 0; i < countAbonent; ++i) {
            if (abonents[i].HasPhone(phone)) {
                index = i;
                break;
            }
        }
        if (index == -1) 
        {
            cout << "Abonent not found." << endl;
            return;
        }
        Abonent* temp = new Abonent[countAbonent - 1];
        int j = 0;
        for (int i = 0; i < countAbonent; ++i) 
        {
            if (i != index)
                temp[j++] = abonents[i];
        }
        delete[] abonents;
        abonents = temp;
        countAbonent--;
        cout << "Deleted successfully." << endl;
    }

    void SearchByName(const string& name) 
    {
        bool found = false;
        for (int i = 0; i < countAbonent; ++i) {
            if (abonents[i].GetName() == name) {
                abonents[i].Show();
                found = true;
            }
        }
        if (!found)
            cout << "No such abonent." << endl;
    }

    void SearchByPhone(const string& phone) 
    {
        bool found = false;
        for (int i = 0; i < countAbonent; ++i) 
        {
            if (abonents[i].HasPhone(phone)) 
            {
                abonents[i].Show();
                found = true;
            }
        }
        if (!found)
            cout << "No abonent with this phone." << endl;
    }

    void ShowAll() {
        for (int i = 0; i < countAbonent; ++i) 
        {
            cout << "Abonent #" << (i + 1) << ":\n";
            abonents[i].Show();
            cout << "----------------------\n";
        }
    }

    ~PhoneBook() 
    {
		if (abonents != nullptr)
		{
            delete[] abonents;
		}
    }
};


int main() 
{
    PhoneBook pb;
    int choice;
    do {
        cout << "\nMenu:\n"
            << "1. Add abonent\n"
            << "2. Delete by phone\n"
            << "3. Search by name\n"
            << "4. Search by phone\n"
            << "5. Show all\n"
            << "0. Exit\n"
            << "Your choice: ";
        cin >> choice;
        cin.ignore();
        string name, home, work, mobile, info, phone;

        switch (choice) {
        case 1: 
            
            cout << "Name: "; getline(cin, name);
            cout << "Home phone: "; getline(cin, home);
            cout << "Work phone: "; getline(cin, work);
            cout << "Mobile phone: "; getline(cin, mobile);
            cout << "Additional info: "; getline(cin, info);
            pb.Add(Abonent(name, home, work, mobile, info));
            break;
                
        case 2: 
            cout << "Enter phone to delete: "; getline(cin, phone);
            pb.Delete(phone);
            break;
                
        case 3: 
            cout << "Enter name: "; getline(cin, name);
            pb.SearchByName(name);
            break;
                
        case 4: 
            cout << "Enter phone: "; getline(cin, phone);
            pb.SearchByPhone(phone);
            break;
                
        case 5:
            pb.ShowAll();
            break;
        case 0:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}

   

