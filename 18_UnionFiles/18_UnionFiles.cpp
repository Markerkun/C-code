#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void main() 
{
    //1
    ofstream f1("file1.txt");
    ofstream f2("file2.txt");

    f1 << "Some \ntext";
    f2 << "Some text";

    f1.close();
    f2.close();

    ifstream fi1("file1.txt");
    ifstream fi2("file2.txt");

    string l1, l2;
    int i = 1;
    bool flag = true;

    while (getline(fi1, l1) && getline(fi2, l2)) {
        if (l1 != l2) 
        {
            cout << "Row " << i << " not matches:\n";
            cout << "file1.txt: " << l1 << "\n";
            cout << "file2.txt: " << l2 << "\n";
            flag = false;
        }
        i++;
    }

    if (flag)
        cout << "They're same" << endl;

    fi1.close();
    fi2.close();


    //2
    char vowels[] = { "aeiouAEIOU" };
    char consonants[] = { "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz" };
    char nums[] = { "1234567890" };
    int countv = 0, countc = 0, countn = 0, counts = 0, countr = 0;

    ofstream file1("Long_text.txt");
    ofstream file2("Stats.txt");
    file1 << "Lorem ipsum dolor sit amet, consectetur adipiscing elit. \nVestibulum nec quam quis turpis semper pellentesque \nsit amet quis dui.";
    file1.close();
    ifstream fin("Long_text.txt");
    char l[130];
    while (!fin.eof())
    {
        fin >> l;
    }
    fin.close();
    for (int i = 0; i < sizeof(l) - 1; i++)
    {
        for (int j = 0; j < sizeof(vowels); j++)
        {
            if (l[i] == vowels[j])
            {
                countv++;
                continue;
            }
        }
        for (int j = 0; j < sizeof(consonants); j++)
        {
            if (l[i] == consonants[j])
            {
                countc++;
                continue;
            }
        }
        for (int j = 0; j < sizeof(nums); j++)
        {
            if (l[i] == nums[j])
            {
                countn++;
                continue;
            }
        }
        if (l[i] == '\n')
        {
            countr++;
        }
        counts++;
    }

    file2 << "Amount of symbols: " << counts << endl;
    file2 << "Amount of rows: " << countr + 1 << endl;
    file2 << "Amount of vowels: " << countv << endl;
    file2 << "Amount of consonants: " << countc << endl;
    file2 << "Amount of digits: " << countn << endl;
    file2.close();

    //3
    ofstream firstout("Uncoded.txt");
    ofstream second("Coded.txt");
    firstout << "I want to eat that void";
    firstout.close();
    ifstream firstin("Uncoded.txt");
    string line; 
    getline(firstin, line);
    firstin.close();
    for (int i = 0; i < size(line); i++)
    {
        int ascii = l[i];
        if (line[i] != ' ')
        {
        line[i] = ascii + 3;
        }
        else if ((int)line[i] == 88 || (int)line[i] == 89 || (int)line[i] == 90 || (int)line[i] == 120 || (int)line[i] == 121 || (int)line[i] == 122)
        {
        line[i] = ascii + 3 + 23;
        }
        cout << line[i];
        second << line[i];
    }
    second.close();



}
