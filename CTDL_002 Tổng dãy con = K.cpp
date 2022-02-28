#include <bits/stdc++.h>
using namespace std;

int n, k, check;
int a[100], b[100];
vector<vector<int>> res;

void init() {
    res.clear();
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        b[i] = 0;
    }
    sort(a+1, a+n+1);
}

void sinh() {
    int ok = 0;
    for(int i = n; i > 0; i--) {
        if(b[i] == 0) {
            b[i] = 1;
            for(int j = i+1; j <= n; j++) b[j] = 0;
            ok = 1;
            break;
        }
    }
    if(!ok) check = 1;
}

int main() {
    int test = 1;
    while(test--) {
        init();
        check = 0;
        while(!check) {
            int sum = 0;
            for(int i = 1; i <= n; i++)
                if(b[i] == 1) sum += a[i];
            if(sum == k) {
                vector<int> v;
                for(int i = 1; i <= n; i++)
                    if(b[i] == 1) v.push_back(a[i]);
                res.push_back(v);
            }
            sinh();
        }
        sort(res.begin(), res.end());
        for(int i = res.size()-1; i >= 0; i--) {
            for(int j = 0; j < res[i].size(); j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
        cout << res.size();
    }

    return 0;
}
