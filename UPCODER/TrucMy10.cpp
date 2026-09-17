// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int n, duong = 0, am = 0;
    string str;
    cin >> n;

    while (n--) {
        cin >> str;
        if (str[0] == '-') am++; 
        else if ( str[0] != '0') duong++;
    }

    cout << am << " " << duong;
    return 0;
}