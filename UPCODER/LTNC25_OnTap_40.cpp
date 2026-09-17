// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    
    for (int i = 0; i < s.size(); i++) 
        if (!isalpha(s[i]))
            s[i] = ' ';
    
    int ans = 0;
    stringstream ss(s);
    while (ss >> s) ans++;
        
    cout << ans;
    return 0;
}