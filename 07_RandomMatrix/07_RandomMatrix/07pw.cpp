//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//int main()
//{
//    srand(time(NULL));
//
//    //1
//    /*int counter = 0;
//    const int row = 4;
//    const int col = 3;
//    int array[row][col] = {};
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            array[i][j] = rand() % 9;
//            cout << array[i][j] << " ";
//            if (array[i][j] != 0)
//            {
//                counter++;
//            }
//        }
//        cout << endl;
//    }
//        cout << endl;
//
//    cout << "Amount of nums, which != 0: " << counter;*/
//
//    //2
//    /*int counter = 0;
//    const int row = 3;
//    const int col = 3;
//    int array[row][col] = {};
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            array[i][j] = rand() % 9;
//            cout << array[i][j] << " ";
//            if (array[i][j] == 0)
//            {
//                counter++;
//            }
//        }
//        cout << endl;
//    }
//    cout << endl;
//
//    cout << "Amount of nums, which == 0: " << counter;*/
//
//    //3
//    /*int num, counter = 0;
//    const int row = 7;
//    const int col = 3;
//    int array[row][col] = {};
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            array[i][j] = -20 + rand() % 40;
//            cout << setw(3) << array[i][j] << " ";
//            if (array[i][j] < 0)
//            {
//                num = array[i][j] * -1;
//            }
//            else
//            {
//                num = array[i][j];
//            }
//            if (num < 12)
//            {
//                counter++;
//            }
//        }
//        cout << endl;
//    }
//    cout << endl;
//    cout << "Amount of nums, which < 12: " << counter;*/
//
//    //4
//    /*int counter = 0;
//    const int row = 4;
//    const int col = 5;
//    int array[row][col] = {};
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            array[i][j] = -20 + rand() % 40;
//            cout << setw(3) << array[i][j] << " ";
//            if (array[i][j] > 0)
//            {
//                counter++;
//            }
//        }
//        cout << endl;
//    }
//    cout << endl;
//    cout << "Amount of nums, which > 0: " << counter;*/
//
//    //5
//    /*int prod = 1;
//    const int row = 4;
//    const int col = 5;
//    int array[row][col] = {};
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            array[i][j] = -20 + rand() % 40;
//            cout << setw(3) << array[i][j] << " ";
//            if (array[i][j] > 0)
//            {
//                prod *= array[i][j];
//            }
//        }
//        cout << endl;
//    }
//    cout << endl;
//    cout << "Product of nums, which > 0: " << prod;*/
//
//    //6
//    /*int prod = 1;
//    const int row = 4;
//    const int col = 5;
//    int array[row][col] = {};
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            array[i][j] = -20 + rand() % 40;
//            cout << setw(3) << array[i][j] << " ";
//            if (array[i][j] < 0)
//            {
//                prod *= array[i][j];
//            }
//        }
//        cout << endl;
//    }
//    cout << endl;
//    cout << "Product of nums, which < 0: " << prod;*/
//
//    //7
//    /*int counter = 0;
//    const int row = 4;
//    const int col = 4;
//    int array[row][col] = {};
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            array[i][j] = rand() % 20;
//            cout << setw(3) << array[i][j] << " ";
//            if (array[i][j] % 6 == 1)
//            {
//                counter++;
//            }
//        }
//        cout << endl;
//    }
//    cout << endl;
//    cout << "Amount of nums, which % 6 == 1: " << counter;*/
//
//    //8
//    /*int  min;
//    const int row = 5;
//    const int col = 6;
//    int array[row][col] = {};
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            array[i][j] = rand() % 20;
//            cout << setw(3) << array[i][j] << " ";
//        }
//        cout << endl;
//    }
//     min = array[0][0];
//     for (int i = 0; i < row; i++)
//        {
//            for (int j = 0; j < col; j++)
//            {
//                if (min > array[i][j])
//                {
//                    min = array[i][j];
//                }
//            }
//        }
//        cout << endl;
//        cout << "Min num: " << min;*/
//
//        /*int  max;
//        const int row = 5;
//        const int col = 6;
//        int array[row][col] = {};
//        for (int i = 0; i < row; i++)
//        {
//            for (int j = 0; j < col; j++)
//            {
//                array[i][j] = rand() % 20;
//                cout << setw(3) << array[i][j] << " ";
//            }
//            cout << endl;
//        }
//        max = array[0][0];
//        for (int i = 0; i < row; i++)
//        {
//            for (int j = 0; j < col; j++)
//            {
//                if (max < array[i][j])
//                {
//                    max = array[i][j];
//                }
//            }
//        }
//        cout << endl;
//        cout << "Max num: " << max;*/
//
//        //10
//    float sum = 0;
//    const int row = 4;
//    const int col = 5;
//    float array[row][col] = {};
//    for (int i = 0; i < row; i++)
//    {
//        for (int j = 0; j < col; j++)
//        {
//            array[i][j] = -20.1 + rand() % 40;
//            cout << setw(5) << array[i][j] << " ";
//            if (array[i][j] < 0)
//            {
//                sum += array[i][j];
//            }
//        }
//        cout << endl;
//    }
//    cout << endl;
//    cout << "Summa of nums, which < 0: " << sum;
//}