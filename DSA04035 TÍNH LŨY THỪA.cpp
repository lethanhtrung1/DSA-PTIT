#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;

ll n, k;

ll powmod(ll a, ll b) {
    if(b == 0) return 1;
    if(b == 1) return a % mod;
    ll temp = powmod(a, b / 2);
    if(b % 2 == 0) return temp * temp % mod;
    else return temp * temp % mod * a % mod;
}

int main() {
    while(1) {
        cin >> n >> k;
        if(n == 0 && k == 0) break;
        cout << powmod(n, k) << endl;
    }

    return 0;
}
