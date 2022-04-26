#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll mod = 1e9+7;

ll ReverseNum(ll n) {
    ll num = 0;
    while(n) {
      num = num * 10 + n % 10;
      n /= 10;
    }
    return num;
}

ll powmod(ll n, ll r) {
    if(r == 0) return 1;
    if(r == 1) return n % mod;
    ll tmp = powmod(n, r / 2);
    if(r % 2 == 0)
      return tmp * tmp % mod;
    else
      return tmp * tmp % mod * n % mod;
}

int main() {
    int t; cin >> t;
    while(t--) {
      ll n, r; cin >> n;
      r = ReverseNum(n);
      cout << powmod(n, r) << endl;
    }

	return 0;
}
