// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    double a[3];
    for (double &x : a) cin >> x;
    sort(a, a + 3);
    cout << a[1];
    return 0;
}