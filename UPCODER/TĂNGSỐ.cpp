// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    for (int i = 0; i < 3; i++) {
        if (s[i] == '9') s[i] = '0';
        else s[i] = s[i] + 1;
    }

    cout << s;
    return 0;
}