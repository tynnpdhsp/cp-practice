// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k, n, w, ans = 0;
    cin >> k >> n >> w;
    ans = w * (w + 1) * k / 2;
    cout << (ans > n ? ans - n : 0);
    return 0;
}