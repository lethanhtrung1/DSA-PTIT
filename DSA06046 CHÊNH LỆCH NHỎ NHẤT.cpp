#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        int res_min = INT_MAX;
        for(int i = 0; i < n-1; i++) {
            res_min = min(res_min, a[i+1] - a[i]);
        }
        cout << res_min << endl;
    }

    return 0;
}
