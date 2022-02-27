#include <bits/stdc++.h>
using namespace std;

void sinh(string &s) {
    int check = 0;
    for(int i = s.length()-1; i >= 0; i--) {
        if(s[i] == '0') {
            s[i] = '1';
            for(int j = i+1; j < s.length(); j++) {
                s[j] = '0';
            }
            check = 1;
            break;
        }
    }
    if(check == 0) {
        for(int i = 0; i < s.length(); i++) {
            cout << 0;
        }
    }
    else cout << s;
    cout << endl;
}

int main() {
    int test; cin >> test;
    while(test--) {
        string s; cin >> s;
        sinh(s);
    }

    return 0;
}
