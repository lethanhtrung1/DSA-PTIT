#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long x[93];

char solution(ll n, ll k) {
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k <= x[n-2]) return solution(n-2, k);
    else return solution(n-1, k - x[n-2]);
}

int main() {
    int test; cin >> test;
    x[1] = 1; x[2] = 1;
    for(int i = 3; i < 93; i++) {
        x[i] = x[i-2] + x[i-1];
    }    
    while(test--) {
        ll n, k; cin >> n >> k;
        cout << solution(n, k) << endl;
    }

    return 0;
}
