#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    char package;
    int minutes;
    double total;

    cout << "Nhap goi ban da mua (A, B, hoac C): ";
    cin >> package;

    if (package != 'A' && package != 'B' && package != 'C') {
        cout << "Goi khong hop le. Vui long chon A, B hoac C." << endl;
        return 1;
    }

    cout << "Nhap so phut da su dung: ";
    cin >> minutes;

    switch (package) {
        case 'A':
            total = 39.99;
            if (minutes > 450) {
                total += (minutes - 450) * 0.45;
            }
            break;
        case 'B':
            total = 59.99;
            if (minutes > 900) {
                total += (minutes - 900) * 0.40;
            }
            break;
        case 'C':
            total = 69.99;
            break;
    }

    cout << fixed << setprecision(2);
    cout << "Tong so tien den han: $" << total << endl;

    return 0;
}
