// Author by Vanhxyz
#include <iostream>
using namespace std;

int main(){
    int price = 99;
    int user_input;
    cout << "Nhap so luong ban muon mua: ";
    cin >> user_input;

    if(user_input >= 10 && user_input <= 19){
        cout << user_input << " san pham co chiet khau la 20%" << endl;
        cout << "So tien phai tra la: " << user_input * price * 0.8 << "$" << endl;
    }
    else if(user_input >= 20 && user_input <= 49){
        cout << user_input << " san pham co chiet khau la 30%" << endl;
        cout << "So tien phai tra la: " << user_input * price * 0.7 << "$" << endl;
    }
    else if(user_input >= 50 && user_input <= 99){
        cout << user_input << " san pham co chiet khau la 40%" << endl;
        cout << "So tien phai tra la: " << user_input * price * 0.6 << "$" << endl;
    }
    else if(user_input >= 100){
        cout << user_input << " san pham co chiet khau la 50%" << endl;
        cout << "So tien phai tra la: " << user_input * price * 0.5 << "$" << endl;
    }
    else{
        cout << "So tien phai tra la: " << user_input * price << "$" << endl;
    }
    
    
}

