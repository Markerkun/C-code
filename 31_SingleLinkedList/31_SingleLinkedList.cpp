#include <iostream>
using namespace std;

template<typename T>
struct Node
{
	T value;
	Node* next;
	Node(T value, Node* next) : value(value), next(next) {}
};
template<typename T>
class List
{
	Node<T>* head; 
public:
	List()
	{
		head = nullptr;
	}
	void AddToHead(T value)
	{
		Node<T>* newNode = new Node<T>(value, head); 
		head = newNode;
	}
	void PrintList()
	{
		Node<T>* current = head;
		while (current != nullptr)
		{
			cout << current->value << " ";
			current = current->next;
		}
		cout << endl;
	}
	~List()
	{
		Node<T>* current = nullptr;
		while (head != nullptr)
		{
			current = head;
			head = head->next;
			delete current;
		}
	}
	void AddToTail(T value)
	{
		Node<T>* newNode = new Node<T>(value, nullptr);
		if (head != nullptr)
		{
			Node<T>* current = head;
			while (current->next != nullptr)
			{
				current = current->next;
			}
			current->next = newNode;
		}
		else
		{
			head = newNode;
		}
	}
	int GetElement(int pos)
	{
		Node<T>* current = head;
		int i = 1;
		while (current != nullptr)
		{
			if (i == pos) return current->value;
			current = current->next;
			i++;
		}
	}
	int operator[](int pos)
	{
		Node<T>* current = head;
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

		if (head == nullptr)return;
		if (head->next == nullptr)
		{
			delete head;
			head = nullptr;
		}
		else
		{
			Node<T>* current = head;
			while (current->next->next != nullptr)
			{
				current = current->next;
			}
			delete current->next;
			current->next = nullptr;
		}

	}
	void DeleteFromHead()
	{
		if (head == nullptr)return;
		Node* current = head;
		head = head->next;
		delete current;
	}
};
class Point {

	int x, y;
public:

	Point()
	{
		x = 0; y = 0;
	}

	Point(int x, int y)
	{
		this->x = x; this->y = y;
	}

	void Print()
	{
		cout << "(" << x << "," << y << ")\n";
	}
};
class Vector
{
	int size;
	List<Point> points;
public:
	Vector()
	{
		size = 0;
	}
	void AddPoint(int f, int s)
	{
		Point p(f, s);
		points.AddToTail(p);
		size++;
	}
	void Print()
	{
		points.PrintList();
	}
};
int main()
{

	List<int> l;

	for (int i = 0; i < 10; i++)
	{
		l.AddToHead(i);
	}
	l.PrintList();
	l.AddToTail(100);
	l.AddToTail(200);
	l.AddToTail(300);
	l.PrintList();
	cout << "Element pos = 3 : " << l.GetElement(3) << endl;
	cout << "Element pos = 3 : " << l[3] << endl;
	for (int i = 0; i < 3; i++)
	{
		l.DeleteFromTail();
		l.PrintList();
	}




	Vector v;
	v.AddPoint(1, 2);
	v.AddPoint(3, 4);
	v.Print();



}
