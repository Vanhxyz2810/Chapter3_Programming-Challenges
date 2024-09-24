// Author by Vanhxyz
#include <iostream>
using namespace std;
int main(){
    double cn, cc, bmi;
    cout << "Nhap can nang: ";
    cin >> cn;
    cout << "Nhap chieu cao: ";
    cin >> cc;
    cc = cc / 100;
    bmi = cn / (cc * cc);
    cout << "BMI: " << bmi << endl;
    if(bmi < 18.5){
        cout << "Gay" << endl;
    }
    else if(bmi >= 18.5 && bmi < 25){
        cout << "Binh thuong" << endl;
    }
    else if(bmi >= 25 && bmi < 30){
        cout << "Thua can" << endl;
    }
    else{
        cout << "Beo phi" << endl;
    }
}
// bmi = can nang / (chieu cao * chieu cao)
// bmi > 25: thua can
// bmi < 18.5: gay
// 18.5 < bmi < 25: binh thuong
// bmi > 25 va < 30: thua can
// bmi > 30: beo phi



