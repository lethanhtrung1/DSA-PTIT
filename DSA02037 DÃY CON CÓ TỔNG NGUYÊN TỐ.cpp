#include <bits/stdc++.h>

using namespace std;

bool stop;

int prime(int n) {
	if(n < 2) return 0;
	if(n == 2 || n == 3) return 1;
	if(n % 2 == 0 || n % 3 == 0) return 0;
	for(int i = 5; i <= sqrt(n); i += 6) {
		if(n % i == 0 || n % (i + 2) == 0)
			return 0;
	}
	return 1;
}

void generate(int t[], int n) {
	int check = 0;
	for(int i = n - 1; i >= 0; i--) {
		if(t[i] == 0) {
			t[i] = 1;
			check = 1;
			for(int j = i + 1; j < n; j++)
				t[j] = 0;
			break;
		}
	}
	if(!check) stop = true;
}

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n+1];
		for(int i = 0; i < n; i++)
			cin >> a[i];
		sort(a, a + n, greater<int>());
		int t[n+1] = {0};
		stop = false;
		while(!stop) {
			int sum = 0;
			for(int i = 0; i < n; i++)
				if(t[i] == 1) sum += a[i];
			if(prime(sum)) {
				for(int i = 0; i < n; i++)
					if(t[i] == 1) cout << a[i] << " ";
				cout << endl;
			}
			generate(t, n);
		}
	}

	return 0;
}
