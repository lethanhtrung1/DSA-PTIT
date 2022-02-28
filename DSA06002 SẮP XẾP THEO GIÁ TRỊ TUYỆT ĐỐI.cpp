#include <bits/stdc++.h>
using namespace std;

struct data {
    int val1, val2, pos; 
};

bool cmp(data a, data b) {
    if(a.val2 < b.val2) return true;
    if(a.val2 == b.val2 && a.pos < b.pos) return true;
    return false;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        data a[100000];
        for(int i = 0; i < n; i++) {
            cin >> a[i].val1;
            a[i].pos = i;
            a[i].val2 = abs(k - a[i].val1);
        }
        sort(a, a + n, cmp);
        for(int i = 0; i < n; i++) {
            cout << a[i].val1 << " ";
        }
        cout << endl;
    }

    return 0;
}
