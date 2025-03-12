#include <iostream>
using namespace std;

template <typename T>
void ShowArray(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
//1
int Max(int a, int b)
{
	return (a > b) ? a : b;
}
int Max(int a, int b, int c)
{
	if (a > b && a > c)
	{
		return a;
	}
	else if (b > a and b > c)
	{
		return b;
	}
	else
	{
		return c;
	}
}
int Min(int a, int b)
{
	return (a > b) ? a : b;
}
int Min(int a, int b, int c)
{
	if (a < b && a < c)
	{
		return a;
	}
	else if (b < a and b < c)
	{
		return b;
	}
	else
	{
		return c;
	}
}


//2
template <typename T>
T average(T arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	} 
	return sum / size;
}
char average(char arr[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += (int)arr[i];
	} 
	return sum / size;
}

//3
int Max_arr(int arr[], int size)
{
	int max = arr[0];
	for (int i = 0; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		
	}
	return max;
}

int Max_arr(int arr[][10], int size)
{
	int max = arr[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}

	}
	return max;
}
void main()
{
	srand(time(NULL));
	//1
	cout << "Max of 2: " << Max(1, 2) << endl;
	cout << "Max of 3: " << Max(1, 2, 3) << endl;
	cout << "Min of 2: " << Max(1, 2) << endl;
	cout << "Min of 3: " << Max(1, 2, 3) << endl;

	//2
	const int size = 10;
	int arri[size], matrix[size][size];
	float arrf[size];
	char arrc[size];

	for (int i = 0; i < size; i++)
	{
		arri[i] = rand() % 40 - 20;
		arrf[i] = rand() % 40 - 19.3;
		arrc[i] = (char)(rand() % 60 + 65);
	}

	ShowArray(arri, size);
	ShowArray(arrf, size);
	ShowArray(arrc, size);

	cout << "Average: " << average(arri, size) << endl;
	cout << "Average: " << average(arrf, size) << endl;
	cout << "Average: " << average(arrc, size) << endl;

	//3

	cout << "Max in arr: " <<  Max_arr(arri, size) << endl;
	cout << "Max in arr: " << Max_arr(matrix, size) << endl;



}