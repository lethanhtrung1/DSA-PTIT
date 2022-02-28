#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        int n; cin >> n;
        cin.ignore();
        string s; getline(cin, s);
        int a[10] = {0};
        for(int i = 0; i < s.length(); i++) {
            if(isdigit(s[i])) {
                a[s[i] - '0'] = 1;
            }
        }
        for(int i = 0; i < 10; i++) {
            if(a[i]) cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
