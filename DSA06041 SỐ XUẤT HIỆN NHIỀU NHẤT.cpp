#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n];
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        int check = 0;
        for(auto it : mp) {
            if(it.second > n/2) {
                cout << it.first << endl;
                check = 1;
                break;
            }
        }
        if(!check) cout << "NO" << endl;
    }

    return 0;
}
