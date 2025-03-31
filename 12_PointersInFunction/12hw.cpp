#include <iostream>
#include <iomanip>
using namespace std;

void N_to_Zero(int parr[], int length)
{
	for (int i = 0; i < length; i++)
	{
		if (*(parr + i) < 0) {
			*(parr + i) = 0;
		}
		cout << setw(4) << *(parr + i);
	}cout << '\n';
}
void ShowM(int mat[][10], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			cout << setw(4) << mat[i][j];
		}cout << '\n';
	}cout << '\n';
}
void InitM(int mat[][10], int length)
{
	srand(time(NULL));
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			mat[i][j] = rand() % 100 - 50;
		}
	}
}
void Change(int* f, int* s)
{
	int temp = *f;
	*f = *s;
	*f = temp;
}
void Change(int mat[][10], int length)
{
	for (int i = 0; i < 2; i++)
	{
		int temp = mat[0][i];
		mat[0][i] = mat[1][i];
		mat[1][i] = temp;
	}
}


void main()
{
	//1
	int a = 2, b = 3, c = 4;
	int& la = a;
	int& lb = b;
	int& lc = c;
	
	cout << lc << " " << lb << " " << la << " << Nums" << "\n";

	cout << "Multy of nums: " << la * lb * lc << "\n";
	cout << "Average: " << (la + lb + lc) / 3 << "\n";
	cout << "Min: " << ((la > lb) ? ((lb > lc) ? lc : lb) : la) << "\n";

	//2
	srand(time(0));
	const int length = 10;
	int arr[length]; for (int i = 0; i < length; i++) { arr[i] = rand() % 100 - 50; cout << setw(4) << arr[i]; } cout << '\n';

	int* parr = arr;
	N_to_Zero(parr, length);

	//3
	int n1 = 2, n2 = 5;

		
}