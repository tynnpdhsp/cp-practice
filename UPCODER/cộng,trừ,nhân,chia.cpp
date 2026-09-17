// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

char s;
int a, b;

int main() {
    cin >> s >> a >> b;
    
    if (s == '*') {
        cout << a * b;
    }
    
    if (s == '+') {
        cout << a + b;
    }
    
    if (s == '-') {
        cout << a - b;
    }
    
    if (s == '/') {
        cout << a / b;
    }
    
    return 0;
}