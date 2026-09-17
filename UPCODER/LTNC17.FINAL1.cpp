// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include<iostream>
using namespace std;

int main() {
    int a, b, s;
    char kt;
    cin >> a;
    s = a;

    while (cin >> kt) {
        if (kt == '+') {
            cin >> b;
            s = s + b;

        } else {
            cin >> b;
            s = s - b;
        }
    }

    cout << s;
    return 0;
}