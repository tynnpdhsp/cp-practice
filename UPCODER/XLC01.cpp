// Author: Nguyễn Ngọc Phú Tỷ (tynnp)
// GitHub: https://github.com/tynnpdhsp/cp-practice

#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100005;
const int MAXK = 1005;

string t, p;
int n, m, k, g;
bitset<MAXN> match[256], blk[MAXK], pre, cur, u;

int main() {
    getline(cin, t);
    getline(cin, p);
    cin >> k;

    n = t.size();
    m = p.size();
    g = k + 1;

    for (int j = 0; j < m; j++)
        match[p[j]][j] = 1;

    for (int i = 0; i < n; i++) {
        int r = i % g;

        if (r == 0 && i > 0) {
            for (int j = g - 2; j >= 0; j--)
                blk[j] |= blk[j + 1];
            pre.reset();
        }

        u = blk[r] | pre;
        cur = (u << 1) & match[t[i]];
        if (t[i] == p[0]) cur[0] = 1;

        if (cur[m - 1]) {
            cout << "YES";
            return 0;
        }

        blk[r] = cur;
        pre |= cur;
    }

    cout << "NO";
    return 0;
}
