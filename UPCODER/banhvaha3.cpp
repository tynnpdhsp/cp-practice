// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string a, b;
    while (n--) {
        cin >> a >> b;

        if (a == "pcf") 
            continue;
        else 
            cout << b << endl;
    }

    return 0;
}