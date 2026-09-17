// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    int k = sqrt(n);
    if (k * k == n) 
        cout << "La so chinh phuong";
    else 
        cout << "Khong phai so chinh phuong";

    return 0;
}