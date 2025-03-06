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

	//1
	/*int country;
	cout << "\t\tName country\n[Bolgaria:1, Ukraine:2, France:3, United Kingdom:4, Poland:5] "; cin >> country;

	switch (country)
	{
	case 1:
		cout << "Sofia" << endl;
		break;
	case 2:
		cout << "Kyiv" << endl;
		break;
	case 3:
		cout << "Paris" << endl;
		break;
	case 4:
		cout << "London" << endl;
		break;
	case 5:
		cout << "Warsaw" << endl;
		break;

	default:
		cout << "There is no country like this!";
		break;
	}*/

	//2
	int order;
	cout << "Enter order of weekday: "; cin >> order;
	switch (order)
	{
	case 1:
		cout << "It's workday";
		break;
	case 2:
		cout << "It's workday";
		break;
	case 3:
		cout << "It's workday";
		break;
	case 4:
		cout << "It's workday";
		break;
	case 5:
		cout << "It's workday";
		break;
	case 6:
		cout << "It's weekday";
		break;
	case 7:
		cout << "It's weekday";
		break;
	default:
		cout << "It isn't a day of week";
		break;
	}

}