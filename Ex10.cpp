// Author by Vanhxyz
#include <iostream>

using namespace std;

int main()
{
    int thang, nam;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam: ";
    cin >> nam;
    int songay;
    if (thang == 2)
    {
        if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
        {
            songay = 29;
        }
        else
        {
            songay = 28;
        }
    }
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
    {
        // Các tháng có 30 ngày
        songay = 30;
    }
    else
    {
        // Các tháng có 31 ngày
        songay = 31;
    }
    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
    {
        cout << "Nam " << nam << " la nam nhuan va thang " << thang << " co " << songay << " ngay" << endl;
    }
    else
    {
        cout << "Nam " << nam << " khong phai la nam nhuan va thang " << thang << " co " << songay << " ngay" << endl;
    }
}
