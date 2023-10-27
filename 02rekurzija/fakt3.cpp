#include<bits/stdc++.h> // ZC rek
using namespace std;

int fakt( int n ) {
    if ( n == 0 ) return 1;
    return n * fakt(n-1); }  // non-tail rec. " ret. n * f()... "

// i - brojac, n - granica za brojac, res - result, resenje...   
int f1( int i, int n, int res ){  // ne mora novi naziv f-je
    if ( i > n ) return res; // BC
    return f1( i + 1, n, res * i ); }  // tail rec. ret. f2(...)

int main() {
    int n; cin >> n;

    cout << fakt(n) << '\n'; 
    cout << f1(1, n, 1) << '\n';  // 3 argumenta + inicijalne vrednosti



    return 0; }