// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string hinh; 
    cin >> hinh;
    if (hinh == "hcn") {
        double a, b; 
        cin >> a >> b;
        cout << "C = " << (a+b)*2;
    } else {
        double a; 
        cin >> a;
        cout << "C = " << a*4;
    }

    return 0;
}