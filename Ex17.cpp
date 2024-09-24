#include <iostream>
using namespace std;

int main(){
    string name1, name2, name3;
    int day1, day2, day3;
    int height1, height2, height3;
    string hang1, hang2, hang3;
    cout << "Nhap ten nguoi thu nhat: ";
    cin >> name1;
    cout << "Nhap ngay thi dau cua nguoi thu nhat: ";
    cin >> day1;
    cout << "Nhap chieu cao nhay duoc cua nguoi thu nhat: ";
    cin >> height1;
    cout << "Nhap ten nguoi thu hai: ";
    cin >> name2;
    cout << "Nhap ngay thi dau cua nguoi thu hai: ";
    cin >> day2;
    cout << "Nhap chieu cao nhay duoc cua nguoi thu hai: ";
    cin >> height2;
    cout << "Nhap ten nguoi thu ba: ";
    cin >> name3;
    cout << "Nhap ngay thi dau cua nguoi thu ba: ";
    cin >> day3;
    cout << "Nhap chieu cao nhay duoc cua nguoi thu ba: ";
    cin >> height3;
    float chieu_cao_met = height1 / 100.0;
    float chieu_cao_met2 = height2 / 100.0;
    float chieu_cao_met3 = height3 / 100.0;
    if (chieu_cao_met < 2 || chieu_cao_met > 5 && chieu_cao_met2 < 2 || chieu_cao_met2 > 5 && chieu_cao_met3 < 2 || chieu_cao_met3 > 5){
        cout << "Chieu cao khong hop le" << endl;
    }
    if (chieu_cao_met > chieu_cao_met2 && chieu_cao_met > chieu_cao_met3){
        hang1 = name1;
    }
    else if (chieu_cao_met2 > chieu_cao_met && chieu_cao_met2 > chieu_cao_met3){
        hang1 = name2;
    }
    else if (chieu_cao_met3 > chieu_cao_met && chieu_cao_met3 > chieu_cao_met2){
        hang1 = name3;
    }
    if (chieu_cao_met < chieu_cao_met2 && chieu_cao_met < chieu_cao_met3){
        hang3 = name1;
    }
    else if (chieu_cao_met2 < chieu_cao_met && chieu_cao_met2 < chieu_cao_met3){
        hang3 = name2;
    }
    else if (chieu_cao_met3 < chieu_cao_met && chieu_cao_met3 < chieu_cao_met2){
        hang3 = name3;
    }
    if (chieu_cao_met > chieu_cao_met2 && chieu_cao_met < chieu_cao_met3){
        hang2 = name1;
    }
    else if (chieu_cao_met2 > chieu_cao_met && chieu_cao_met2 < chieu_cao_met3){
        hang2 = name2;
    }
    else if (chieu_cao_met3 > chieu_cao_met && chieu_cao_met3 < chieu_cao_met2){
        hang2 = name3;
    }
    cout << "Nguoi thang thu nhat la: " << hang1 << " voi chieu cao " << chieu_cao_met << "m" << endl;
    cout << "Nguoi thang thu hai la: " << hang2 << " voi chieu cao " << chieu_cao_met2 << "m" << endl;
    cout << "Nguoi thang thu ba la: " << hang3 << " voi chieu cao " << chieu_cao_met3 << "m" << endl;
    return 0;
}
