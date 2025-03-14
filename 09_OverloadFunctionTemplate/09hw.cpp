#include <iostream>
using namespace std;
//1
int Count_p(int arr[], int size)
{
	int counter_p = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			counter_p++;

		}
		return (counter_p);
	}
}
	int Count_n(int arr[], int size)
{
	int counter_n = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			counter_n++;
		}
	}
	return counter_n;
}
int Count_0(int arr[], int size)
{
	int counter_0 = 0;
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			counter_0++;
		}
	}
	return counter_0;
}

//2

void main()
{
	srand(time(NULL));
	const int size = 10;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 40 - 20;
		cout << arr[i] << " ";
	}
	cout << endl;
	cout << "Amount of positive numbers: " << Count_p(arr, size) << endl;
	cout << "Amount of negative numbers: " << Count_n(arr, size) << endl;
	cout << "Amount of zero: " << Count_0(arr, size) << endl;






}