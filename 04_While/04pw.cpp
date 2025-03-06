#include<iostream>

using namespace std;
void main()
{
	//1
	/*int i = 1;
	while (i != 101)
	{
		cout << i << endl;
		i++;
	}*/

	//2
	/*int i = 1;
	int counter = 0;
	while (i != 201)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
			counter++;
		}
		i++;
	}
	cout << "Amount of numbers: " << counter;*/

	//3
	/*unsigned int N;
	int summa = 0;
	int i = 1;
	cout << "Enter tour number: ";
	cin >> N;

	while (i != N + 1)
	{
		if (i % 2 == 0)
		{
			summa += i;
		}
		cout << i << endl;
		i++;
	}
	cout << "Summa of even numbers: " << summa;*/

	//4
	/*int num, summa = 0, average, counter = 0, i = 1;

	while (i!=11)
	{
		cout << "Enter number " << i << ":"; cin >> num; cout << endl;
		counter++;
		summa += num;
		i++;
	}
	average = summa / counter;
	cout << "Summa is " << summa << " and average is " << average;*/

	//5
	/*int i = 100;
	do
	{
		cout << i << endl;
		i--;
	} while (i != -1);*/

	//6
	/*int num, summa = 0, i = 1;

	do
	{
		cout << "Enter number " << i << ":"; cin >> num;
		summa += num;
		i++;
	} while (i != 8);
	cout << "Summa is " << summa;*/

}