#include <bits/stdc++.h>
using namespace std;

bool ok, used[10];
int a[5], vt[10];
vector<vector<int>> res;
vector<int> v;

void init() {
    for(int i = 0; i < 5; i++)
        cin >> a[i];
    for(int i = 0; i < 10; i++) {
        used[i] = false;
        vt[i] = 0;
    }
    ok = false;
}

void Try1() {
    for(int i = 1; i <= 3; i++) {
        v.push_back(i);
        if(v.size() == 4)
            res.push_back(v);
        else Try1();
        v.pop_back();
    }
}

bool check() {
    for(int i = 0; i < res.size(); i++) {
        int s = a[vt[0]];
        for(int j = 0; j < res[i].size(); j++) {
            if(res[i][j] == 1) s += a[vt[j+1]];
            if(res[i][j] == 2) s -= a[vt[j+1]];
            if(res[i][j] == 3) s *= a[vt[j+1]];
        }
        if(s == 23) return true;
    }
    return false;
}

void Try(int i) {
    if(ok) return;
    for(int j = 0; j < 5; j++) {
        if(!used[j]) {
            vt[i] = j;
            used[j] = true;
            if(i == 4) {
                if(check()) {
                    ok = true;
                    return;
                }
            }
            else Try(i + 1);
            used[j] = false;
        }
    }
}

int main() {
    Try1();
    int test; cin >> test;
    while(test--) {
        init();
        Try(0);
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    return 0;
}
