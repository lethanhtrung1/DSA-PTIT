#include <bits/stdc++.h>
using namespace std;

int n, a[100], b[100], check, sum, s;

void Try(int i) {
    for(int j = 0; j <= 1; j++) {
        b[i] = j;
        sum += a[i] * b[i];
        if(sum = s / 2) {
            check = 1;
            return;
        }
        if(sum < s / 2) Try(i + 1);
        sum -= a[i] * b[i];
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        cin >> n;
        check = 0;
        s = 0;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            s += a[i];
        }
        if(s % 2 == 1) cout << "NO";
        else {
            Try(1);
            if(check) cout << "YES";
            else cout << "NO"; 
        }
        cout << endl;
    }

    return 0;
}
