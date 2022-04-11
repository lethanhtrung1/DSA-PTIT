#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll mod = 1e9+7;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        for(int i = 0; i < n; i++) {
            ll x; cin >> x;
            pq.push(x);
        }
        ll res = 0;
        while(pq.size() > 1) {
            ll top1 = pq.top(); pq.pop();
            ll top2 = pq.top(); pq.pop();
            ll tmp = (top1 + top2) % mod;
            res = (res + tmp) % mod;
            pq.push(tmp);
        }
        cout << res << endl;
    }

    return 0;
}
