#include <iostream>
#include <conio.h>
using namespace std;

class NegativeSize : public exception {
public:
	NegativeSize() :exception("Size cannot be negative") {}
};
class FullStack : public exception {
public:
	FullStack() :exception("Stack is full") {}
};
class EmptyStack : public exception {
public:
	EmptyStack() :exception("Stack is empty") {}
};


class Queue {
	int* arr;
	int maxSize;
	int topIndex;
public:
	Queue() = default;
	/////////////
	Queue(int size)
	{
		if (size < 0)
			throw NegativeSize();
		this->maxSize = size;
		arr = new int[maxSize];
		topIndex = 0;
	}
	~Queue()
	{
		if (arr != nullptr)
			delete[]arr;
	}
	bool IsFull()const
	{
		return topIndex == maxSize;
	}
	bool IsEmpty()const
	{
		return topIndex == 0;
	}
	///////////
	void Enqueue(int elem)
	{
		if (!IsFull())
			arr[topIndex++] = elem;

		else
			throw FullStack();
	}
	//////////
	int Dequeue()
	{
		if (!IsEmpty())
		{
			int first = arr[0];
			for (int i = 0; i < topIndex; i++)
			{
				arr[i] = arr[i + 1];
			}
			topIndex--;
			return first;
		}
		throw EmptyStack();
	}
	int GetCount()const
	{
		return topIndex;
	}
	void Clear()
	{
		topIndex = 0;
	}
	/////////////
	int Peek()const
	{
		if (!IsEmpty())
		{
			return arr[0];
		}
		throw EmptyStack();
	}
	void Print()const
	{
		for (int i = 0; i < topIndex; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
	try
	{
		Queue q(-15);
		for (int i = 0; i < 20; i++)
		{
			q.Enqueue(rand() % 50);
		}
		q.Print();
		cout << "Length : " << q.GetCount() << endl;
		while (true/*!q.IsEmpty()*/)
		{
			cout << "Element : " << q.Dequeue() << endl;
		}

		q.Peek();
	}


	catch (NegativeSize& e)
	{
		cout << e.what() << endl;
	}
	catch (FullStack& e)
	{
		cout << e.what() << endl;
	}
	catch (EmptyStack& e)
	{
		cout << e.what() << endl;
	}
	catch (exception& e)
	{
		cout << "Error : " << e.what() << endl;
	}
	catch (...)
	{
		cout << "Unknown exception" << endl;
	}




}