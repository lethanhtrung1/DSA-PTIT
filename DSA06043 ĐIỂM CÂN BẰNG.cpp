#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            sum += a[i];
        }
        long long left = 0;
        int check = 0;
        for(int i = 0; i < n; i++) {
            sum -= a[i];
            if(sum == left) {
                cout << i+1 << endl;
                check = 1;
                break;
            }
            left += a[i];
        }
        if(check == 0) cout << -1 << endl;
    }

    return 0;
}
