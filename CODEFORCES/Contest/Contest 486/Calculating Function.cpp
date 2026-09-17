// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n % 2 == 0) cout << n/2;
    else cout << -1*(n+1)/2;
    return 0;
}