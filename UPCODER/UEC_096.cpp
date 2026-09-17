// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <iostream>
using namespace std;

struct ToaDo {
    int x, y;

    void nhap() {
        cin >> x >> y;
    }

    void xuat() {
        cout << "(" << x << ", " << y << ")\n";
    }
};

int main() {
    ToaDo a;
    a.nhap();
    a.xuat();
    return 0;
}