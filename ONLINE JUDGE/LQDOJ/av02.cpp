// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int64_t n, x, ans = 0;
    cin >> n;

    while (n--) {
        cin >> x;
        ans += x & 1 ? x : 0;
    }
    
    cout << ans;
    return 0;
}