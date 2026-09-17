// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int fac(int n) {
    if (n == 0) return 1;
    return n * fac(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << fac(n);
    return 0;
}