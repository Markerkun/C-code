#include<iostream>

using namespace std;
void main()
{
	//1
	/*int num;
	cout << " Enter number: "; cin >> num;
	cout << "'1'*1n, '2'*2n, '3'*3n";
	cout << endl;
	for (int one = 0; one < num; one++)
	{
		cout << "1 ";
	}
	cout << endl;
	for (int two = 0; two < 2*num; two++)
	{
		cout << "2 ";
	}
	cout << endl;
	for (int three = 0; three < 3*num; three++)
	{
		cout << "3 ";
	}
	cout << endl;*/

	//2
	/*int size = 10;
	for (int i = 0; i < size; i++)
	{
		for (int  j= 0; j < size; j++)
		{
			if (j == i || j + i == size - 1)
			{
				cout << "0 ";
			}
			else
			{
				cout << "1 ";
			}
		}
		cout << endl;
	}*/

	//3
	/*int sum = 0;
	for (int i = 10; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << i << " ";
			sum += i;
		}
		cout << endl;
	}
	cout << "Sum = " << sum << endl;*/

	//4
	/*for (int i = 0; i <  15; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 8; j++)
			{
				cout << i << " ";
			}
		}
		else
		{
			for (int j = 0; j < 10; j++)
			{
				cout << "1 ";
			}
		}
		
		cout << endl;
	}*/

	//5
	/*for (int i = 0; i < 30; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << "1 ";
			}
		}
		else
		{
			
			for (int j = 1; j < i + 1; j++)
			{
				cout << j << " ";
			}
		}

		cout << endl;
	}*/

	//6
	/*for (int i = 1; i < 11; i++)
	{
		for (int j = 1; j < 11; j++)
		{
			cout << j << "*" << i << "=" << i * j << "\t";
		}
		cout << endl;
	}*/

	//7
	/*int a, b, counter = 0;
	cout << "Start: "; cin >> a;
	cout << "End: "; cin >> b;

	for (int i = a; i < b; i++)
	{
		if (i % 12 == 0)
		{
			counter++;
		}
	}
	cout << "Amount of numbers, which %12==0: " << counter << endl;*/

int m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, m11, m12, a, b, max, min;
cout << "Enter salary at month 1: "; cin >> m1;
cout << "Enter salary at month 2: "; cin >> m2;
cout << "Enter salary at month 3: "; cin >> m3;
cout << "Enter salary at month 4: "; cin >> m4;
cout << "Enter salary at month 5: "; cin >> m5;
cout << "Enter salary at month 6: "; cin >> m6;
cout << "Enter salary at month 7: "; cin >> m7;
cout << "Enter salary at month 8: "; cin >> m8;
cout << "Enter salary at month 9: "; cin >> m9;
cout << "Enter salary at month 10: "; cin >> m10;
cout << "Enter salary at month 11: "; cin >> m11;
cout << "Enter salary at month 12: "; cin >> m12;

cout << 
}