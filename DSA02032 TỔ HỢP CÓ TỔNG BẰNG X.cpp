#include <bits/stdc++.h>
using namespace std;

int n, x;
int a[30], res[30], check;
vector<vector<int>> ans;

void Try(int i, int sum, int cur) {
    for(int j = cur; j <= n; j++) {
        sum += a[j];
        res[i] = a[j];
        if(sum == x) {
            check = 1;
            vector<int> tmp;
            for(int k = 1; k <= i; k++)
                tmp.push_back(res[k]);
            ans.push_back(tmp);
            return;
        }        
        else if(sum <= x)
            Try(i + 1, sum, j);
        sum -= a[j];
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        ans.clear();
        check = 0;
        cin >> n >> x;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        Try(1, 0, 1);
        if(!check) cout << -1 << endl;
        else {
            cout << ans.size() << " ";
            for(int i = 0; i < ans.size(); i++) {
                cout << "{";
                for(int j = 0; j < ans[i].size()-1; j++)
                    cout << ans[i][j] << " ";
                cout << ans[i][ans[i].size()-1] << "} ";
            }
            cout << endl;
        }
    }

    return 0;
}
