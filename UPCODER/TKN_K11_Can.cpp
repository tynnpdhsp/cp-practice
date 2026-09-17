// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x; 
    cin >> x;
    cout << sqrt(x + sqrt(x + sqrt(x)));
    return 0;
}