#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s[20];
int n, a[20], check[20], res = INT_MAX;

int Count(string x, string y) {
    int cnt = 0;
    for(int i = 0; i < x.length(); i++)
        for(int j = 0; j < y.length(); j++)
            if(x[i] == y[j]) cnt++;
    return cnt;
}

void Try(int i, int sum) {
    for(int j = 1; j <= n; j++) {
        if(check[j]) {
            check[j] = 0;
            a[i] = j;
            if(i == n) {
                res = min(res, sum + Count(s[a[i-1]], s[a[i]]));
            }
            else if(sum < res && i < n)
                Try(i + 1, sum + Count(s[a[i-1]], s[a[i]]));
            check[j] = 1;
        }
    }
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> s[i];
    memset(check, 1, sizeof(check));
    a[1] = 1;
    Try(1, 0);
    cout << res;

    return 0;
}
