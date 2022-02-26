#include <bits/stdc++.h>
using namespace std;

int ok;

void sinh(int a[], int n) {
    int i = n-2;
    while(i >= 0 && a[i] > a[i+1]) i--;
    if(i < 0) ok = 0;
    else {
        int j = n-1;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        int l = i+1, r = n-1;
        while(l < r) {
            swap(a[l], a[r]);
            l++; r--;
        }
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        ok = 1;
        int n; cin >> n;
        int a[n+1];
        vector<vector<int>> res;
        for(int i = 0; i < n; i++) a[i] = i+1;
        while(ok) {
            vector<int> v;
            for(int i = 0; i < n; i++) v.push_back(a[i]);
            res.push_back(v);
            sinh(a, n);
        }
        for(int i = res.size()-1; i >= 0; i--) {
            for(int j = 0; j < res[i].size(); j++) {
                cout << res[i][j];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
