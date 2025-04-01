#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;


//1
void SetPos(int x, int y)
{
	COORD C;
	C.X = x;
	C.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), C);
}


struct rectangle
{
	int a;
	int b;
	int x = 0;
	int y = 0;

	void Init()
	{
		cout << "Enter a heigth of rectangle: "; cin >> a;
		cout << "Enter a width of rectangle: "; cin >> b;

	}
	void Show()
	{
		int y2 = y;
		
		for (int i = 0; i < a; i++)
		{
			if (x != 0 || y != 0)
			{
				SetPos(x, y2++);
			}
			for (int j = 0; j < b; j++)
			{
				cout << "= ";
			}
			cout << '\n';
		}
	}

	void Change()
	{
		cout << "Enter a heigth of rectangle: "; cin >> a;
		cout << "Enter a width of rectangle: "; cin >> b;
	}

	void Pos()
	{
		cout << "Enter x start: "; cin >> x;
		cout << "Enter y start: "; cin >> y;
		SetPos(x, y);
	}

};


//2
struct point
{
	int x = -1;
	int y = -1;
	int x1 = -1;
	int y1 = -1;


};


int main()
{
	//1
	rectangle r1{};

	r1.Init();
	r1.Show();
	r1.Change();
	r1.Show();
	r1.Pos();
	r1.Show();

	//2

	

}

