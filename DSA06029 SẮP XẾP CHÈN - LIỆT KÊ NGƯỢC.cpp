#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    vector<vector<int>> b;
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++) {
        int x = a[i], pos = i - 1;
        while(pos >= 0 && a[pos] > x) {
            a[pos + 1] = a[pos];
            pos--;
        }
        a[pos+1] = x;
        vector<int> v;
        for(int j = 0; j <= i; j++) v.push_back(a[j]);
        b.push_back(v);
    }
    for(int i = b.size()-1; i >= 0; i--) {
        cout << "Buoc " << i << ": ";
        for(int j = 0; j < b[i].size(); j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
