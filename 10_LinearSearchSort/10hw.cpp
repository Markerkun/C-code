#include <iostream>

#define SIZE 10
using namespace std;

int count1 = 0;
template <typename T>
T LinearSearch(T arr[], int T)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == value)
		{
			//cout << "The number is found at index " << i << endl;
			return i;
		}
	}
	return -1;
}

template <typename T>
void bubbleSort(T arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1]) {
				//swap(arr[j], arr[j + 1]);
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				count1++;
			}
		}
	}
}

template <typename T>
void insertionSort(T arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (arr[j] > key && j >= 0)
		{
			arr[j + 1] = arr[j];
			j--;
			//count1++;
		}
		arr[j + 1] = key;
	}
}
template <typename T>

T partition(T arr[], int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;
	for (int j = low; j < high; j++)
	{
		if (arr[j] < pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return i + 1;
}

template <typename T>
void quickSort(T arr[], int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr, low, high);
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}



template <typename T>
void PrintArr(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


template <typename T>
T Factorial(T num)
{
	if (num == 0)
	{
		cout << "Can`t fint factorial of 0" << endl;
		return;
	}
	if (num == 1)
	{
		return 1;
	}
	else
	{			//5*4   //3*2*1
		return num * Factorial(num - 1);
	}
}

template <typename T>
T binarySearch(T arr[], int size, T key)
{
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



int main()
{
	srand(time(0));
	const int size = 10;
	int arri[size] = {};
	float arrf[size] = {};
	for (int i = 0; i < size; i++) 
	{
		arri[i][j] = rand() % 100 - 50;
		arrf[i][j] = rand() % 100 - 50;
	}
	quickSort(arri, 0, size - 1);
	cout << "Elem is on pos : " << binarySearch(arri, size, 354) << endl;
	//PrintArr(arr1, size);
	////bubbleSort(arr1, size);
	////insertionSort(arr1, size);
	////cout << "Number of swaps : " << count1 << endl;
	//quickSort(arr1, 0, size - 1);
	//PrintArr(arr1, size);


	/*int num;
	cout << "Enter number you wanna know : " << endl;
	cin >> num;
	int index = LinearSearch(arr, num);
	if (index != -1)
	{
		cout << "The number found on index " << index + 1 << endl;
	}
	else
	{
		cout << "The number is not found" << endl;
	}*/

}