#include <bits/stdc++.h>
using namespace std;

int n, s, a[1000];

void solve() {
    if(n == 1 && s == 0) {
        cout << 0 << " " << 0;
        return;
    }
    if(s > 9 * n || s == 0) {
        cout << -1 << " " << -1;
        return;
    }
    int sum = s;
    for(int i = 1; i <= n; i++)
        a[i] = 0;
    for(int i = n; i > 0; i--) {
        for(int j = 9; j >= 0; j--) {
            if(sum - j >= 0) {
                a[i] = j;
                sum -= a[i];
                break;
            }
        }
        if(a[i] == 0) break;
    }
    if(a[1] == 0) {
        a[1] = 1;
        for(int i = 2; i <= n; i++) {
            if(a[i] != 0) {
                a[i]--;
                break;
            }
        }
    }
    for(int i = 1; i <= n; i++)
        cout << a[i];
    cout << " ";
    sum = s;
    for(int i = 1; i <= n; i++)
        a[i] = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 9; j >= 0; j--) {
            if(sum - j >= 0) {
                a[i] = j;
                sum -= a[i];
                break;
            }
        }
        if(a[i] == 0) break;
    }
    for(int i = 1; i <= n; i++)
        cout << a[i];
}

int main() {
    cin >> n >> s;
    solve();

    return 0;
}
