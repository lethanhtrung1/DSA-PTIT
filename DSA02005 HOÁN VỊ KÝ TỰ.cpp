#include <bits/stdc++.h>
using namespace std;

string s;
int n, arr[11], Bool[11] = {0};

void in() {
    for(int i = 1; i <= s.length(); i++) {
        cout << s[arr[i]-1];
    }
    cout << " ";
}

void Try(int k) {
    for(int i = 1; i <= s.length(); i++) {
        if(!Bool[i]) {
            arr[k] = i;
            Bool[i] = 1;
            if(k == s.length()) in();
            else Try(k+1);
            Bool[i] = 0;
        }
    }
}

int main() {
    int test; cin >> test;
    while(test--) {
        cin >> s;
        Try(1);
        cout << endl;
    }
    return 0;
}
