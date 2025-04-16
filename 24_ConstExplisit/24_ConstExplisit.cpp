#include <iostream>
using namespace std;

void doSomething(long number)
{
}
float doSomething()
{
	return 10.0;
}

class Array
{
	long* arr;
	int size;
public:
	Array()
	{
		arr = nullptr;
		size = 0;
	}
	explicit Array(int size)
	{
		this->size = size;
		this->arr = new long[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = 0;
		}
	}
	Array(const Array& ar)
	{
		this->size = ar.getSize();
		this->arr = new long[size];
		for (int i = 0; i < size; i++)
		{
			arr[i] = ar.getValue(i);
		}
	}
	~Array()
	{
		if (arr != nullptr)
			delete[]arr;
	}
	int getSize()const
	{
		return size;
	}
	int getValue(int index)const
	{
		return arr[index];
	}
	void setValue(int value, int index)
	{
		arr[index] = value;
	}
	void display(int index)const
	{
		cout << arr[index] << " ";
	}
};


void main()
{

}
