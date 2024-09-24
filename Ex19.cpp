#include <iostream>
using namespace std;

int main(){
    double song;
    cout << "Nhap song: ";
    cin >> song;
    if (song >= 1e-2){
        cout << "Song thuoc vung radio" << endl;
    }
    else if (song >= 1e-3 && song < 1e-2){
        cout << "Song thuoc vung lo vi song" << endl;
    }
    else if (song >= 7e-7 && song < 1e-2){
        cout << "Song hong ngoai" << endl;
    }
    else if (song >= 4e-7 && song < 7e-7){
        cout << "Song anh sang" << endl;
    }
    else if (song >= 1e-8 && song < 4e-7){
        cout << "Song tu ngoai" << endl;
    }
    else if (song >= 1e-11 && song < 1e-8){
        cout << "Song tia x" << endl;
    }
    else if (song >= 1e-11){
        cout << "Tia gamma" << endl;
    }
    else{
        cout << "Khong co song nao thuoc vung song" << endl;
    }
    return 0;
}
