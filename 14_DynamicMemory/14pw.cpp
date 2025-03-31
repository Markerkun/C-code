#include <iostream>
#include <iomanip>
using namespace std;
void ShowArray(int arr[], int size = 10)
{
	for (int i = 0; i < size; i++)
	{
		cout << *(arr + i) << " ";
	}cout << "\n";
}
int main()
{
	srand(time(0));
	const int size = 10;
	int arr[size], arr1[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 - 50;
	}cout << "\n";

	//1
	cout << "//1" << "\n";
	int* parr = arr;
	int* parr1 = arr1;

	for (int i = 0; i < size; i++)
	{
		*(parr1 + i) = *(parr + i);
	}cout << "\n" << "\n";
	cout << "parr1: "; ShowArray(parr);
	cout << "parr2: "; ShowArray(parr1);
	cout << "\n";

	//2
	cout << "//2" << "\n";
	int* darr = new int[size];
	int temp;
	for (int i = 0; i < size; i++)
	{
		*(darr+i) = rand() % 100 - 50;
	}cout << "\n";
	ShowArray(darr);

	for (int i = 0; i < size/2; i++)
	{
		temp = *(darr + i);
		*(darr + i) = *(darr + size - i - 1);
		*(darr + size - i - 1) = temp;
	}
	ShowArray(darr);
	cout << '\n';

	//3
	cout << "//3" << '\n';
	int* darr1 = new int[size];
	int* darr2 = new int[size];
	for (int i = 0; i < size; i++)
	{
		*(darr1 + i) = rand() % 100 - 50;
	}cout << "\n darr1: ";
	ShowArray(darr1);

	for (int i = 0; i < size; i++)
	{
		*(darr2 + i) = *(darr1 + size - i - 1);

	}cout << "\n darr2: ";
	ShowArray(darr2);
	cout << '\n';


}

