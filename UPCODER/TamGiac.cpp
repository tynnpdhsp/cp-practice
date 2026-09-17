// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    double a, b, c; 
    cin >> a >> b >> c;
    if (a == b && a == c) cout << "đều";
    else if (a == b || b == c || a == c) cout << "cân";
    else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) cout << "vuông";
    else cout << "thường";
    return 0;
}