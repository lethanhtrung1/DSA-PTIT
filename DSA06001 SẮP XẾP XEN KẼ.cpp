#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int b[n];
        int left = 0, right = n - 1;
        sort(a, a + n);
        for(int i = 0; i < n; i++) {
            if(i % 2 == 0) {
                b[i] = a[right];
                right--;
            }
            else {
                b[i] = a[left];
                left++;
            }
        }
        for(int i = 0; i < n; i++) cout << b[i] << " ";
        cout << endl;
    }

    return 0;
}
