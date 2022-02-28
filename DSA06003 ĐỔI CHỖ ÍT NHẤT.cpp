#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        int cnt = 0;
        for(int i = 0; i < n-1; i++) {
            int min_pos = i;
            for(int j = i+1; j < n; j++) {
                if(a[min_pos] > a[j]) min_pos = j; 
            }
            if(min_pos != i) {
                swap(a[min_pos], a[i]);
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}
