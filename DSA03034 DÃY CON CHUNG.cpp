#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;
        ll a[n], b[m], c[k];
        for(ll &x : a) cin >> x;
        for(ll &x : b) cin >> x;
        for(ll &x : c) cin >> x;
        vector<ll> ans;
        int i = 0, j = 0, p = 0;
        while(i < n && j < m && p < k) {
            if(a[i] == b[j] && b[j] == c[p]) {
                ans.push_back(a[i]);
                i++; j++; p++;
            }
            else if(a[i] < b[j]) i++;
            else if(b[j] < c[p]) j++;
            else p++;
        }
        if(ans.size() == 0) cout << "NO";
        else {
            for(ll x : ans)
                cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}
