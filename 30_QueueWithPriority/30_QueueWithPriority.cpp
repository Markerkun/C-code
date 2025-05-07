#include <iostream>
using namespace std;

//struct Element
//{
//	string value;
//	int priority;
//}; 
//ostream& operator<<(ostream& out, const Element& other)
//{
//	out << "Value : " << other.value << ". Priority : " << other.priority ;
//	return out;
//}

template<typename T>
class QueueWithPriority
{
private:
	struct Element
	{
		T value;
		int priority;
		void Print()
		{
			cout << "Value : " << value << ". Priority : " << priority << endl;
		}
	};

	Element* arr;
	int size;
public:
	QueueWithPriority() :arr(nullptr), size(0) {}
	~QueueWithPriority()
	{
		if (arr != nullptr)delete[]arr;
	}
	void Enqueue(T value, int priority)
	{
		int index = 0;
		while (index < size && arr[index].priority > priority) { index++; }
		size++;
		Element* temp = new Element[size];
		for (int i = 0; i < index; i++)
		{
			temp[i] = arr[i];
		}
		temp[index] = Element{ value, priority };
		for (int i = index; i < size - 1; i++)
		{
			temp[i + 1] = arr[i];
		}
		if (arr != nullptr)delete[]arr;
		arr = temp;
	}
	bool IsEmpty()
	{
		return size == 0;
	}
	Element Dequeue()
	{
		if (!IsEmpty())
		{
			Element first = arr[0];
			for (int i = 0; i < size - 1; i++)
			{
				arr[i] = arr[i + 1];
			}
			size--;
			return first;
		}
		return Element();
	}
	void PrintAll()
	{
		cout << "-------------- Queue ---------------" << endl;
		for (int i = 0; i < size; i++)
		{
			arr[i].Print();
		}
		cout << "_____________________________________" << endl;
	}
	void PrintFirst()
	{
		cout << "-------- The first in queue --------" << endl;
		if (!IsEmpty()) arr[0].Print();
		
		cout << "_____________________________________" << endl;
	}
};

int main()
{
	QueueWithPriority<string> q;

	string value;
	int priority;
	int choice;
	do
	{
		cout << "\n1. Show first document" << endl;
		cout << "2. Show all documents" << endl;
		cout << "3. Add document" << endl;
		cout << "4. Print documents" << endl;
		cout << "5. Exit" << endl;
		cin >> choice;
		switch(choice)
		{
		case 1:
			q.PrintFirst();
			break;
		case 2:
			q.PrintAll();
			break;
		case 3:
			cout << "Enter file name: "; cin >> value;
			cout << "[higher number - higher priority]" << endl;
			cout << "Enter guest priority: "; cin >> priority;
			q.Enqueue(value, priority);
			break;
		case 4:
			while (!q.IsEmpty())
			{
				cout << "Document: " << q.Dequeue().value << endl;
			}
		
			break;
		case 5:
			cout << "Exit" << endl;
			return 0;
		default:
			cout << "Invalid choice" << endl;
			break;
				
			}
	} while (choice != 5);



}
