// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string str; 
    getline(cin, str);
    for (auto x : str) 
        cout << (char) tolower(x);
    return 0;
}