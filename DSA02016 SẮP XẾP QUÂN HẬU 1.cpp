#include <bits/stdc++.h>
using namespace std;

int n, cnt, a[100], cot[100], d1[100], d2[100];

void Try(int i) {
    for(int j = 1; j <= n; j++) {
        if(cot[j] == 1 && d1[i - j + n] == 1 && d2[i + j - 1] == 1) {
            a[i] = j;
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
            if(i == n) cnt++;
            else Try(i + 1);
            cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
        }
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        cin >> n;
        cnt = 0;
        for(int i = 1; i <= 100; i++) {
            cot[i] = d1[i] = d2[i] = 1;
        }
        Try(1);
        cout << cnt << endl;
    }

    return 0;
}
