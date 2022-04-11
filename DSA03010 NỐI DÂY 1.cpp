#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        priority_queue<int, vector<int>, greater<int>> pq;
        for(int i = 0; i < n; i++)
            pq.push(a[i]);
        long long res = 0;
        while(pq.size() > 1) {
            long long top1 = pq.top();
            pq.pop();
            long long top2 = pq.top();
            pq.pop();
            res += top1 + top2;
            pq.push(top1 + top2);
        }
        cout << res << endl;
    }

    return 0;
}
