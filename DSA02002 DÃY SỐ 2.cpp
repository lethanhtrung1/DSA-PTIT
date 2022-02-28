#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int arr[10000];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int i = n, j = 0;
        vector<vector<int>> res;
        while(i--) {
            vector<int> v;
            for(int k = j; k < n; k++) v.push_back(arr[k]);
            res.push_back(v);
            for(int k = n-1; k > 0; k--) {
                arr[k] += arr[k-1];
            }
            j++;
        }
        for(int k = res.size()-1; k >= 0; k--) {
            cout << "[";
            for(int x = 0; x < res[k].size()-1; x++) {
                cout << res[k][x] << " ";
            }
            cout << res[k][res[k].size()-1] << "] ";
        }
        cout << endl;
    }
    return 0;
}
