#include <iostream>
using namespace std;

int main(){
    int tong_calo;
    int chat_beo;
    cout << "Nhap tong luong calo: ";
    cin >> tong_calo;
    cout << "Nhap luong chat beo: ";
    cin >> chat_beo;
    if (tong_calo < 0 || chat_beo < 0){
        cout << "Khong hop le" << endl;
        return 1;
    }
    int calo_trong_chat_beo = chat_beo * 9;
    if (calo_trong_chat_beo > tong_calo){
        cout << "Khong hop le" << endl;
        return 1;
    }
    double calo_trong_thuc_pham = double(calo_trong_chat_beo) / double(tong_calo) * 100;
    cout << "Phan tram calo co trong chat beo: " << calo_trong_thuc_pham << "%" << endl;
    
    if (calo_trong_thuc_pham < 30) {
        cout << "Thuc pham nay it chat beo." << endl;
    }
    
    return 0;
}
