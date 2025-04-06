#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

struct w_machine
{
    char brand[20];
    char color[10];
    float width;
    float length;
    float height;
    float power;
    float spin_speed;
    float heating;


    void Show()
    {
        cout << "brand: " << brand << "\n";
        cout << "color: " << color << "\n";
        cout << "width: " << width << "\n";
        cout << "length: " << length << "\n";
        cout << "height: " << height << "\n";
        cout << "power: " << power << "\n";
        cout << "spin speed: " << spin_speed << "\n";
        cout << "heating temperature: " << heating << "\n";

    }

    void Init()
    {
        cout << "Enter brand: " << "\n";
        cin >> brand;
        cout << "Enter color: " << "\n";
        cin >> color;
        cout << "Enter width: " << "\n";
        cin >> width;
        cout << "Enter length: " << "\n";
        cin >> length;
        cout << "Enter height: " << "\n";
        cin >> height;
        cout << "Enter power: " << "\n";
        cin >> power;
        cout << "Enter spin speed: " << "\n";
        cin >> spin_speed;
        cout << "Enter heating temperature: " << "\n";
        cin >> heating;

    }

    
};

void LoadToFileW(const char& filename)
{
    ofstream tof(&filename, ios_base::app);

    w_machine w;

    //cin.ignore();
    w.Init();
    tof << w.brand << '\n' << w.color << '\n' << w.width << '\n' << w.length << '\n' << w.height << '\n' << w.power << '\n' << w.spin_speed << '\n' << w.heating << '\n';
    tof.close();
    cout << "Successfully!";
}
void LoadFromFileW(const char& filename)
{
    ifstream fromf(&filename);

    if (!fromf)
    {
        cout << "Error with opening file" << endl; return;
    }
    cout << "Washine machines in file: " << endl;
    w_machine w;
    while (fromf >> w.brand >> w.color >> w.width >> w.length >> w.height >> w.power >> w.spin_speed >> w.heating)
    {
        fromf.ignore();
        cout << "-----------------------------\n";
        w.Show();
        cout << "-----------------------------\n";
    }
    fromf.close();
    cout << "Successfully!";
}




int main()
{
    const char filename[30] = { "Washing machines.txt" };

    LoadToFileW(*filename);
    LoadFromFileW(*filename);



}

