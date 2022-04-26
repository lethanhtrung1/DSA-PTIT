#include <bits/stdc++.h>

using namespace std;
using ll = long long;

long long mod = 1e9+7;

ll Powmod(int n, ll k) {
	if(k == 0) return 1;
	if(k == 1) return n % mod;
	ll tmp = Powmod(n, k/2);
	if(k % 2 == 0)
		return tmp * tmp % mod;
	else
		return tmp * tmp % mod * n % mod;
}

int main() {
	int t; cin >> t;
	while(t--) {
		int n;
		ll k;
		cin >> n >> k;
		cout << Powmod(n, k) << endl;
	}

	return 0;
}
