// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int c = a;
    a = b;
    b = c;

    cout << a << ' ' << b;
    return 0;
}