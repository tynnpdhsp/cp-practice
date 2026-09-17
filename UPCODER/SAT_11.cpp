// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int n;
set<int> s;

int main() {
    while (cin >> n) s.insert(n);
    cout << s.size();
    return 0;
}