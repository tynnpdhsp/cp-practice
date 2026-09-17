// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);
    
    int pos = a.find(b);
    while (pos != -1) {
        a.erase(pos, b.size());
        pos = a.find(b, 0);
    }
    
    pos = a.find("  ");
    if (pos != -1)
        a.erase(pos, 1);
    
    cout << a;
    return 0;
}
