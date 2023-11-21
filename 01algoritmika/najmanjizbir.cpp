#include <bits/stdc++.h>
using namespace std;

int main() {
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