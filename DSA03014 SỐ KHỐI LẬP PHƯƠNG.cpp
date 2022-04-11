#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<string> preProcess(ll n) {
    vector<string> v;
    for(ll i = 1; i * i * i <= n; i++) {
        ll cube = i * i * i;
        string cubeString = to_string(cube);
        v.push_back(cubeString);
    }
    return v;
}

string findLargestCube(string num, vector<string> v) {
    reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++) {
        string cur = v[i];
        int digets = cur.length();
        int cnt = 0;
        for(int j = 0; j < num.length(); j++) {
            if(num[j] == cur[cnt]) {
                cnt++;
            }
            if(cnt == digets) {
                return cur;
            }
        }
    }
    return "-1";
}

void solution(ll n) {
    vector<string> v = preProcess(n);
    string num = to_string(n);
    string ans = findLargestCube(num, v);
    cout << ans << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        ll s; cin >> s;
        solution(s);
    }

    return 0;
}
