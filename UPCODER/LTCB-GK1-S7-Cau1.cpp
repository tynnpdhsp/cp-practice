// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;
 
int main() {
    int a, b, c; 
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0 && a+b > c && a+c > b && b+c > a) 
        cout << a + b + c;
    else 
        cout << "NO";
    
    return 0;
}