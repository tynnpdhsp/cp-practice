// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;
 
int main() {
    int a, thang = 1;
    cin >> a;
    double tienLoi = a * 0.1;

    while (tienLoi < a) {
        tienLoi += (a + tienLoi) * 0.1;
        thang++;
    }

    cout << thang;
    return 0;
}