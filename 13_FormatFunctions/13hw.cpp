#include <iostream>
using namespace std;

int main()
{
	//1
	const int size = 255;
	int counter = 0, count_a = 0, count_o = 0, count_al = 0, count_num = 0, count_space = 0;
	char massive[] = {"Lorem an ipsum dolor sit 2 times to amet"}, user_massive[size];
	for (int i = 0; i < sizeof(massive); i++)
	{
		cout << massive[i];
		if (massive[i] == 'a') {
			count_a++;
		}
		if (massive[i] == 'o') {
			count_o++;
		}
		
	}
	cout << endl;
	cout << "Amount of 'a': " << count_a << "\nAmount of 'o': " << count_o << endl;
	cout << endl;

	//2
	for (int i = 0; i < sizeof(massive); i++)
	{
		cout << massive[i];
		if (isalpha(massive[i])) {
			count_al++;
		}
		if (isdigit(massive[i])) {
			count_num++;
		}
		if (isspace(massive[i])) {
			count_space++;
		}

	}
	cout << endl;
	cout << "Amount of letters: " << count_al << "\nAmount of digits: " << count_num << "\nAmount of spaces: " << count_space << endl;
	cout << endl;

	//3
	for (int i = 0; i < sizeof(massive); i++)
	{
		cout << massive[i];
		if (islower(massive[i]))
		{
			massive[i] =  toupper(massive[i]);
		}
		if (isupper(massive[i]))
		{
			massive[i] = tolower(massive[i]);
		}
	}
	cout << endl;
	for (int i = 0; i < sizeof(massive); i++)
	{
		cout << massive[i];
	}

	//4
	cout << "Enter your line:\n";
	cin.getline(user_massive, 255);
	for (int i = 0; i < size; i++)
	{
		counter++;
	}
	cout << "Len of your line is " << counter << endl;
	cout << endl;

	//5

}