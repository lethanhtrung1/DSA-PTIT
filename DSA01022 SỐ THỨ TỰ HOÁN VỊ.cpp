#include <bits/stdc++.h>
using namespace std;

int ok;

void sinh(int a[], int n) {
    int i = n-1;
    while(a[i] > a[i+1]) i--;
    if(i <= 0) ok = 1;
    else {
        int k = n;
        while(a[i] > a[k]) k--;
        swap(a[i], a[k]);
        int l = i+1, r = n;
        while(l < r) {
            swap(a[l], a[r]);
            l++; r--;
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
        int n; cin >> n;
        int a[100], b[100];
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            b[i] = i;
        }
        int cnt = 0;
        while(!ok) {
            cnt++;
            if(check(a, b, n)) {
                cout << cnt << endl;
                break;
            }
            sinh(b, n);
        }
    }

    return 0;
}
