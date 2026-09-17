// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int n, max = -10e6;
    cin >> n;

    int a[n];
    for (int &x : a) cin >> x;

    for (int i = 0; i < n; i++) 
        if (a[i] + i + 1 > max)
            max = a[i] + i + 1;
    
    cout << max;
    return 0;
}