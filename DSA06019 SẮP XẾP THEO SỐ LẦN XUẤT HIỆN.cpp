#include <bits/stdc++.h>
using namespace std;

int cnt[100001] = {};

bool cmp(int a, int b) {
    // if(cnt[a] == cnt[b]) return a < b;
    // else return cnt[a] > cnt[b];
    if(cnt[a] != cnt[b]) return cnt[a] > cnt[b];
    else return a < b;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n];
        memset(cnt, 0, sizeof(cnt));
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            cnt[a[i]]++;
        }
        sort(a, a + n, cmp);
        for(int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
