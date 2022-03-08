#include <bits/stdc++.h>
using namespace std;

int n, p, s, ans, a[100], used[100];
vector<vector<int>> res;
vector<int> prime;

int isPrime(int n) {
    if(n < 2) return 0;
    if(n == 2 || n == 3) return 1;
    if(n % 2 == 0 || n % 3 == 0) return 0;
    for(int i = 5; i <= sqrt(n); i += 6) {
        if(n % i == 0 || n % (i+2) == 0) return 0;
    }
    return 1;
}

void init() {
    cin >> n >> p >> s;
    prime.clear();
    res.clear();
    for(int i = p+1; i <= s; i++) {
        if(isPrime(i)) prime.push_back(i);
    }
    memset(used, 0, sizeof(used));
    ans = 0;
}

void Try(int sum, int pos, int cnt) {
    if(sum == s && cnt == n) {
        ans++;
        vector<int> tmp;
        for(int i = 0; i < n; i++) tmp.push_back(a[i]);
        res.push_back(tmp);
        return;
    }
    for(int i = pos; i < prime.size(); i++) {
        if(!used[i] && sum + prime[i] <= s) {
            used[i] = 1;
            a[cnt] = prime[i];
            Try(sum + prime[i], i, cnt + 1);
            used[i] = 0;
        }
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        init();
        Try(0, 0, 0);
        cout << ans << endl;
        for(int i = 0; i < res.size(); i++) {
            for(int x : res[i]) {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
