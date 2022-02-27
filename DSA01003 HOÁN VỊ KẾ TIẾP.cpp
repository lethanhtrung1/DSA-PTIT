#include <bits/stdc++.h>
using namespace std;

void sinh(int a[], int n) {
    int check = 0;
    int i = n-1;
    while(i >= 1 && a[i] > a[i+1]) i--;
    if(i == 0) check = 1;
    else {
        int j = n;
        while(a[i] > a[j]) j--;
        swap(a[i], a[j]);
        reverse(a+i+1, a+j+1);
    }
    if(!check)
        for(int k = 1; k <= n; k++) cout << a[k] << " ";
    else
        for(int k = 1; k <= n; k++) cout << k << " ";
    cout << endl;
}

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        int a[1001];
        for(int i = 1; i <= n; i++) cin >> a[i];
        sinh(a, n);
    }

    return 0;
}
