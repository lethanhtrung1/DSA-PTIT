#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll mod = 123456789;

ll powmod(ll n) {
    if(n == 0) return 1 % mod;
    if(n == 1) return 2 % mod;
    ll tmp = powmod(n / 2);
    if(n % 2 == 0)
      return tmp * tmp % mod;
    else
      return tmp * tmp % mod * 2 % mod;
}

int main() {
    int t; cin >> t;
    while(t--) {
      ll n; cin >> n;
      n--;
      cout << powmod(n) << endl;
    }

	return 0;
}
