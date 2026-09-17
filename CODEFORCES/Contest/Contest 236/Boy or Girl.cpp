// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    set<char> s;
    cin >> str;

    for (auto c : str) s.insert(c);
    if (s.size() & 1) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";

    return 0;
} 