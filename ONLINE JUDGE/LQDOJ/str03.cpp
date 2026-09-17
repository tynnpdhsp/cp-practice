// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (char &c : s)
        c = tolower(c);
    cout << s;
    return 0;
}