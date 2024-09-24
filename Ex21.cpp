#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    string air;
    double speed = 0;
    double giay;
    cout << "Chon 1 trong 3 moi truong" << endl;
    cout << "Carbon Dioxide" << endl;
    cout << "Khong khi" << endl;
    cout << "Helium" << endl;
    cout << "Hydro" << endl;
    cout << "Nhap lua chon cua ban: ";
    getline(cin, air);
    cout << "Nhap so giay can thiet: ";
    cin >> giay;
    if (giay < 0 || giay > 30)
    {
        cout << "Khoang chap nhan" << endl;
    }
    else if (air == "Carbon Dioxide")
    {
        speed = 258.0;
    }
    else if (air == "Khong khi")
    {
        speed = 331.5;
    }
    else if (air == "Helium")
    {
        speed = 972.0;
    }
    else if (air == "Hydro")
    {
        speed = 1270.0;
    }
    else
    {
        cout << "Error" << endl;
    }
    cout << "Khoang cach nguon phat am thanh tu vi tri phat hien la: " << speed * giay << " met" << endl;
    return 0;
}