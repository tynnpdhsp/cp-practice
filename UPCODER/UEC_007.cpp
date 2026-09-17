// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double f;
    cin >> f;
    cout << fixed << setprecision(2) << 5.0 / 9 * (f - 32);
    return 0;
}