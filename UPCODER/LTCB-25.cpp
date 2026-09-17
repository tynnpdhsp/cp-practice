// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, res = 0; 
    cin >> n;

    for (int i = 2; i < n; i++) 
        if (n % i == 0 && i % 2 == 0) 
            res += i;

    cout << res;
    return 0;
}