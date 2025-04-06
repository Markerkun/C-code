#include <iostream>
#include <iomanip>

using namespace std;

//1
void square(int& num)
{
	num *= num;
}
void doubleValue(int& num)
{
	num *= 2;
}
void negate(int& num)
{
	num *= -1;
}
void processArray(int arr[], int size, int op, void (*NumberOperation[])(int&))
{
	for (int i = 0; i < size; i++)
	{
		NumberOperation[op](arr[i]);
	}
}

void main()
{
	void (*NumberOperation[3])(int&) = { square,doubleValue,negate };
	int arr[] = { 1, 2, 3, 4, 5 };
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	int op = 4;

	while (op != 0)
	{
		cout << "Enter operation[1 - square, 2 - double value, 3 - negate, 0 - stop]: ";
		cin >> op;
		switch (op) 
		{
		case 1:
			processArray(arr, 5, 0, NumberOperation);
			break;
		case 2:
			processArray(arr, 5, 1, NumberOperation);
			break;
		case 3:
			processArray(arr, 5, 2, NumberOperation);
			break;
		case 0:
			op = 0;
			cout << "Stopping program." << endl;
			break;
		default:
			cout << "Invalid option. Try again!" << endl;
			break;
		}

		for (int i = 0; i < 5; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}
}

