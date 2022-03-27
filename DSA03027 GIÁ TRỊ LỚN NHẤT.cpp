#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; test = 1;
    while(test--) {
        int n; cin >> n;
        long long sum = 0;
        for(int i = 0; i < n; i++) {
            int x; cin >> x;
            if(x > 0) sum += x * 2;
        }
        cout << sum << endl;
    }

    return 0;
}
