// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if (n % m == 0)
        cout << "Co";
    else 
        cout << "Khong";
    return 0;
}