#include <iostream>
#include <iomanip>

using namespace std;

void InitMDDArray(int rows, int cols, int** array)
{
    srand(time(0));
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            /*cout << "Enter elem [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> array[i][j];*/
            array[i][j] = rand() % 100;
        }
    }
}

void DeleteMDDArray(int rows, int cols, int** array)
{
    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;
}

void ShowMDDArray(int rows, int cols, int** array)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << setw(4) << array[i][j];
        }
        cout << "\n";
    }
}

//1
void Addcol(int** old_array, int rows, int cols, int index)
{
    int newsize = cols + 1;
    int** array = new int* [rows];
    

    //////////////////////////////////

    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[newsize];
        for (int j = 0; j < newsize; j++)
        {
            if (j < index) 
            {
                array[i][j] = old_array[i][j];
            }
            else if (j == index) 
            {
                array[i][j] = 7;
            }
            else 
            {
                array[i][j] = old_array[i][j - 1];
            }
        }
    }


    //////////////////////////////////

    ShowMDDArray(rows, newsize, array);
    DeleteMDDArray(rows, newsize, array);
}


void Delcol(int** old_array, int rows, int cols, int index)
{
    int newsize = cols - 1;
    int** array = new int* [rows];
    

    //////////////////////////////////

    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[newsize];
        for (int j = 0; j < newsize; j++)
        {
            if (j < index) 
            {
                array[i][j] = old_array[i][j];
            }
            else if (j == index) 
            {
                int* elem = &array[i][j];
                delete elem;
            }
            else 
            {
                array[i][j] = old_array[i][j - 1];
            }
        }
    }


    //////////////////////////////////

    ShowMDDArray(rows, newsize, array);
    DeleteMDDArray(rows, newsize, array);
}


void main()
{

    int rows = 5, cols = 5;
    int** array = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[cols];
    }

    InitMDDArray(rows, cols, array);
    ShowMDDArray(rows, cols, array);
    cout << "\n";
    //1
    Addcol(array, rows, cols, 2);
    cout << "\n";
    Delcol(array, rows, cols, 2);

    DeleteMDDArray(rows, cols, array);
}