#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int arr[10000];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int i = n, j = 0;
        while(i--) {
            cout << "[";
            for(int k = j; k < n-1; k++) {
                cout << arr[k] << " ";
            }
            cout << arr[n-1] << "]" << endl;
            for(int k = n-1; k >= 1; k--) {
                arr[k] += arr[k-1];
            }
            j++;
        }
    }
    return 0;
}
