#include <bits/stdc++.h>
using namespace std;

void grayToBinary(string s) {
    string res = "";
    res += s[0];
    for(int i = 1; i < s.length(); i++) {
        if(s[i] == '0') res += res[i-1];
        else {
            if(res[i-1] == '1') res += "0";
            else res += "1";
        }
    }
    cout << res << endl;
}

int main() {
    int test; cin >> test;
    while(test--) {
        string s; cin >> s;
        grayToBinary(s);
    }

    return 0;
}
