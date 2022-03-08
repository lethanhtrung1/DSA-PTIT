#include <bits/stdc++.h>
using namespace std;

void solve(string s, int k) {
  for(int i = 0; i < s.length(); i++) {
		if(k == 0) break;
		int max_val = s[s.length()-1];
		int pos = s.length()-1;
		for(int j = i+1; j < s.length(); j++) {
			if(s[j] >= max_val) {
				max_val = s[j];
				pos = j;
			}
		}
		if(max_val > s[i]) {
			swap(s[i], s[pos]);
			k--;
		}
	}
	cout << s << endl;
}

int main() {
	int test; cin >> test;
	while(test--) {
		int k; cin >> k;
		string s; cin >> s;
		solve(s, k);
	}

	return 0;
}
