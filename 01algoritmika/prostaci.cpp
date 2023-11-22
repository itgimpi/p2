#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, d = 2;
    cin >> n;
    while(d*d <= n) {
        if(n % d == 0) {
            n /= d;
            cout << d << ' ';
        }
        else {
            d++;
        }
    }
    if(n > 1) {
        cout << n << ' ';
    }
    return 0;
}