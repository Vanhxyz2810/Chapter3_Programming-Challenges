#include <iostream>

using namespace std;

int main(){
    string name1;
    int time1;
    string name2;
    int time2;
    string name3;
    int time3;
    string hang1;
    string hang2;
    string hang3;

    cout << "Enter the name of athlete 1: ";
    cin >> name1;
    cout << "Enter the time of athlete 1: ";
    cin >> time1;
    cout << "Enter the name of athlete 2: ";
    cin >> name2;
    cout << "Enter the time of athlete 2: ";
    cin >> time2;
    cout << "Enter the name of athlete 3: ";
    cin >> name3;
    cout << "Enter the time of athlete 3: ";
    cin >> time3;
    
    if (time1 < 0 || time2 < 0 || time3 < 0){
        cout << "Invalid input. Time cannot be negative." << endl;
        return 1;
    }
    if (time1 < time2 && time1 < time3){
        hang1 = name1;
    }
    else if (time2 < time1 && time2 < time3){
        hang1 = name2;
    }
    else {
        hang1 = name3;
    }
    
    if (time1 > time2 && time1 > time3){
        hang3 = name1;
    }
    else if (time2 > time1 && time2 > time3){
        hang3 = name2;
    }
    else {
        hang3 = name3;
    }
    if (time1 > time2 && time1 < time3){
        hang2 = name1;
    }
    else if (time2 > time1 && time2 < time3){
        hang2 = name2;
    }
    else {
        hang2 = name3;
    }
    cout << "Ba van dong vien hang dau la: " << hang1 << ", " << hang2 << ", " << hang3 << endl;
    return 0;
}
