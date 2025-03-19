#include <iostream>
#include <utility>
using namespace std;
//1
int* Maxof2(int* a, int* b)
{
	return (*a > *b) ? a : b;
}

//2
void Oper(int* c)
{
	if (*c < 0)
	{
		cout << "Operator of num is '-'" << endl;
	}
	else
	{
		cout << "Operator of num is '+'" << endl;
	}
}

//3
void Change(int* num1, int* num2)
{
	/*swap(*num1, *num2);*/

	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

//4
int Calc(int* a, int* b,char operant)
{
	switch (operant)
	{
	case '/':
		return *a / *b;
	case '+':
		return *a + *b;
	case '-':
		return *a - *b;
	case '*':
		return *a * *b;
	default:
		cout << "Wrong operation!";
		break;
	}
}

void ArrSum(int* arr, int size)
{
	int sum = 0, num;
	for (int i = 0; i < size; i++)
	{
		num = *(arr + i);
		sum = sum + num;
	}
	cout << "Summury of massive: " << sum << endl;
}

int main()
{
	//1
	int a = 15;
	int b = 4;
	int * max = Maxof2(&a, &b);
	cout << "Max number is " << *max << endl;

	//2
	int c = -2;
	Oper(&c);

	//3
	int num1 = 1, num2 = 10;
	cout << "num1 = " << num1 << endl << "num2 = " << num2 << endl;
	Change(&num1, &num2);
	cout << "num1 = " << num1 << endl << "num2 = " << num2 << endl;

	//4
	char operation;
	cout << "Choose an operation [/,*,+,-]: "; cin >> operation;
	cout << a << " " << operation <<  " " << b << " = " << Calc(&a, &b, operation) << endl;

	//5
	srand(time(0));
	const int size = 10;
	int arr[size];
	
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 30 - 15;
	}
	int* parr = arr;

	ArrSum(parr, size);


}

