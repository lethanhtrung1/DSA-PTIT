#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(int &x : a) cin >> x;
        int count = 0;
        for(int i = 0; i < n-1; i++) {
            int x = k - a[i];
            if(x >= 0) {
                for(int j = i + 1; j < n; j++) {
                    if(a[j] == x) count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
}
