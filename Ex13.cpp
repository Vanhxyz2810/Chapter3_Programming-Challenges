#include <iostream>
using namespace std;

int main(){
    int discount = 0;
    int user_input;
    cout << "Nhap so luong sach ban muon mua: ";
    cin >> user_input;

    if(user_input == 0)
    {
        cout << "Ban khong mua gi het nen khong tich dc diem nao ca" << endl;    
    }
    else if(user_input == 1)
    {
        discount = 5;
    }
    else if(user_input == 2)
    {
        discount = 15;
    }
    else if(user_input == 3)
    {
        discount = 30;
    }
    else if(user_input > 4)
    {
        discount = 60;
    }

    cout << "ban da mua " << user_input << " quyen sach va da tich duoc " << discount << " diem" << endl;
    return 0;
}
