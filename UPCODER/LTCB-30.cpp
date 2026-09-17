// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int n, res = 0; 
    cin >> n;

    for (int i = 1; i < n; i++)
        if (n % i == 0) res += i;
        
    cout << (res == n ? "YES" : "NO");
    return 0;
}