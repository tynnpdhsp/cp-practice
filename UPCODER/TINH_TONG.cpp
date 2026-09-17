// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

string s;
long long ans = 0;

int main() {
    cin >> s;
    sort(s.begin(), s.end());
    
    do {
        ans += stoll(s);
    } while (next_permutation(s.begin(), s.end()));
    
    cout << ans;
    return 0;
}