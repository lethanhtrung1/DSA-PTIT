#include <bits/stdc++.h>
using namespace std;

int ok;

void sinh(int a[], int n) {
    int check = 0;
    for(int i = n-1; i >= 0; i--) {
        if(a[i] == 0) {
            check = 1;
            a[i] = 1;
            for(int j = i+1; j < n; j++) a[j] = 0;
            break;
        }
    }
    if(!check) ok = 1;
}

int check(int a[], int n) {
    for(int i = 0; i <= n/2; i++) {
        if(a[i] != a[n-i-1]) return 0;
    }
    return 1;
}

int main() {
    int n; cin >> n;
    int a[n] = {0};
    while(!ok) {
        if(check(a, n)) {
            for(int i = 0; i < n; i++) cout << a[i] << " ";
            cout << endl;
        }
        sinh(a, n);
    }

    return 0;
}
