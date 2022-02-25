#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n];
        vector<vector<int>> b;
        for(int &x : a) cin >> x;
        for(int i = 0; i < n-1; i++) {
            int check = 0;
            for(int j = 0; j < n-i-1; j++) {
                if(a[j] > a[j+1]) {
                    swap(a[j], a[j+1]);
                    check = 1;
                }
            }
            if(check) {
                vector<int> x;
                for(int j = 0; j < n; j++) x.push_back(a[j]);
                b.push_back(x);
            }
        }
        for(int i = b.size() - 1; i >= 0; i--) {
            cout << "Buoc " << i + 1 << ": ";
            for(int j = 0; j < n; j++) {
                cout << b[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
