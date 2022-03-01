#include <bits/stdc++.h>
using namespace std;

int a[100], n, k, ok;
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void sinh() {
    int check = 0;
    for(int i = k; i > 0; i--) {
        if(a[i] != n - k + i) {
            a[i]++;
            for(int j = i+1; j <= k; j++) a[j] = a[j-1] + 1;
            check = 1;
            break;
        }
    }
    if(!check) ok = 1;
}

int main() {
    int test; cin >> test;
    while(test--) {
        ok = 0;
        cin >> n >> k;
        for(int i = 1; i <= k; i++) a[i] = i;
        while(!ok) {
            for(int i = 1; i <= k; i++) cout << s[a[i]-1];
            cout << endl;
            sinh();
        }
    }
    return 0;
}
