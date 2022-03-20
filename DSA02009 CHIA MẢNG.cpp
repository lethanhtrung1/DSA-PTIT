#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], sum;
bool ok, used[100];

void Try(int cnt, int s) {
  if(cnt == k) {
		ok = true;
		return;
	}
	if(ok) return;
	for(int i = 1; i <= n; i++) {
		if(!used[i]) {
			used[i] = true;
			if(s == sum) Try(cnt + 1, 0);
			else if(s < sum) Try(cnt, s + a[i]);
			else return;
		}
		used[i] = false;
  }
}

int main() {
	int test; cin >> test;
	while(test--) {
		cin >> n >> k;
		ok = false;
		sum = 0;
		memset(used, false, sizeof(used));
		for(int i = 1; i <= n; i++) {
			cin >> a[i];
			sum += a[i];
		}
		if(sum % k != 0) {
			cout << 0 << endl;
		} else {
			sum /= k;
			Try(0, 0);
			if(ok) cout << 1;
			else cout << 0;
			cout << endl;
		}
	}

	return 0;
}
