#include <bits/stdc++.h>
using namespace std;

int n, x, a[100], res[100], check;

void Try(int i, int sum, int cur) {
    for(int j = cur; j <= n; j++) {
        sum += a[j];
        res[i] = a[j];
        if(sum == x) {
            check = 1;
            cout << "[";
            for(int k = 1; k < i; k++)
                cout << res[k] << " ";
            cout << res[i] << "]";
            return;
        } else if(sum <= x) {
            Try(i + 1, sum, j);
        }
        sum -= a[j];
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        cin >> n >> x;
        check = 0;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        Try(1, 0, 1);
        if(!check) cout << -1;
        cout << endl;
    }

    return 0;
}
