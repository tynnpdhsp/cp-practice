// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int t, ans = 0;
    cin >> t;

    while (t--) {
        int x, y, z;
        cin >> x >> y >> z;
        ans += (x + y + z >= 2);
    }

    cout << ans;
    return 0;
}