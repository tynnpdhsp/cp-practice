// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

bool dx(string n) {
    string m = n;
    reverse(n.begin(), n.end());
    return n == m;
}

string s;

int main() {
    while (cin >> s) {
        cout << (dx(s) ? "YES" : "NO") << ' ';
    }
    return 0;
}