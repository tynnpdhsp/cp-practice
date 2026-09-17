// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std; 

int main() {
    int n; 
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < 2*n; j++) {    
            if (j < n-i || j > n+i) cout << " ";
            else cout << "*";
        }
        if (i != n-1) cout << endl;
    }

    return 0;
}