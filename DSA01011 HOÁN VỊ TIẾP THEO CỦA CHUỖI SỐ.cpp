#include <bits/stdc++.h>
using namespace std;

void sinh(string s, int len) {
	int i = len - 1;
	while(i >= 0 && s[i] >= s[i+1]) i--;
	if(i < 0) cout << "BIGGEST" << endl;
	else {
		int j = len;
		while(s[j] <= s[i]) j--;
		swap(s[j], s[i]);
		int l = i+1, r = len;
		while(l < r) {
			swap(s[l], s[r]);
			l++; r--;
		}
		cout << s << endl;
	}
}

int main() {
	int test; cin >> test;
	while(test--) {
		int n; cin >> n;
		string s; cin >> s;
		cout << n << " ";
		sinh(s, s.length()-1);
	}

	return 0;
}
