// Bo ba so tong bang k
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int solution(ll a[], int n, ll k) {
    for(int i = 0; i < n-2; i++) {
        for(int j = i+1; j < n-1; j++) {
            if((upper_bound(a+j+1, a+n, k-a[i]-a[j]) - a) != lower_bound(a+j+1, a+n, k-a[i]-a[j]) - a)
                return 1;
        }
    }
    return 0;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n; ll k;
        cin >> n >> k;
        ll a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        if(solution(a, n, k)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
