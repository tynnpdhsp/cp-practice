// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    while (n--) {
        int a, b;
        cin >> a >> b;
        cnt += (b-a >= 2);
    }

    cout << cnt;
    return 0;
}