#include <iostream>

using namespace std;

int main(){
    int trong_luong;
    int khoang_cach;
    int phi_thue = 0;

    cout << "Enter the weight of the package: ";
    cin >> trong_luong;
    if (trong_luong <= 0){
        cout << "Invalid input. Weight cannot be negative or zero." << endl;
    }
    cout << "Enter the distance: ";
    cin >> khoang_cach;
    if (khoang_cach < 10 && khoang_cach > 3000){
        cout << "Invalid input. Distance cannot be less than 10 or greater than 3000." << endl;
    }
    if (trong_luong < 2){
        phi_thue = 1.10 * khoang_cach;
    }
    else if (trong_luong >= 2 && trong_luong <= 6){
        phi_thue = 2.20 * khoang_cach;
    }
    else if (trong_luong >= 6 && trong_luong <= 10){
        phi_thue = 3.70 * khoang_cach;
    }
    else if (trong_luong > 10){
        phi_thue = 4.80 * khoang_cach;
    }
    cout << "Phi ship cua ban la: " << phi_thue << endl;
    return 0;
}
