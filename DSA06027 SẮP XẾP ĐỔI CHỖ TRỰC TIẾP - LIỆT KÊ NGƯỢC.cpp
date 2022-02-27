#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n];
        int b[n][n];
        for(int &x : a) cin >> x;
        int cnt = 0;
        for(int i = 0; i <= n-1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(a[i] > a[j]) {
                    swap(a[i], a[j]);
                }
            }
            cnt++;
            for(int j = 0; j < n; j++) {
                b[i][j] = a[j];
            }
        }
        for(int i = cnt-1; i >= 0; i--) {
            cout << "Buoc " << i + 1 << ": ";
            for(int j = 0; j < n; j++) {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
