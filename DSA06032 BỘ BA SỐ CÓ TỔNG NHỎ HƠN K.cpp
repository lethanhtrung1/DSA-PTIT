#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; long long k;
        cin >> n >> k;
        long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        long long res = 0;
        for(int i = 0; i < n - 2; i++) {
            for(int j = i+1; j < n - 1; j++) {
                res += lower_bound(a + j + 1, a + n, k - a[i]-a[j]) - a - j - 1;
            }
        }
        cout << res << endl;
    }

    return 0;
}
