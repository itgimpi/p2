#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
// Br. komb. (bez pon.) rek.

ull komb( int n, int k ){
    if ( k == 0 ) return 1; // BC
    if ( n == k ) return 1;
    // rec.
    return  komb(n-1, k-1) // uklj. 
        +   komb(n-1, k);// isklj.
}

int main() {
    int n, k; cin >> n >> k;
    cout << komb(n, k);
    return 0; }
