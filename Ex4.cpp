// Author by Vanhxyz
#include <iostream>
using namespace std;

int main() {
    int cd1,cd2,cr1,cr2;
    cout << "HINH CHU NHAT 1" << endl;
    cout << "Nhap chieu dai hcn 1: ";
    cin >> cd1;
    cout << "Nhap chieu rong hcn 1: ";
    cin >> cr1;
    if(cr1 > cd1){
        cout << "Chieu rong khong duoc lon hon chieu dai" << endl;
        return main();
    }
    else if(cr1 == cd1){
        cout << "Hinh chu nhat 1 la hinh vuong" << endl;
        return main();
    }
    cout << "HINH CHU NHAT 2" << endl;
    cout << "Nhap chieu dai hcn 2: ";
    cin >> cd2;
    cout << "Nhap chieu rong hcn 2: ";
    cin >> cr2;
    if(cr2 > cd2){
        cout << "Chieu rong khong duoc lon hon chieu dai" << endl;
        return main();
    }
    else if(cr2 == cd2){
        cout << "Hinh chu nhat 2 la hinh vuong" << endl;
        return main();
    }

    int dt1 = cd1 * cr1;
    int dt2 = cd2 * cr2;


    if(dt1 > dt2){
        cout << "Hinh chu nhat 1 co dien tich lon hon hinh chu nhat 2" << endl;
    }
    else{
        cout << "Hinh chu nhat 2 co dien tich lon hon hinh chu nhat 1" << endl;
    }
    return 0;
}
