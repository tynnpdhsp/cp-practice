// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    string str;
    cin >> str;
    
    for (char c : str) {
        if (c != '*') q.push(c);
        else if (!q.empty()) {
            cout << (char) q.front();
            q.pop();
        }
    }
    
    return 0;
}