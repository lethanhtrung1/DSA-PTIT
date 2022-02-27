#include <bits/stdc++.h>
using namespace std;

int ok;

void sinh(int a[], int n) {
    int check = 0;
    for(int i = n-1; i >= 0; i--) {
        if(a[i] == 0) {
            a[i] = 1;
            for(int j = i+1; j < n; j++) a[j] = 0;
            check = 1;
            break;
        }
    }
    if(!check) ok = 1;
}

int check(int a[], int n) {
    if(a[0] == 0 || a[n-1] == 1) return 0;
    for(int i = 0; i < n-1; i++) {
        if(a[i] == 1 && a[i+1] == 1) return 0;
    }
    return 1;
}

int main() {
    int test; cin >> test;
    while(test--) {
        ok = 0;
        int n; cin >> n;
        int a[1000] = {0};
        while(!ok) {
            if(check(a, n)) {
                for(int i = 0; i < n; i++) {
                    if(a[i] == 0) cout << 'A';
                    else cout << 'H';
                }
                cout << endl;
            }
            sinh(a, n);
        }
    }
    return 0;
}
