//#include <iostream>
//#include <iomanip>
//#include <fstream>
//
//using namespace std;
//
//struct Iron
//{
//    char brand[20];
//    char model[10];
//    char color[10];
//    int min_tem;
//    int max_tem;
//    int power;
//    bool steam_supply;
//
//
//    void Show()
//    {
//        cout << "brand: " << brand << "\n";
//        cout << "model: " << model << "\n";
//        cout << "color: " << color << "\n";
//        cout << "power: " << power << "\n";
//        cout << "minimal temperature: " << min_tem << "\n";
//        cout << "maximal temperature: " << max_tem << "\n";
//        cout << "steam supply: " << steam_supply << "\n";
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
//        cout << "minimal temperature: " << "\n";
//        cin >> min_tem;
//        cout << "maximal temperature: " << "\n";
//        cin >> max_tem;
//        cout << "steam supply[0 or 1]: " << "\n";
//        cin >> steam_supply;
//
//    }
//
//
//};
//
//void LoadToFileI(const char& filename)
//{
//    ofstream tof(&filename, ios_base::app);
//
//    Iron w;
//
//    w.Init();
//    tof << w.brand << '\n' << w.color << '\n' << w.power << '\n' << w.min_tem << '\n' << w.max_tem << '\n' << w.steam_supply << '\n';
//    tof.close();
//    cout << "Successfully!";
//}
//void LoadFromFileI(const char& filename)
//{
//    ifstream fromf(&filename);
//
//    if (!fromf)
//    {
//        cout << "Error with opening file" << endl; return;
//    }
//    cout << "Irons in file: " << endl;
//    Iron w;
//    while (fromf >> w.brand >> w.color >> w.power >> w.min_tem >> w.max_tem >> w.steam_supply)
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
//    const char filename[30] = { "Irons.txt" };
//
//    LoadToFileI(*filename);
//    LoadFromFileI(*filename);
//
//
//
//}
//
