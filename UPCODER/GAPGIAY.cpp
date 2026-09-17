// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int ans = 0;
    while (a <= b) {
        ans++;
        a *= 2;
    }
    
    cout << ans - 1;
    return 0;
}