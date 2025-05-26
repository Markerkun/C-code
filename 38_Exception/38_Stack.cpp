//#include <iostream>
//using namespace std;
//
//
//class NegativeSize : public exception {
//public:
//	NegativeSize() :exception("Size cannot be negative") {}
//};
//class FullStack : public exception {
//public:
//	FullStack() :exception("Stack is full") {}
//};
//class EmptyStack : public exception {
//public:
//	EmptyStack() :exception("Stack is empty") {}
//};
//
//
//
//class Stack {
//	enum { EMPTY = -1 };
//	int* arr;
//	int size;
//	int topIndex;
//public:
//	Stack() = delete;
//
//	Stack(int size) :size(size)
//	{
//		if (size < 0)
//			throw NegativeSize();
//		arr = new int[size];
//		topIndex = EMPTY;
//	}
//	bool IsFull()const
//	{
//		return topIndex == size - 1;
//	}
//	bool Push(int elem)
//	{
//		if (!IsFull())
//		{
//			arr[++topIndex] = elem;
//			return true;
//		}
//		throw FullStack();
//	}
//	bool IsEmpty()const
//	{
//		return topIndex == EMPTY;
//	}
//	int Pop()
//	{
//		if (!IsEmpty())
//		{
//			return arr[topIndex--];
//		}
//		throw EmptyStack();
//	}
//	int Peek()
//	{
//		if (!IsEmpty())
//		{
//			return arr[topIndex];
//		}
//		throw EmptyStack();
//	}
//	int GetCount()const
//	{
//		return topIndex + 1;
//	}
//	void Clear()
//	{
//		topIndex = EMPTY;
//	}
//	void Print()const
//	{
//		for (int i = 0; i < GetCount(); i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//	~Stack()
//	{
//		if (arr != nullptr)
//			delete[]arr;
//	}
//};
//
//int main()
//{
//	try
//	{
//		Stack st(-15);
//
//		while (true/*!st.IsFull()*/)
//		{
//			st.Push(rand() % 100);
//		}
//
//		st.Print();
//		cout << "Length : " << st.GetCount() << endl;
//
//		while (true/*!st.IsEmpty()*/)
//		{
//			cout << "Element delete - " << st.Pop() << endl;
//		}
//		cout << "Count : " << st.GetCount() << endl;
//
//		/////////
//		st.Peek();
//		/////////
//	}
//	catch (const NegativeSize& ex)
//	{
//		cout << "Exception: " << ex.what() << endl;
//	}
//	catch (const FullStack& ex)
//	{
//		cout << "Exception: " << ex.what() << endl;
//	}
//	catch (const EmptyStack& ex)
//	{
//		cout << "Exception: " << ex.what() << endl;
//	}
//	catch (const exception& ex)
//	{
//		cout << "Exception: " << ex.what() << endl;
//	}
//	catch (...)
//	{
//		cout << "Unknown exception" << endl;
//	}
//
//}