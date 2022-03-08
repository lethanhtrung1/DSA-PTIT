#include <bits/stdc++.h>
using namespace std;

int check;
vector<string> res;

void Try(int a[][100], int n, string s, int x, int y) {
    if(x == n-1 && y == n-1) {
        res.push_back(s);
        check = 1;
        return;
    }
    if(x + 1 < n && a[x+1][y]) {
        a[x+1][y] = 0;
        Try(a, n, s + "D", x+1, y);
        a[x+1][y] = 1;
    }
    if(y + 1 < n && a[x][y+1]) {
        a[x][y+1] = 0;
        Try(a, n, s + "R", x, y+1);
        a[x][y+1] = 1;
    }
    if(y - 1 >= 0 && a[x][y-1]) {
        a[x][y-1] = 0;
        Try(a, n, s + "L", x, y-1);
        a[x][y-1] = 1;
    }    
    if(x - 1 >= 0 && a[x-1][y]) {
        a[x-1][y] = 0;
        Try(a, n, s + "U", x-1, y);
        a[x-1][y] = 1;
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
        res.clear();
        if(a[0][0] && a[n-1][n-1]) {
            a[0][0] = 0;
            Try(a, n, s, 0, 0);
        }
        if(!check) cout << -1;
        else {
            sort(res.begin(), res.end());
            for(int i = 0; i < res.size(); i++)
                cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
