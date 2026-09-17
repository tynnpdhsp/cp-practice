// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n / 100 << '\n';
    cout << n / 10 % 10 << '\n';
    cout << n % 10;
    return 0;
}