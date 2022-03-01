#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a+n);
        int count = 0;
        for(int i = 1; i < n; i++) {
            if(a[i] != a[i-1]) count++;
        }
        cout << a[n-1] - a[0] - count << endl;
    }

    return 0;
}
