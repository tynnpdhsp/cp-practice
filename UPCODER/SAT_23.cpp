// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int x, n, a[1001];

int main() {
    cin >> n;
    
    while (n--) {
        cin >> x;
        a[x]++;
    }
    
    for (int i = 1; i <= 100; i++)
        if (a[i])
            cout << i << " : " << a[i] << endl;
            
    return 0;
}