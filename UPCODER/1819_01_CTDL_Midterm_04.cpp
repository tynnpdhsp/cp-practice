// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int n, a[1000];

int main() {
    while (cin >> a[n]) n++;
    
    sort(a, a + n/2);
    sort(a + n/2, a + n, greater<int>());
    
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    
    return 0;
}