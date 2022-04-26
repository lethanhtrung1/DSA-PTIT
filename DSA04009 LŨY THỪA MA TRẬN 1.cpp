#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int mod = 1e9+7;
int n, k;

struct Matrix {
    ll mat[11][11];
};

Matrix operator * (Matrix a, Matrix b) {
    Matrix res;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            res.mat[i][j] = 0;
            for(int k = 0; k < n; k++) {
                res.mat[i][j] = (res.mat[i][j] + a.mat[i][k] * b.mat[k][j] % mod) % mod;
            }
        }
    }
    return res;
}

Matrix powmod(Matrix a, int k) {
    if(k == 1) return a;
    Matrix tmp = powmod(a, k / 2);
    if(k % 2 == 1)
        return tmp * tmp * a;
    return tmp * tmp;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> k;
        Matrix a;
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                cin >> a.mat[i][j];
        Matrix ans = powmod(a, k);
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++)
                cout << ans.mat[i][j] << " ";
            cout << endl;
        }
    }

    return 0;
}
