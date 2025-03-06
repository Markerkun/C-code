#include <iostream>

using namespace std;
int main()
{
	//1
	/*int country;
	cout << "\t\tName country\n[Bolgaria:1, Ukraine:2, France:3, United Kingdom:4, Poland:5] "; cin >> country;

	switch (country)
	{
	case 1:
		cout << "Sofia" << endl;
		break;
	case 2:
		cout << "Kyiv" << endl;
		break;
	case 3:
		cout << "Paris" << endl;
		break;
	case 4:
		cout << "London" << endl;
		break;
	case 5:
		cout << "Warsaw" << endl;
		break;

	default:
		cout << "There is no country like this!";
		break;
	}*/

	//2
	/*int order;
	cout << "Enter order of weekday: "; cin >> order;
	switch (order)
	{
	case 1:
		cout << "Monday is workday";
		break;
	case 2:
		cout << "Tuesday is workday";
		break;
	case 3:
		cout << "Wedneday is workday";
		break;
	case 4:
		cout << "Thursday is workday";
		break;
	case 5:
		cout << "Friday is workday";
		break;
	case 6:
		cout << "Saturday is weekday";
		break;
	case 7:
		cout << "Sunday is weekday";
		break;
	default:
		cout << "It isn't a day of week";
		break;
	}*/

	//3
	/*char key;
	cout << "Enter direction of boat\n[ N, S, E, W ]\n"; cin >> key;

	switch (key)
	{
	case 'N':
		cout << "TURN BACK!";
		cout << "Now boat is going on the South";
	case 'S':
		cout << "TURN BACK!";
		cout << "Now boat is going on the North";
	case 'E':
		cout << "TURN BACK!";
		cout << "Now boat is going on the West";
	case 'W':
		cout << "TURN BACK!";
		cout << "Now boat is going on the East";
	default:
		break;
	}*/

	//4
	int animal;
	cout << "Enter an animal\n[ 1-eagle, 2-cow, 3-chicken, 4-mosquito, 5-tiger, 6-dragon ]\n"; cin >> animal;

	switch (animal)
	{
	case 1:
		cout << "Eagle is carnivorous";
		break;
	case 2:
		cout << "Cow is vegetarian";
		break;
	case 3:
		cout << "Chicken is vegetarian";
		break;
	case 4:
		cout << "Mosquito is a vampire";
		break;
	case 5:
		cout << "Tiger is carnivorous";
		break;
	case 6:
		cout << "Dragon is omnivorous";
		break;
	default:
		break;
	}
	
}

