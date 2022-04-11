#include <bits/stdc++.h>
using namespace std;

long long getMax(long long a) {
    long long res = 0, exp = 1;
    while(a > 0) {
        long long tmp = a % 10;
        if(tmp == 5)
            tmp = 6;
        res = res + tmp * exp;
        exp *= 10;
        a /= 10;
    }
    return res;
}

long long getMin(long long a) {
    long long res = 0, exp = 1;
    while(a > 0) {
        long long tmp = a % 10;
        if(tmp == 6)
            tmp = 5;
        res += tmp * exp;
        exp *= 10;
        a /= 10;
    }
    return res;
}

int main() {
    long long a, b;
    cin >> a >> b;
    cout << getMin(a) + getMin(b) << " " << getMax(a) + getMax(b);

    return 0;
}
