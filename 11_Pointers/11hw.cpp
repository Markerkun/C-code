#include <iostream>
#include <iomanip>

using namespace std;

void main()
{
	//1
	int a = 10, b = 5, c = 2;
	int* pa = &a;
	int* pb = &b;
	int* pc = &c;

	cout << "Multy = " << *pa * *pb * *pc << "\n";
	cout << "Average = " << (*pa + *pb + *pc)/3 << "\n";
	if (*pa<*pb && *pa<*pc)
	{
		cout << "Min = " << *pa << "\n";
	}
	else if (*pb < *pa && *pb < *pc)
	{
		cout << "Min = " << *pb << "\n";
	}
	else
	{
		cout << "Min = " << *pc << "\n";
	}

	//2
	srand(time(NULL));
	const int size = 10;
	int arr[size], sum = 0;

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 - 50;
	}
	int* parr = arr;
	for (int i = 0; i < size; i++)
	{
		cout << *(parr + i) << " ";
		sum += *(parr + i);
	}
	cout << "\n";
	for (int i = size-1; i > -1; i--)
	{
		cout << *(parr + i) << " ";
	}
	cout << "\n";
	cout << "Sum = " << sum << "\n";
	cout << "\n";


	//3
	int* max = arr;
	int* min = arr;
	int temp;
	for (int i = 0; i < size; i++)
	{
		if (*(parr + i) > *max)
		{
			max = parr + i;
		}
		if (*(parr + i) < *min)
		{
			min = parr + i;
		}
	}
	temp = *max;
	*max = *min;
	*min = temp;
	for (int i = 0; i < size; i++)
	{
		cout << *(parr + i) << " ";
	}
	cout << "\n";
	
	//4
	int* evenp = nullptr;
	int* oddp = nullptr;

	for (int i = 0; i < size; i+=2)
	{
		evenp = parr + i;
		oddp = parr + i + 1;
		temp = *evenp;
		*evenp = *(parr + i + 1);
		*oddp = temp;
	}
	for (int i = 0; i < size; i++)
	{
		cout << *(parr + i) << " ";
	}
	cout << "\n";
	
}