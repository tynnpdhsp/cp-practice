// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort(a, a + n);
    cout << a[k-1];
    return 0;
}
