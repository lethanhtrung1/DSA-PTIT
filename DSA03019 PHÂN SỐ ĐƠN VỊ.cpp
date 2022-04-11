#include <bits/stdc++.h>
// 1/(Q/P) = 1/a + 1/b + ...
// a = [Q/P+1]
// 1/b = 1/(Q/P) - 1/[Q/p+1]
using namespace std;

int main() {
	int t; cin >> t;
	while(t--) {
		long long P, Q; cin >> P >> Q;
		long long tmp;
		while(1) {
			if(Q % P == 0) {
				cout << "1/" << Q/P << endl;
				break;
			} else {
				tmp = Q/P + 1;
				cout << "1/" << tmp << " + ";
				// P = P * (Q/P + 1) - Q;
				// Q = Q * (Q/P + 1);
				P = P * tmp - Q;
				Q = Q * tmp;
			}
		}
	}

	return 0;
}
