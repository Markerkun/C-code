//#include <iostream>
//#include <Windows.h>
//using namespace std;
//
//
//void SetPos(int x, int y)
//{
//	COORD C;
//	C.X = x;
//	C.Y = y;
//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), C);
//}
//struct Size
//{
//	int width;
//	int height;
//};
//struct Coord
//{
//	int X;
//	int Y;
//};
//
//
//class Rectanglus
//{
//	Size size;
//	Coord pos;
//	char symbol;
//public:
//	Rectanglus()
//	{
//		size.height = 0;
//		size.width = 0;
//		pos.X = 0;
//		pos.Y = 0;
//		symbol = '=';
//	}
//	Rectanglus(int width, int height)
//	{
//		size.height = height;
//		size.width = width;
//		pos.X = 0;
//		pos.Y = 0;
//		symbol = '=';
//	}
//	Rectanglus(int u_size)
//	{
//		size.height = u_size;
//		size.width = u_size;
//		pos.X = 0;
//		pos.Y = 0;
//		symbol = '=';
//	}
//	void Show()
//	{
//		system("cls");
//		int Y2 = pos.Y;
//
//		for (int i = 0; i < size.height; i++)
//		{
//			if (pos.X != 0 || pos.Y != 0)
//			{
//				SetPos(pos.X, Y2++);
//			}
//			for (int j = 0; j < size.width; j++)
//			{
//				cout << symbol << " ";
//			}
//			cout << '\n';
//		}
//	}
//
//
//	void Scale(int a, int b)
//	{
//		if (a > 0 && b > 0)
//		{
//			size.height = a;
//			size.width = b;
//			return;
//		}
//		cout << "Size can't be negative! >:(";
//
//	}
//
//	void Move(int x, int y)
//	{
//		if (x > 0 && y > 0)
//		{
//			pos.X = x;
//			pos.Y = y;
//			return;
//		}
//		cout << "Position can't be negative! >:(";
//
//	}
//
//	void ChangeSymbol(char symbol)
//	{
//		this->symbol = symbol;
//	}
//
//
//
//
//
//};
//
//
//int main()
//{
//	Rectanglus r;
//	r.Scale(10, 5);
//	r.Show();
//	r.Scale(10, 10);
//	r.Move(5, 5);
//	r.ChangeSymbol('*');
//	r.Show();
//
//}