#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        vector<pair<int, int>> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end(), cmp);
        int cnt = 1, i = 0;
        for(int j = 1; j < n; j++) {
            if(v[i].second <= v[j].first) {
                i = j;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
