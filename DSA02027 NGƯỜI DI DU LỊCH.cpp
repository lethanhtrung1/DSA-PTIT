#include <bits/stdc++.h>
using namespace std;

int n, c[100][100], a[100];
int cmin = 1e9, res = 1e9, cost;
bool used[100];

void Try(int i) {
    if(cost + cmin * (n - i + 1) >= res)
        return;
    for(int j = 2; j <= n; j++) {
        if(used[j] == false) {
            a[i] = j;
            used[j] = true;
            cost += c[a[i-1]][a[i]];
            if(i == n) {
                if(cost + c[a[n]][1] < res)
                    res = cost + c[a[n]][a[1]];
            } else {
                Try(i + 1);
            }
            used[j] = false;
            cost -= c[a[i-1]][a[i]];
        }            
    }
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> c[i][j];
            if(c[i][j] != 0)
                cmin = min(cmin, c[i][j]);
        }
    }
    memset(used, false, sizeof(used));
    used[1] = true;
    a[1] = 1;
    Try(2);
    cout << res;

    return 0;
}
