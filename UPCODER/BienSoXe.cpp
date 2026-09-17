// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int n, nut = 0; 
    cin >> n;

    while (n > 0) 
        nut += n % 10, 
        n /= 10;
    
    cout << (nut % 10 == 0 ? 0 : nut % 10);
    return 0;
}