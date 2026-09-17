// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[3];

    for (int &x : a)
        cin >> x;

    sort(a, a + 3, greater<int>());

    for (int x : a)
        cout << x << '\n';

    return 0;
}