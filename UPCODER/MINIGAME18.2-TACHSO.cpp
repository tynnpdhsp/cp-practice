// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    replace(s.begin(), s.end(), ',', ' ');
    
    int x, sum = 0;
    stringstream ss(s);
    
    while (ss >> x) {
        cout << x << '\n';
        sum += x;
    }
    
    cout << sum;
    return 0;
}
