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

	void Max()
	{
		T max = arr[0];
		for (int i = 1; i < size; i++)
		{
			if (arr[i] > max)
				max = arr[i];
		}
		cout << "Max: " << max << endl;
	}

	void Min()
	{
		T min = arr[0];
		for (int i = 1; i < size; i++)
		{
			if (arr[i] < min)
				min = arr[i];
		}
		cout << "Min: " << min << endl;
	}

	void Sort()
	{
		for (int i = 0; i < size - 1; i++)
		{
			for (int j = 0; j < size - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					T temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
	}

	T Find(T key)
	{
		Sort();
		int start = 0;
		int end = size - 1;
		while (start <= end)
		{
			int mid = start + (end - start) / 2;
			if (arr[mid] == key)
			{
				return mid;
			}
			else if (arr[mid] < key) {
				start = mid + 1;
			}
			else
			{
				end = mid - 1;
			}
		}
		return -1;
	}

	void replace(int index, T value)
	{
		if (index >= 0 && index < size)
		{
			arr[index] = value;
		}
		else
		{
			cout << "Index out of range" << endl;
		}
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
