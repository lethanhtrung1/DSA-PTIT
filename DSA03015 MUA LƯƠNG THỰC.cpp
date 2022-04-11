#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, s, m;
        cin >> n >> s >> m;
        int sum = s * m; // tong so luong thuc can de ton tai s ngay
        int days;       // so ngay can phai di mua luong thuc
        if(sum % n == 0) days = sum / n;
        else days = sum / n + 1;
        int sundays = s / 7;
        if(days > s - sundays)
            cout << -1 << endl;
        else
            cout << days << endl;
    }

    return 0;
}
