// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    long long a, n, ans = 1;
    cin >> a >> n;
    
    for (int i = 1; i <= n; i++)
        ans *= a;
    
    cout << ans;
    return 0;
}
