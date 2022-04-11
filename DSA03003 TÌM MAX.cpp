#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        long long res = 0;
        for(int i = 0; i < n; i++) {
            res += a[i] * i;
            res %= mod;
        }
        cout << res << endl;
    }

    return 0;
}
