// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int64_t t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        cout << (n % 4 != 0) << '\n';
    }
    
    return 0;
}