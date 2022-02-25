#include <bits/stdc++.h>
using namespace std;
#define ll long long

int check(long long a[], int n) {
    for(int i = n-1; i >= 2; i--) {
        int left = 0, right = i-1;
        while(left < right) {
            if(a[left] + a[right] == a[i]) return 1;
            else if(a[left] + a[right] < a[i]) left++;
            else right--;
        }
    }
    return 0;
}

int main() {
    int test;
    cin >> test;
    while(test--) {
        int n;
        cin >> n;
        long long a[n];
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a[i] = (long long)x*x;
        }
        sort(a, a+n);
        if(check(a, n)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    return 0;
}// tam giac vuong




// #include <bits/stdc++.h>
// #include <set>
// using namespace std;

// set<string> convert(string s) {
//     stringstream ss(s);
//     set<string> res;
//     string tmp;
//     while(ss >> tmp) {
//         res.insert(tmp);
//     }
//     return res;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int test;
//     cin >> test;
//     cin.ignore();
//     while(test--) {
//         string s1, s2;
//         getline(cin, s1); getline(cin, s2);
//         set<string> a = convert(s1);
//         set<string> b = convert(s2);
//         for(string x : a) {
//             if(b.find(x) == b.end()) {
//                 cout << x << " ";
//             }
//         }
//         cout << endl;        
//     }
//     return 0;
// }// hieu cua 2 tap tu
