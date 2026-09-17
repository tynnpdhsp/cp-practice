// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    for (char c : str)
        cout << (char) toupper(c);
    return 0;
}