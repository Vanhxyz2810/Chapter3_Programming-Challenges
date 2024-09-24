#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int con_ethyl_dong_dac = -173;
    const int con_ethyl_soi = 172;
    const int thuy_ngan_dong_dac = -38;
    const int thuy_ngan_soi = 676;
    const int oxy_dong_dac = -362;
    const int oxy_soi = -306;
    const int nuoc_dong_dac = 32;
    const int nuoc_soi = 212;
    int nhiet_do;
    cout << "Nhap nhiet do: ";
    cin >> nhiet_do;
    cout << fixed << setprecision(2);
    if (nhiet_do <= con_ethyl_dong_dac) {
        cout << "Con Ethyl se dong dac o nhiet do nay." << endl;
    }
    if (nhiet_do >= con_ethyl_soi) {
        cout << "Con Ethyl se soi o nhiet do nay." << endl;
    }
    if (nhiet_do <= thuy_ngan_dong_dac) {
        cout << "Thuy ngan se dong dac o nhiet do nay." << endl;
    }
    if (nhiet_do >= thuy_ngan_soi) {
        cout << "Thuy ngan se soi o nhiet do nay." << endl;
    }
    if (nhiet_do <= oxy_dong_dac) {
        cout << "Oxy se dong dac o nhiet do nay." << endl;
    }
    if (nhiet_do >= oxy_soi) {
        cout << "Oxy se soi o nhiet do nay." << endl;
    }
    if (nhiet_do <= nuoc_dong_dac) {
        cout << "Nuoc se dong dac o nhiet do nay." << endl;
    }
    if (nhiet_do >= nuoc_soi) {
        cout << "Nuoc se soi o nhiet do nay." << endl;
    }

    return 0;
}
