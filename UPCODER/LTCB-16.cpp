// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double x, n, res = 0; 
    cin >> x >> n;

    while (n) {
        res += pow(x, n) / ((n * (n + 1)) / 2);
        n--;
    }

    cout << res;
    return 0;
}