// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double n, S = 0.5; 
    cin >> n;

    while (n) {
        S += (2*n + 1) / (2*n + 2); 
        n--;
    }

    cout << S;
    return 0;
}