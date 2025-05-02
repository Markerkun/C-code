#include <iostream>
using namespace std;

void bubbleSortPlus(long arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) 
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
void bubbleSortMinus(long arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
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
	long getValue(int index)const
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
	void display()const
	{
		for (int i = 0; i < size; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
	void randomValue()
	{
		for (int i = 0; i < size; i++)
		{
			arr[i] = rand() % 100;
		}
	}
	void AddValue(long value)
	{
		long* temp = new long[size + 1];
		for (int i = 0; i < size; i++)
		{
			temp[i] = arr[i];
		}
		temp[size] = value;
		delete[]arr;
		arr = temp;
		size++;
	}
	void DeleteByValue(int value)
	{
		long* temp = new long[size - 1];
		for (int i = 0; i < size; i++)
		{
			if (arr[i] == value)
			{
				i--;
				continue;
			}
			temp[i] = arr[i];
		}
		delete[]arr;
		arr = temp;
		size--;
	}
	void DeleteByIndex(int index)
	{
		long* temp = new long[size - 1];
		for (int i = 0; i < size; i++)
		{
			if (i == index)
			{
				i--;
				continue;
			}
			temp[i] = arr[i];
		}
		delete[]arr;
		arr = temp;
		size--;
	}
	void SortPlus()
	{
		bubbleSortPlus(arr, size);
	}
	void SortMinus()
	{
		bubbleSortMinus(arr, size);
	}
	long Max() const
	{
		long max = arr[0];
		for (int i = 1; i < size; i++)
		{
			if (arr[i] > max)
			{
				max = arr[i];
			}
		}
		return max;
	}
	long Min() const
	{
		long min = arr[0];
		for (int i = 1; i < size; i++)
		{
			if (arr[i] < min)
			{
				min = arr[i];
			}
		}
		return min;
	}
	double Average() const
	{
		double sum = 0;
		for (int i = 0; i < size; i++)
		{
			sum += arr[i];
		}
		return sum / size;
	}
};


void main()
{
	Array arr(5);
	arr.display();
	arr.randomValue();
	arr.display();
	arr.AddValue(100);
	arr.display();
	arr.DeleteByValue(0);
	arr.display();
	arr.DeleteByIndex(0);
	arr.display();
	arr.SortPlus();
	arr.display();
	arr.SortMinus();
	arr.display();
	cout << "Max: " << arr.Max() << endl;
	cout << "Min: " << arr.Min() << endl;
	cout << "Average: " << arr.Average() << endl;

}
