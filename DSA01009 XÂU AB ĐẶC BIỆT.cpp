#include <bits/stdc++.h>
using namespace std;

int ok = 0;
vector<vector<int>> res;

void sinh(int a[], int n) {
    int check = 0;
    for(int i = n; i > 0; i--) {
        if(a[i] == 0) {
            a[i] = 1;
            for(int j = i+1; j <= n; j++) a[j] = 0;
            check = 1;
            break;
        }
    }
    if(!check) ok = 1;
}

int check(int a[], int n, int k) {
    int cnt = 0, len = 0;
    for(int i = 1; i <= n; i++) {
        if(a[i] == 1) len++;
        else {
            if(len > k) return 0;
            else if(len == k) cnt++;
            len = 0;
        }
    }
    if(a[n] == 1) {
        if(len > k) return 0;
        else if(len == k) cnt++;
    }
    return cnt == 1;
}

int main() {
    int n, k; cin >> n >> k;
    int a[100];
    for(int i = 1; i <= n; i++) a[i] = 0;
    while(!ok) {
        if(check(a, n, k)) {
            vector<int> v;
            for(int i = 1; i <= n; i++) v.push_back(a[i]);
            res.push_back(v);    
        }
        sinh(a, n);
    }
    cout << res.size() << endl;
    sort(res.begin(), res.end());
    for(int i = res.size()-1; i >= 0; i--) {
        for(int j = 0; j < res[i].size(); j++) {
            if(res[i][j] == 1) cout << 'A';
            else cout << 'B';
        }
        cout << endl;
    }

    return 0;
}
