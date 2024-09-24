// Author by Vanhxyz
#include <iostream>
using namespace std;

int main(){
    int ngay, thang, nam;
    cout << "Nhap ngay: ";
    cin >> ngay;
    cout << "Nhap thang: ";
    cin >> thang;
    cout << "Nhap nam (chi nhap 2 so cuoi cua nam): ";
    cin >> nam;
    
    if(ngay * thang == nam ){
        cout << ngay << "/" << thang << "/" << nam << " la ngay phep thuat" << endl;
    }
    else{
        cout << ngay << "/" << thang << "/" << nam << " khong phai ngay phep thuat" << endl;
    }
    return 0;
}
