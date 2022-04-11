#include <bits/stdc++.h>

using namespace std;

void solution() {
	int d; cin >> d;
	string s; cin >> s;
	int Freq[265] = {0};
	for(int i = 0; i < s.size(); i++)
		Freq[s[i]]++;
	int Max_freq = 0;
	for(int i =	'A'; i <= 'Z'; i++)
		Max_freq = max(Max_freq, Freq[i]);
	if((Max_freq - 1) * (d - 1) > s.length() - Max_freq)
		cout << -1;
	else
		cout << 1;
	cout << endl;
}

int main() {
	int t; cin >> t;
	while(t--) {
		solution();
	}
	
	return 0;
}
