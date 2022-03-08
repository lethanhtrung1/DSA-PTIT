#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        long long n, x, a;
        cin >> n >> x;
        for(int i = 0; i < n; i++) {
            cin >> a;
            if(a == x) cout << i+1 << endl;
        }
    }

    return 0;
}
