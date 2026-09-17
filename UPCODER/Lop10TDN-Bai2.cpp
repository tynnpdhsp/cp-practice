// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b; 
    cin >> a >> b;
    cout << fixed << setprecision(1) << (a + b)/2;
    return 0;
}