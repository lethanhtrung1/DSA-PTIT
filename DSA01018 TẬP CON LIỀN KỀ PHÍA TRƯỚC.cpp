#include <bits/stdc++.h>
using namespace std;

int check(int a[], int k) {
	for(int i = 1; i <= k; i++) {
		if(a[i] != i) return 0;
	}
	return 1;
}

int main() {
	int test; cin >> test;
	while(test--) {
		int n, k; cin >> n >> k;
		int a[k+5];
		for(int i = 1; i <= k; i++)
			cin >> a[i];
		if(check(a, k)) {
			for(int i = 1; i <= k; i++) {
				cout << n - k + i << " ";
			}
		} else {
			for(int i = k; i > 0; i--) {
				if(a[i] != a[i-1] + 1) {
					a[i]--;
					if(a[k] != n) {
						for(int j = i+1; j <= k; j++)
							a[j]++;
					}
					break;
				}
			}
			for(int i = 1; i <= k; i++)
				cout << a[i] << " ";
		}
		cout << endl;
	}

	return 0;
}
