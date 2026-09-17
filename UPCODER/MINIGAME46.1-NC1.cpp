// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, l; 
    string x;
    multiset<string> m;
    cin >> n >> l;

    while (n--) {
        cin >> x;
        m.insert(x);
    }
    
    for (auto str : m)
        cout << str;
    return 0;
}