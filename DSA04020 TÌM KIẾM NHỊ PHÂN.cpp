#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int h, int x) {
    if(l <= h) {
        int mid = l + (h - l) / 2;
        if(x > a[mid]) return binarySearch(a, mid + 1, h, x);
        else if(x < a[mid]) return binarySearch(a, l, mid - 1, x);
        else return mid;
    }
    return -1;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n, k; cin >> n >> k;
        int a[n + 1];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        if(binarySearch(a, 0, n - 1, k) == -1) cout << "NO" << endl;
        else cout << binarySearch(a, 0, n - 1, k) + 1 << endl;
    }

    return 0;
}
