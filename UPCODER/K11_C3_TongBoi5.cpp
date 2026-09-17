// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int n, res = 0; 
    cin >> n;
    
    for (int i = 5; i <= n; i += 5)
        res += i;

    cout << res;
    return 0;
}