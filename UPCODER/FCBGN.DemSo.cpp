// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int n, am = 0, duong = 0; 
    string s; 
    cin >> n;

    while (cin >> s) {
        if (s[0] == '-') am++;
        else if (s[0] != '0') duong++;
    }
    
    cout << am << " " << duong;
    return 0;
}