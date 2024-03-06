#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// DP, T(n), M(1) - za sad najbolje
// postoji i log(n) :)
ull fib(int n){
    ull fpp = 1; // pre prethodnog
    ull fp = 1; // prethodni
    for (int i = 2; i <= n; i++) { // resi od 2 do n
        ull tmp = fpp + fp; // i-ti fib.
        fpp = fp;
        fp = tmp; }
    return fp; }

int main() {
    int n; cin >> n;
    vector<ull>dp(n+1); // vektor za resenja
    cout << fib(n);
    return 0; }
