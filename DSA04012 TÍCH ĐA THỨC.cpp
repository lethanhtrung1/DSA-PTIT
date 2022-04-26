#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int p[n], q[m];
        for(int i = 0; i < n; i++) cin >> p[i];
        for(int i = 0; i < m; i++) cin >> q[i];
        int res[n+m] = {0};
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                res[i+j] += p[i] * q[j];
            }
        }
        for(int i = 0; i < n+m-1; i++)
            cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
