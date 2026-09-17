// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, check[1001] = {0};
    cin >> n;
    
    while (n--) {
        int tmp;
        cin >> tmp;
        check[tmp]++;
    }
    
    int ans = 0;
    for (int i = 0; i < 1001; i++)
        ans += check[i] > 1;
        
    cout << ans;
    return 0;
}