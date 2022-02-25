#include <bits/stdc++.h>
using namespace std;

struct data {
    int val, pos;
};

bool cmp(data a, data b) {
    return a.val < b.val;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        data a[100001];
        for(int i = 0; i < n; i++) {
            cin >> a[i].val;
            a[i].pos = i;
        }
        sort(a, a + n, cmp);
        vector<data> v;
        for(int i = 1; i < n-1; i++) {
            if(a[i].val == a[i-1].val || a[i].val == a[i+1].val) {
                v.push_back(a[i]);
            }
        }
        int res = 0;
        int min = INT_MAX;
        for(data x: v) {
            if(min > x.pos) {
                min = x.pos;
                res = x.val;
            }
        }
        if(v.size() == 0) cout << "NO" << endl;
        else cout << res << endl;
    }

    return 0;
}