// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    char x, ans = '0';

    while (cin >> x) 
        ans = max(ans, x);
    
    cout << ans;
    return 0;
}