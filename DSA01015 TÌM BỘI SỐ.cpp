#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll a[505];
int stop;
vector<ll> v;

void next(string s) {
	int i = s.length() - 1;
	while(i >= 0 && s[i] == '9') {
		s[i] = '0';
		i--;
	}
	if(i == -1) stop = 1;
	else s[i] = '9';
}

void init() {
	string s(13, '0');
	stop = 0;
	next(s);     // loai bo so 000000000;
	while(!stop) {
		v.push_back(stoll(s));
		next(s);
	}
	for(int i = 1; i <= 500; i++) {
		if(a[i] == 0) {
			for(ll x : v) {
				if(x % i == 0) {
					a[i] = x;
					break;
				}
			}
		}
	}	
}

int main() {
	int test; cin >> test;
	init();
	while(test--) {
		int n; cin >> n;
		cout << a[n] << endl;
	}

	return 0;
}
