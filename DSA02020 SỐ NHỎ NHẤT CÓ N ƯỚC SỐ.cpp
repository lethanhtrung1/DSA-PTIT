// k = a^x * b^y *... -> so uoc so cua k la: (x+1)*(y+1)*...
// vd: k = 12 = 2^2 * 3^1 -> n = (2+1)*(1+1) = 6
// => 12 co 6 uoc so (1, 2, 3, 4, 6, 12)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n; long long res;
int a[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

void Try(int i, ll cnt, ll tmp) {
    if(cnt > n) return;
    if(cnt == n) res = min(res, tmp);
    for(int j = 1; ; j++) {
        if(tmp * a[i] > res) break;
        tmp *= a[i];
        Try(i + 1, cnt * (j+1), tmp);
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        cin >> n;
        res = 1e18;
        Try(0, 1, 1);
        cout << res << endl;
    }

    return 0;
}
