// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, res(0);
    cin >> n;

    while (n--) {
        int tmp;
        cin >> tmp;
        res += tmp;
    }

    cout << (res == 0 ? "EASY" : "HARD");
    return 0;
}