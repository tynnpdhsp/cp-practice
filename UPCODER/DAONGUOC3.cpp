// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string str, tmp, res = "";
    getline(cin, str);
    
    stringstream ss(str);
    while (ss >> tmp) 
        res = tmp + " " + res;
    
    cout << res;
    return 0;
}