// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int n, k, res = 1; 
    cin >> n >> k;

    for (int i = 1; i <= k; i++)
        res *= n;

    cout << res;
    return 0;
}