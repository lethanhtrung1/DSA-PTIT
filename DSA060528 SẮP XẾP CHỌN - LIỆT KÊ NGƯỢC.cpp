#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    vector<vector<int>> b;
    for(int &x : a) cin >> x;
    int cnt = 0;
    for(int i = 0; i < n - 1; i++) {
        int pos = i;
        for(int j = i + 1; j < n; j++) {
            if(a[pos] > a[j]) pos = j;
        }
        if(pos != i) {
            swap(a[i], a[pos]);
        }
        vector<int> x;
        for(int j = 0; j < n; j++) x.push_back(a[j]);
        b.push_back(x);
    } 
    for(int i = b.size()-1; i >= 0; i--) {
        cout << "Buoc " << i + 1 << ": ";
        for(int j = 0; j < n; j++) {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
