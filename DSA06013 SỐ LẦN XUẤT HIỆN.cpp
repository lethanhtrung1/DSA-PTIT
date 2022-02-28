#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        int count = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == k) count++;
        }
        if(count == 0) cout << -1 << endl;
        else cout << count << endl;
    }

    return 0;
}
