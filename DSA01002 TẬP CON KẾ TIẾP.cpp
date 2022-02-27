#include <bits/stdc++.h>
using namespace std;

void sinh(int a[], int n, int k) {
    int check = 0;
    for(int i = k; i > 0; i--) {
        if(a[i] != n - k + i) {
            a[i]++;
            for(int j = i+1; j <= k; j++) a[j] = a[j-1] + 1;
            check = 1;
            break;
        }
    }
    if(check)
        for(int i = 1; i <= k; i++)
            cout << a[i] << " ";
    else
        for(int i = 1; i <= k; i++)
            cout << i << " ";
    cout << endl;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        int a[1000];
        for(int i = 1; i <= k; i++) cin >> a[i];
        sinh(a, n, k);
    }

    return 0;
}
