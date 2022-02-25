#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        multiset<int> se;
        for(int i = 0; i < k; i++) se.insert(a[i]);
        cout << *se.rbegin() << " ";
        for(int i = k; i < n; i++) {
            se.erase(se.find(a[i - k]));
            se.insert(a[i]);
            cout << *se.rbegin() << " ";
        }
        cout << endl;
    }

    return 0;
}
