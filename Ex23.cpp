#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int luaChon;

    cout << "1. Tinh dien tich hinh tron" << endl;
    cout << "2. Tinh dien tich hinh chu nhat" << endl;
    cout << "3. Tinh dien tich hinh tam giac vuong" << endl;
    cout << "4. Thoat" << endl;
    cout << "Nhap lua chon [1-4]: ";
    cin >> luaChon;

    if (luaChon == 1) {
        double r;
        cout << "Nhap ban kinh hinh tron: ";
        cin >> r;
        cout << "Dien tich hinh tron la: " << M_PI * r * r << endl;
    } else if (luaChon == 2) {
        double dai, rong;
        cout << "Nhap chieu dai va chieu rong hinh chu nhat: ";
        cin >> dai >> rong;
        cout << "Dien tich hinh chu nhat la: " << dai * rong << endl;
    } else if (luaChon == 3) {
        double a, b;
        cout << "Nhap do dai hai canh goc vuong cua tam giac: ";
        cin >> a >> b;
        cout << "Dien tich hinh tam giac vuong la: " << 0.5 * a * b << endl;
    } else if (luaChon == 4) {
        cout << "Thoat chuong trinh." << endl;
    } else {
        cout << "Lua chon khong hop le , chay lai chuong trinh va chon lai." << endl;
    }

    return 0;
}