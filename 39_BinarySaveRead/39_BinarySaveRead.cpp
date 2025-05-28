#include <iostream>
#include <fstream>
#include <string>
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
	void BinarySave()
	{
		ofstream out("BinaryQueue.bin", ios_base::out | ios_base::binary);
		out.write((char*) & size, sizeof(size));
		for (int i = 0; i < size; i++)
		{
			out.write((char*)&arr[i], sizeof(arr[i]));
			//.write((char*)&arr[i].priority, sizeof(arr[i].priority));
		}
		out.close();
		cout << "File saved" << endl;
	}
	void BinaryRead()
	{
		ifstream in("BinaryQueue.bin", ios_base::binary);
		if (!in.is_open())
		{
			cout << "File not found" << endl;
			return;
		}
		in.read((char*)&size, sizeof(size));
		arr = new Element[size];
		for (int i = 0; i < size; i++)
		{
			in.read((char*)&arr[i], sizeof(arr[i]));
			//in.read((char*)&array[i].priority, sizeof(arr[i].priority));
		}
		in.close();
		
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
		cout << "5. Save documents" << endl;
		cout << "6. Read documents" << endl;
		cout << "7. Exit" << endl;
		cin >> choice;
		switch (choice)
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
			q.BinarySave();
			break;
		case 6:
			q.BinaryRead();
			break;
		case 7:
			cout << "Exit" << endl;
			return 0;
		default:
			cout << "Invalid choice" << endl;
			break;

		}
	} while (choice != 7);



}
