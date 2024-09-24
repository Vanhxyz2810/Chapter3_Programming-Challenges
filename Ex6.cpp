// Author by Vanhxyz
#include <iostream>
using namespace std;

int main(){
    double trong_luong, khoi_luong;
    cout << "Nhap khoi luong: ";
    cin >> khoi_luong;
    trong_luong = khoi_luong * 9.8;
    cout << "Trong luong: " << trong_luong << endl;

    if (trong_luong > 100){
        cout << "Vat qua nang" << endl;
    }
    else if (trong_luong < 10){
        cout << "Vat qua nhe" << endl;
    }
    else{
        cout << "Vat o trang thai binh thuong" << endl;
    }
}





//trong_luong = khoi_luong * 9.8