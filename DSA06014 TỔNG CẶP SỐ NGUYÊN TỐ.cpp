#include <bits/stdc++.h>
using namespace std;

int prime[1000001];

void sieveOfEratosthenes() {
    for(int i = 0; i <= 1000000; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= 1000; i++) {
        if(prime[i]) {
            for(int j = i*i; j < 1000000; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    int test; cin >> test;
    sieveOfEratosthenes();
    while(test--) {
        int n; cin >> n;
        int check = 0;
        for(int i = 2; i <= n/2; i++) {
            if(prime[i] && prime[n-i]) {
                cout << i << " " << n-i << endl;
                check = 1;
                break;
            }
        }
        if(check == 0) cout << -1 << endl;
    }

    return 0;
}
