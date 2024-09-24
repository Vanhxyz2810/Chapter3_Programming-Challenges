#include <iostream>

using namespace std;

int main(){
    double tax = 10;
    double account_balance;
    double sec;
    double fee2 = 0; 

    cout << "Enter your account balance: ";
    cin >> account_balance;
    if (account_balance < 0) {
        cout << "Invalid input. Account balance cannot be negative." << endl;
        return 1;
    }

    cout << "Enter your sec: ";
    cin >> sec;
    if (sec <= 0) {
        cout << "Invalid input. Number of sec cannot be negative or zero." << endl;
        return 1;
    }

    if (sec <= 20){
        fee2 = 0.1 * sec;
    }
    else if (sec <= 39){
        fee2 = 0.08 * sec;
    }
    else if (sec <= 59){
        fee2 = 0.06 * sec;
    }
    else {
        fee2 = 0.04 * sec;
    }

    if (account_balance < 400){
        fee2 += 15;
    }

    cout << "Your fee need to pay: " << tax + fee2 <<  "$" << endl;

    return 0;
}
