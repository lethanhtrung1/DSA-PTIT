#include <bits/stdc++.h>
using namespace std;

int cnt;

void Try(int a[][100], int n, int m, int x, int y) {
    if(x == n - 1 && y == m - 1) {
        cnt++;
        return;
    }
    if(x + 1 < n) {
        Try(a, n, m, x + 1, y);
    }
    if(y + 1 < m) {
        Try(a, n, m, x, y + 1);
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        cnt = 0;
        int n, m; cin >> n >> m;
        int a[100][100];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < m; j++) cin >> a[i][j];
        Try(a, n, m, 0, 0);
        cout << cnt << endl;
    }

    return 0;
}
