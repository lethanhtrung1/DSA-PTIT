#include <bits/stdc++.h>
using namespace std;

bool stop;

void generate(int *a, int n) {
    bool check = false;
    for(int i = n-1; i >= 0; i--) {
        if(a[i] == 0) {
            a[i] = 1;
            check = true;
            for(int j = i+1; j < n; j++)
                a[j] = 0;
            break;
        }
    }
    if(!check) stop = true;
}

int main() {
    int n, w; cin >> n >> w;
    pair<int, int> p[100];
    for(int i = 0; i < n; i++) cin >> p[i].first;
    for(int i = 0; i < n; i++) cin >> p[i].second;
    int a[100] = {0};
    int ans = 0;
    vector<int> res;
    stop = false;
    while(!stop) {
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == 1) {
                sum1 += p[i].first;
                sum2 += p[i].second;
            }
        }
        if(sum2 <= w && ans < sum1) {
            ans = sum1;
            res.clear();
            for(int i = 0; i < n; i++)
                res.push_back(a[i]);
        }
        generate(a, n);
    }
    cout << ans << endl;
    for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    
    return 0;
}
