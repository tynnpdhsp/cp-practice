// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    double a, b, res;
    cin >> a >> b;
    
    res = (a + b)/2;
    cout << res << endl;
    
    if (res >= 5) cout << "QUA_MON";
    else cout << "ROT_MON";

    return 0;
}