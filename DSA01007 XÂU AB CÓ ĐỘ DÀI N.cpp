#include <bits/stdc++.h>
using namespace std;

int a[100], n;

void sinh() {
    for(int i = 0; i < n; i++) a[i] = 0;
    while(1) {
        int check = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == 1) cout << 'B';
            else cout << 'A';
        }
        cout << " ";
        for(int i = n-1; i >= 0; i--) {
            if(a[i] == 0) {
                a[i] = 1;
                for(int j = i+1; j < n; j++) a[j] = 0;
                check = 1;
                break;
            }
        }
        if(!check) return;
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        cin >> n;
        sinh();
        cout << endl;
    }

    return 0;
}
