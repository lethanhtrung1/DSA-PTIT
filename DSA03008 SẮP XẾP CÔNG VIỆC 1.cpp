#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        vector<pair<int, int>> p(n);
        for(int i = 0; i < n; i++)
            cin >> p[i].first;
        for(int i = 0; i < n; i++)
            cin >> p[i].second;
        sort(p.begin(), p.end(), cmp);
        int cnt = 1, k = 0;
        for(int i = 1; i < n; i++) {
            if(p[k].second <= p[i].first) {
                k = i;
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
