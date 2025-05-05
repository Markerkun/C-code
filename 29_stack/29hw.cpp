#include <iostream>
using namespace std;




class Stack
{
	enum { empty = -1};
	int size = 0;
	int topindex;
	char* arr = nullptr;
public:
	Stack() = delete;
	Stack(int s)
	{
		topindex = empty;
		size = s;
		arr = new char[s];
	}
	void push(char c)
	{
		if (topindex == size-1)
		{
			resize();
		}
		arr[++topindex] = c;
	}
	char pop()
	{
		if (topindex == empty)
		{
			cout << "Stack is empty!" << endl;
			return '\0';
		}
		char c = arr[topindex--];
		return c;
	}
	int Size()
	{
		return topindex + 1;
	}
	bool isEmpty()
	{
		return (topindex == empty);
	}
	bool isFull()
	{
		return (topindex == size-1);
	}
	void clear()
	{
		topindex = empty;
	}
	char peek()
	{
		if (topindex == empty)
		{
			cout << "Stack is empty!" << endl;
			return '\0';
		}
		return arr[topindex];
	}
	void print()
	{
		for (int i = 0; i < topindex+1; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	void resize()
	{
		if (isFull())
		{
			size *= 2;
			char* temp = new char[size];
			for (int i = 0; i < topindex+1; i++)
			{
				temp[i] = arr[i];
			}
			delete[]arr;
			arr = temp;
		}
	}
	~Stack()
	{
		if (arr != nullptr)
			delete[] arr;
	}

};


int main()
{
	Stack st(2);
	st.push('1');
	st.push('2');
	st.print();
	st.push('5');
	st.print();
	

}
