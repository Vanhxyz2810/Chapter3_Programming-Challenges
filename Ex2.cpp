// Author by Vanhxyz
#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "Nhap a: ";
    cin >> a;
    
    if (a <= 0 || a > 10) {
        cout << "a khong thoa man dieu kien" << endl;
    } else {
        switch (a)
        {
            case 1:
                cout << "a trong so la ma la: I" << endl;
                break;
            case 2:
                cout << "a trong so la ma la: II" << endl;
                break;
            case 3:
                cout << "a trong so la ma la: III" << endl;
                break;
            case 4:
                cout << "a trong so la ma la: IV" << endl;
                break;
            case 5:
                cout << "a trong so la ma la: V" << endl;
                break;
            case 6:
                cout << "a trong so la ma la: VI" << endl;
                break;
            case 7:
                cout << "a trong so la ma la: VII" << endl;
                break;
            case 8:
                cout << "a trong so la ma la: VIII" << endl;
                break;
            case 9:
                cout << "a trong so la ma la: IX" << endl;
                break;
            case 10:
                cout << "a trong so la ma la: X" << endl;
                break;
        }
    }
}


