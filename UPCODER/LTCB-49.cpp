// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n; 
    cin >> n;
    while (n >= 10) n/= 10;
    cout << n;
    return 0;
}