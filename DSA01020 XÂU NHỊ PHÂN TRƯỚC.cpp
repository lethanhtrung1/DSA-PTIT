#include <bits/stdc++.h>
using namespace std;

int main() {
    int test; cin >> test;
    while(test--) {
        string s; cin >> s;
        int check = 0;
        for(int i = s.length()-1; i >= 0; i--) {
            if(s[i] == '1') {
                s[i] = '0';
                for(int j = i+1; j < s.length(); j++) s[j] = '1';
                check = 1;
                break;
            }
        }
        if(!check)
            for(int i = 0; i < s.length(); i++) cout << 1;
        else
            cout << s;
        cout << endl;
    }

    return 0;
}
