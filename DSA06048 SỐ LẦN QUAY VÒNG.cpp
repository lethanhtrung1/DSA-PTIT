#include <bits/stdc++.h>
using namespace std;

int solution(long long a[], int n) {
    for(int i = 0; i < n - 1; i++) {
        if(a[i] > a[i+1]) return i + 1;
    }
    return 0;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        cout << solution(a, n) << endl;
    }

    return 0;
}
