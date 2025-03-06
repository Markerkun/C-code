#include<iostream>

using namespace std;
void main()
{
	//1
	/*unsigned int a, b;
	cout << "Enter side a: "; cin >> a;
	cout << "Enter side b: "; cin >> b;

	if (a == b)
	{
		cout << "It's square!";
	}
	else
	{
		cout << "It's rectangle!";
	}*/

	//2
	/*unsigned int age;
	cout << "Enter the age of child: "; cin >> age;

	if (age < 2)
	{
		cout << "Child can't go anywhere";
	}
	else if (age >= 2 && age < 6)
	{
		cout << "Child can go to the kindergarden";
	}
	else if (age >= 6 && age < 15)
	{
		cout << "Child can go to the school";
	}
	else if (age >= 15 && age < 18)
	{
		cout << "Child can go to the college or stay at school";
	}
	else
	{
		cout << "Child can go to the university or go on some job, so it's not even a child";
	}*/

	//3
	/*int n1, n2, n3;

	cout << "Enter number 1: "; cin >> n1;
	cout << "Enter number 2: "; cin >> n2;
	cout << "Enter number 3: "; cin >> n3;

	if (n1 < 0 && n2 < 0 || n2 < 0 && n3 < 0 || n1 < 0 && n3 < 0)
	{
		cout << "There is two negative numbers";
	}
	else
	{
		cout << "There isn't two negative numbers";
	}*/

	//4
	/*int num;

	cout << "Enter your number: ";
	cin >> num;

	if (num >= 2 && num <= 5 || num >= -1 && num <= 1)
	{
		cout << "Your number is in range";
	}
	else
	{
		cout << "Your number is out of range";
	}*/

	//5
	/*int n1, n2, n3;

	cout << "Enter number 1: "; cin >> n1;
	cout << "Enter number 2: "; cin >> n2;
	cout << "Enter number 3: "; cin >> n3;

	if (n1 < 0 && n2 < 0 && n3>0 || n2 < 0 && n3 < 0 && n1>0 || n1 < 0 && n3 < 0 && n2>0)
	{
		cout << "There is only two negative numbers";
	}
	else
	{
		cout << "There isn't only two negative numbers";
	}*/

	//6
	int n1, n2, n3;

	cout << "Enter number 1: "; cin >> n1;
	cout << "Enter number 2: "; cin >> n2;
	cout << "Enter number 3: "; cin >> n3;

	if (n1 % 2 != 0 && n2 % 2 != 0 && n3 % 2 != 0)
	{
		cout << "All three numbers are odd";
	}
	else
	{
		cout << "There is even number";
	}
}

