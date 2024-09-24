#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string env1;
    double speed = 0;
    double distance;
    cout << "Chon 1 trong 3 moi truong" << endl;
    cout << "Khong khi" << endl;
    cout << "Nuoc" << endl;
    cout << "Kim loai" << endl;
    cout << "Nhap lua chon cua ban: ";
    getline(cin, env1);
    cout << "Nhap khoang cach ma song am se truyen trong env da chon: ";
    cin >> distance;
    if (distance < 0){
        cout << "Khoang cach khong the nho hon 0" << endl;
    }
    else if (env1 == "Khong khi"){
        speed = 1.100;
    }
    else if (env1 == "Nuoc"){
        speed = 4.900;
    }
    else if (env1 == "Thep"){
        speed = 16.400;
    }
    else{
        cout << "Khong co moi truong nao thuoc vung moi truong" << endl;
    }
    cout << fixed << setprecision(4);
    cout << "Thoi gian ma song am truyen trong moi truong da chon la: " << distance/speed << " giay" << endl;
    return 0;
}
