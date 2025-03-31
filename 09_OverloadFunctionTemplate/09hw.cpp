#include <iostream>
#include <iomanip>

using namespace std;

void InitArray(int arr[], const int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 70 - 20;
    }
}
void ShowArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int a_neg(int arr[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            counter++;
        }
    }
    return counter;
}

//1
int a_pos(int arr[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            counter++;
        }
    }
    return counter;
}
int a_zero(int arr[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            counter++;
        }
    }
    return counter;
}

//2
template <typename T>
void InitMatrix(T mat[][10], const int size)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            mat[i][j] = rand() % 40 - 20;
        }
    }
}
template <typename T>
void ShowMatrix(T mat[][10], const int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << setw(4) << mat[i][j];
        }
        cout << endl;
    }
    cout << endl;
}
template <typename T>
T MaxMatrix(T mat[][10], int size)
{
	int max = mat[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
            if (i == j)
            {
                if (mat[i][j] > max)
                {
                    max = mat[i][j];
                }
            }
			
		}
	}
	return max;
}
template <typename T>
T MinMatrix(T mat[][10], int size)
{
	int min = mat[0][0];
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
            if (mat[i][j] < min)
			{
				min = mat[i][j];
			}
		}
	}
	return min;
}
template <typename T>
void BubleSort(T mat[][10], int size)
{
    for (int g = 0; g < size; g++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            for (int j = 0; j < size - i - 1; j++)
            {
                if (mat[i][j] > mat[i][j + 1])
                {
                    int temp = mat[i][j];
                    mat[i][j] = mat[i][j + 1];
                    mat[i][j + 1] = temp;
                }
            }
        }
    }
}

void main()
{

    const int size = 10;
    int arr[size];
    InitArray(arr, size);
    ShowArray(arr, size);
    //1
    cout << "Amount of negative nums: " << a_neg(arr, size) << endl;
    cout << "Amount of positive nums: " << a_pos(arr, size) << endl;
    cout << "Amount of zero nums: " << a_zero(arr, size) << endl;
    //2
    int matrix[size][size];
    InitMatrix(matrix, size);
    ShowMatrix(matrix, size);
    cout << "Max on main diagonal of matrix: " << MaxMatrix(matrix, size) << endl;
    cout << "Min on main diagonal of matrix: " << MinMatrix(matrix, size) << endl;
    BubleSort(matrix, size);
    ShowMatrix(matrix, size);


}