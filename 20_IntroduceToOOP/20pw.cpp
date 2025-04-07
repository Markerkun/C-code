#include <iostream>
#include <fstream>

using namespace std;

class Point
{
	int x;
	int y;
	int z;

public:
	void Init()
	{
		cout << "Enter pos x: "; cin >> x;
		cout << "Enter pos y: "; cin >> y;
		cout << "Enter pos z: "; cin >> z;

	}
	void Show()
	{
		cout << "Point (" << x << "; " << y << "; " << z << ")" << endl;
	}

	void setx(int x)
	{
		this->x = x;
	}
	void setz(int z)
	{
		this->z = z;
	}
	void sety(int y)
	{
		this->y = y;
	}

	int getx()
	{
		return x;
	}
	int getz()
	{
		return z;
	}
	int gety()
	{
		return y;
	}

	void SaveToFile(const char& filename)
	{
		ofstream tof(&filename, ios_base::app);
		tof << x << ' ' << y << ' ' << z << ' ';
		tof.close();
		cout << "Successfully!\n";
	}
	void LoadFromFile(const char& filename)
	{
		ifstream fromf(&filename);

		if (!fromf)
		{
			cout << "Error with opening file" << endl; return;
		}
		cout << "Position from file: " << endl;
		
		while (fromf >> x >> y >> z)
		{
			fromf.ignore();
			cout << "-----------------------------\n";
			Show();
			cout << "-----------------------------\n";
		}


		fromf.close();
		cout << "Successfully!\n";
	}



};


int main()
{
	Point p1;
	p1.Init();
	p1.Show();
	p1.setx(5);
	cout << p1.getx() << '\n';
	p1.Show();
	Point p;
	const char filename[] = { "Position.txt" };
	p1.SaveToFile(*filename);
	p.Show();
	p.LoadFromFile(*filename);
	p.Show();
}
