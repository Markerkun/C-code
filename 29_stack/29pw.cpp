//#include <iostream>
//using namespace std;
//
//
//
//
//class Stack
//{
//	enum { empty = -1, full = 14 };
//	int topindex;
//	char arr[full+1];
//public:
//	Stack()
//	{
//		topindex = empty;
//	}
//	void push(char c)
//	{
//		if (topindex == full)
//		{
//			cout << "Stack is full!" << endl;
//			return '\0';
//		}
//		arr[++topindex] = c;
//	}
//	char pop()
//	{
//		if (topindex == empty)
//		{
//			cout << "Stack is empty!" << endl;
//			return '\0';
//		}
//		char c = arr[topindex--];
//		return c;
//	}
//	int size()
//	{
//		return topindex + 1;
//	}
//	bool isEmpty()
//	{
//		return (topindex == empty);
//	}
//	bool isFul()
//	{
//		return (topindex == full);
//	}
//	void clear()
//	{
//		topindex = empty;
//	}
//	char peek()
	/*{
	if (topindex == empty)
	{
		cout << "Stack is empty!" << endl;
		return '\0';
	}
	return arr[topindex];
	}*/
//	void print()
//	{
//		for (int i = 0; i < topindex + 1; i++)
//		{
//			cout << arr[i] << " ";
//		}
//		cout << endl;
//	}
//
//};
//
//
//int main()
//{
//    cout << "Hello World!\n";
//}
