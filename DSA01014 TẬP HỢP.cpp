#include <bits/stdc++.h>
using namespace std;

int ok;

void sinh(int a[], int n, int k) {
    int check = 0;
    for(int i = k; i > 0; i--) {
        if(a[i] != n - k + i) {
            a[i]++;
            for(int j = i+1; j <= k; j++) a[j] = a[j-1] + 1;
            check = 1;
            break;
        }
    }
    if(!check) ok = 1;
}

int check(int a[], int n, int k, int s) {
    int sum = 0;
    for(int i = 1; i <= k; i++) {
        sum += a[i];
        if(sum > s) return 0;
    }
    if(sum == s) return 1;
    return 0;
}

int main() {
    while(1) {
        ok = 0;
        int n, k, s;
        cin >> n >> k >> s;
        if(k > n) cout << 0 << endl;
        else {
            if(n == 0 && k == 0 && s == 0) break;
            int a[101];
            for(int i = 1; i <= k; i++) a[i] = i;
            int cnt = 0;
            while(!ok) {
                if(check(a, n, k, s)) cnt++;
                sinh(a, n, k);
            }
            cout << cnt << endl;
        }
    }

    return 0;
}
