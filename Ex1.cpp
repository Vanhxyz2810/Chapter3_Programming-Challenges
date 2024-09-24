// Author by Vanhxyz
#include <iostream>

using namespace std;

int main()  {
    int a, b;
    cout << "Nhap a:";  
    cin >> a;
    cout << "Nhap b: ";
    cin >> b;
    int max = a > b ? a : b;
    int min = a < b ? a : b;
    cout << "So lon nhat la: " << max << endl;
    cout << "So nho nhat la: " << min << endl;
}