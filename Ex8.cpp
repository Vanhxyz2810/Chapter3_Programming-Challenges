// Author by Vanhxyz
#include <iostream>

using namespace std;

int main(){
    string color1, color2;
    cout << "Nhap 2 mau co ban: ";
    cin >> color1 >> color2;
    if (color1 != "red" && color1 != "blue" && color1 != "yellow" || color2 != "red" && color2 != "blue" && color2 != "yellow"){
        cout << "Mau khong hop le" << endl;

    }
    else if (color1 == "red" && color2 == "blue" || color1 == "blue" && color2 == "red")
    {
        cout << "Mau tim" << endl;
    }
    else if (color1 == "red" && color2 == "yellow" || color2 == "red" && color1 == "yellow")
    {
        cout << "Mau cam" << endl;
    }
    else if (color1 == "blue" && color2 == "yellow" || color2 == "blue" && color1 == "yellow")
    {
        cout << "Mau xanh la cay" << endl;
    }
    else
    {
        cout << "Mau khong hop le" << endl;
    }   


    

}
