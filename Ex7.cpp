// Author by Vanhxyz
#include <iostream>
using namespace std;

int main(){
    int so_giay;
    cout << "Nhap so giay: ";
    cin >> so_giay;

    int gio = so_giay / 3600;
    int phut = (so_giay % 3600) / 60;
    int giay = so_giay % 60;
    int ngay = gio / 24;
    gio = gio % 24;

    if (ngay != 0) {
        cout << "Ngay: " << ngay << endl;
    }
    if (gio != 0) {
        cout << "Gio: " << gio << endl;
    }
    if (phut != 0) {
        cout << "Phut: " << phut << endl;
    }
    if (giay != 0) {
        cout << "Giay: " << giay << endl;
    }
}

