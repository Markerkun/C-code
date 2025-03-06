#include<iostream>

using namespace std;
void main()
{
	//1
	/*int dob = 1;
	const int size = 10;
	int list[size];

	for (int i = 0; i < size; i++)
	{
		cout << "Enter number " << i + 1 << ": "; cin >> list[i];
		dob *= list[i];
	}
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
	cout << "Product: " << dob;*/

	//2
	/*const int size = 7;

	int list[size] = { 2,-6,5,35,1,-14,-5 };
	int p_sum = 0;
	int n_sum = 0;
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
		if (list[i] < 0)
		{
			n_sum += list[i];
		}
		else
		{
			p_sum += list[i];
		}

	}
	cout << endl;
	cout << "Sum of positive numbers = " << p_sum << endl;
	cout << "Sum of negative numbers = " << n_sum << endl;*/

	//3
	/*int e_sum = 0;
	const int size = 7;
	long list[size] = { 129,321873,4982190,57325,67182,1647,6572 };

	for (int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
		if (list[i] % 2 == 0)
		{
			e_sum += list[i];
		}
	}
	cout << endl;
	cout << "Sum of even numbers is " << e_sum;*/

	//4
	/*const int size = 32;
	long long list[size] = { 2 };

	for (int i = 1; i < size; i++)
	{
		list[i] = list[i - 1] * 2;
	}
	for (int i = 0; i < size; i++)
	{
		cout << list[i] << "  ";
	}*/

	//5
	const int size = 7;

	int list[size] = { 2,-6,5,35,1,-14,-5 };
	int n_sum = 0;
	for (int i = 0; i < size; i++)
	{

		if (list[i] < 0)
		{
			list[i] *= -1;
		}
		cout << list[i] << " ";
	}