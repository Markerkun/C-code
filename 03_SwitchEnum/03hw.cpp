#include <iostream>

using namespace std;
int main()
{
	//1
	/*int i = 14;
	while (i != 124)
	{
		cout << i << "  ";
		i++;
	}*/

	//2
	/*int i = 1;
	while (i != 101)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
		i++;
	}*/

	//3
	/*unsigned int N;
	int summa = 0, i = 1, num, counter = 0;
	cout << "Enter amount of numbers: ";
	cin >> N;
	while (i < N)
	{
		cout << "Enter number: ";
		cin >> num;
		if (num < 0)
		{
			counter++;
		}
	}
	cout << endl;
	cout << "Amount of negative numbers: " << counter;*/

	//4
	/*int prod = 1, i = 1, num, sum = 0;
	while (i < 9)
	{
		cout << "Enter number: ";
		cin >> num;
		prod *= num;
		sum += num;
	}
	cout << "Product: " << prod;
	cout << "Average: " << sum / 8;*/

	//5
	/*int i = 100;
	do
	{
		if (i % 2 != 0)
		{
			cout << i << "  ";
		}
		i--;
	} while (i!=0);*/

	//6
	/*int summa = 0, i = 1, num, prod = 1;
	do
	{
		cout << "Enter number: ";
		cin >> num;
		prod *= num;
	} while (i < 5);
	cout << endl;
	cout << "Product: " << prod;*/

	//7
	/*int i = 50, sum = 0;
	do
	{
		if (i % 4 == 0)
		{
			cout << i << "  ";
			sum += i;
		}
		i--;
	} while (i>-1);
	cout << endl;
	cout << "Sum: " << sum;*/

	//8
	int i = 0, I;
	cout << "Your number: "; cin >> I;
	if (I > 0)
	{
		do
		{
			cout << i << "  ";
			i++;
		} while (i != I+1);
	}
	else
	{
		do
		{
			cout << i << "  ";
			i--;
		} while (i != I-1);
	}

	
	
	
}