// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    if (b.find(a) != string::npos) {
        cout << "YES" << endl;
        cout << b.size() - a.size();
    } else cout << "NO";
    
    return 0;
}