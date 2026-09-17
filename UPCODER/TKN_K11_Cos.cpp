// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    cin >> x;
    cout << (abs(2*x + 3) / cos(x)) + sqrt(2 + cos(x));
    return 0;
}