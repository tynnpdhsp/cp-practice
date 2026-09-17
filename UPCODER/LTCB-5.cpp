// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;
 
int main() {
    int n; 
    float res = 0; 
    cin >> n;

    for (int i = 0; i <= n; i++) 
        res += 1.0 / (2 * i + 1);
    
    cout << res;
    return 0;
}