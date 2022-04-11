#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        string s; cin >> s;
        int t[265] = {0};
        for(int i = 0; i < s.size(); i++)
            t[s[i]]++;
        int cnt = 0;
        for(int i = 'a'; i <= 'z'; i++)
            cnt = max(cnt, t[i]);
        if(s.length() - cnt >= cnt - 1)
            cout << 1 << endl;
        else cout << -1 << endl;
    }

    return 0;
}
