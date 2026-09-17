// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;
 
int main() {
    long long n, cnt = 0; 
    cin >> n;
    while (n) cnt++, n /= 10;
    cout << cnt;
    return 0;
}