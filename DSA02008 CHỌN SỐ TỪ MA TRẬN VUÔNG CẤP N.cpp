#include <bits/stdc++.h>
using namespace std;

int stop;

void next(int a[], int n) {
    int i = n-1;
    while(i > 0 && a[i] > a[i+1]) i--;
    if(i == 0) stop = 1;
    else {
        int j = n;
        while(a[j] < a[i]) j--;
        swap(a[i], a[j]);
        int l = i + 1, r = n;
        while(l < r) {
            swap(a[l], a[r]);
            l++; r--;
        }
    }
}

int check(int a[], int c[][20], int n, int k) {
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += c[i][a[i]];
        if(sum > k) return 0;
    }
    if(sum == k) return 1;
    return 0;
}

int main() {
    int n, k; cin >> n >> k;
    stop = 0;
    int c[20][20];
    int a[20];
    for(int i = 1; i <= n; i++) {
        a[i] = i;
        for(int j = 1; j <= n; j++) cin >> c[i][j];
    }
    vector<vector<int>> res;
    while(!stop) {
        vector<int> tmp;
        if(check(a, c, n, k)) {  
            for(int i = 1; i <= n; i++) tmp.push_back(a[i]);
            res.push_back(tmp);
        }
        next(a, n);
    }
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++) {
        for(int j = 0; j < res[i].size(); j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
