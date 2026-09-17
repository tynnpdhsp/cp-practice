// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<string> v(n);
    for (string &s : v) cin >> s;
    
    string s;
    cin >> m;
    while (m--) {
        cin >> s;
        cout << count(v.begin(), v.end(), s) << endl;
    }
    
    return 0;
}