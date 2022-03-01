#include <bits/stdc++.h>
using namespace std;

int n, k, a[101], b[101], ok = 0;
int cnt = 0;

void sinh() {
    int check = 0;
    for(int i = k; i > 0; i--) {
        if(b[i] != n - k + i) {
            b[i]++;
            for(int j = i+1; j <= k; j++) b[j] = b[j-1] + 1;
            check = 1;
            break;
        }
    }
    if(!check) ok = 1;
}

int check() {
    for(int i = 1; i < k; i++) {
        if(a[b[i]] > a[b[i+1]]) return 0;
    }
    return 1;
}

int main() {
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    for(int i = 1; i <= k; i++) b[i] = i;
    while(!ok) {
        if(check()) cnt++;
        sinh();
    }
    cout << cnt;

    return 0;
}
