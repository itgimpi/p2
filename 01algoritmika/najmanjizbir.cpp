#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, a, zbir = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> a;
        if(a > zbir + 1) {
            cout << zbir + 1 << endl;
            return 0; // kraj programa
        }
        zbir += a;
    }
    return 0;
}