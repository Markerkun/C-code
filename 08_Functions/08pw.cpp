#include <iostream>
using namespace std;
//1
void rectangle(int N, int K)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            cout << "= ";
        }
        cout << endl;
    }
}


//2
int factorial(int num)
{
    int prod = 1;
    for (int i = 1; i < num+1; i++)
    {
        prod *= i;
    }
    return prod;
}


//3
void simple(int num)
{
    int counter = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            counter++;
        }
    }
    if (counter == 0)
    {
        cout << "Your num is simple\n";
    }
    else
    {
        cout << "Your num isn't simple\n";
    }
}


//4
int cube(int num)
{
    return num * num * num;
}


//5
int higher(int a, int b)
{
    return (a > b) ? a : b;
}


//6
char T_F(int a)
{
    return (a > 0) ? 'T' : 'F';
}

//1
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
void MinMax(int arr[], const int size)
{
    int max = arr[0];
    int min = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << "Min: " << min << ", Max: " << max << endl;
}

//2
void reverse(int arr[], const int size)
{
    
    for (int i = 1; i <= size; i++)
    {
        cout << arr[size-i] << " ";
    }
    cout << endl;
}


//3
void simple(int arr[], int size)
{
    int counter = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            
            for (int j = arr[i]-1; j >= 1; j--)
            {
                if (j == 0)
                {
                    NULL;
                }
                else if (arr[i] % j == 0)
                {
                    counter++;
                }
            }
        }
        else
        {
            
            for (int j = arr[i]+1; j <= -1; j++)
            {
                if (j == 0)
                {
                    NULL;
                }
                else if (arr[i] % j == 0)
                {
                    counter++;
                }
            }
        }
        
        if (counter > 1)
        {
            cout << "Number " << arr[i] << " isn't simple" << endl;
        }
        else
        {
            cout << "Number "<< arr[i] << " is simple" << endl;
        }
        counter = 0;
    }
    cout << endl;
}

int main()
{
    //1
    rectangle(5, 7);

    //2
    cout << factorial(5) << endl;

    //3
    simple(4);

    //4
    cout << cube(2) << endl;

    //5
    cout << higher(2, 5) << endl;

    //6
    cout << T_F(-2) << endl;

    //1
    const int size = 10;
    int arr[size];
    InitArray(arr, size);
    ShowArray(arr, size);
    MinMax(arr, size);

    //2
    reverse(arr, size);
    
    //3
    simple(arr, size);
}
