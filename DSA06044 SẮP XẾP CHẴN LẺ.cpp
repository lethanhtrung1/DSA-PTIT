#include <bits/stdc++.h>
using namespace std;

int main() {
    // int test; cin >> test;
    // while(test--) {
        int n; cin >> n;
        vector<int> v(n), a, b;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
            if(i % 2 == 0) a.push_back(v[i]);
            else b.push_back(v[i]);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());
        int i = 0, j = 0;
        for(int k = 0; k < n; k++) {
            if(k % 2 == 0) cout << a[i++] << " ";
            else cout << b[j++] << " ";
        }
        cout << endl;  
    // }

    return 0;
}
