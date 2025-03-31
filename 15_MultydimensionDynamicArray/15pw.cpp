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
void ShowMDDArray(int rows, int cols, int**array)
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
void DeleteMDDArray(int rows, int cols, int** array)
{
    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }
    delete[] array;
}

//1
void AddSDAToEnd(int** old_array, int rows, int cols)
{
    int newsize = rows + 1;
    int** array = new int* [newsize];
    for (int i = 0; i < newsize; i++)
    {
        array[i] = new int[cols];
    }

    //////////////////////////////////

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++) 
        {
            array[i][j] = old_array[i][j];
        }
        array[newsize-1][i] = rand() % 100;
    }
    
    //////////////////////////////////

    ShowMDDArray(newsize, cols, array);
    DeleteMDDArray(newsize, cols, array);
}


//2
void AddSDAToStart(int** old_array, int rows, int cols)
{
    int newsize = rows + 1;
    int** array = new int* [newsize];

    for (int i = 0; i < newsize; i++)
    {
        array[i] = new int[cols];
    }

    ////////////////////////////

    for (int i = 0; i < cols; i++)
    {
        array[0][i] = rand() % 100;
    }
    for (int i = 1; i < newsize; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = old_array[i-1][j];
        }
    }

    ////////////////////////

    ShowMDDArray(newsize, cols, array);
    DeleteMDDArray(newsize, cols, array);
}

//3
void AddSDAToIndex(int** old_array, int rows, int cols, int index)
{
    int newsize = rows + 1;
    int** array = new int* [newsize];

    for (int i = 0; i < newsize; i++)
    {
        array[i] = new int[cols];
    }


    //////////////////////////////////////
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = old_array[i][j];
        }
    }

    for (int i = 0; i < cols; i++)
    {
        array[index][i] = 3;
    }

    for (int i = index+1; i < newsize; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = old_array[i-1][j];
        }
    }
    ////////////////////////////////////////


    ShowMDDArray(newsize, cols, array);
    DeleteMDDArray(newsize, cols, array);
}

//4
void DeleteSDAByIndex(int** old_array, int rows, int cols, int index)
{
    int newsize = rows - 1;
    int** array = new int* [newsize];

    for (int i = 0; i < newsize; i++)
    {
        array[i] = new int[cols];
    }


    //////////////////////////////////////
    for (int i = 0; i < index; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = old_array[i][j];
        }
    }

    for (int i = index + 1; i < newsize; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = old_array[i - 1][j];
        }
    }
    ////////////////////////////////////////


    ShowMDDArray(newsize, cols, array);
    DeleteMDDArray(newsize, cols, array);
}



int main()
{
    int rows, cols;
    cout << "Enter count of rows and cols: " << endl;
    cin >> rows >> cols;
    int** array = new int* [rows];
    for (int i = 0; i < rows; i++)
    {
        array[i] = new int[cols];
    }

    InitMDDArray(rows, cols, array);
    ShowMDDArray(rows, cols, array);
    cout << "\n";
    //1
    AddSDAToEnd(array, rows, cols);
    cout << "\n";
    //2
    AddSDAToStart(array, rows, cols);
    cout << "\n";
    //3
    AddSDAToIndex(array, rows, cols, 2);
    cout << "\n";
    //4
    DeleteSDAByIndex(array, rows, cols, 2);
    cout << "\n";

    DeleteMDDArray(rows, cols, array);



    cout << "Hello World" << endl;

}

