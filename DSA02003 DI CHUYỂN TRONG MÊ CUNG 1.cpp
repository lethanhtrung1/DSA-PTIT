#include <bits/stdc++.h>
using namespace std;

int check;

void Try(int a[][100], int n, string s, int x, int y) {
    if(a[0][0] == 0 || a[n-1][n-1] == 0) return;
    if(x == n-1 && y == n-1) {
        check = 1;
        cout << s << " ";
        return;
    }
    if(a[x+1][y] == 1 && x+1 < n) {
        Try(a, n, s + "D", x+1, y);
    }
    if(a[x][y+1] == 1 && y+1 < n) {
        Try(a, n, s + "R", x, y+1);
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        check = 0;
        int n; cin >> n;
        int a[100][100];
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++) cin >> a[i][j];
        string s = "";
        Try(a, n, s, 0, 0);
        if(!check) cout << -1;
        cout << endl;
    }

    return 0;
}
