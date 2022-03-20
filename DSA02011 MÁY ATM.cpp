#include <bits/stdc++.h>
using namespace std;

int n, s, t[100], a[100], k;
bool ok;

int check() {
    int sum = 0;
    for(int i = 1; i <= k; i++) {
        sum += t[a[i]];
        if(sum > s) return 0;
    }
    return sum == s;
}

void generate() {
    int i = k;
    while(i > 0 && a[i] == n - k + i)
        i--;
    if(i == 0) ok = false;
    else {
        a[i]++;
        for(int j = i+1; j <= k; j++)
            a[j] = a[j-1] + 1;
    }
}

void solve() {
    cin >> n >> s;
    for(int i = 1; i <= n; i++)
        cin >> t[i];
    sort(t + 1, t + n + 1, greater<int>());
    for(int i = 1; i <= n; i++) {
        k = i;
        ok = true;
        for(int j = 1; j <= k; j++)
            a[j] = j;
        while(ok) {
            if(check()) {
                cout << i << endl;
                return;
            }
            generate();
        }
    }
    cout << -1 << endl;
}

int main() {
    int test; cin >> test;
    while(test--) {
        solve();
    }

    return 0;
}
