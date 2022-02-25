#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        long long res = 0;
        for(int i = 0; i < n - 1; i++) {
            res += (upper_bound(a+i+1, a+n, k-a[i]) - a) - (lower_bound(a+i+1, a+n, k-a[i]) - a);
        }
        cout << res << endl;
    }

    return 0;
}
