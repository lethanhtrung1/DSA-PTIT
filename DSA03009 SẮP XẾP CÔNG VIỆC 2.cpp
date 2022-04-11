#include <bits/stdc++.h>

using namespace std;

struct data {
    int jobID, deadline, profit;
};

bool cmp(data a, data b) {
    return a.profit > b.profit;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        data a[n];
        int max_deadline = 1;
        for(int i = 0; i < n; i++) {
            cin >> a[i].jobID >> a[i].deadline >> a[i].profit;
            max_deadline = max(max_deadline, a[i].deadline);
        }
        sort(a, a+n, cmp);
        int done[max_deadline + 1] = {0};
        long long res = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            while(done[a[i].deadline] && a[i].deadline > 0)
                a[i].deadline--;
            if(a[i].deadline > 0) {
                done[a[i].deadline] = 1;
                res += a[i].profit;
                cnt++;
            }
        }
        cout << cnt << " " << res << endl;
    }

    return 0;
}
