#include <iostream>
using namespace std;

int main()
{
	//1
	const int size = 255;
	int counter = 0, count_a = 0, count_o = 0, count_al = 0, count_num = 0, count_space = 0;
	char massive[] = {"Lorem an ipsum dolor sit 2 times to amet"};

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
	
	/*char userString[100]; 
	int length = 0;
	char* ptr = userString;

	cout << "Enter a string: ";
	cin.getline(userString, 100);

	while (*(ptr + length) != '\0') 
	{
		length++;
	}

	cout << "Length of the string: " << length << "\n";*/

	//5

	/*char simbol;
	cout << "\n" << "Enter a simbol you want to delete: "; cin >> simbol;
	for (int i = 0; i < sizeof(massive); i++)
	{
		if (massive[i] == simbol) {
			continue;
		}
		cout << massive[i];
	}*/

	//6
	char userString1[100];
	char vowels[] = { "aeiouAEIOU" };
	char consonants[] = { "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz" };
	char punct[] = { "!'#$%&'()*+,-./:;<=>?@[]^_`{|}~" };
	int countv = 0, countc = 0, countp = 0, counts = 0;
	cout << "Enter a string: ";
	cin.getline(userString1, 100);

	for (int i = 0; i < sizeof(userString1)-2; i++)
	{
		for (int j = 0; j < sizeof(vowels); j++)
		{
			if (userString1[i] == vowels[j])
			{
				countv++;
				continue;
			}
		}
		for (int j = 0; j < sizeof(consonants); j++)
		{
			if (userString1[i] == consonants[j])
			{
				countc++;
				continue;
			}
		}
		for (int j = 0; j < sizeof(punct); j++)
		{
			if (userString1[i] == punct[j])
			{
				countp++;
				continue;
			}
		}
		if (userString1[i] == ' ')
		{
			counts++;
		}
	}

	cout << "Amount of...\nVowels = " << countv-1 << "\nConsonants = " << countc-1 << "\nPunctuation marks = " << countp << "\nSpaces = " << counts << "\n";

}