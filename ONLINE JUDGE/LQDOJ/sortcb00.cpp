// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    for (int x : a) cout << x << ' ';
    return 0;
}