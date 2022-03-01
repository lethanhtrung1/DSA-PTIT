#include <bits/stdc++.h>
using namespace std;

int Count(int a[], int b[], int k) {
    int cnt = 0;
    for(int i = 1; i <= k; i++) {
        int check = 0;
        for(int j = 1; j <= k; j++) {
            if(a[i] == b[j]) check = 1;
        }
        if(!check) cnt++;
    }
    return cnt;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        int a[1001], b[1001];
        for(int i = 1; i <= k; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        int check = 0;
        for(int i = k; i > 0; i--) {
            if(b[i] != n - k + i) {
                b[i]++;
                for(int j = i+1; j <= k; j++) b[j] = b[j-1] + 1;
                check = 1;
                break;
            }
        }
        if(!check) cout << k;
        else cout << Count(a, b, k);
        cout << endl;
    }

    return 0;
}
