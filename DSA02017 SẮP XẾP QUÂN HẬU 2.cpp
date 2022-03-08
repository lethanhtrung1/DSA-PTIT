#include <bits/stdc++.h>
using namespace std;

int a[100][100], column[100], d1[100], d2[100], res, x[100];

void init() {
    for(int i = 1; i <= 8; i++)
        for(int j = 1; j <= 8; j++) cin >> a[i][j];
    memset(column, 1, sizeof(column));
    memset(d1, 1, sizeof(d1));
    memset(d2, 1, sizeof(d2));
    res = 0;
}

void Try(int i) {
    for(int j = 1; j <= 8; j++) {
        if(column[j] && d1[i - j + 8] && d2[i + j - 1]) {
            x[i] = j;
            column[j] = d1[i - j + 8] = d2[i + j - 1] = 0;
            if(i == 8) {
                int sum = 0;
                for(int k = 1; k <= 8; k++) {
                    sum += a[k][x[k]];
                }
                res = max(res, sum);
            }
            else Try(i + 1);
            column[j] = d1[i - j + 8] = d2[i + j - 1] = 1;
        }
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        init();
        Try(1);
        cout << res << endl;
    }

    return 0;
}
