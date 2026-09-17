// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) 
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;

    cout << s;
    return 0;
}