// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;

    while (n > 0) {
        ans += n / 5;
        n /= 5;
    }

    cout << ans;
    return 0;
}