#include <bits/stdc++.h>
using namespace std;

int ok;

void sinh(int a[], int n) {
    int x = 0;
    for(int i = n; i >= 1; i--) {
        if(a[i] == 6) {
            x++;
            a[i] = 8;
            for(int j = i+1; j <= n; j++) a[j] = 6;
            break;
        }
    }
    if(x == 0) ok = 1;
}

int check(int a[], int n) {
    if(a[1] == 6 || a[n] == 8) return 0;
    for(int i = 1; i < n; i++) {
        if(a[i] == 8 && a[i+1] == 8) return false;
    }
    int cnt = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] == 6 && a[i+1] == 6) cnt++;
        else cnt = 1;
        if(cnt == 4) return false;
    }
    return true;
}

int main() {
    ok = 0;
    int n; cin >> n;
    int a[100];
    for(int i = 1; i <= n; i++) a[i] = 6;
    while(!ok) {
        if(check(a, n)) {
            for(int i = 1; i <= n; i++) cout << a[i];
            cout << endl;
        }
        sinh(a, n);
    }

    return 0;
}
