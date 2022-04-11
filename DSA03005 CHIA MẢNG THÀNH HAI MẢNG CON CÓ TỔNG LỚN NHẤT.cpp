#include <bits/stdc++.h>
using namespace std;

long long mod = 1e9+7;

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int sum1 = 0, sum2 = 0;
        k = min(k, n-k);
        for(int i = 0; i < n; i++) {
            if(i < k) sum1 += a[i];
            else sum2 += a[i];
        }
        cout << sum2 - sum1 << endl;
    }

    return 0;
}
