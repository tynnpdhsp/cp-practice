// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << (n / 7) * 2 + (n % 7 == 6) << ' ';
    cout << (n / 7) * 2 + min(2LL, n % 7);
    return 0;
}