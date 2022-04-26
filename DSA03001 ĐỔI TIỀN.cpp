#include <bits/stdc++.h>
using namespace std;

int minVal(int n) {
    int a[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int cnt = 0;
    for(int i = 0; i < 10; i++) {
        while(n >= a[i]) {
            n -= a[i];
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        cout << minVal(n) << endl;
    }

    return 0;
}
