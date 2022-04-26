#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll Mul(int n) {
    if(n == 0) return 1;
    if(n == 1) return 2;
    ll tmp = Mul(n / 2);
    if(n % 2 == 0)
      return tmp * tmp;
    else
      return tmp * tmp * 2;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n;
        ll k;
        cin >> n >> k;
        long long m = Mul(n - 1);
        while(1) {
            if(n == 1) {
                cout << 1;
                break;
             }
            if(m == k) {
                cout << n;
                break;
            }
            if(k > m) {
 //				    k = 2 * m - k;
              k = k - m;
            }
            n--;
            m /= 2;
        }
        cout << endl;
    }
	
	return 0;
}
