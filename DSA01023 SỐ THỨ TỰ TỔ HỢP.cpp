#include <bits/stdc++.h>
using namespace std;

int ok;

void sinh(int a[], int n, int k) {
    int i = k;
    while(i >= 1 && a[i] == n - k + i) {
        i--;
    }
    if(a == 0) ok = 0;
    else {
        a[i]++;
        for(int j = i+1; j <= k; j++) {
            a[j] = a[j-1] + 1;
        }
    }
}

int check(int a[], int b[], int n) {
    for(int i = 1; i <= n; i++) {
        if(a[i] != b[i]) return 0;
    }
    return 1;
}

int main() {
    int test; cin >> test;
    while(test--) {
        ok = 0;
        int n, k; cin >> n >> k;
        int a[100], b[100];
        for(int i = 1; i <= k; i++) {
            cin >> a[i];
            b[i] = i;
        }
        int cnt = 0;
        while(!ok) {
            cnt++;
            if(check(a, b, k)) {
                cout << cnt << endl;
                break;
            }
            sinh(b, n, k);
        }
    }

    return 0;
}
