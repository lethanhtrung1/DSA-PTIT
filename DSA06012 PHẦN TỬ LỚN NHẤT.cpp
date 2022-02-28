#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a+n, greater<int>());
        for(int i = 0; i < k; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
