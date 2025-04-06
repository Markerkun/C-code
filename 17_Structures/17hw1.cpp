#include <iostream>
#include <iomanip>
#include <Windows.h>

using namespace std;

struct car
{
	float length;
	float clearance;
	float engine_capacity;
	float engine_power;
	float wheel_diameter;
	char color[10];
	char gearbox_type[10];

	void Show()
	{
		cout << "length : " << length << '\n';
		cout << "ground clearance : " << clearance << '\n';
		cout << "engine capacity : " << engine_capacity << '\n';
		cout << "engine power : " << engine_power << '\n';
		cout << "wheel diameter : " << wheel_diameter << '\n';
		cout << "color : " << color << '\n';
		cout << "gearbox type : " << gearbox_type << '\n';
		cout << endl;
	}
	void Init()
	{
		cout << "Enter the length : ";
		cin >> length;
		cout << "Enter the ground clearance : ";
		cin >> clearance;
		cout << "Enter the engine capacity : ";
		cin >> engine_capacity;
		cout << "Enter the engine power : ";
		cin >> engine_power;
		cout << "Enter the wheel diameter : ";
		cin >> wheel_diameter;
		cout << "Enter the color : ";
		cin >> color;
		cout << "Enter the gearbox type : ";
		cin >> gearbox_type;
	}
};






void main()
{
	car car1/* = {4.5, 0.2, 1.5, 200, 50, "black", "mechanic"}*/;
	car1.Init();
	car1.Show();

}