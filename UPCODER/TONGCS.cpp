// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int sum(int n) {
    if (n < 10)
        return n;
    return n % 10 + sum(n / 10);
}

int main() {
    int n;
    cin >> n;
    cout << sum(n);
    return 0;
}