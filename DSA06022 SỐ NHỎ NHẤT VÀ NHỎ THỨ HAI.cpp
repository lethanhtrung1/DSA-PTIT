#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int check = 0, pos;
        sort(a, a + n);
        for(int i = 1; i < n; i++) {
            if(a[i] != a[i-1]) {
                check = 1;
                pos = i;
                break;
            }
        }
        if(check) cout << a[0] << " " << a[pos];
        else cout << -1;
        cout << endl;
    }

    return 0;
}
