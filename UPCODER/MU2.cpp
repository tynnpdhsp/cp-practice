// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int k = log2(n);
    if (log2(n) == k) cout << "true";
    else cout << "false";
    return 0;
}