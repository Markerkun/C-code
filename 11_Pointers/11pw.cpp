#include <iostream>
using namespace std;

int main()
{
    //1
    int a = 1, b = 2, c = 3;
    int* pa = &a, * pb = &b, * pc = &c;

    cout << "Product = " << *pa * *pb * *pc << endl;
    cout << "Average = " << (*pa + *pb + *pc) / 3 << endl;
    if (*pa < *pb && *pa < *pc)
    {
        cout << "Min = " << *pa;
    }
    else if (*pb < *pa && *pb < *pc)
    {
        cout << "Min = " << *pb;
    }
    else
    {
        cout << "Min = " << *pc;
    }

    //2
    const int size = 10;
    int arr[size], sum = 0,* parr = arr;
    for (int i = 0; i < size; i++)
    {
        *parr = rand() % 100;
        parr++;
    }
    parr = arr;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr++;
    }
    cout << endl;
    parr--;
    for (int i = 0; i < size; i++)
    {
        cout << *parr << " ";
        parr--;
    }
    cout << endl;
    parr++;
    for (int i = 0; i < size; i++)
    {
        sum += *(parr + i);
    }
    cout << "Summury = " << sum << endl;

    //3
    int *max = parr, *min = parr;
    for (int i = 0; i < size; i++)
    {
        int el = *(parr + i);
        if (el > *max) 
        {
            *max = *(parr + i);
        }
        if (el < *min)
        {
            *min = *(parr + i);
        }
    }
    cout << "Max = " << *max << "\nMin = " << *min << endl;
}