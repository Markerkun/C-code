#include <iostream>
using namespace std;

template <typename T>
class Array
{
	T* arr;
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
		arr = new T[size] {};
	}
	Array(const initializer_list<T>& list)
	{
		this->size = list.size();
		arr = new T[size];
		int i = 0;
		for (T elem : list)
		{
			arr[i] = elem;
			i++;
		}
	}
	void Fill(const initializer_list<T>& list)
	{
		if (arr != nullptr)
			delete[]arr;
		this->size = list.size();
		arr = new T[size];
		int i = 0;
		for (T elem : list)
		{
			arr[i] = elem;
			i++;
		}
	}
	void Print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	~Array()
	{
		if (arr != nullptr)
			delete[]arr;
	}
};

int main()
{
	int stat_arr[] = { 1,2,3,4,5 ,8,9,7,5 };
	int* dynam_arr = new int[5] {10, 11, 12, 13, 14};

	Array<int> arr;
	arr.Print();

	Array<long> arr3({ 10, 11, 12, 13, 14,15,16,17,18,19 });
	arr3.Print();
	arr3.Fill({ 1,2,3 });
	arr3.Print();
	Array<char> arr4({ 'a', 'b', 'c' });
	arr4.Print();


	delete[]dynam_arr;
}
