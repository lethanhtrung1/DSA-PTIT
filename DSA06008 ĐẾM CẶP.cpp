#include <bits/stdc++.h>
using namespace std;
// x < y => x^y > y^x
// tru cap 2 3, 2 4

int cnt[5];

// tim vtri phan tu dau tien trong y > x
int first_pos(int a[], int l, int r, int x) {
    int pos = -1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] > x) {
            pos = m;
            r = m - 1;
        }
        else l = m + 1;
    }
    return pos;
}

// dem so phan tu cua mang y lon hon tung phan tu mang x
int count(int y[], int m, int x) {
    if(x == 0) return 0;
    if(x == 1) return cnt[0];
    // neu x != 0, 1 thi tat ca cac so 0, 1 cua y deu thoa man
    long long res = cnt[0] + cnt[1];
    // auto it = upper_bound(y, y + m, x);
    // res += (y + m) - it;
    int pos = first_pos(y, 0, m - 1, x);
    if(pos != -1) res += (m - pos);
    if(x == 2) res -= (cnt[3] + cnt[4]);
    if(x == 3) res += cnt[2];
    return res;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n, m; cin >> n >> m;
        int x[n], y[m];
        for(int i = 0; i < n; i++) cin >> x[i];
        for(int i = 0; i < m; i++) {
            cin >> y[i];
            if(y[i] <= 4) cnt[y[i]]++;
        }
        sort(y, y + m);
        long long res = 0;
        for(int i = 0; i < n; i++) {
            res += count(y, m, x[i]);
        }
        cout << res << endl;
        memset(cnt, 0, sizeof(cnt));
    }

    return 0;
}
