#include <iostream>

using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n;
		int a[n];
		int ans = 0;
		for(int i = 0; i < n; i++) {
			cin >> a[i];
			if(a[i] == 0) ans++;
		}
		cout << ans << endl;
	}
	
	return 0;
}
