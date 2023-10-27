#include<bits/stdc++.h> // ZC rek
using namespace std;

int fakt( int n ) {
    if ( n == 0 ) return 1;
    return n * fakt(n-1); }  // non-tail rec. " ret. n * f()... "

// obrnuta logika u odnosu na preth. primer
// i je brojac, n je granica za brojac, res je resenje, rezultat
int f2( int i, int n, int res){ // 3 arg, omogucavaju repnu rek.
    if ( i <= n ) return f2( i + 1, n, res * i); // repna rekurzija
    return res;  // BC
}

int f1( int n ){ // f1 ima 1 arg.
    return f2( 1, n, 1); } // poziva f2 i postavlja pocetne vrednosti

int main() {
    int n; cin >> n;

    cout << fakt(n) << '\n'; 
    cout << f1(n) << '\n'; 




    return 0; }