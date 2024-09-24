#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float startTime;
    int duration;

    cout << "Nhap thoi gian bat dau cuoc goi (HH.MM): ";
    cin >> startTime;

    int startHour = static_cast<int>(startTime);
    int startMinute = static_cast<int>((startTime - startHour) * 100);
    if (startHour < 0 || startHour >= 24 || startMinute < 0 || startMinute >= 60) {
        cout << "Thoi gian khong hop le!" << endl;
        return 1;
    }

    cout << "Nhap so phut cua cuoc goi: ";
    cin >> duration;

    float cost = 0.0;
    int currentMinute = startMinute;
    int currentHour = startHour;

    if (duration > 0) {
        if (currentHour >= 0 && currentHour < 7) {
            cost += 0.05;
        } else if (currentHour >= 7 && currentHour < 19) {
            cost += 0.45;
        } else {
            cost += 0.20;
        }
        currentMinute++;
        if (currentMinute == 60) {
            currentMinute = 0;
            currentHour++;
            if (currentHour == 24) {
                currentHour = 0;
            }
        }
    }

    if (duration > 1) {
        if (currentHour >= 0 && currentHour < 7) {
            cost += 0.05;
        } else if (currentHour >= 7 && currentHour < 19) {
            cost += 0.45;
        } else {
            cost += 0.20;
        }
        currentMinute++;
        if (currentMinute == 60) {
            currentMinute = 0;
            currentHour++;
            if (currentHour == 24) {
                currentHour = 0;
            }
        }
    }

    cout << fixed << setprecision(2);
    cout << "Cuoc phi cuoc goi la: $" << cost << endl;

    return 0;
}
