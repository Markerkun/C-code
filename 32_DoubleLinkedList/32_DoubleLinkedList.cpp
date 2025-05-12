#include <iostream>
using namespace std;

template<typename T_value>
class List
{
	struct Node
	{
		Node* prev;
		T_value value;
		Node* next;
		Node(Node* prev, T_value value, Node* next) :prev(prev), value(value), next(next) {}
	};

	Node* head;
	Node* tail;

public:
	List()
	{
		head = tail = nullptr;
	}
	bool IsEmpty()
	{
		return head == nullptr;
	}
	void AddToHead(T_value value)
	{
		Node* newNode = new Node(nullptr, value, head);

		if (IsEmpty())
		{
			head = tail = newNode;
		}
		head->prev = newNode;
		head = newNode;
	}
	void PrintList()
	{
		for (Node* i = head; i != nullptr; i = i->next)
		{
			cout << i->value << " ";
		}
		cout << endl;
	}
	~List()
	{
		Node* current = nullptr;
		while (head != nullptr)
		{
			current = head;
			head = head->next;
			delete current;
		}
	}
	void AddToTail(T_value value)
	{
		Node* newNode = new Node(tail, value, nullptr);
		if (IsEmpty())
		{
			head = tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
	}
	T_value GetElement(int pos)
	{
		Node* current = head;
		int i = 1;
		while (current != nullptr)
		{
			if (i == pos) return current->value;
			current = current->next;
			i++;
		}
	}
	T_value operator[](int pos)
	{
		Node* current = head;
		int i = 1;
		while (current != nullptr)
		{
			if (i == pos) return current->value;
			current = current->next;
			i++;
		}
	}
	void DeleteFromTail()
	{

		if (IsEmpty())return;
		if (head->next == nullptr)
		{
			delete head;
			head = tail = nullptr;
		}
		else
		{
			tail = tail->prev;
			delete tail->next;
			tail->next = nullptr;
		}

	}
	void DeleteFromHead()
	{

		if (IsEmpty())return;
		if (head->next == nullptr)
		{
			delete head;
			head = tail = nullptr;
		}
		else
		{
			head = head->next;
			delete head->prev;
			head->prev = nullptr;
		}

	}

	List(const List& other)
	{
		head = tail = nullptr;
		Node* current = other.head;
		while (current != nullptr)
		{
			AddToTail(current->value);
			current = current->next;
		}
	}





};


	struct Vagon
	{
		int number;
		int amount_seats;
		int amount_sitters;
	};
	ostream& operator<<(ostream& os, const Vagon& vagon)
	{
		os << "Number: " << vagon.number << '\n';
		os << "Amount of seats: " << vagon.amount_seats << '\n';
		os << "Amount of sitters: " << vagon.amount_sitters << '\n';
		return os;
	}




class Train
{
	string model;
	int amount_vagons;
	List<Vagon> vagons;
	

public:
	Train()
	{
		model = "no model";
		amount_vagons = 0;

	}
	Train(string model)
	{
		this->model = model;
		amount_vagons = 0;
	}
	void Show()
	{
		cout << "\nModel: " << model << '\n';
		cout << "Amount of vagons: " << amount_vagons << '\n';
		if (amount_vagons != 0)
		{
		cout << "Vagons: " << '\n';
		vagons.PrintList();
		}
	}

	void AddVToHead()
	{
		amount_vagons++;
		Vagon temp;
		temp.number = amount_vagons;
		cout << "Enter amount of seats at car: "; cin >> temp.amount_seats;
		while (temp.amount_seats < 0)
		{
			cout << "Enter amount of seats at car: "; cin >> temp.amount_seats;
		}
		cout << "Enter amount of sitters at car: "; cin >> temp.amount_sitters;
		while (temp.amount_sitters > temp.amount_seats || temp.amount_sitters < 0)
		{
			cout << "Enter amount of sitters at car: "; cin >> temp.amount_sitters;
		}
		vagons.AddToHead(temp);
	}
	void AddVToTail()
	{
		amount_vagons++;
		Vagon temp;
		temp.number = amount_vagons;
		cout << "Enter amount of seats at car: "; cin >> temp.amount_seats;
		while (temp.amount_seats < 0)
		{
			cout << "Enter amount of seats at car: "; cin >> temp.amount_seats;
		}
		cout << "Enter amount of sitters at car: "; cin >> temp.amount_sitters;
		while (temp.amount_sitters > temp.amount_seats || temp.amount_sitters < 0)
		{
			cout << "Enter amount of sitters at car: "; cin >> temp.amount_sitters;
		}
		vagons.AddToTail(temp);
	}
	void DeleteFromTail()
	{
		if (amount_vagons == 0)
		{
			cout << "There is no cars" << '\n';
		}
		else
		{
			vagons.DeleteFromTail();
			amount_vagons--;
		}
	}
	void DeleteFromHead()
	{
		if (amount_vagons == 0)
		{
			cout << "There is no cars" << '\n';
		}
		else
		{
			vagons.DeleteFromHead();
			amount_vagons--;
		}
	}
	Train(const Train& other):vagons(other.vagons)
	{
		model = other.model;
		amount_vagons = other.amount_vagons;
		
	}



};

int main()
{
	/*
	List<int> l;
	l.AddToHead(100);
	l.AddToHead(200);
	l.AddToHead(300);
	l.PrintList();
	l.AddToTail(1);
	l.AddToTail(2);
	l.AddToTail(3);
	l.AddToTail(4);
	l.PrintList();
	l.DeleteFromTail();
	l.DeleteFromTail();
	l.DeleteFromTail();
	l.PrintList();*/

	Train t1("Train1");
	t1.AddVToHead();
	t1.AddVToTail();
	t1.Show();
	Train t2(t1);
	t2.Show();
	t2.DeleteFromTail();
	t2.Show();
	t2.DeleteFromHead();
	t2.Show();



}