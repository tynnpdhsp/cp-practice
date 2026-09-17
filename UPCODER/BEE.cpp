// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

#define int long long
int n, ans;

int32_t main() {
    cin >> n;
    ans = 1 + 6 * (n * (n + 1) >> 1);
    cout << ans;
    return 0;
}