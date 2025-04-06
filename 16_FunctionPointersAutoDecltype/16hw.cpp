#include <iostream>
#include <iomanip>

using namespace std;

//1
float Sum(int a, int b)
{
	return a + b;
}
float Sub(int a, int b)
{
	return a - b;
}
float Division(int a, int b)
{
	return a / b;
}
float Multy(int a, int b)
{
	return a * b;
}

void main()
{
	float (*FuncArr[4])(int, int) = { Sum, Sub, Multy, Division };
	int x = 6, y = 2;
	char c = '+';

	while (c != 'S')
	{
		cout << "Enter operation: ";
		cin >> c;
		cout << "Enter your numbers: " << "\n";
		cin >> x >> y;
		switch (c)
		{
		case '+':
			cout << "Sum of numbers (x + y) : " << FuncArr[0](x, y) << "\n";
			break;
		case '-':
			cout << "Sub of numbers (x - y) : " << FuncArr[1](x, y) << "\n";
			break;
		case '*':
			cout << "Multy of numbers (x * y) : " << FuncArr[2](x, y) << "\n";
			break;
		case '/':
			cout << "Division of numbers (x / y) : " << FuncArr[3](x, y) << "\n";
			break;
		default:
			c = 'S';
			break;
		}
	}
}