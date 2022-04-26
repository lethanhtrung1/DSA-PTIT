#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll powmod(int n) {
    if(n == 0) return 1;
    if(n == 1) return 2;
    ll tmp = powmod(n / 2);
    if(n % 2 == 0)
        return tmp * tmp;
    return tmp * tmp * 2;
}

ll convert(string s) {
    long long res = 0;
    int cnt = 0;
    for(int i = s.length()-1; i >= 0; i--) {
        res += powmod(cnt++) * (s[i] - '0');
        // res = res * 2 + s[i] - '0';
    }
    return res;
}

int main() {
    int t; cin >> t;
    while(t--) {
        string s1, s2;
        cin >> s1 >> s2;
        cout << convert(s1) * convert(s2) << endl;
    }

    return 0;
}
