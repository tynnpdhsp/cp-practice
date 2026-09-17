// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);
    
    int ans = -1;
    size_t pos = s.find(t);
    
    while (pos != string::npos) {
        ans = pos;
        pos = s.find(t, pos + 1);
    }
    
    if (ans != -1) {
        cout << "YES\n";
        cout << ans;
    } else 
        cout << "NO";
    
    return 0;
}