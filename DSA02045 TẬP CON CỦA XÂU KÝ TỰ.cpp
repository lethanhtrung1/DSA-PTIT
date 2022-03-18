#include <bits/stdc++.h>
using namespace std;

int stop;

void Try(int a[], int n, int k) {
    int ok = 0;
    for(int i = k; i > 0; i--) {
        if(a[i] != n - k + i) {
            ok = 1;
            a[i]++;
            for(int j = i + 1; j <= k; j++)
                a[j] = a[j-1] + 1;
            break;
        }
    }
    if(!ok) stop = 1;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        string s; cin >> s;
        vector<string> res;
        for(int k = 1; k <= n; k++) {
            stop = 0;
            int a[20];
            for(int i = 1; i <= k; i++)
                a[i] = i;
            while(!stop) {
                string tmp;
                for(int i = 1; i <= k; i++)
                    tmp += s[a[i]-1];
                res.push_back(tmp);
                Try(a, n, k);
            }
        }
        sort(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
