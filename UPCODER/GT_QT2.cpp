// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> a;

int search(int l, int r) {
    if (l > r) return -1;

    int mid = (l + r) / 2;

    if (a[mid] == x && (mid == 1 || a[mid - 1] != x)) return mid;
    if (a[mid] < x) return search(mid + 1, r);
    return search(l, mid - 1);
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    cin >> n >> x;

    a.resize(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    cout << search(1, n);
    return 0;
}
