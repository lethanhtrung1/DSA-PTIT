// cow + wco = cow wco (6)
// cowwco + ocowwc = cowwco ocowwc (12)
// neu x nam o vi tri thu k cua xau dao
// th1: k > 1 => x nam o vi tri k - 1 xau truoc
// th2: k = 1 => x nam o vi tri cuoi cung cua xau truoc
#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        string s;
        long long n, k;
        cin >> s >> k;
        n = s.size();
        while(n < k) n *= 2;
        while(n > s.size()) {
            if(k > n / 2) {
                k -= n / 2;
                if(k > 1) k--; // vtri k - 1 truoc do
                else k = n / 2; // vtri cuoi cung xau ban dau
            }
            n /= 2;
        }
        cout << s[k-1] << endl;
    }

    return 0;
}
