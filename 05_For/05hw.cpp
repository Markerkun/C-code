#include<iostream>

using namespace std;
void main()
{

	int key, size = 9;
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
						cout << "= ";
					}
					else
					{
						cout << "  ";
					}

				}
				cout << endl;
			}
			break;
		case 2:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i >= j)
					{
						cout << "= ";
					}
					else
					{
						cout << "  ";
					}

				}
				cout << endl;
			}
			break;
		case 3:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i <= j && i + j <= size - 1)
					{
						cout << "= ";
					}
					else
					{
						cout << "  ";
					}

				}
				cout << endl;
			}
			break;
		case 4:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i >= j && i + j >= size - 1)
					{
						cout << "= ";
					}
					else
					{
						cout << "  ";
					}

				}
				cout << endl;
			}
			break;
		case 5:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i >= j && i + j >= size - 1)
					{
						cout << "= ";
					}
					else if (i <= j && i + j <= size - 1)
					{
						cout << "= ";
					}
					else
					{
						cout << "  ";
					}

				}
				cout << endl;
			}
			break;
		case 6:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i >= j && i + j <= size - 1)
					{
						cout << "= ";
					}
					else if (i <= j && i + j >= size - 1)
					{
						cout << "= ";
					}
					else
					{
						cout << "  ";
					}

				}
				cout << endl;
			}
			break;
		case 7:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i >= j && i + j <= size - 1)
					{
						cout << "= ";
					}
					else
					{
						cout << "  ";
					}

				}
				cout << endl;
			}
			break;
		case 8:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i <= j && i + j >= size - 1)
					{
						cout << "= ";
					}
					else
					{
						cout << "  ";
					}

				}
				cout << endl;
			}
			break;
		case 9:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i + j <= size - 1)
					{
						cout << "= ";
					}
					else
					{
						cout << "  ";
					}

				}
				cout << endl;
			}
			break;
		case 10:
			for (int i = 0; i < size; i++)
			{
				for (int j = 0; j < size; j++)
				{

					if (i + j >= size - 1)
					{
						cout << "= ";
					}
					else
					{
						cout << "  ";
					}

				}
				cout << endl;
			}
			break;
		default:
			break;
		}
	} while (key != 0);
}