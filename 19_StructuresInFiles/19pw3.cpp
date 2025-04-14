//#include <iostream>
//#include <iomanip>
//#include <fstream>
//
//using namespace std;
//
//struct Boiler
//{
//    char brand[20];
//    char color[10];
//    int power;
//    int volume;
//    float heating;
//
//
//    void Show()
//    {
//        cout << "brand: " << brand << "\n";
//        cout << "color: " << color << "\n";
//        cout << "power: " << power << "\n";
//        cout << "volume: " << volume << "\n";
//        cout << "heating temperature: " << heating << "\n";
//
//    }
//
//    void Init()
//    {
//        cout << "Enter brand: " << "\n";
//        cin >> brand;
//        cout << "Enter color: " << "\n";
//        cin >> color;
//        cout << "Enter power: " << "\n";
//        cin >> power;
//        cout << "volume: " << "\n";
//        cin >> volume;
//        cout << " heating temperature: " << "\n";
//        cin >> heating;
//
//    }
//
//
//};
//
//void LoadToFileB(const char& filename)
//{
//    ofstream tof(&filename, ios_base::app);
//
//    Boiler w;
//
//    w.Init();
//    tof << w.brand << '\n' << w.color << '\n' << w.power << '\n' << w.volume << '\n' << w.heating << '\n';
//    tof.close();
//    cout << "Successfully!";
//}
//void LoadFromFileB(const char& filename)
//{
//    ifstream fromf(&filename);
//
//    if (!fromf)
//    {
//        cout << "Error with opening file" << endl; return;
//    }
//    cout << "Boilers in file: " << endl;
//    Boiler w;
//    while (fromf >> w.brand >> w.color >> w.power >> w.volume >> w.heating)
//    {
//        fromf.ignore();
//        cout << "-----------------------------\n";
//        w.Show();
//        cout << "-----------------------------\n";
//    }
//    fromf.close();
//    cout << "Successfully!";
//}
//
//
//
//
//int main()
//{
//    const char filename[30] = { "Boilers.txt" };
//
//    LoadToFileB(*filename);
//    LoadFromFileB(*filename);
//
//
//
//}
//
