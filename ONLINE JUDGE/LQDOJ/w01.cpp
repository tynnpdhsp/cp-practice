// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int64_t n, sum = 0;
    while (cin >> n && n != 0) 
        sum += n;
    cout << sum;
    return 0;
}