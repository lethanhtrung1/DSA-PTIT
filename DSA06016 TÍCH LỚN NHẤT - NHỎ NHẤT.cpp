#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n, m; cin >> n >> m;
        long long a[n], b[m];
        for(long long &x : a) cin >> x;
        for(long long &x : b) cin >> x;
        sort(a, a+n, greater<long long>());
        sort(b, b+m);
        cout << a[0] * b[0] << endl;
    }

    return 0;
}
