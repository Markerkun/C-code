#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	ofstream fout;
	ifstream fin;
	fout.open("Text2.txt");
	fin.open("Text1.txt");

	char buffer[200];
	fin.getline(buffer, 196);
	
	for (int i = 0; i < 194; i++)
	{
		fout << buffer[i];
	}


	fout.close();
	fin.close();	







}
