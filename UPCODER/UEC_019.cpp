// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double m, Ae = 9.82;
    cin >> m;
    cout << fixed << setprecision(2) << m * Ae;
    return 0;
}