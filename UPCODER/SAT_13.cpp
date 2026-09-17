// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

string s;
int ans;

int main() {
    getline(cin, s);
    for (char c : s) 
        ans += isalpha(c) != 0;
    cout << ans;
}