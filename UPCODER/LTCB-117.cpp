// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;
 
double tongS(double x, int n) {
    if (n == 1) return x;
    return pow(x, n) + tongS(x, n-1);
}

int main() {
    double x; 
    int n;
    cin >> x >> n; 
    cout << tongS(x, n);
    return 0;
}