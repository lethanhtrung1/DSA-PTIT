#include <bits/stdc++.h>
using namespace std;

int n, a[100];
vector<vector<int>> res;

void Try(int sum, int x, int cnt) {
    if(sum == n) {
        vector<int> tmp;
        for(int i = 0; i < cnt; i++)
            tmp.push_back(a[i]);
        res.push_back(tmp);
        return;
    }
    for(int i = x; i > 0; i--) {
        if(sum + i <= n) {
            a[cnt] = i;
            Try(sum + i, i, cnt + 1);
        }
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        cin >> n;
        res.clear();
        Try(0, n, 0);
        cout << res.size() << endl;
        for(int i = 0; i < res.size(); i++) {
            cout << "(";
            for(int j = 0; j < res[i].size()-1; j++)
                cout << res[i][j] << " ";
            cout << res[i][res[i].size()-1] << ") ";
        }
        cout << endl;
    }

    return 0;
}
