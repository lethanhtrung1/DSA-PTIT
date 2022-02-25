#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int x[n];
        for(int i = 0; i < n; i++) cin >> x[i];
        int a[n], b[n];
        a[0] = x[0]; b[n-1] = x[n-1];
        for(int i = 1; i < n; i++) a[i] = min(x[i], a[i-1]);
        for(int i = n-2; i >= 0; i--) b[i] = max(x[i], b[i+1]);
        int i = 0, j = 0;
        int res = -1;
        while(i < n && j < n) {
            if(a[i] < b[j]) {
                res = max(res, j - i);
                j++;
            }
            else i++;
        }
        if(res == 0) cout << -1 << endl;
        else cout << res << endl;
    }

    return 0;
}