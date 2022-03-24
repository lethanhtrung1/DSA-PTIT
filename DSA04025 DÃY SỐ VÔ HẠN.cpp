#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll mod = 1e9+7;

void multiply(ll a[2][2], ll b[2][2]) {
	ll res[2][2];
	for(int i = 0; i < 2; i++) {
		for(int j = 0; j < 2; j++) {
			res[i][j] = 0;
			for(int k = 0; k < 2; k++)
				res[i][j] = (res[i][j] + a[i][k] * b[k][j] % mod) % mod;
		}
	}
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			a[i][j] = res[i][j];
}

void fibonacci(ll n) {
	ll fibo[2][2] = {{1, 0}, {0, 1}};
	ll f[2][2] = {{1, 1}, {1, 0}};
	while(n) {
		if(n % 2 == 1)
			multiply(fibo, f);
		multiply(f, f);
		n /= 2;
	}
	cout << fibo[0][1] << endl;
}

int main() {
	int test; cin >> test;
	while(test--) {
		ll n; cin >> n;
		fibonacci(n);
	}

	return 0;
}
