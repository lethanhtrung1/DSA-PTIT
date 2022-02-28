#include <bits/stdc++.h>
using namespace std;

int ok;

void sinh(int a[], int n) {
    int i = n-1;
    while(i >= 1 && a[i] > a[i+1]) i--;
    if(i == 0) ok = 0;
    else {
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        int l = i+1, r = n;
        while(l < r) {
            swap(a[l], a[r]);
            l++; r--;
        }
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        ok = 1;
        int n; cin >> n;
        int a[n+1];
        for(int i = 1; i <= n; i++) a[i] = i;
        while(ok) {
            for(int i = 1; i <= n; i++) cout << a[i];
            cout << " ";
            sinh(a, n);
        }
        cout << endl;
    }

    return 0;
}
