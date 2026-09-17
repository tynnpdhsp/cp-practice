// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a = n % 10;
    int b = (n / 10) % 10;
    int c = n / 100;

    cout << a << b << c;
    return 0;
}