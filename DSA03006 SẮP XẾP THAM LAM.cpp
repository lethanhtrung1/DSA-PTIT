#include <bits/stdc++.h>
using namespace std;

bool solve(int a[], int b[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i] && a[i] != b[n-i-1])
            return false;
    }
    return true;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        if(solve(a, b, n)) cout << "Yes";
        else cout << "No";
        cout << endl;
    }

    return 0;
}
