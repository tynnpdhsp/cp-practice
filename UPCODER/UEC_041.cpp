// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int n, chan = 0, le = 0;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) le += i;
        else chan += i;
    }

    cout << chan << endl << le;
    return 0;
}