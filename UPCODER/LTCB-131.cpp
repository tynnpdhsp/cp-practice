// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;
 
void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main() {
    int n; 
    cin >> n; 

    int a[n];
    for (int &x : a) cin >> x;
    
    xuatMang(a, n);
    return 0;
}