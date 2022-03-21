#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        int a[n+5];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        long long res = 0;
        for(int i = 0; i < n - 1; i++) {
            res += lower_bound(a + i + 1, a + n, a[i] + k) - a - i - 1;
        }
        cout << res << endl;
    }

    return 0;
}
