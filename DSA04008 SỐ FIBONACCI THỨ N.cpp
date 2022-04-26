  #include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll mod = 1e9+7;

void multiply(ll a[2][2], ll b[2][2]) {
    ll res[2][2];
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            res[i][j] = 0;
            for(int k = 0; k < 2; k++) {
                res[i][j] = (res[i][j] + a[i][k] * b[k][j] % mod) % mod;
            }
        }
    }
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            a[i][j] = res[i][j];
}

void powMod(int n) {
    ll res[2][2] = {{1, 0}, {0, 1}}; // ma tran don vi
    ll f[2][2] = {{1, 1}, {1, 0}};
    while(n) {
        if(n % 2 == 1)
            multiply(res, f);
        multiply(f, f);
        n /= 2;
    }
    cout << res[0][1] << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        powMod(n);
    }

    return 0;
}
