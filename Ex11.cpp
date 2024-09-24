// Author by Vanhxyz
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    // khoi tao seed
    srand(time(0));
    // tao so tu 0 den 300
    int random1 = rand()  % 301;
    int random2 = rand() % 301;
    
    cout << random1 << " + " << random2 << " = " << "?" << endl;
    int correct_answer = random1 + random2;
    int user_answer;
    cout << "Nhap dap an cua ban: " << endl;
    cin >> user_answer;
    if (user_answer != correct_answer)
    {
        cout << "Sai roi,dap an dung la: " << correct_answer << endl;
    }
    else{
        cout << "Dap an chinh xac!";
    }

}
