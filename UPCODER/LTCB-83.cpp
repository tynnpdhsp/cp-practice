// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    double a, b; 
    cin >> a >> b;

    double k = a*b;
    if (!k) 
        cout << 0;
    else if (k > 0) 
        cout << "YES";
    else 
        cout << "NO"; 
    
    return 0;
}