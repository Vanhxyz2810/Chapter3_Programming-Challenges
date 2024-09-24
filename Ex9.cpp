// Author by Vanhxyz
#include <iostream>

using namespace std;

int main(){
    int a,b,c,d;
    cout << "Nhap so cent: ";
    cin >> a;
    cout << "Nhap so nickel: ";
    cin >> b;
    cout << "Nhap so dime: ";
    cin >> c;
    cout << "Nhap so quarter: ";
    cin >> d;

    int cent = a;
    int nickel = b * 5;
    int dime = c * 10;
    int quarter = d * 35;

    int total = cent + nickel + dime + quarter;
    if (total == 100){
        cout << "You win" << endl;
}
    else if (total > 100){
        cout << "Your total > 100" << endl;
    }
    else{
        cout << "Your total < 100" << endl;
    }
}

