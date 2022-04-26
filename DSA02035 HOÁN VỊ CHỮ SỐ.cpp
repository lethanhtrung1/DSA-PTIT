#include <bits/stdc++.h>

using namespace std;

bool stop;

void generate(int t[], int n) {
	int i = n - 1;
	while(t[i] > t[i+1]) i--;
	if(i <= 0) stop = true;
	else {
		int j = n;
		while(t[j] < t[i]) j--;
		swap(t[i], t[j]);
		int l = i + 1, r = n;
		while(l < r) {
			swap(t[l], t[r]);
			l++; r--;
		}
	}
}

int main() {
	int n, k; cin >> n >> k;
	string s[n];
	for(int i = 0; i < n; i++)
		cin >> s[i];
	int t[k+1];
	for(int i = 1; i <= k; i++)
		t[i] = i;
	stop = false;
	vector<int> v;
	int ans = INT_MAX;
	while(!stop) {
		v.clear();
		for(int i = 0; i < n; i++) {
			int num = 0;
			for(int j = 1; j <= k; j++) {
				num = num * 10 + (s[i][t[j]-1] - '0');
			}
			v.push_back(num);
		}
		sort(v.begin(), v.end());
		ans = min(ans, v[v.size()-1] - v[0]);			
		generate(t, k);
	}
	cout << ans << endl;

	return 0;
}
