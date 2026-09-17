// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    float a, res = -9999;
    while (cin >> a)
        res = max(a, res);
    cout << res;
}