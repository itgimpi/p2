#include<bits/stdc++.h> // ZC rek
using namespace std;

int fakt( int n ) {
    if ( n == 0 ) return 1;
    return n * fakt(n-1); }  // non-tail rec. " ret. n * f()... "

// i - brojac, n - granica za brojac, res - result, resenje...   
int f2( int i, int n, int res ){ 
    if ( i > n ) return res; // BC
    return f2( i + 1, n, res * i ); }  // tail rec. ret. f2(...)

int f1( int n ){
    return f2(1, n, 1); // 3 argumenta
}

int main() {
    int n; cin >> n;

    cout << fakt(n) << '\n'; 
    cout << f1(n) << '\n'; 


    return 0; }