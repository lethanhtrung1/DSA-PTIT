#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000], res = 0;

void Try(int i, int s, int sum, int cnt) {
    // da chia het n phan tu cua mang a thanh k doan con
    if(cnt == k && i == n) {
        res++;
        return;
    }
    for(int j = i; j < n; j++) {
        s += a[j];
        if(s == sum)
            Try(j + 1, 0, sum, cnt + 1);
    }
}

int main() {
    cin >> n >> k;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if(sum % k != 0) {
        cout << 0 << endl;
    } else {
        sum /= k;
        Try(0, 0, sum, 0);
        cout << res << endl;
    }

    return 0;
}
