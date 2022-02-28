#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int min = INT_MAX;
        for(int i = 0; i < n-1; i++) {
            for(int j = i+1; j < n; j++) {
                if(abs(a[i] + a[j]) < abs(min)) {
                    min = a[i] + a[j];
                }                
            }
        }
        cout << min << endl;
    }

    return 0;
}
