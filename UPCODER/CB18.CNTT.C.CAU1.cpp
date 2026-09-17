// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    int cnt = a > b ? a : b;
    
    for (int i = 0; i < cnt; i++) 
        cout << "Em xin hua khong gian lan\n";
    
    return 0;
}