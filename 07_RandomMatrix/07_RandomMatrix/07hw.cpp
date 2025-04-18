#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    srand(time(NULL));
    
    const int size = 10;
    int matrix[size][size], counter = 0, key;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
        	matrix[i][j] = rand() % 40 - 20;
        }
    }
    //1
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++) {
            if (matrix[i][j] == 0)
                counter++;
        }
    }
    cout << "Amount of zero: " << counter << endl;


    //2
	int max = matrix[0][0];
	do
	{
		cout << "Choose the operation " << endl;
		cout << " [ 1 ] - top right " << endl;
		cout << " [ 2 ] - bottom left " << endl;
		cout << " [ 3 ] - top " << endl;
		cout << " [ 4 ] - bottom " << endl;
		cout << " [ 5 ] - bottom and top " << endl;
		cout << " [ 6 ] - left and right " << endl;
		cout << " [ 7 ] - left " << endl;
		cout << " [ 8 ] - right " << endl;
		cout << " [ 9 ] - top left " << endl;
		cout << " [ 10 ] - bottom right " << endl;
		cout << " [ 0 ] - Exit  " << endl;
		cin >> key;
		cout << endl;

		switch (key)
		{
		case 1:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i <= j)
					{
						if (matrix[i][j] > max)
						{
							max = matrix[i][j];
						}
					}
					else
					{
						cout << setw(3);
					}

				}
				cout << endl;
			}
			cout << "Max = " << max << endl;
			break;
		case 2:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i >= j)
					{
						cout << setw(3) << matrix[i][j];
						if (matrix[i][j] > max)
						{
							max = matrix[i][j];
						}
					}
					else
					{
						cout << setw(3);
					}

				}
				cout << endl;
			}
			cout << "Max = " << max << endl;
			break;
		case 3:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i <= j && i + j <= size - 1)
					{
						cout << setw(3) << matrix[i][j];
						if (matrix[i][j] > max)
						{
							max = matrix[i][j];
						}
					}
					else
					{
						cout << setw(3);
					}
				}
				cout << endl;
			}
			cout << "Max = " << max << endl;
			break;
		case 4:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i >= j && i + j >= size - 1)
					{
						cout << setw(3) << matrix[i][j];
						if (matrix[i][j] > max)
						{
							max = matrix[i][j];
						}
					}
					else
					{
						cout << setw(3);
					}
				}
				cout << endl;
			}
			cout << "Max = " << max << endl;
			break;
		case 5:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i >= j && i + j >= size - 1)
					{
						cout << setw(3) << matrix[i][j];
						if (matrix[i][j] > max)
						{
							max = matrix[i][j];
						}
					}
					else if (i <= j && i + j <= size - 1)
					{
						cout << setw(3) << matrix[i][j];
						if (matrix[i][j] > max)
						{
							max = matrix[i][j];
						}
					}
					else
					{
						cout << setw(3);
					}
				}
				cout << endl;
			}
			cout << "Max = " << max << endl;
			break;
		case 6:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i >= j && i + j <= size - 1)
					{
						cout << setw(3) << matrix[i][j];
						if (matrix[i][j] > max)
						{
							max = matrix[i][j];
						}
					}
					else if (i <= j && i + j >= size - 1)
					{
						cout << setw(3) << matrix[i][j];
						if (matrix[i][j] > max)
						{
							max = matrix[i][j];
						}
					}
					else
					{
						cout << setw(3);
					}
				}
				cout << endl;
			}
			cout << "Max = " << max << endl;
			break;
		case 7:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i >= j && i + j <= size - 1)
					{
						cout << setw(3) << matrix[i][j];
						if (matrix[i][j] > max)
						{
							max = matrix[i][j];
						}
					}
					else
					{
						cout << setw(3);
					}
				}
				cout << endl;
			}
			cout << "Max = " << max << endl;
			break;
		case 8:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i <= j && i + j >= size - 1)
					{
						cout << setw(3) << matrix[i][j];
						if (matrix[i][j] > max)
						{
							max = matrix[i][j];
						}
					}
					else
					{
						cout << setw(3);
					}
				}
				cout << endl;
			}
			cout << "Max = " << max << endl;
			break;
		case 9:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i + j <= size - 1)
					{
						cout << setw(3) << matrix[i][j];
						if (matrix[i][j] > max)
						{
							max = matrix[i][j];
						}
					}
					else
					{
						cout << setw(3);
					}

				}
				cout << endl;
			}
			cout << "Max = " << max << endl;
			break;
		case 10:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i + j >= size - 1)
					{
						cout << setw(3) << matrix[i][j];
						if (matrix[i][j] > max)
						{
							max = matrix[i][j];
						}
					}
					else
					{
						cout << setw(3);
					}
				}
				cout << endl;
			}
			cout << "Max = " << max << endl;
			break;
		default:
			break;
		}
	} while (key != 0);
}