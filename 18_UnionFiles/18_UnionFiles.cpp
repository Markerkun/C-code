#include <iostream>
#include <fstream>
#include <string

using namespace std;

int main()
{

	ifstream fin1;
	ifstream fin2;
	fin1.open("Text1.txt");

	char text[] = { "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua." };
	fin1.getline(text, 125);
	
	
	fin2.open("Text2.txt");
	fin2.getline(text, 123);

		



    char line1[124];
    char line2[124];
    int indx = 0;
    bool flag = true;
    line1.getline(fin1, 124);
    while (line1[indx] == line2[indx])
    {
        if (line1[indx] != line2[indx]) 
        {
            cout << "Elem on index " << indx << " isn't match\n";
            cout << "file 1: " << line1 << "\n";
            cout << "file 2: " << line2 << "\n";
            flag = false;
        }
        indx++;
    }
    

    fin1.close();
    fin2.close();







}
