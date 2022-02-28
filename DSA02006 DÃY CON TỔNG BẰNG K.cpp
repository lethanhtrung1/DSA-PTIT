#include <bits/stdc++.h>
using namespace std;

int n, k;
int a[100], b[100];
vector<vector<int>> res;

void init() {
    res.clear();
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a+1, a+n+1);
}

void Try(int i) {
    for(int j = 0; j <= 1; j++) {
        b[i] = j;
        if(i == n) {
            int sum = 0;
            for(int x = 1; x <= n; x++) {
                if(b[x] == 1) sum += a[x];
            }
            if(sum == k) {
                vector<int> v;
                for(int x = 1; x <= n; x++) {
                    if(b[x] == 1) v.push_back(a[x]);
                }
                res.push_back(v);
            }
        }
        else Try(i+1);
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        init();
        Try(1);
        if(res.size() == 0) cout << -1 << endl;
        else {
            sort(res.begin(), res.end());
            for(int i = 0; i < res.size(); i++) {
                cout << "[";
                for(int j = 0; j < res[i].size()-1; j++) {
                    cout << res[i][j] << " ";
                }
                cout << res[i][res[i].size()-1] << "] ";
            }
            cout << endl;
        }
    }

    return 0;
}
