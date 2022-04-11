#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int a[n], index[n+1] = {0};
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        index[a[i]] = index[a[i]-1] + 1;
        cnt = max(cnt, index[a[i]]);
    }
    cout << n - cnt;

    return 0;
}
