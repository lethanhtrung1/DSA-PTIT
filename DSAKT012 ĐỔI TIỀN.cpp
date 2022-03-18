#include <bits/stdc++.h>
using namespace std;

int n, s, a[100], x[100], k;
bool ok;

int check() {
	int sum = 0;
	for(int i = 1; i <= k; i++) {
		sum += x[a[i]-1];
		if(sum > s) return 0;
	}
	return sum == s;
}

void generate() {
	int i = k;
	while(i > 0 && a[i] == n - k + i)
	    i--;
	if(i == 0) ok = false;
	else {
		a[i]++;
		for(int j = i+1; j <= k; j++)
			a[j] = a[j-1] + 1;
	}
}

void solve() {
	cin >> n >> s;
	for(int i = 1; i <= n; i++)
	    cin >> x[i];
	sort(x + 1, x + n + 1, greater<int>());
	for(int i = 1; i <= n; i++) {
		k = i;
		ok = true;
		for(int j = 1; j <= k; j++)
		    a[j] = j;
		while(ok) {
			if(check()) {
				cout << i << endl;
				return;
			}
			generate();
		}
	}
	cout << - 1 << endl;
}

int main() {
	int test; test = 1;
	while(test--) {
		solve();
	}
	
	return 0;
}
