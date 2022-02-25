#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        long long n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        int a[n1], b[n2], c[n3];
        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;
        for(int &x : c) cin >> x;
        int i = 0, j = 0, k = 0, check = 0;
        while(i < n1 && j < n2 && k < n3) {
            if(a[i] == b[j] && b[j] == c[k]) {
                cout << a[i] << " ";
                check = 1;
                i++; j++; k++;
            }
            else if(a[i] < b[j]) i++;
            else if(b[j] < c[k]) j++;
            else k++;
        }
        if(!check) cout << -1;
        cout << endl;
    }

    return 0;
}
