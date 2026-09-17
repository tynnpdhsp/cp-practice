// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int n, x;
map<int, int> m;

int main() {
    cin >> n;

    while (n--) {
        cin >> x;
        m[x]++;
    }

    for (auto p : m)
        cout << p.first << ' ' << p.second << '\n';

    return 0;
}